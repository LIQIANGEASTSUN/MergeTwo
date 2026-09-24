namespace Code.GameLogic.GameEvents;

public class CollectibleBoardEventValidator : IValidatable
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<PlayerReward, Boolean> <>9__9_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <HasDecorationRewards>b__9_0(PlayerReward reward) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass15_0
	{
		public string popup; //Field offset: 0x10
		public CollectibleBoardEventInfo eventInfo; //Field offset: 0x18

		public <>c__DisplayClass15_0() { }

		internal bool <ValidateDialogueTakesToPopup>b__0(IDirectorAction action) { }

	}


	public CollectibleBoardEventValidator() { }

	private static bool HasDecorationRewards(EventLevelInfo eventLevel) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

	private static void Validate(IMergeMansionGameConfig configuration, CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateBoardShopPlacementIds(CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateDialogueTakesToPopup(IMergeMansionGameConfig configuration, CollectibleBoardEventInfo eventInfo, string dialogueFieldName, StoryDefinitionId dialogueId, string popup) { }

	private static void ValidateEndDialogue(IMergeMansionGameConfig configuration, CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateEnterBoardDialogue(IMergeMansionGameConfig configuration, CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateFallbackLevelsEqualRequiredPoints(CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateFallbackLevelsExist(IMergeMansionGameConfig config, CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateFallbackLevelsExist(List<MetaRef`1<EventLevelInfo>> levelRefs, MetaDictionary<EventLevelId, MetaRef`1<EventLevelInfo>> fallbackLevelRefs) { }

	private static void ValidateHasBoard(CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateNoDuplicateDecorationRewards(IMergeMansionGameConfig config, CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateNoDuplicateDecorationRewards(List<DecorationId> decorations, IEnumerable<MetaRef`1<EventLevelInfo>> levelRefs) { }

	private static void ValidateRecurringLevelsExist(IMergeMansionGameConfig config, CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateSingleRewardPerLevel(IMergeMansionGameConfig config, CollectibleBoardEventInfo eventInfo) { }

	private static void ValidateSingleRewardPerLevel(IEnumerable<MetaRef`1<EventLevelInfo>> levelRefs) { }

}

