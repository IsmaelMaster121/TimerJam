// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimerJamWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UTimerJamWheelFront::UTimerJamWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}