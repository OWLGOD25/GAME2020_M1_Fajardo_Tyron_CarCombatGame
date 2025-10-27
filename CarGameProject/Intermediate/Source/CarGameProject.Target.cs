using UnrealBuildTool;

public class CarGameProjectTarget : TargetRules
{
	public CarGameProjectTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("CarGameProject");
	}
}
