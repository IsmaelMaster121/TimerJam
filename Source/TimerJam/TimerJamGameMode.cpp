// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimerJamGameMode.h"
#include "TimerJamPlayerController.h"

ATimerJamGameMode::ATimerJamGameMode()
{
	PlayerControllerClass = ATimerJamPlayerController::StaticClass();
}
