// Copyright Epic Games, Inc. All Rights Reserved.

#include "MGP_2425GameMode.h"
#include "MGP_2425Character.h"
#include "UObject/ConstructorHelpers.h"

AMGP_2425GameMode::AMGP_2425GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
