// TurretBullet.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurretBulletClass.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;

UCLASS()
class CARGAMEPROJECT_API ATurretBullet : public AActor
{
    GENERATED_BODY()

public:
    ATurretBullet();

protected:
    virtual void BeginPlay() override;

    // Called when we hit something
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, FVector NormalImpulse,
        const FHitResult& Hit);

public:
    // Collision root
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USphereComponent* CollisionComp;

    // Visual mesh (optional)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComp;

    // Projectile movement
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
    UProjectileMovementComponent* ProjectileMovement;

    // Damage this bullet does
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float Damage = 10.f;

    // Lifetime before auto-destroy
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float LifeSeconds = 3.f;
};
