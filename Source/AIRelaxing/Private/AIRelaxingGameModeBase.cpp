// Copyright Epic Games, Inc. All Rights Reserved.


#include "AIRelaxingGameModeBase.h"
#include "Sound/AudioVolume.h"

void AAIRelaxingGameModeBase::StartPlay()
{
	Super::StartPlay();

	AudioVolume = GetWorld()->SpawnActor<AAudioVolume>();
}
