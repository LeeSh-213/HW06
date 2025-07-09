// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementActor.h"

AMovementActor::AMovementActor()
{
	PrimaryActorTick.bCanEverTick = true;

	MoveSpeed = 100.0f;
	MaxRange = 600.0f;
	bMovingForward = true;
}

void AMovementActor::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

void AMovementActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();


	float Diretction = bMovingForward ? 1.f : -1.f; // 이동 방향 결정
	float DeltaMove = MoveSpeed * DeltaTime;

	CurrentLocation.X += Diretction * DeltaMove;
	SetActorLocation(CurrentLocation);

	float Travelled = FVector::Dist(StartLocation, CurrentLocation);
	if ( Travelled >= MaxRange)
	{
		bMovingForward = !bMovingForward;
	}


}