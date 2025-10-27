using UnrealBuildTool;

public class CarGameProjectClientTarget : TargetRules
{
	public CarGameProjectClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("CarGameProject");
	}
}
