// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimerJamProyectGameMode.h"
#include "TimerJamProyectPlayerController.h"

ATimerJamProyectGameMode::ATimerJamProyectGameMode()
{
	PlayerControllerClass = ATimerJamProyectPlayerController::StaticClass();
}
