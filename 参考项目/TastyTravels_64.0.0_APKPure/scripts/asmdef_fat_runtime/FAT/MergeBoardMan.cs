using System;
using System.Collections.Generic;
using FAT.Merge;
using IFix.Core;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class MergeBoardMan : IGameModule, IUserDataHolder
	{
		[NonSerialized]
		public MergeWorld mCurrentActiveWorld;

		[NonSerialized]
		public MergeWorldTracer mCurrentActiveTracer;

		[NonSerialized]
		public Item mCurrentInteractingItem;

		[NonSerialized]
		public Item mRecentInteractingItem;

		[NonSerialized]
		public List<MergeWorldEntry> mAllMergeWorld;

		[NonSerialized]
		public IDictionary<int, MergeBoardGrp> mAllMergeBoardGrp;

		[NonSerialized]
		public IDictionary<int, MergeBoard> mAllBoardConfigs;

		[NonSerialized]
		public Dictionary<int, int> mBoardIdToBoardGrpId;

		[NonSerialized]
		public Dictionary<int, fat.rawdata.MergeGrid> mAllMergeGridConfigs;

		[NonSerialized]
		public MergeGlobal mGlobalData;

		[NonSerialized]
		public List<IMergeBonusHandler> mGlobalBonusHandler;

		[NonSerialized]
		public List<ISpawnBonusHandler> mGlobalSpawnBonusHandler;

		[NonSerialized]
		public List<IDisposeBonusHandler> mGlobalDisposeBonusHandler;

		public MergeWorld activeWorld => null;

		public MergeWorldTracer activeTracer => null;

		public Item activeItem => null;

		public Item recentActiveItem => null;

		public MergeGlobal globalData => null;

		public void RegisterGlobalMergeBonusHandler(IMergeBonusHandler handler)
		{
		}

		public void UnregisterGlobalMergeBonusHandler(IMergeBonusHandler handler)
		{
		}

		public void FillGlobalMergeBonusHandler(List<IMergeBonusHandler> container)
		{
		}

		public void RegisterGlobalSpawnBonusHandler(ISpawnBonusHandler handler)
		{
		}

		public void UnregisterGlobalSpawnBonusHandler(ISpawnBonusHandler handler)
		{
		}

		public void FillGlobalSpawnBonusHandler(List<ISpawnBonusHandler> container)
		{
		}

		public void RegisterGlobalDisposeBonusHandler(IDisposeBonusHandler handler)
		{
		}

		public void UnregisterGlobalDisposeBonusHandler(IDisposeBonusHandler handler)
		{
		}

		public void FillGlobalDisposeBonusHandler(List<IDisposeBonusHandler> container)
		{
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		public void RegisterMergeWorldEntry(MergeWorldEntry entry)
		{
		}

		public void UnregisterMergeWorldEntry(MergeWorld world)
		{
		}

		public bool TryGetWorldEntryType(MergeWorld world, out MergeWorldEntry.EntryType type)
		{
			type = default(MergeWorldEntry.EntryType);
			return false;
		}

		public void FillAllMergeWorld(List<MergeWorld> worlds)
		{
		}

		public void WalkAllWorldItem(Action<Item> func, bool onlyMainLike = false, MergeWorld.WalkItemMask walkMask = MergeWorld.WalkItemMask.All)
		{
		}

		public void SetCurrentActiveWorld(MergeWorld world)
		{
		}

		public void SetCurrentActiveTracer(MergeWorldTracer tracer)
		{
		}

		public void SetCurrentInteractingItem(Item item)
		{
		}

		public void _OnConfigLoaded()
		{
		}

		public fat.rawdata.MergeGrid GetMergeGridConfig(int tid)
		{
			return null;
		}

		public MergeBoard GetBoardConfigRaw(int id)
		{
			return null;
		}

		public MergeBoard GetBoardConfig(int id)
		{
			return null;
		}

		public MergeWorld GetMergeWorldForRewardByBoardId(int boardId, bool strict = false)
		{
			return null;
		}

		public MergeBoardGrp GetBoardGroupByBoardId(int boardId)
		{
			return null;
		}

		public bool _FilterWorld(MergeWorld world, bool needGiftbox)
		{
			return false;
		}

		public MergeWorld _GetMergeWorldByBoardId(int boardId, bool needGiftbox)
		{
			return null;
		}

		[IDTag(1)]
		public bool InitializeBoard(MergeWorld world, int boardId, bool fillInitialItems = true, fat.gamekitdata.Merge data = null)
		{
			return false;
		}

		[IDTag(0)]
		public bool InitializeBoard(ActivityLike activityLike, MergeWorld world, int boardId, bool fillInitialItems = true)
		{
			return false;
		}

		public void CollectBoardItemByRow(Board board, int rowCount, List<Item> itemList, bool isTopToBottom = true, bool needItemEvent = false)
		{
		}

		public void MoveUpBoardItem(Board board, int minRow, int maxRow = -1)
		{
		}

		public void MoveDownBoardItem(Board board, int count)
		{
		}

		public void CreateNewBoardItemByRow(Board board, IList<string> rowItems, int startRow)
		{
		}

		public void CreateNewBoardItemFromRowToTop(Board board, IList<string> rowItems, int startRow)
		{
		}

		public int FillMergeAreaForBoard(int boardid, List<MergeGridArea> container = null)
		{
			return 0;
		}

		public void _InitBoardItemColumnFirst(Board board, IList<string> colItems, int colCount, int rowCount, int startCol = 0)
		{
		}

		public void _InitBoardItemRowFirst(Board board, IList<string> rowItems, int rowCount, int colCount, int startRow = 0)
		{
		}

		public void _InitBoardItemRowFirstBottom(Board board, IList<string> rowItems, int rowCount, int colCount, int startRow)
		{
		}

		public void _SpawnItemByConf(Board board, int col, int row, string itemConf)
		{
		}

		public void ClaimAllBonus(HashSet<int> targetItemTids)
		{
		}

		public void _EnsureClaimRewardCommit(MergeWorld.BonusClaimRewardData rewardData)
		{
		}

		void IGameModule.Reset()
		{
		}

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Startup()
		{
		}
	}
}
