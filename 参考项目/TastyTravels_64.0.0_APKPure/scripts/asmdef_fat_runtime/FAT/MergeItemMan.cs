using System;
using System.Collections.Generic;
using FAT.Merge;
using fat.rawdata;

namespace FAT
{
	public class MergeItemMan : IGameModule
	{
		public class ItemBubbleSpawnData
		{
			public BubbleSpawn config;

			public int mergeCount;
		}

		public class MergeItemCategoryRuntimeConfig
		{
			public MergeItemCategory config;

			public int id => 0;

			public string name => null;
		}

		[NonSerialized]
		public IDictionary<int, ObjTool> mToolBasicConfigMap;

		[NonSerialized]
		public IDictionary<int, ObjMergeTool> mToolMergeConfigMap;

		[NonSerialized]
		public IDictionary<int, MergeMixCost> mMergeMixCostMap;

		[NonSerialized]
		public IDictionary<int, MergeTapCost> mMergeTapCostMap;

		[NonSerialized]
		public IDictionary<int, DropLimitItem> mAllDropLimitItemConfigs;

		[NonSerialized]
		public IDictionary<int, ComTrigAutoDetail> mTrigAutoDetailConfigs;

		[NonSerialized]
		public IDictionary<int, OrderBoxDetail> mOrderBoxDetailMap;

		[NonSerialized]
		public IDictionary<int, OrderDiff> mOrderDiffMap;

		[NonSerialized]
		public IDictionary<int, OrderReward> mOrderRewardMap;

		[NonSerialized]
		public IDictionary<int, OrderCategory> mOrderCategoryMap;

		[NonSerialized]
		public IDictionary<string, OrderApiWhitelist> mOrderApiWhiteListMap;

		[NonSerialized]
		public Dictionary<int, ItemComConfig> mItemConfigs;

		[NonSerialized]
		public Dictionary<int, MergeRule> mRuleConfigs;

		[NonSerialized]
		public Dictionary<int, MergeFixedOutput> mFixedOutputConfigs;

		[NonSerialized]
		public Dictionary<int, MergeFixedItem> mFixedOutputByItemConfigs;

		[NonSerialized]
		public Dictionary<int, ItemBubbleSpawnData> mBubbleSpawnDatas;

		[NonSerialized]
		public Dictionary<int, List<int>> mTapCostOutPutsDict;

		[NonSerialized]
		public Dictionary<int, int> mItemCategoryMap;

		[NonSerialized]
		public Dictionary<int, (int cid, int level)> mItemCategoryLevelMap;

		[NonSerialized]
		public Dictionary<int, MergeItemCategoryRuntimeConfig> mCategoryConfigs;

		[NonSerialized]
		public Dictionary<int, int> mCategoryBoardId;

		[NonSerialized]
		public Dictionary<int, List<int>> mGridMatchItemsDict;

		[NonSerialized]
		public IDictionary<int, GalleryCategory> mGalleryCategoryConfigs;

		[NonSerialized]
		public Dictionary<int, List<int>> _mMergeChainGroupByCategoryDict;

		[NonSerialized]
		public int mPreviousVersion;

		[NonSerialized]
		public int mPreviousTapSourceVersion;

		[NonSerialized]
		public int mPreviousCategoryVersion;

		public static readonly ItemComConfig kSharedEmptyComConfig;

		public IDictionary<int, int> fixedCategoryOutputDB => null;

		public IDictionary<int, int> fixedItemOutputDB => null;

		public Dictionary<int, List<int>> mMergeChainGroupByCategoryDict => null;

		public int FillCollectionCategoryOrdered(List<int> container)
		{
			return 0;
		}

		public int FillSeriesInCategoryOrdered(int categoryId, List<int> container, bool includeHidden)
		{
			return 0;
		}

		public int _CategorySort(MergeItemCategoryRuntimeConfig a, MergeItemCategoryRuntimeConfig b)
		{
			return 0;
		}

		public void _OnConfigLoaded()
		{
		}

		public List<int> GetAliveCheckChain()
		{
			return null;
		}

		public void OnMergeBoardVersionUpdate(int version)
		{
		}

