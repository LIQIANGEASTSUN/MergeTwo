namespace GameLogic.Player.Items.Sink;

public class TagRewardsSource : IConfigItemSource<TagRewardsInfo, String>, IGameConfigSourceItem<String, TagRewardsInfo>, IHasGameConfigKey<String>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <ConfigKey>k__BackingField; //Field offset: 0x18
	public int TotalPoints; //Field offset: 0x20
	public string RewardTagName; //Field offset: 0x28
	public List<String> Item; //Field offset: 0x30
	public List<Int32> Weight; //Field offset: 0x38

	public private override string ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public TagRewardsSource() { }

	[CompilerGenerated]
	public override string get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	private static string GetItemTypeForProducer(string configKey) { }

	[CompilerGenerated]
	private void set_ConfigKey(string value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	private static bool ShouldAddArtificialLevelForProducerItemId(string configKey) { }

	public override TagRewardsInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

