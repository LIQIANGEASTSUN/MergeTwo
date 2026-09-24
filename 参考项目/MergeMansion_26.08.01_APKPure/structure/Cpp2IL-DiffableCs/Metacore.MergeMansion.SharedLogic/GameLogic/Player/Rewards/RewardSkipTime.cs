namespace GameLogic.Player.Rewards;

[MetaFormDeprecated]
[MetaSerializableDerived(24)]
public class RewardSkipTime : PlayerReward
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass13_0
	{
		public MergeBoardId mergeBoardId; //Field offset: 0x10

		public <>c__DisplayClass13_0() { }

		internal bool <Consume>b__0(MergeBoard mb) { }

	}

	private const string BOOSTER_NAME = "AutoActivatedBooster_SkipTime"; //Field offset: 0x0
	[CompilerGenerated]
	private List<MergeBoardId> <MergeBoardIds>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MetaDuration <DurationToSkip>k__BackingField; //Field offset: 0x20

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MetaDuration DurationToSkip
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private List<MergeBoardId> MergeBoardIds
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

	public RewardSkipTime() { }

	public RewardSkipTime(List<MergeBoardId> mergeBoardIds, MetaDuration durationToSkip) { }

	public virtual void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public MetaDuration get_DurationToSkip() { }

	[CompilerGenerated]
	public List<MergeBoardId> get_MergeBoardIds() { }

	public virtual bool get_ShouldShowInfoButton() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_DurationToSkip(MetaDuration value) { }

	[CompilerGenerated]
	private void set_MergeBoardIds(List<MergeBoardId> value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

