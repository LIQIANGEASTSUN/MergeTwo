namespace Code.GameLogic.GameEvents;

[MetaSerializableDerived(3)]
public class AutoMergeMinigameModel : ICoreSupportEventMinigameModel
{
	[CompilerGenerated]
	private CoreSupportEventMinigameId <MinigameId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <IsAutoMergeEnabled_DEPRECATED>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	[Obsolete("Not supported anymore. Use AutoMergeFeatureModel.UserToggleEnabled instead. Used only for migration purposes.")]
	public private bool IsAutoMergeEnabled_DEPRECATED
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override CoreSupportEventMinigameId MinigameId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public AutoMergeMinigameModel() { }

	public AutoMergeMinigameModel(CoreSupportEventMinigameId minigameId) { }

	public override bool CanClaimReward(IPlayer player, ICoreSupportEventMinigameRewardId id) { }

	public override bool CanFinalizeEventEarly(IPlayer player) { }

	public override void ClaimReward(IPlayer player, ICoreSupportEventMinigameRewardId id) { }

	public override void Finalize(IPlayer player) { }

	[CompilerGenerated]
	public bool get_IsAutoMergeEnabled_DEPRECATED() { }

	[CompilerGenerated]
	public override CoreSupportEventMinigameId get_MinigameId() { }

	public override List<ValueTuple`2<ICoreSupportEventMinigameRewardId, List`1<IPlayerReward>>> GetClaimableRewards(IPlayer player) { }

	public override void OnGameTick(IPlayer player) { }

	public override void OnInactiveGameTick(IPlayer player, ICoreSupportEventModel eventModel, bool inReview) { }

	public override void OnTokenAmountChanged(IPlayer player, long amount, CurrencySource source) { }

	[CompilerGenerated]
	private void set_IsAutoMergeEnabled_DEPRECATED(bool value) { }

	[CompilerGenerated]
	protected void set_MinigameId(CoreSupportEventMinigameId value) { }

	public void SetAutoMergeEnabled(bool enabled) { }

}

