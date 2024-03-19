// Four Tale Test ,All Rights Reservered

using UnrealBuildTool;
using System.Collections.Generic;

public class FourTaleTestTarget : TargetRules
{
	public FourTaleTestTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "FourTaleTest" } );
	}
}
