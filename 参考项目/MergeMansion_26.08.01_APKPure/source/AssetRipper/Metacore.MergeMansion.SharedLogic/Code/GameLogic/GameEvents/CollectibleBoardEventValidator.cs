using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Decorations;
using GameLogic.Story;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class CollectibleBoardEventValidator : IValidatable
	{
		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public static void Validate(IMergeMansionGameConfig configuration, CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateHasBoard(CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateBoardShopPlacementIds(CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateSingleRewardPerLevel(IMergeMansionGameConfig config, CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateSingleRewardPerLevel(IEnumerable<MetaRef<EventLevelInfo>> levelRefs)
		{
		}

		public static void ValidateRecurringLevelsExist(IMergeMansionGameConfig config, CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateFallbackLevelsExist(IMergeMansionGameConfig config, CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateFallbackLevelsExist(List<MetaRef<EventLevelInfo>> levelRefs, MetaDictionary<EventLevelId, MetaRef<EventLevelInfo>> fallbackLevelRefs)
		{
		}

		public static bool HasDecorationRewards(EventLevelInfo eventLevel)
		{
			return false;
		}

		public static void ValidateNoDuplicateDecorationRewards(IMergeMansionGameConfig config, CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateNoDuplicateDecorationRewards(List<DecorationId> decorations, IEnumerable<MetaRef<EventLevelInfo>> levelRefs)
		{
		}

		public static void ValidateFallbackLevelsEqualRequiredPoints(CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateEnterBoardDialogue(IMergeMansionGameConfig configuration, CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateEndDialogue(IMergeMansionGameConfig configuration, CollectibleBoardEventInfo eventInfo)
		{
		}

		public static void ValidateDialogueTakesToPopup(IMergeMansionGameConfig configuration, CollectibleBoardEventInfo eventInfo, string dialogueFieldName, StoryDefinitionId dialogueId, string popup)
		{
		}
	}
}
