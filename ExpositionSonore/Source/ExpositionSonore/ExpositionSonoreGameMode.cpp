// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExpositionSonoreGameMode.h"
#include "ExpositionSonoreCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExpositionSonoreGameMode::AExpositionSonoreGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
