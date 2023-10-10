// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldMedia.h"
#include "MediaSoundComponent.h"
#include "MediaPlayer.h"
#include "MediaSource.h"

// Sets default values
AWorldMedia::AWorldMedia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MediaSoundComponent = CreateDefaultSubobject<UMediaSoundComponent>(FName(TEXT("MediaSoundComponent")));
	MediaSoundComponent->SetMediaPlayer(MediaPlayer);
}

// Called when the game starts or when spawned
void AWorldMedia::BeginPlay()
{
	Super::BeginPlay();
	
	MediaPlayer->SetLooping(true);
	MediaPlayer->OpenSource(MediaSource);
	MediaPlayer->Play();
}

// Called every frame
void AWorldMedia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

