// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class myfirst : ModuleRules
{
	public myfirst(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
