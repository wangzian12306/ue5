// Copyright Epic Games, Inc. All Rights Reserved.

#include "WZAGameMode.h"
#include "WZACharacter.h"
#include "UObject/ConstructorHelpers.h"

AWZAGameMode::AWZAGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
