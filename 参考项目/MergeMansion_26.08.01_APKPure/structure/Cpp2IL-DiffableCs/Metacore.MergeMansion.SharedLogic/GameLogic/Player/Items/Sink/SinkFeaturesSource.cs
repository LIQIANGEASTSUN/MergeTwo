namespace GameLogic.Player.Items.Sink;

public class SinkFeaturesSource : IItemConfigPart<SinkFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public string FactoryType; //Field offset: 0x18
	public List<String> Scores; //Field offset: 0x20
	public List<String> Reward; //Field offset: 0x28
	public string RewardTag; //Field offset: 0x30
	public int FinalScore; //Field offset: 0x38
	[CompilerGenerated]
	private bool <HideProgressBar>k__BackingField; //Field offset: 0x3C
	[CompilerGenerated]
	private bool <HideUndiscoveredItemsInHints>k__BackingField; //Field offset: 0x3D
	[CompilerGenerated]
	private bool <AllowReverseSinking>k__BackingField; //Field offset: 0x3E

	private bool AllowReverseSinking
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	private bool HideProgressBar
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool HideUndiscoveredItemsInHints
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public SinkFeaturesSource() { }

	[CompilerGenerated]
	private bool get_AllowReverseSinking() { }

	public override string get_ConfigKey() { }

	[CompilerGenerated]
	private bool get_HideProgressBar() { }

	[CompilerGenerated]
	private bool get_HideUndiscoveredItemsInHints() { }

	public string get_ItemType() { }

	[CompilerGenerated]
	private void set_AllowReverseSinking(bool value) { }

	[CompilerGenerated]
	private void set_HideProgressBar(bool value) { }

	[CompilerGenerated]
	private void set_HideUndiscoveredItemsInHints(bool value) { }

	public override SinkFeatures ToConfigData(IProducerFactory producerFactory) { }

}

