// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldMedia.generated.h"

class UMediaSoundComponent;
class UMediaPlayer;
class UMediaSource;

UCLASS()
class AIRELAXING_API AWorldMedia : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldMedia();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sound")
	UMediaSoundComponent* MediaSoundComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
	UMediaPlayer* MediaPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
	UMediaSource* MediaSource;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
