// SlipperyHazardZone.cpp

#include "SlipperyHazardZone.h"
#include "Components/PrimitiveComponent.h"

ASlipperyHazardZone::ASlipperyHazardZone()
{
    // "Ice" defaults – tune in BP
    TargetLinearDamping = 0.2f;
    TargetAngularDamping = 0.2f;
}

void ASlipperyHazardZone::ApplyEffectToActor(AActor* OtherActor)
{
    if (!OtherActor)
    {
        return;
    }

    UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
    if (!RootComp || !RootComp->IsSimulatingPhysics())
    {
        return;
    }

    if (!OriginalDamping.Contains(RootComp))
    {
        FDampingBackup Backup;
        Backup.LinearDamping = RootComp->GetLinearDamping();
        Backup.AngularDamping = RootComp->GetAngularDamping();
        OriginalDamping.Add(RootComp, Backup);
    }

    RootComp->SetLinearDamping(TargetLinearDamping);
    RootComp->SetAngularDamping(TargetAngularDamping);
}

void ASlipperyHazardZone::RemoveEffectFromActor(AActor* OtherActor)
{
    if (!OtherActor)
    {
        return;
    }

    UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
    if (!RootComp)
    {
        return;
    }

    if (FDampingBackup* Backup = OriginalDamping.Find(RootComp))
    {
        RootComp->SetLinearDamping(Backup->LinearDamping);
        RootComp->SetAngularDamping(Backup->AngularDamping);
        OriginalDamping.Remove(RootComp);
    }
}
