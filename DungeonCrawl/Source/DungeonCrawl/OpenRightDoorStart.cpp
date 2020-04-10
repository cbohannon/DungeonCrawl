// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenRightDoorStart.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenRightDoorStart::UOpenRightDoorStart()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UOpenRightDoorStart::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UOpenRightDoorStart::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetActorRotation().ToString());
	UE_LOG(LogTemp, Warning, TEXT("Right yaw is: %f"), GetOwner()->GetActorRotation().Yaw);

	float CurrentYaw = GetOwner()->GetActorRotation().Yaw;
	FRotator OpenDoor{ 0.f, TargetYaw, 0.f };
	OpenDoor.Yaw = FMath::FInterpTo(CurrentYaw, TargetYaw, DeltaTime, 2.0f);
	GetOwner()->SetActorRotation(OpenDoor);
}

