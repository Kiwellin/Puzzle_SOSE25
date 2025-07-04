// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDamageableActor.h"

// Sets default values
AMyDamageableActor::AMyDamageableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyDamageableActor::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
	
}

// Called every frame
void AMyDamageableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyDamageableActor::GetHealthPercentage()
{

	int HealthPercentage = (MaxHealth/100) * (CurrentHealth);

	UE_LOG(LogTemp, Log, TEXT("CurrentHealth: %d %%"), HealthPercentage );

}

void AMyDamageableActor::TakeDamage(float DamageAmount)
{
	//float DamageAmount;
	CurrentHealth = CurrentHealth - DamageAmount;
	if (CurrentHealth <= 0)
	{
		OnDeath();
	}

	GetHealthPercentage();

	


}

