// Copyright Epic Games, Inc. All Rights Reserved.

#include "myfirstGameMode.h"
#include "myfirstCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmyfirstGameMode::AmyfirstGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
