// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenLeftDoorStart.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONCRAWL_API UOpenLeftDoorStart : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenLeftDoorStart();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OpenDoor(float DeltaTime);
	void CloseDoor(float DeltaTime);

private:
	float InitialYaw {};
	float CurrentYaw {};
	float DoorLastOpened{ 0.0f };

	UPROPERTY(EditAnywhere)
	float OpenAngle { 90.0f };

	UPROPERTY(EditAnywhere)
	float DoorCloseDelay{ 0.0f };

	UPROPERTY(EditAnywhere)
	float DoorOpenSpeed{ 1.0f };

	UPROPERTY(EditAnywhere)
	float DoorCloseSpeed{ 3.0f };

	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate { nullptr };

	UPROPERTY(EditAnywhere)
	AActor* TheActorThatOpens { nullptr };
};