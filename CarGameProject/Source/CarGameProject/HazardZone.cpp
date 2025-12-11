// Fill out your copyright notice in the Description page of Project Settings.


// HazardZone.cpp

#include "HazardZone.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AHazardZone::AHazardZone()
{
	PrimaryActorTick.bCanEverTick = false; // turn on if a child needs tick

	// Create capsule component and use it as root
	HazardCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HazardCapsule"));
	RootComponent = HazardCapsule;

	// Initial size (edit in BP later if you want)
	HazardCapsule->InitCapsuleSize(200.f, 200.f); // Radius, Half-Height

	// Collision setup: only overlap pawns by default
	HazardCapsule->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HazardCapsule->SetCollisionObjectType(ECC_WorldStatic);
	HazardCapsule->SetCollisionResponseToAllChannels(ECR_Ignore);
	HazardCapsule->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	HazardCapsule->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AHazardZone::BeginPlay()
{
	Super::BeginPlay();

	if (HazardCapsule)
	{
		HazardCapsule->OnComponentBeginOverlap.AddDynamic(this, &AHazardZone::OnHazardBeginOverlap);
		HazardCapsule->OnComponentEndOverlap.AddDynamic(this, &AHazardZone::OnHazardEndOverlap);
	}
}

// Called every frame (currently unused)
void AHazardZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// ====== Overlap events ======

void AHazardZone::OnHazardBeginOverlap(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
	if (OtherActor && OtherActor != this)
	{
		ApplyEffectToActor(OtherActor);
	}
}

void AHazardZone::OnHazardEndOverlap(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex
)
{
	if (OtherActor && OtherActor != this)
	{
		RemoveEffectFromActor(OtherActor);
	}
}

// Default implementations – child classes override these

void AHazardZone::ApplyEffectToActor(AActor* OtherActor)
{
	// Default: do nothing
	// Example for debugging:
	// UE_LOG(LogTemp, Log, TEXT("Actor %s entered hazard zone %s"),
	//     *OtherActor->GetName(), *GetName());
}

void AHazardZone::RemoveEffectFromActor(AActor* OtherActor)
{
	// Default: do nothing
	// UE_LOG(LogTemp, Log, TEXT("Actor %s left hazard zone %s"),
	//     *OtherActor->GetName(), *GetName());
}

