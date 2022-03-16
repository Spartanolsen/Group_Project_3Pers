// Copyright Epic Games, Inc. All Rights Reserved.

#include "Group_Project_3PersGameMode.h"
#include "Group_Project_3PersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGroup_Project_3PersGameMode::AGroup_Project_3PersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
