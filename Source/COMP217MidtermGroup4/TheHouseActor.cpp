// Fill out your copyright notice in the Description page of Project Settings.


#include "TheHouseActor.h"

// Sets default values
ATheHouseActor::ATheHouseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATheHouseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATheHouseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

