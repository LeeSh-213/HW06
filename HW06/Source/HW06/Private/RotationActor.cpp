// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationActor.h"

ARotationActor::ARotationActor()
{
	PrimaryActorTick.bCanEverTick = true;

	RotationSpeed = 90.0f;

}


void ARotationActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator Rotation = FRotator(0.f, RotationSpeed * DeltaTime, 0.f);
	AddActorLocalRotation(Rotation);
}
