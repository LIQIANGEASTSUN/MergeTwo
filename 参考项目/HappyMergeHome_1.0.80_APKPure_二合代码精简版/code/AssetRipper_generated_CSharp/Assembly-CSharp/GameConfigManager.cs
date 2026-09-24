using System;
using System.Collections.Generic;

public class GameConfigManager : Manager<GameConfigManager>
{
	public List<TableMergeItem> MergeItemList;

	public List<TableMergeItem2> MergeItemList2;

	public List<TableMergeLine> MergeLineList;

	public List<TableBoardGrid> BoardGridList;

	public List<TableBoardGrid2> BoardGridList2;

	public List<TableLevel> LevelList;

	public List<TableBag> BagList;

	public List<TableBagBuilding> BagBuildingList;

	public List<TableIceGlobalConfig> IceGlobalConfigs;

	public List<TableIceItemConfig> IceItemConfigs;

	[NonSerialized]
	public Dictionary<int, TableMergeItem> mergeItemDir;

	[NonSerialized]
	public Dictionary<int, TableMergeItem> mergeItemDir2;

	[NonSerialized]
	public Dictionary<int, TableMergeLine> mergeLineDir;

	[NonSerialized]
	public Dictionary<int, List<TableMergeItem>> mergeInLineDir;

	[NonSerialized]
	public Dictionary<int, List<TableMergeItem>> mergeSourceItems;

	[NonSerialized]
	public Dictionary<int, TableChoiceChest> choiceChestDir;

	public List<TableChoiceChest> ChoiceChestList;

	public bool InitFlag;

	public void InitConfigs()
	{
	}

	public void InitTable<T>(List<T> tableData, Dictionary<int, T> config) where T : TableBase
	{
	}

	public TableMergeItem GetItemConfig(int id)
	{
		return null;
	}

	public TableMergeLine GetMergeLine(int id)
	{
		return null;
	}

	public List<TableMergeItem> GetMergeInLineItems(int inLine)
	{
		return null;
	}

	public List<int> GetMergeReLine(TableMergeItem mergeConfig)
	{
		return null;
	}

	public List<TableMergeItem> GetMergeResources(int resourceLine)
	{
		return null;
	}

	public TableChoiceChest GetChoiceChest(int id)
	{
		return null;
	}

	public TableIceGlobalConfig GetIceGlobalConfig()
	{
		return null;
	}

	public List<TableIceItemConfig> GetIceItemConfigs()
	{
		return null;
	}
}
