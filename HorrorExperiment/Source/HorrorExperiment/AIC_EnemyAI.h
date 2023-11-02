// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIC_EnemyAI.generated.h"

/**
 * 
 */
UCLASS()
class HORROREXPERIMENT_API AAIC_EnemyAI : public AAIController
{
	GENERATED_BODY()

public:
    void BeginPlay() override;

private:

    class UNavigationSystemV1* NavArea;

};