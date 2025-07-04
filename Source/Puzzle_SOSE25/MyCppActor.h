// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCppActor.generated.h"

UCLASS()
class PUZZLE_SOSE25_API AMyCppActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCppActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int TestInt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString String = "hy";

	UPROPERTY(EditAnywhere)
	bool Condition = false;

	UPROPERTY(EditAnywhere, meta = (EditCondition="Condition"))
	FString Stringy = "HELLOOOO";

	UPROPERTY(EditAnywhere)
	int myInt;

	// if condition is met, message is editable
	UPROPERTY(EditAnywhere, meta = (EditCondition = "myInt > 0"))
		FString Message= "HELLOOOO";




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void MyFunction();

	UFUNCTION(BlueprintCallable)
		void BlueprintCalable();

	UFUNCTION(BlueprintPure)
	float Blueprintpure();

	UFUNCTION(BlueprintImplementableEvent)
	void Eventimplementable();

	UFUNCTION(BlueprintCallable)
	   void TestFunction() ;

};
