namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(22)]
public class RewardCollectibleBoardEventProgress : PlayerReward
{
	[CompilerGenerated]
	private MetaRef<CollectibleBoardEventInfo> <EventInfoRef>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x20

	[MetaFormFieldCustomValidator(typeof(GameLogic.Player.Rewards.RewardAmountValidator`1<System.Int32>))]
	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public CollectibleBoardEventId EventId
	{
		 get { } //Length: 92
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaRef<CollectibleBoardEventInfo> EventInfoRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RewardCollectibleBoardEventProgress() { }

	public RewardCollectibleBoardEventProgress(CollectibleBoardEventId eventId, int amount, CurrencySource currencySource) { }

	public virtual void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public int get_Amount() { }

	public CollectibleBoardEventId get_EventId() { }

	[CompilerGenerated]
	private MetaRef<CollectibleBoardEventInfo> get_EventInfoRef() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_EventInfoRef(MetaRef<CollectibleBoardEventInfo> value) { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

