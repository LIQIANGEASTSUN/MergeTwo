using System;
using System.Collections.Generic;
using MergePuzzle.ItemRewardBackup;

namespace MergePuzzle
{
	public class ItemChainManager : IItemRewardConvertHandler
	{
		public class SpawnerPointsQueryHandler
		{
			[NonSerialized]
			public bool _queryInitialized;

			[NonSerialized]
			public bool _locked;

			[NonSerialized]
			public readonly Dictionary<int, List<SpawnerPointsQuery>> _querySetIDDictionary;

			[NonSerialized]
			public readonly Dictionary<int, List<SpawnerPointsQuery>> _queryLocationDictionary;

			public int GetTotalPointsForSetIDQuery(int anySetID)
			{
				return 0;
			}

			public int GetMaxPointsForSetIDQuery(int anySetID, out int counter)
			{
				counter = default(int);
				return 0;
			}

			public void AddToQueryList(int setID, int location, int index, int level, bool skipCheck = false)
			{
			}

			public void RemoveQuery(int setID, int location, int oldIndex)
			{
			}

			public void InitializeSpawnerQuery(List<BoardPositionEntity> positions, List<ItemEntity> inventoryItems, List<RewardEntity> activeRewards)
			{
			}

			public void SetQueryLock(bool locked)
			{
			}
		}

		public class SpawnerPointsQuery : IComparable<SpawnerPointsQuery>
		{
			public int Location;

			public int Index;

			public int Points;

			public int CompareTo(SpawnerPointsQuery other)
			{
				return 0;
			}
		}

		[NonSerialized]
		public readonly KiteNewSpawnerConfig _kiteConfig;

		[NonSerialized]
		public readonly List<ItemChainScriptableData> _chainDataList;

		[NonSerialized]
		public readonly Dictionary<int, ItemChainModel> _chains;

		[NonSerialized]
		public readonly Dictionary<int, ItemLinkModel> _linksByID;

		[NonSerialized]
		public readonly Dictionary<int, ItemLinkModel> _activeLinksByChain;

		[NonSerialized]
		public readonly Dictionary<int, int> _setIdToChainIndex;

		[NonSerialized]
		public readonly Dictionary<int, int> _defaultSetIdToActiveChainIndex;

		public const int ARCHIVED_ID_OFFSET = 1000000;

		public const int NEW_SPAWNER_ID_OFFSET = 100000;

		public const int CHAIN_SPAWNER_INTERVAL = 1000;

		[NonSerialized]
		public BoardEntity _boardEntity;

		public readonly SpawnerPointsQueryHandler SpawnerQueryHandler;

		public ItemChainManager(KiteNewSpawnerConfig kiteConfig, BoardEntity boardEntity)
		{
		}

		public void SetBoardEntity(BoardEntity boardEntity)
		{
		}

		public void SetWaitingArchiveTasksReadyForRemoval()
		{
		}

		public void SetArchiveTaskForRemoval(ItemLinkID linkID)
		{
		}

		public void TryEnqueueArchivePopup()
		{
		}

		public void UpdateArchiveTasks()
		{
		}

		public void InitializeChains()
		{
		}

		public void ClearAllCaches()
		{
		}

		public void ProcessChainData(ItemChainScriptableData chainData, int userLevel)
		{
		}

		public KiteItemChain FindKiteChain(int chainIndex)
		{
			return null;
		}

		public static KiteItemLink FindKiteLink(KiteItemChain kiteChain, int linkIndex)
		{
			return null;
		}

		public ItemLinkModel FindActiveLinkBySetID(int setId)
		{
			return null;
		}

		public ItemLinkScriptableData FindActiveLinkDataBySetID(int setId)
		{
			return null;
		}

		public ItemLinkScriptableData FindActiveLinkDataByDefaultSetID(int defaultSetId)
		{
			return null;
		}

		public void CacheLinkById(ItemLinkModel link)
		{
		}

