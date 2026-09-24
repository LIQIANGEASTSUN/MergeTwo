namespace Code.GameLogic.GameEvents;

public class MysteryMachineCurrencyItemChainSource : IConfigItemSource<MysteryMachineCurrencyItemChainInfo, MysteryMachineCurrencyItemChainId>, IGameConfigSourceItem<MysteryMachineCurrencyItemChainId, MysteryMachineCurrencyItemChainInfo>, IHasGameConfigKey<MysteryMachineCurrencyItemChainId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineCurrencyItemChainId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<MetaRef`1<MysteryMachineCurrencyItemInfo>> <Items>k__BackingField; //Field offset: 0x20

	public private override MysteryMachineCurrencyItemChainId ConfigKey
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

	private List<MetaRef`1<MysteryMachineCurrencyItemInfo>> Items
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineCurrencyItemChainSource() { }

	[CompilerGenerated]
	public override MysteryMachineCurrencyItemChainId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<MetaRef`1<MysteryMachineCurrencyItemInfo>> get_Items() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineCurrencyItemChainId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Items(List<MetaRef`1<MysteryMachineCurrencyItemInfo>> value) { }

	public override MysteryMachineCurrencyItemChainInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

