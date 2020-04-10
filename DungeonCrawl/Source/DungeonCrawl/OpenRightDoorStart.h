// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenRightDoorStart.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONCRAWL_API UOpenRightDoorStart : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenRightDoorStart();

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
	
	UPROPERTY(EditAnywhere)
	float TargetYaw { -90.0f };

	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate { nullptr };

	UPROPERTY(EditAnywhere)
	AActor* TheActorThatOpens { nullptr	};
};