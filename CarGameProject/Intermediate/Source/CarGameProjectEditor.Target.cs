using UnrealBuildTool;

public class CarGameProjectEditorTarget : TargetRules
{
	public CarGameProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CarGameProject");
	}
}
