namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(50)]
public class RewardAutoActivatedAutoMergeBooster : PlayerReward
{
	private const string BOOSTER_NAME = "AutoActivatedBooster_AutoMerge"; //Field offset: 0x0
	[CompilerGenerated]
	private MetaDuration <Duration>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MetaDuration Duration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public virtual bool ShouldShowInfoButton
	{
		 get { } //Length: 8
	}

	public RewardAutoActivatedAutoMergeBooster() { }

	public RewardAutoActivatedAutoMergeBooster(MetaDuration duration) { }

	public virtual void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public MetaDuration get_Duration() { }

	public virtual bool get_ShouldShowInfoButton() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Duration(MetaDuration value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

