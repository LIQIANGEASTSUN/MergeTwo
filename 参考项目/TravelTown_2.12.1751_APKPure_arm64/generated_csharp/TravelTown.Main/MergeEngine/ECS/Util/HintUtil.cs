using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.Model.Configuration;

namespace MergeEngine.ECS.Util
{
	public static class HintUtil
	{
		public static Tuple<IdComponent, IdComponent> GetHint(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel, Func<IComponentBase, bool> unlockPredicate, BoardItemCountComponent boardItemCountComponent, bool isStackingEnabled, IMergeItem itemType = null, List<string> excludeItemIds = null)
		{
			return null;
		}

		public static bool TryFindConsumeHint(out IdComponent first, out IdComponent second, ReadOnlyCollection<PositionComponent> boardItems, List<string> excludeItemIds, IMergingConfigurationModel mergingConfigurationModel, BoardItemCountComponent boardItemCountComponent)
		{
			first = null;
			second = null;
			return false;
		}

		public static bool TryFindStackableHint(out IdComponent first, out IdComponent second, ReadOnlyCollection<PositionComponent> boardItems, List<string> excludeItemIds, IMergingConfigurationModel mergingConfigurationModel, Func<IComponentBase, bool> unlockPredicate, Func<IMergeItem, bool> itemTypePredicate = null)
		{
			first = null;
			second = null;
			return false;
		}

		public static bool TrySetStackingHintPair(IEnumerable<IdComponent> unlockedItems, IEnumerable<IdComponent> candidateItems, out IdComponent first, out IdComponent second)
		{
			first = null;
			second = null;
			return false;
		}

		public static Tuple<IdComponent, IdComponent> TryFindPrioritizedStackingHint(ReadOnlyCollection<PositionComponent> boardItems, List<string> excludeItemIds, IMergingConfigurationModel mergingConfigurationModel, Func<IComponentBase, bool> unlockPredicate)
		{
			return null;
		}

		public static Tuple<IdComponent, IdComponent> TryFindMergeAnyHint(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel, List<string> excludeItemIds)
		{
			return null;
		}

		public static bool CanBeMerged(IdComponent idComponent, Func<string, IMergeItem> getNextItemOnGraphFunction)
		{
			return false;
		}

		public static IdComponent GetCollectable(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel)
		{
			return null;
		}

		public static bool IsLocked(IdComponent item)
		{
			return false;
		}

		public static bool CanBeCollected(IdComponent item)
		{
			return false;
		}

		public static IdComponent GetLowestLevelBasicItem(IEnumerable<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel)
		{
			return null;
		}

		public static int CountEmptiableTiles(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel, BoardItemCountComponent boardItemCountComponent, MergeSystem mergeSystem)
		{
			return 0;
		}

		public static int CountEmptiableTileByMerges(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel, BoardItemCountComponent boardItemCountComponent, MergeSystem mergeSystem)
		{
			return 0;
		}

		public static int CountFeeds(ReadOnlyCollection<PositionComponent> boardItems, BoardItemCountComponent boardItemCountComponent)
		{
			return 0;
		}

		public static int CountMergeTiles(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel, MergeSystem mergeSystem)
		{
			return 0;
		}

		public static int CountJokerMergeTiles(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel)
		{
			return 0;
		}

		public static int CountCollectables(ReadOnlyCollection<PositionComponent> boardItems)
		{
			return 0;
		}
	}
}
