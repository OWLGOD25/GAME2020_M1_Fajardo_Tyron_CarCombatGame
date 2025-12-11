// SlowHazardZone.h

#pragma once

#include "CoreMinimal.h"
#include "HazardZone.h"
#include "SlowHazardZone.generated.h"

class UPrimitiveComponent;

UCLASS()
class CARGAMEPROJECT_API ASlowHazardZone : public AHazardZone
{
    GENERATED_BODY()

public:
    ASlowHazardZone();

protected:
    // How much extra damping to add (bigger = more resistance, slower car)
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Slow Hazard")
    float ExtraLinearDamping;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Slow Hazard")
    float ExtraAngularDamping;

    // Store original damping so we can restore when leaving
    struct FDampingBackup
    {
        float LinearDamping;
        float AngularDamping;
    };

    // Key: root primitive component of the actor
    TMap<TWeakObjectPtr<UPrimitiveComponent>, FDampingBackup> OriginalDamping;

    virtual void ApplyEffectToActor(AActor* OtherActor) override;
    virtual void RemoveEffectFromActor(AActor* OtherActor) override;
};
