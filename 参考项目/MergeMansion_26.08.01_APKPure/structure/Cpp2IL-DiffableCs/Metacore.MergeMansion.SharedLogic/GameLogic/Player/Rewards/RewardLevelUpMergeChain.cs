namespace GameLogic.Player.Rewards;

[MetaFormDeprecated]
[MetaSerializableDerived(20)]
public class RewardLevelUpMergeChain : PlayerReward
{
	[CompilerGenerated]
	private MergeChainDef <MergeChainDef>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixMergeChainRef")]
	private MergeChainDef MergeChainDef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RewardLevelUpMergeChain() { }

	public RewardLevelUpMergeChain(MergeChainId mergeChainId) { }

	public virtual void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext) { }

	public static MergeChainDef FixMergeChainRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	private MergeChainDef get_MergeChainDef() { }

	public IMergeChainDefinition GetMergeChain(IPlayer player) { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_MergeChainDef(MergeChainDef value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

