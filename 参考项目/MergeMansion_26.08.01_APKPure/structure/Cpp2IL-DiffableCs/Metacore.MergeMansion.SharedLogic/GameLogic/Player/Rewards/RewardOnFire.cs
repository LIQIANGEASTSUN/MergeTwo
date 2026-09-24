namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(47)]
public class RewardOnFire : PlayerReward, IMutablePlayerReward, IPlayerReward
{
	private const string BOOSTER_NAME = "AutoActivatedBooster_OnFire"; //Field offset: 0x0
	[CompilerGenerated]
	private MetaDuration <Duration>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private FallbackPlayerRewardId <FallbackRewardId>k__BackingField; //Field offset: 0x20

	public int Amount
	{
		 get { } //Length: 192
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MetaDuration Duration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private FallbackPlayerRewardId FallbackRewardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public virtual bool ShouldShowInfoButton
	{
		 get { } //Length: 8
	}

	public RewardOnFire() { }

	public RewardOnFire(MetaDuration duration, FallbackPlayerRewardId fallbackRewardId) { }

	public virtual void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext) { }

	public int get_Amount() { }

	[CompilerGenerated]
	public MetaDuration get_Duration() { }

	[CompilerGenerated]
	private FallbackPlayerRewardId get_FallbackRewardId() { }

	public virtual bool get_ShouldShowInfoButton() { }

	public override IPlayerReward GetMutatedReward(IPlayer player, Option<RewardSourceContext> rewardSourceContextOption) { }

	public override bool MayMutateAtRuntime(IMergeMansionGameConfig _) { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Duration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_FallbackRewardId(FallbackPlayerRewardId value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

