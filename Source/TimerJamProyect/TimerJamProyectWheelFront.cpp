// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimerJamProyectWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UTimerJamProyectWheelFront::UTimerJamProyectWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}