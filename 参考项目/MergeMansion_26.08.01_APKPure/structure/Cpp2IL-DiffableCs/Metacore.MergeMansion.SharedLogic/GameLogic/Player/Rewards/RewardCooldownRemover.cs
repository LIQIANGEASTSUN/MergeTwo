namespace GameLogic.Player.Rewards;

[MetaFormDeprecated]
[MetaSerializableDerived(26)]
public class RewardCooldownRemover : PlayerReward
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<MergeBoard, Boolean> <>9__9_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <Consume>b__9_0(MergeBoard mb) { }

	}

	private const string BOOSTER_NAME = "AutoActivatedBooster_CooldownRemover"; //Field offset: 0x0
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

	public RewardCooldownRemover() { }

	public RewardCooldownRemover(MetaDuration duration) { }

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

