
// HazardZone.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HazardZone.generated.h"

class UCapsuleComponent;

UCLASS(Abstract) // Abstract: we’ll use child classes for specific hazards
class CARGAMEPROJECT_API AHazardZone : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHazardZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The collision volume for the hazard (cylinder-like)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hazard")
	UCapsuleComponent* HazardCapsule;

	// ====== Virtual functions child classes will override ======
	// Called when an actor enters the hazard
	virtual void ApplyEffectToActor(AActor* OtherActor);

	// Called when an actor leaves the hazard
	virtual void RemoveEffectFromActor(AActor* OtherActor);

	// ====== Overlap callbacks ======
	UFUNCTION()
	void OnHazardBeginOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	UFUNCTION()
	void OnHazardEndOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex
	);

public:
	// Called every frame (you can disable tick in ctor if not needed)
	virtual void Tick(float DeltaTime) override;
};
