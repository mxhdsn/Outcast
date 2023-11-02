// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "NavigationSystem.h"
#include "BP_PumpkinEnemy.generated.h"

UCLASS()
class HORROREXPERIMENT_API ABP_PumpkinEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABP_PumpkinEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite)
		float WalkSpeed = 10.0f;
	UPROPERTY()
		class AAIC_EnemyAI* EnemyAIController;

	UFUNCTION()
		void MoveToPlayer();
};
