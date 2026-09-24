using Google.Protobuf.Reflection;

namespace fat.rawdata
{
	public enum SkillType
	{
		[OriginalName("SkillTypeNone")]
		None = 0,
		[OriginalName("SkillTypeNoCD")]
		NoCd = 1,
		[OriginalName("SkillTypeInstantOutput")]
		InstantOutput = 2,
		[OriginalName("SkillTypeDegrade")]
		Degrade = 3,
		[OriginalName("SkillTypeTimeSkip")]
		TimeSkip = 4,
		[OriginalName("SkillDustClear")]
		SkillDustClear = 5,
		[OriginalName("SkillTypeTesla")]
		Tesla = 6,
		[OriginalName("SkillTypeUpgrade")]
		Upgrade = 7,
		[OriginalName("SkillTypeSandGlass")]
		SandGlass = 8,
		[OriginalName("SkillTypeLightbulb")]
		Lightbulb = 9
	}
}
