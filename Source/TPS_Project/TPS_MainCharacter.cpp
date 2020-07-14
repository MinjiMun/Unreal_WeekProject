// Fill out your copyright notice in the Description page of Project Settings.


#include "TPS_MainCharacter.h"

// Sets default values
ATPS_MainCharacter::ATPS_MainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATPS_MainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATPS_MainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATPS_MainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

