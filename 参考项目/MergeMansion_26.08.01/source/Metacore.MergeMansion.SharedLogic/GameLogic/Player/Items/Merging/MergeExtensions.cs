using System.Collections.Generic;
using Game.Logic;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Random;

namespace GameLogic.Player.Items.Merging
{
	public static class MergeExtensions
	{
		public static MergeItem Combine(this IItemDefinition mergeProduct, IPlayer player, IMergeItem sourceItem, IMergeItem targetItem, StorageActionType storageAction, MetacoreTime timestampMetacore, IGenerationContext generationContext, ItemVisibility itemVisibility)
		{
			return null;
		}

		public static IEnumerable<MergeReward> UnclaimedRewards(this XpAccumulationMergeMechanic mergeMechanic, int currentXp, ProgressState progressState)
		{
			return null;
		}

		public static IEnumerable<MergeReward> PotentialRewards(this XpAccumulationMergeMechanic mergeMechanic, int currentXp, ProgressState progressState)
		{
			return null;
		}

		public static void ResetStates(this IMergeItem mergeItem, IPlayer player, MetacoreTime timestamp)
		{
		}

		public static void SetNewStartTimeOfSpawnStorageFill(this IMergeItem mergeItem, MetacoreTime timestamp)
		{
		}

		public static void SetNewStartTimeOfActivationStorageFill(this IMergeItem mergeItem, MetacoreTime timestamp, bool resetRelative = true)
		{
		}

		public static int RemainingCharges(this IMergeItem mergeItem)
		{
			return 0;
		}

		public static void CalculateNextEstimatedSpawnStorageFillTime(this IMergeItem mergeItem, IPlayer player, MetacoreTime currentTime)
		{
		}

		public static void CalculateNextEstimatedActivationStorageFillTime(this IMergeItem mergeItem, IPlayer player, MetacoreTime currentTime)
		{
		}

		public static void FlushStorages(this IMergeItem mergeItem, IPlayer player)
		{
		}
	}
}
