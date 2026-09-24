namespace GameLogic.Player.Items.OverrideSpawnChance;

[MetaSerializable]
public class OverrideSpawnChanceFeatures : IOverrideSpawnChanceFeatures
{
	public static readonly OverrideSpawnChanceFeatures NoOverrideSpawnChance; //Field offset: 0x0
	[CompilerGenerated]
	private List<OverrideSpawnChance> <OverrideSpawnChances>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override List<OverrideSpawnChance> OverrideSpawnChances
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static OverrideSpawnChanceFeatures() { }

	public OverrideSpawnChanceFeatures(List<OverrideSpawnChance> overrideSpawnChances) { }

	private OverrideSpawnChanceFeatures() { }

	[CompilerGenerated]
	public override List<OverrideSpawnChance> get_OverrideSpawnChances() { }

	[CompilerGenerated]
	private void set_OverrideSpawnChances(List<OverrideSpawnChance> value) { }

}

