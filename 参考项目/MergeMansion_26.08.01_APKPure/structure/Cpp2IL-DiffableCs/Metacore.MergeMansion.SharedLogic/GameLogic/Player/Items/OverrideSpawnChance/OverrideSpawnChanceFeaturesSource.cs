namespace GameLogic.Player.Items.OverrideSpawnChance;

public class OverrideSpawnChanceFeaturesSource : IItemConfigPart<OverrideSpawnChanceFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	[CompilerGenerated]
	private string <ItemKey>k__BackingField; //Field offset: 0x10
	private List<String> TriggerType; //Field offset: 0x18
	private List<String> TriggerId; //Field offset: 0x20
	private List<String> TriggerAmount; //Field offset: 0x28
	private List<String> TriggerAux0; //Field offset: 0x30
	private List<String> TargetBoard; //Field offset: 0x38
	private List<String> ChanceToSpawn; //Field offset: 0x40
	private List<String> EndType; //Field offset: 0x48
	private List<String> EndId; //Field offset: 0x50
	private List<String> EndAmount; //Field offset: 0x58
	private List<String> EndAux0; //Field offset: 0x60

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	private string ItemKey
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string ItemType
	{
		private get { } //Length: 8
	}

	public OverrideSpawnChanceFeaturesSource() { }

	public override string get_ConfigKey() { }

	[CompilerGenerated]
	private string get_ItemKey() { }

	private string get_ItemType() { }

	[CompilerGenerated]
	private void set_ItemKey(string value) { }

	public override OverrideSpawnChanceFeatures ToConfigData(IProducerFactory producerFactory) { }

}

