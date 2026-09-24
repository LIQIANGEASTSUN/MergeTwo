namespace GameLogic.Player.Rewards;

[MetaSerializable]
public abstract class PlayerReward : MetaPlayerRewardBase, IValidatable, IPlayerReward
{
	[CompilerGenerated]
	private CurrencySource <Source>k__BackingField; //Field offset: 0x10

	[IgnoreDataMember]
	public override bool ShouldShowInfoButton
	{
		 get { } //Length: 8
	}

	[MetaMember(100, MetaMemberFlags::None (0))]
	public override CurrencySource Source
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	protected PlayerReward() { }

	public abstract void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext) { }

	public override bool get_ShouldShowInfoButton() { }

	[CompilerGenerated]
	public override CurrencySource get_Source() { }

	public override string GetAmountString(Nullable<Int32> value) { }

	public override string GetAmountString(Nullable<Int32> value, bool isPlusSigned) { }

	public override CurrencySource GetCurrencySource(IRewardContext rewardContext) { }

	public virtual void InvokeConsume(IPlayerModelBase playerModel, IRewardSource source) { }

	public abstract string Name(IPlayer player) { }

	[CompilerGenerated]
	protected void set_Source(CurrencySource value) { }

	public abstract string TypeString() { }

	public abstract void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

