// Four Tale Test ,All Rights Reservered

using UnrealBuildTool;
using System.Collections.Generic;

public class FourTaleTestEditorTarget : TargetRules
{
	public FourTaleTestEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "FourTaleTest" } );
	}
}
