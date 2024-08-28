#include "MyGameStateBasePrueba123.h"

AMyGameStateBasePrueba123::AMyGameStateBasePrueba123()
{
	PrimaryActorTick.bCanEverTick = true;
	TimeElapsed = 0.0f;
	bIsTimerRunning = false;
}

void AMyGameStateBasePrueba123::BeginPlay()
{
	Super::BeginPlay();
}

void AMyGameStateBasePrueba123::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsTimerRunning)
	{
		TimeElapsed += DeltaTime;
	}
}

void AMyGameStateBasePrueba123::StartTimer()
{
	bIsTimerRunning = true;
}

void AMyGameStateBasePrueba123::StopTimer()
{
	bIsTimerRunning = false;
}

void AMyGameStateBasePrueba123::ResetTimer()
{
	TimeElapsed = 0.0f;
}

float AMyGameStateBasePrueba123::GetElapsedTime() const
{
	return TimeElapsed;
}