// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidingPlatform.h"

// Sets default values
ASlidingPlatform::ASlidingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASlidingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASlidingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector CurrentPosition = GetActorLocation();
	// CurrentPosition += PlatformVelocity; 

}

