// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimerJamWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UTimerJamWheelRear::UTimerJamWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}