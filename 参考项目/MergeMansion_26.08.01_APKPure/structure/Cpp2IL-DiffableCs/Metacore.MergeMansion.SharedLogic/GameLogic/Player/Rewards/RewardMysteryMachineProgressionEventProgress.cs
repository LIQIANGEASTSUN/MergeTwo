namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(31)]
public class RewardMysteryMachineProgressionEventProgress : PlayerReward
{
	public static readonly string PoolTag; //Field offset: 0x0
	public static readonly string SkinName; //Field offset: 0x8
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private int <ChainItemIndex>k__BackingField; //Field offset: 0x18

	[MetaFormFieldCustomValidator(typeof(GameLogic.Player.Rewards.RewardAmountValidator`1<System.Int32>))]
	[MetaMember(1, MetaMemberFlags::None (0))]
	public int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int ChainItemIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private static RewardMysteryMachineProgressionEventProgress() { }

	public RewardMysteryMachineProgressionEventProgress() { }

	public RewardMysteryMachineProgressionEventProgress(int amount, int chainItemIndex, CurrencySource source) { }

	public virtual void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public int get_Amount() { }

	[CompilerGenerated]
	public int get_ChainItemIndex() { }

	private static ProgressionEventModel GetActiveProgressionEvent(IPlayer player) { }

	public IItemDefinition GetVisualItem(IPlayer player) { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	public void set_Amount(int value) { }

	[CompilerGenerated]
	public void set_ChainItemIndex(int value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

