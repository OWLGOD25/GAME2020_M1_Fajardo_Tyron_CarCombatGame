// SlowHazardZone.cpp

#include "SlowHazardZone.h"
#include "Components/PrimitiveComponent.h"

ASlowHazardZone::ASlowHazardZone()
{
    // Default "mud" feeling – tune in BP
    ExtraLinearDamping = 4.0f;
    ExtraAngularDamping = 4.0f;
}

void ASlowHazardZone::ApplyEffectToActor(AActor* OtherActor)
{
    if (!OtherActor)
    {
        return;
    }

    UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
    if (!RootComp || !RootComp->IsSimulatingPhysics())
    {
        // Vehicle template usually has a simulating root, but safety check
        return;
    }

    if (!OriginalDamping.Contains(RootComp))
    {
        FDampingBackup Backup;
        Backup.LinearDamping = RootComp->GetLinearDamping();
        Backup.AngularDamping = RootComp->GetAngularDamping();
        OriginalDamping.Add(RootComp, Backup);
    }

    RootComp->SetLinearDamping(RootComp->GetLinearDamping() + ExtraLinearDamping);
    RootComp->SetAngularDamping(RootComp->GetAngularDamping() + ExtraAngularDamping);
}

void ASlowHazardZone::RemoveEffectFromActor(AActor* OtherActor)
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
