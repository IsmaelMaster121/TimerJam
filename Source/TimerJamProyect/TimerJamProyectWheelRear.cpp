// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimerJamProyectWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UTimerJamProyectWheelRear::UTimerJamProyectWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}