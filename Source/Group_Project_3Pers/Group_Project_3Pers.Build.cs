// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Group_Project_3Pers : ModuleRules
{
	public Group_Project_3Pers(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