		public int FillMatchItemByGridTemplate(int tid, List<int> container = null)
		{
			return 0;
		}

		public int GetExpItemByCount(int count)
		{
			return 0;
		}

		public int GetBonusItemByCount(int id, int count)
		{
			return 0;
		}

		public ItemComConfig GetItemComConfigRaw(int id)
		{
			return null;
		}

		public ItemComConfig GetItemComConfig(int id)
		{
			return null;
		}

		public MergeItemCategory GetCategoryConfigRaw(int id)
		{
			return null;
		}

		public MergeItemCategory GetCategoryConfig(int id)
		{
			return null;
		}

		public MergeFixedOutput GetFixedOutputConfig(int categoryId)
		{
			return null;
		}

		public MergeFixedItem GetFixedOutputByItemConfig(int itemId)
		{
			return null;
		}

		public MergeRule GetMergeRuleByItem(int itemId)
		{
			return null;
		}

		public int GetNextLevelItemId(int curItemId, int nextLevel = 1)
		{
			return 0;
		}

		public MergeItemCategory GetCategoryConfigByItemId(int itemId)
		{
			return null;
		}

		public void OnItemShow(int itemId)
		{
		}

		public bool _FillUnlockPreItemList(int itemId, List<int> container)
		{
			return false;
		}

		public bool IsLastItemInChain(int itemId)
		{
			return false;
		}

		public int GetMaxUnlockLevelItemIdInChain(int chainId, int limitLevel = 0, bool useDefault = true)
		{
			return 0;
		}

		public int GetChainItemIdByLevel(int chainId, int targetLevel, out bool isLevelMax)
		{
			isLevelMax = default(bool);
			return 0;
		}

		public bool GetClampedChainItemIdByLevel(int chainId, int targetLevel, out int resultId)
		{
			resultId = default(int);
			return false;
		}

		public bool TryIncMergeTestSpawnBubbleCount(int tid)
		{
			return false;
		}

		public int GetItemCategoryId(int itemId)
		{
			return 0;
		}

		public Dictionary<int, int> GetItemCategoryMap()
		{
			return null;
		}

		public void GetItemCategoryIdAndLevel(int itemId, out int cid, out int itemLevel)
		{
			cid = default(int);
			itemLevel = default(int);
		}

		public GalleryCategory GetGalleryCategoryConfigById(int id)
		{
			return null;
		}

		public IDictionary<int, ObjTool> GetToolConfigMap()
		{
			return null;
		}

		public ObjTool GetToolBasicConfig(int id)
		{
			return null;
		}

		public ObjMergeTool GetToolMergeConfig(int id)
		{
			return null;
		}

		public MergeMixCost GetMergeMixCostConfig(int id)
		{
			return null;
		}

		public MergeTapCost GetMergeTapCostConfig(int id)
		{
			return null;
		}

		public bool TryGetDropLimitItemConfig(int tid, out DropLimitItem cfg)
		{
			cfg = null;
			return false;
		}

		public bool TryGetTrigAutoDetailConfig(int detailId, out ComTrigAutoDetail cfg)
		{
			cfg = null;
			return false;
		}

		public IList<int> GetMergeTapCostOutPuts(int itemId)
		{
			return null;
		}

		public OrderBoxDetail GetOrderBoxDetailConfig(int id)
		{
			return null;
		}

		public OrderDiff GetOrderDiffConfig(int id)
		{
			return null;
		}

		public OrderReward GetOrderRewardConfig(int id)
		{
			return null;
		}

		public OrderCategory GetOrderCategoryConfig(int id)
		{
			return null;
		}

		public bool CheckFpIdInOrderApiWhiteList(string fpid)
		{
			return false;
		}

		public ItemComConfig _GetOrCreateItemConfig(int id, bool create)
		{
			return null;
		}

		public void _ItemIdToMask(int tid, out int idx, out ulong mask)
		{
			idx = default(int);
			mask = default(ulong);
		}

		public int _MaskToItemId(List<int> container, int idx, ulong mask)
		{
			return 0;
		}

		public bool _ValidateItemSourceFixedOutput(ComMergeTapSource config)
		{
			return false;
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
