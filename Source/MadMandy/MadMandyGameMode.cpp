// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MadMandy.h"
#include "MadMandyGameMode.h"
#include "MadMandyCharacter.h"

AMadMandyGameMode::AMadMandyGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
