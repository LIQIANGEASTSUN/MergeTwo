namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(29)]
public class RewardMysteryMachineEventProgress : PlayerReward
{
	[CompilerGenerated]
	private MetaRef<MysteryMachineEventInfo> <EventInfoRef>k__BackingField; //Field offset: 0x18
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
	public MysteryMachineEventId EventId
	{
		 get { } //Length: 92
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaRef<MysteryMachineEventInfo> EventInfoRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RewardMysteryMachineEventProgress() { }

	public RewardMysteryMachineEventProgress(MysteryMachineEventId eventId, int amount, CurrencySource currencySource) { }

	public virtual void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public int get_Amount() { }

	public MysteryMachineEventId get_EventId() { }

	[CompilerGenerated]
	private MetaRef<MysteryMachineEventInfo> get_EventInfoRef() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_EventInfoRef(MetaRef<MysteryMachineEventInfo> value) { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

