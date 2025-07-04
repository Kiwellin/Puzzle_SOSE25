// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyDamageableActor.generated.h"

UCLASS()
class PUZZLE_SOSE25_API AMyDamageableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDamageableActor();

	UPROPERTY(VisibleAnywhere)
	float MaxHealth = 100;

	UPROPERTY()
	float CurrentHealth;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void GetHealthPercentage();

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float DamageAmount);

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();



};
