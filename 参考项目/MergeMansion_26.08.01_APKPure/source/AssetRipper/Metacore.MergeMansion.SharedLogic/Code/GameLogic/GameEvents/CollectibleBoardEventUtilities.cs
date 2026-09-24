using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Math;

namespace Code.GameLogic.GameEvents
{
	public static class CollectibleBoardEventUtilities
	{
		public static MergeBoardId GetTransitionTargetMergeBoardId(PlayerModel playerModel, IBoardEventModel eventModel)
		{
			return null;
		}

		public static bool TryGetPortalTargetMergeBoardId(PlayerModel playerModel, MergeBoardId currentMergeBoardId, List<CollectibleBoardEventId> collectibleBoardEventIds, out CollectibleBoardEventModel currentCollectibleBoardEventId, out MergeBoardId targetMergeBoardId)
		{
			currentCollectibleBoardEventId = null;
			targetMergeBoardId = null;
			return false;
		}

		public static int GetCompletableTaskCount(PlayerModel playerModel, CollectibleBoardEventModel eventModel)
		{
			return 0;
		}

		public static bool CanClaimWeightStarReward(PlayerModel playerModel, IItemDefinition itemDefinition, F32 weight)
		{
			return false;
		}

		public static bool IsArchaeologicalDigEventId(string id)
		{
			return false;
		}
	}
}
