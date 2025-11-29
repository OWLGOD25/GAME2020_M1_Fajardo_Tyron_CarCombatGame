// TurretBullet.cpp



#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TurretBulletClass.h"

ATurretBullet::ATurretBullet()
{
    PrimaryActorTick.bCanEverTick = false;

    // Root collision
    CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
    CollisionComp->InitSphereRadius(15.f);
    CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CollisionComp->SetCollisionProfileName(TEXT("BlockAllDynamic"));
    CollisionComp->SetNotifyRigidBodyCollision(true); // so OnHit fires
    RootComponent = CollisionComp;

    // Visual mesh (optional)
    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    MeshComp->SetupAttachment(RootComponent);
    MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Projectile movement
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->UpdatedComponent = CollisionComp;
    ProjectileMovement->InitialSpeed = 3000.f;
    ProjectileMovement->MaxSpeed = 3000.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->ProjectileGravityScale = 0.f;
    ProjectileMovement->bShouldBounce = false;

    // Bind hit event
    CollisionComp->OnComponentHit.AddDynamic(this, &ATurretBullet::OnHit);
}

void ATurretBullet::BeginPlay()
{
    Super::BeginPlay();

    // Auto destroy after some time
    SetLifeSpan(LifeSeconds);
}

void ATurretBullet::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, FVector NormalImpulse,
    const FHitResult& Hit)
{
    // Don’t damage ourselves or null
    if (!OtherActor || OtherActor == this)
    {
        return;
    }

    // Apply UE damage so your Event AnyDamage fires on the car
    UGameplayStatics::ApplyDamage(
        OtherActor,
        Damage,
        GetInstigatorController(),
        this,
        nullptr // DamageType
    );

    Destroy();
}
