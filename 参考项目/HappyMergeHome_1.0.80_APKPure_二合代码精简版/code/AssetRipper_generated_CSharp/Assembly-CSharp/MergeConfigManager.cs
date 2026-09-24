using System;
using System.Collections.Generic;
using DragonU3DSDK.Storage;
using IFix.Core;
using UnityEngine.U2D;

public class MergeConfigManager : Manager<MergeConfigManager>
{
	public class ConfigTemplate
	{
		public List<TableMergeItem> ItemConfig;

		public List<TableBoardGrid> BoardGrid;
	}

	[NonSerialized]
	public List<TableMergeItem> tempProductParent;

	[NonSerialized]
	public SpriteAtlas m_mergeicon;

	[NonSerialized]
	public Dictionary<int, int> maxLevelIds;

	[NonSerialized]
	public List<int> _recordEnergyTorrentList;

	[NonSerialized]
	public List<int> _secondOutLineList;

	public SpriteAtlas mergeIcon => null;

	public override void InitImmediately()
	{
	}

	public void InitConfigs()
	{
	}

	public TableMergeItem GetLastLevelItemConfig(int id)
	{
		return null;
	}

	public bool IsMaxEnergy(TableMergeItem item)
	{
		return false;
	}

	public int GetItemLevel(int id)
	{
		return 0;
	}

	public int GetEnergyTorrentPower(int mergeId)
	{
		return 0;
	}

	public void DebugSetEnergytorrent(int two, int four)
	{
	}

	public bool IsSecondOutLine(int mergeId)
	{
		return false;
	}

	public int GetOneOutput(TableMergeItem mergeItemConfig)
	{
		return 0;
	}

	public int GetOneOutputByLimit(TableMergeItem mergeItemConfig)
	{
		return 0;
	}

	public int GetOneOutputByLimitDynamicPower(TableMergeItem mergeItemConfig, int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetOneTimeOutput(TableMergeItem mergeItemConfig)
	{
		return 0;
	}

	public bool IsCanShowStar(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsCanProductItem(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	public bool IsEnergyTorrentProduct(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsCanProductItem(int id)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsEnergyProductItem(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	public bool IsProductItem(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsEnergyProductItem(int id)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsTimeProductItem(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsTimeProductItem(int id)
	{
		return false;
	}

	public bool IsDeathProductItem(TableMergeItem mergeItemConfig, StorageMergeItem storageMergeItem, bool checkOut = true)
	{
		return false;
	}

	public bool IsLimitNoCdProductItem(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsDeathBoxItem(TableMergeItem mergeItemConfig, StorageMergeItem storageMergeItem)
	{
		return false;
	}

	public void InitMaxLevelId()
	{
	}

	public bool IsMaxLevel(int id)
	{
		return false;
	}

	public bool IsCanMergeItem(int id)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsDeathBoxItem(int id, StorageMergeItem storageMergeItem)
	{
		return false;
	}

	public ActiveCostType GetActiveCostType(int id)
	{
		return default(ActiveCostType);
	}

	[IDTag(1)]
	public bool IsStoreItem(int id)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsStoreItem(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	public bool IsTimeStoreItem(TableMergeItem mergeItemConfig)
	{
		return false;
	}

	public List<TableMergeItem> GetProductParent(int id)
	{
		return null;
	}

	public int GetMergeLineById(int id)
	{
		return 0;
	}

	public TableMergeLine GetMergeLine(int id)
	{
		return null;
	}

	public TableMergeLine GetMergeLineByLine(int line)
	{
		return null;
	}

	public int GetMergeLineProductItemId(int id, int productCount)
	{
		return 0;
	}

	public MergeItemType GetItemType(int id)
	{
		return default(MergeItemType);
	}

	public bool IsMagicWand(int id)
	{
		return false;
	}

	public bool IsOmnipoten(int id)
	{
		return false;
	}

	public bool IsSplit(int id)
	{
		return false;
	}

	public TableMergeItem GetXpItem(int level = 1)
	{
		return null;
	}

	public bool IsOpenRvSpeedUp(int id)
	{
		return false;
	}

	public bool IsCanOmnipoten(TableMergeItem item)
	{
		return false;
	}

	public bool IsCanSplit(int id)
	{
		return false;
	}

	public TableMergeItem GetLevelItem(int type, int level = -1)
	{
		return null;
	}

	public bool IsHaveGalleryAwards(int id)
	{
		return false;
	}

	public void _003C_003EiFixBaseProxy_InitImmediately()
	{
	}
}
