// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PostArcana : ModuleRules
{
	public PostArcana(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayTasks", "AIModule", "NavigationSystem", "UMG" });
	}
}
