// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TimerJamPawn.h"
#include "TimerJamSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class TIMERJAM_API ATimerJamSportsCar : public ATimerJamPawn
{
	GENERATED_BODY()
	
public:

	ATimerJamSportsCar();
};
