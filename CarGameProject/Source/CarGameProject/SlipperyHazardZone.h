// SlipperyHazardZone.h

#pragma once

#include "CoreMinimal.h"
#include "HazardZone.h"
#include "SlipperyHazardZone.generated.h"

class UPrimitiveComponent;

UCLASS()
class CARGAMEPROJECT_API ASlipperyHazardZone : public AHazardZone
{
    GENERATED_BODY()

public:
    ASlipperyHazardZone();

protected:
    // Lower damping = more sliding
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Slippery Hazard")
    float TargetLinearDamping;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Slippery Hazard")
    float TargetAngularDamping;

    struct FDampingBackup
    {
        float LinearDamping;
        float AngularDamping;
    };

    TMap<TWeakObjectPtr<UPrimitiveComponent>, FDampingBackup> OriginalDamping;

    virtual void ApplyEffectToActor(AActor* OtherActor) override;
    virtual void RemoveEffectFromActor(AActor* OtherActor) override;
};
