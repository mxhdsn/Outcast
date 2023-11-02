// Fill out your copyright notice in the Description page of Project Settings.


#include "AIC_EnemyAI.h"
#include "NavigationSystem.h"

void AAIC_EnemyAI::BeginPlay() {

	Super::BeginPlay();

	NavArea = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);
};