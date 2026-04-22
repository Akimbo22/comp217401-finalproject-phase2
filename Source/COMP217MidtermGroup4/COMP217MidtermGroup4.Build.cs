// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class COMP217MidtermGroup4 : ModuleRules
{
	public COMP217MidtermGroup4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"COMP217MidtermGroup4",
			"COMP217MidtermGroup4/Variant_Platforming",
			"COMP217MidtermGroup4/Variant_Platforming/Animation",
			"COMP217MidtermGroup4/Variant_Combat",
			"COMP217MidtermGroup4/Variant_Combat/AI",
			"COMP217MidtermGroup4/Variant_Combat/Animation",
			"COMP217MidtermGroup4/Variant_Combat/Gameplay",
			"COMP217MidtermGroup4/Variant_Combat/Interfaces",
			"COMP217MidtermGroup4/Variant_Combat/UI",
			"COMP217MidtermGroup4/Variant_SideScrolling",
			"COMP217MidtermGroup4/Variant_SideScrolling/AI",
			"COMP217MidtermGroup4/Variant_SideScrolling/Gameplay",
			"COMP217MidtermGroup4/Variant_SideScrolling/Interfaces",
			"COMP217MidtermGroup4/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
