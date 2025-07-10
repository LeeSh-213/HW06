// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseActor.h"
#include "RotationActor.generated.h"

/**
 * 
 */
UCLASS()
class HW06_API ARotationActor : public ABaseActor
{
	GENERATED_BODY()


public:
	ARotationActor();


protected:	

	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	float RotationSpeed;
	
};
