namespace Code.GameLogic.GameEvents;

public static class CollectibleBoardEventUtilities
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_0
	{
		public MergeBoardId currentMergeBoardId; //Field offset: 0x10

		public <>c__DisplayClass1_0() { }

		internal bool <TryGetPortalTargetMergeBoardId>b__0(MetaRef<BoardInfo> boardRef) { }

	}


	public static bool CanClaimWeightStarReward(PlayerModel playerModel, IItemDefinition itemDefinition, F32 weight) { }

	public static int GetCompletableTaskCount(PlayerModel playerModel, CollectibleBoardEventModel eventModel) { }

	public static MergeBoardId GetTransitionTargetMergeBoardId(PlayerModel playerModel, IBoardEventModel eventModel) { }

	public static bool IsArchaeologicalDigEventId(string id) { }

	public static bool TryGetPortalTargetMergeBoardId(PlayerModel playerModel, MergeBoardId currentMergeBoardId, List<CollectibleBoardEventId> collectibleBoardEventIds, out CollectibleBoardEventModel currentCollectibleBoardEventId, out MergeBoardId targetMergeBoardId) { }

}

