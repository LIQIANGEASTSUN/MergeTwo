using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.Common.Options;

namespace GameLogic.MergeChains
{
	public static class MergeChainDefinitionExtensions
	{
		public static IItemDefinition FirstItem(this IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId)
		{
			return null;
		}

		public static IItemDefinition PreviousItem(this IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId)
		{
			return null;
		}

		public static IItemDefinition ItemAtIndex(this IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId, int wantedItemIndex)
		{
			return null;
		}

		public static IItemDefinition NextItem(this IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId)
		{
			return null;
		}

		public static IItemDefinition LastItem(this IMergeChainDefinition mergeChainDefinition, IMergeMansionGameConfig config, int itemId)
		{
			return null;
		}

		public static IItemDefinition ItemAtIndex(this IMergeChainDefinition mergeChainDefinition, IMergeMansionGameConfig config, (IReadOnlyList<IMergeChainElement> chain, int indexInChain, int elementIndex) itemData, int wantedItemIndex)
		{
			return null;
		}

		public static bool IsValid((IReadOnlyList<IMergeChainElement> chain, int indexInChain, int elementIndex) itemData)
		{
			return false;
		}

		public static bool IsFirstItem(this IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId)
		{
			return false;
		}

		public static bool IsLastItem(this IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId)
		{
			return false;
		}

		public static int GetItemIndex(this IMergeChainDefinition mergeChainDefinition, int itemId)
		{
			return 0;
		}

		public static int GetItemLevel(this IMergeChainDefinition mergeChainDefinition, int itemId)
		{
			return 0;
		}

		public static (IReadOnlyList<IMergeChainElement>, int, int) GetItemData(this IMergeChainDefinition mergeChainDefinition, int itemId)
		{
			return default((IReadOnlyList<IMergeChainElement>, int, int));
		}

		public static (IReadOnlyList<IMergeChainElement>, int, int) GetItemData(IReadOnlyList<IMergeChainElement> chain, int itemId)
		{
			return default((IReadOnlyList<IMergeChainElement>, int, int));
		}

		public static (IReadOnlyList<IMergeChainElement>, int, int) GetItemsData(this IMergeChainDefinition mergeChainDefinition, int itemId)
		{
			return default((IReadOnlyList<IMergeChainElement>, int, int));
		}

		public static List<IItemDefinition> GetItems(this IMergeChainDefinition mergeChainDefinition, IMergeMansionGameConfig config, int itemId, int minItemLevel = 1)
		{
			return null;
		}

		public static List<int> GetItemIds(this IMergeChainDefinition mergeChainDefinition, IPlayer player, int itemId)
		{
			return null;
		}

		public static IItemDefinition DefaultFirstItem(this IMergeChainDefinition chain, IPlayer player)
		{
			return null;
		}

		public static IItemDefinition DefaultItemAtIndex(this IMergeChainDefinition chain, IPlayer player, int indexInChain)
		{
			return null;
		}

		public static IItemDefinition DefaultLastItem(this IMergeChainDefinition chain, IPlayer player)
		{
			return null;
		}

		public static IEnumerable<IItemDefinition> GetMergeChainItemsStartingFrom(this IMergeChainDefinition chain, IItemDefinition item, IPlayer player)
		{
			return null;
		}

		public static List<IItemDefinition> UnlockedAndAvailableItems(this IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, IPlayer player)
		{
			return null;
		}

		public static int UnlockedAndAvailableLength(this IMergeChainDefinition mergeChainDefinition, IPlayer player)
		{
			return 0;
		}

		public static int UnlockedAndAvailableLength(this IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, IPlayer player)
		{
			return 0;
		}

		public static IItemDefinition GetLastUnlockedMergeChainItem(this IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, IPlayer player, bool playerMustHaveDiscovered = false)
		{
			return null;
		}

		public static bool IsLastUnlockedMergeChainItem(this IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, IPlayer player)
		{
			return false;
		}

		public static bool IsPartOfMergeChain(this IMergeChainDefinition mergeChainDefinition, IItemDefinition itemDefinition, bool includeFallback = false)
		{
			return false;
		}

		public static IPlayerReward GetDiscoveryCompletionReward(this IMergeChainDefinition mergeChainDefinition)
		{
			return null;
		}

		public static Option<IPlayerReward> GetDiscoveryReward(this IMergeChainDefinition mergeChainDefinition, int index)
		{
			return default(Option<IPlayerReward>);
		}

		public static string DebugLogMergeChains(this IMergeChainDefinition chain, int itemId, IPlayer player)
		{
			return null;
		}

		public static string DebugLog(IReadOnlyList<IMergeChainElement> chain, int itemId, IPlayer player, int itemIndexInChain = -1, int itemElementIndex = -1, string prefix = "")
		{
			return null;
		}

		public static List<ItemDef> GetAllItemsSolvedInChain(this IMergeChainDefinition mergeChainDefinition, IPlayer player)
		{
			return null;
		}
	}
}
