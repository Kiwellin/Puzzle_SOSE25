// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCppActor.h"

// Sets default values
AMyCppActor::AMyCppActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCppActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCppActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyCppActor::MyFunction()
{
	
}

void AMyCppActor::BlueprintCalable()
{
}

float AMyCppActor::Blueprintpure()
{
	
	return 0.0f;
}





