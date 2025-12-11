// WindHazardZone.cpp

#include "WindHazardZone.h"
#include "Components/PrimitiveComponent.h"

AWindHazardZone::AWindHazardZone()
{
    // Need tick for continuous wind
    PrimaryActorTick.bCanEverTick = true;

    // Default values (you can change in BP)
    WindDirection = FVector(1.f, 0.f, 0.f); // +X
    WindStrength = 50000.f;
    bRandomizeDirection = true;
}

void AWindHazardZone::BeginPlay()
{
    Super::BeginPlay();
}

void AWindHazardZone::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector FinalDirection = WindDirection.GetSafeNormal();

    if (bRandomizeDirection)
    {
        const float RandYaw = FMath::FRandRange(-45.f, 45.f);
        const FRotator Rot(0.f, RandYaw, 0.f);
        FinalDirection = Rot.RotateVector(FinalDirection);
    }

    const FVector Force = FinalDirection * WindStrength;

    // Apply force to all overlapping components
    for (int32 i = OverlappingComponents.Num() - 1; i >= 0; --i)
    {
        UPrimitiveComponent* Comp = OverlappingComponents[i].Get();
        if (!Comp)
        {
            OverlappingComponents.RemoveAt(i);
            continue;
        }

        if (Comp->IsSimulatingPhysics())
        {
            Comp->AddForce(Force);
        }
        else
        {
            // For non-physics actors, you could move them directly if you want:
            // if (AActor* Owner = Comp->GetOwner())
            // {
            //     Owner->AddActorWorldOffset(FinalDirection * (WindStrength * DeltaTime * 0.001f));
            // }
        }
    }
}

void AWindHazardZone::ApplyEffectToActor(AActor* OtherActor)
{
    if (!OtherActor)
    {
        return;
    }

    UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
    if (RootComp)
    {
        OverlappingComponents.AddUnique(RootComp);
    }
}

void AWindHazardZone::RemoveEffectFromActor(AActor* OtherActor)
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

    OverlappingComponents.Remove(RootComp);
}
