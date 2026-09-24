namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class MysteryMachineCurrencyItemInfo : IGameConfigData<MysteryMachineCurrencyItemId>, IGameConfigData, IHasGameConfigKey<MysteryMachineCurrencyItemId>
{
	[CompilerGenerated]
	private MysteryMachineCurrencyItemId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Currencies <Currency>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private int <DisplayAmount>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x24

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MysteryMachineCurrencyItemId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private Currencies Currency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int DisplayAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineCurrencyItemInfo() { }

	public MysteryMachineCurrencyItemInfo(MysteryMachineCurrencyItemId configKey, Currencies currency, int amount, int displayAmount, int experimentPriority) { }

	[CompilerGenerated]
	public int get_Amount() { }

	[CompilerGenerated]
	public override MysteryMachineCurrencyItemId get_ConfigKey() { }

	[CompilerGenerated]
	public Currencies get_Currency() { }

	[CompilerGenerated]
	public int get_DisplayAmount() { }

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
	private void set_ExperimentPriority(int value) { }

}

