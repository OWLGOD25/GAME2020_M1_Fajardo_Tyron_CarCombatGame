// WindHazardZone.h

#pragma once

#include "CoreMinimal.h"
#include "HazardZone.h"
#include "WindHazardZone.generated.h"

class UPrimitiveComponent;

UCLASS()
class CARGAMEPROJECT_API AWindHazardZone : public AHazardZone
{
    GENERATED_BODY()

public:
    AWindHazardZone();

protected:
    // Base wind direction (will be normalized)
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wind Hazard")
    FVector WindDirection;

    // Force magnitude
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wind Hazard")
    float WindStrength;

    // If true, adds some random yaw variation every tick
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wind Hazard")
    bool bRandomizeDirection;

    // Components currently inside the wind zone
    UPROPERTY()
    TArray<TWeakObjectPtr<UPrimitiveComponent>> OverlappingComponents;

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    virtual void ApplyEffectToActor(AActor* OtherActor) override;
    virtual void RemoveEffectFromActor(AActor* OtherActor) override;
};
