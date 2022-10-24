// Copyright Epic Games, Inc. All Rights Reserved.

#include "BrightBrawlGameMode.h"
#include "BrightBrawlCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABrightBrawlGameMode::ABrightBrawlGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
