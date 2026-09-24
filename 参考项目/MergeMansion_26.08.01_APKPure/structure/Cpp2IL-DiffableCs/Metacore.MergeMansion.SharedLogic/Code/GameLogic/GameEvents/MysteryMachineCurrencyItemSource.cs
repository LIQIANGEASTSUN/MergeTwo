namespace Code.GameLogic.GameEvents;

public class MysteryMachineCurrencyItemSource : IConfigItemSource<MysteryMachineCurrencyItemInfo, MysteryMachineCurrencyItemId>, IGameConfigSourceItem<MysteryMachineCurrencyItemId, MysteryMachineCurrencyItemInfo>, IHasGameConfigKey<MysteryMachineCurrencyItemId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineCurrencyItemId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Currencies <Currency>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private int <DisplayAmount>k__BackingField; //Field offset: 0x28

	private int Amount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private override MysteryMachineCurrencyItemId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Currencies Currency
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int DisplayAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
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

	public MysteryMachineCurrencyItemSource() { }

	[CompilerGenerated]
	private int get_Amount() { }

	[CompilerGenerated]
	public override MysteryMachineCurrencyItemId get_ConfigKey() { }

	[CompilerGenerated]
	private Currencies get_Currency() { }

	[CompilerGenerated]
	private int get_DisplayAmount() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineCurrencyItemId value) { }

	[CompilerGenerated]
	private void set_Currency(Currencies value) { }

	[CompilerGenerated]
	private void set_DisplayAmount(int value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	public override MysteryMachineCurrencyItemInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

