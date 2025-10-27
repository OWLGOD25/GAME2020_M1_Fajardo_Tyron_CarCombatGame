using UnrealBuildTool;

public class CarGameProjectServerTarget : TargetRules
{
	public CarGameProjectServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("CarGameProject");
	}
}
