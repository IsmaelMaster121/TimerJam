#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MyGameStateBasePrueba123.generated.h"

UCLASS()
class TIMERJAMPROYECT_API AMyGameStateBasePrueba123 : public AGameStateBase
{
	GENERATED_BODY()

public:
	AMyGameStateBasePrueba123();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Timer")
	void StartTimer();
	UFUNCTION(BlueprintCallable, Category = "Timer")
	void StopTimer();
	UFUNCTION(BlueprintCallable, Category = "Timer")
	void ResetTimer();
	UFUNCTION(BlueprintCallable, Category = "Timer")
	float GetElapsedTime() const;

private:

	float TimeElapsed;
	bool bIsTimerRunning;

};
