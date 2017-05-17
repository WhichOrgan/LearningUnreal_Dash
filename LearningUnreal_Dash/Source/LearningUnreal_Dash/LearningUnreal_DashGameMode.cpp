// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LearningUnreal_Dash.h"
#include "LearningUnreal_DashGameMode.h"
#include "LearningUnreal_DashCharacter.h"

ALearningUnreal_DashGameMode::ALearningUnreal_DashGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
