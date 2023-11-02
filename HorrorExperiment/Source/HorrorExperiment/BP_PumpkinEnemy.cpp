// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_PumpkinEnemy.h"
#include "AITypes.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "AIC_EnemyAI.h"

// Sets default values
ABP_PumpkinEnemy::ABP_PumpkinEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABP_PumpkinEnemy::BeginPlay()
{
	Super::BeginPlay();

	AController* Cont = this->GetController();
	EnemyAIController = Cast<AAIC_EnemyAI>(Cont);
}

// Called every frame
void ABP_PumpkinEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveToPlayer();
}

// Called to bind functionality to input
void ABP_PumpkinEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABP_PumpkinEnemy::MoveToPlayer() {
	FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(EnemyAIController, PlayerLocation);
}