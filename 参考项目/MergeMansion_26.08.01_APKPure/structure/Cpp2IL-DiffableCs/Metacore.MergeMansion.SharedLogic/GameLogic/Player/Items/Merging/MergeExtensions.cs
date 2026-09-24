namespace GameLogic.Player.Items.Merging;

[Extension]
public static class MergeExtensions
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_0
	{
		public int currentXp; //Field offset: 0x10
		public ProgressState progressState; //Field offset: 0x18

		public <>c__DisplayClass1_0() { }

		internal bool <UnclaimedRewards>b__0(MergeReward reward) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_0
	{
		public int currentXp; //Field offset: 0x10
		public ProgressState progressState; //Field offset: 0x18

		public <>c__DisplayClass2_0() { }

		internal bool <PotentialRewards>b__0(MergeReward reward) { }

	}


	[Extension]
	public static void CalculateNextEstimatedActivationStorageFillTime(IMergeItem mergeItem, IPlayer player, MetacoreTime currentTime) { }

	[Extension]
	public static void CalculateNextEstimatedSpawnStorageFillTime(IMergeItem mergeItem, IPlayer player, MetacoreTime currentTime) { }

	[Extension]
	public static MergeItem Combine(IItemDefinition mergeProduct, IPlayer player, IMergeItem sourceItem, IMergeItem targetItem, StorageActionType storageAction, MetacoreTime timestampMetacore, IGenerationContext generationContext, ItemVisibility itemVisibility) { }

	[Extension]
	public static void FlushStorages(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static IEnumerable<MergeReward> PotentialRewards(XpAccumulationMergeMechanic mergeMechanic, int currentXp, ProgressState progressState) { }

	[Extension]
	public static int RemainingCharges(IMergeItem mergeItem) { }

	[Extension]
	public static void ResetStates(IMergeItem mergeItem, IPlayer player, MetacoreTime timestamp) { }

	[Extension]
	public static void SetNewStartTimeOfActivationStorageFill(IMergeItem mergeItem, MetacoreTime timestamp, bool resetRelative = true) { }

	[Extension]
	public static void SetNewStartTimeOfSpawnStorageFill(IMergeItem mergeItem, MetacoreTime timestamp) { }

	[Extension]
	public static IEnumerable<MergeReward> UnclaimedRewards(XpAccumulationMergeMechanic mergeMechanic, int currentXp, ProgressState progressState) { }

}

