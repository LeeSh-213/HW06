// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseActor.h"
#include "MovementActor.generated.h"


UCLASS()
class HW06_API AMovementActor : public ABaseActor
{
	GENERATED_BODY()
	


public:
	AMovementActor();

private:
	FVector StartLocation;
	bool bMovingForward;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MaxRange;
};