		public void UpdateActiveLinkIfNecessary(ItemLinkModel link, int chainIndex, int userLevel)
		{
		}

		public void BuildReverseIndexForLink(ItemLinkModel link, int chainIndex)
		{
		}

		public void AddSetIdToChainIndex(int setId, int chainIndex)
		{
		}

		public ItemChainModel FindItemChainWithSetId(int setId)
		{
			return null;
		}

		public List<ItemChainModel> FindAllItemChainsWithSetId(int setId)
		{
			return null;
		}

		public ItemChainModel GetItemChain(int chainIndex)
		{
			return null;
		}

		public ItemChainScriptableData GetItemChainData(int chainIndex)
		{
			return null;
		}

		public ItemLinkScriptableData GetItemLinkData(ItemLinkID linkID)
		{
			return null;
		}

		public ItemLinkModel GetItemLink(ItemLinkID linkID)
		{
			return null;
		}

		public List<ItemLinkModel> GetItemLinksAtUnlockLevel(int unlockLevel)
		{
			return null;
		}

		public List<ItemLinkModel> GetItemLinksAtArchiveLevel(int archiveLevel)
		{
			return null;
		}

		public ItemLinkModel GetItemLinkWithItemSet(int itemSetId)
		{
			return null;
		}

		public void ReplaceOldSetIDs(List<ItemLinkModel> previousLinks, List<ItemLinkModel> newLinks)
		{
		}

		public static int GetDefaultSetIDFromArchivedID(int archivedID)
		{
			return 0;
		}

		public static int GetSetIDFromArchivedID(int archivedID)
		{
			return 0;
		}

		public int GetArchivedSetIDFromSetID(int setID, bool checkIfArchived)
		{
			return 0;
		}

		public int GetCurrentIDFromSetID(int setID)
		{
			return 0;
		}

		public int GetActiveIDFromSetID(int setID)
		{
			return 0;
		}

		public static bool IsItemArchived(int setID)
		{
			return false;
		}

		public static int ArchiveSetID(int setID, int linkIndex)
		{
			return 0;
		}

		public bool IsInventoryLogicActive()
		{
			return false;
		}

		public int GetLinkCount()
		{
			return 0;
		}

		public List<ItemLinkModel> GetAllLinksOrderedByUnlockLevel()
		{
			return null;
		}

		public List<ItemLinkModel> GetAllLinksOrderedByArchiveLevel(bool excludeZero = false, bool excludeInventory = false)
		{
			return null;
		}

		public long GetArchiveTaskEndTime()
		{
			return 0L;
		}

		public GameItemReward GetArchiveReward(ItemLinkID linkID)
		{
			return null;
		}

		public List<KiteSpawnerBackupItem> GetSpawnerBackupItems()
		{
			return null;
		}

		public List<BoardPosition> GetSpawnersToRemoveByArchive(List<BoardPosition> boardPositions, int setID)
		{
			return null;
		}

		public List<ItemLinkModel> GetPossibleArchiveLinks()
		{
			return null;
		}

		public int LookupSetIDInParentLink(int lookupSetID, int parentSetID)
		{
			return 0;
		}

		public static int GetMatchingIDFromAnotherLink(ItemLinkModel parentLink, int lookupSetID)
		{
			return 0;
		}

		public bool IsSpawnerSellable(int querySetID, int level)
		{
			return false;
		}

		public int CurrentRequiredLevelForSpawner(int querySetID)
		{
			return 0;
		}

		public Tuple<int, int> GetNextArchivedChainAndLink()
		{
			return null;
		}

		public void CreateSpawnerQueryDictionary()
		{
		}

		public void InitializeItemRewardConversion()
		{
		}

		public void ItemRewardConvertUpdated(ItemRewardConvertEvent.FeatureStatusUpdated e)
		{
		}

		public int GetParentChainSpawnerSetId(int childSpawnerSetId)
		{
			return 0;
		}

		public int GetChildChainSpawnerSetId(int parentSpawnerSetId)
		{
			return 0;
		}
	}
}
