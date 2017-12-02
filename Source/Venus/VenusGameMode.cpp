// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "VenusGameMode.h"
#include "VenusPlayerController.h"
#include "VenusCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVenusGameMode::AVenusGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AVenusPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}