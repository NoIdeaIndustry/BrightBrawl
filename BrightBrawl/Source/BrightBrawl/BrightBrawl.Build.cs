// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BrightBrawl : ModuleRules
{
	public BrightBrawl(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
