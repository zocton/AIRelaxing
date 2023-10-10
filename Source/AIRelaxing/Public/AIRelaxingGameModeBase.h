// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AIRelaxingGameModeBase.generated.h"

class AAudioVolume;

/**
 * 
 */
UCLASS()
class AIRELAXING_API AAIRelaxingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	AAudioVolume* AudioVolume;

	virtual void StartPlay() override;
};
