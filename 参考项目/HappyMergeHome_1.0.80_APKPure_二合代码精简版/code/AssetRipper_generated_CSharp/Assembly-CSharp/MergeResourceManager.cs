using System;
using System.Collections.Generic;
using IFix.Core;

public class MergeResourceManager : Singleton<MergeResourceManager>
{
	public enum MergeSourcesType
	{
		None = 0,
		Board = 1,
		Pack = 2,
		Reward = 3,
		Max = 4
	}

	[NonSerialized]
	public MergeSourcesType _mergeSources;

	[NonSerialized]
	public TableMergeItem getResourcesMerge;

	[NonSerialized]
	public int packResIndex;

	[NonSerialized]
	public int rewardResId;

	public TableMergeItem ResourcesTableMerge => null;

	public MergeSourcesType MergeSources
	{
		get
		{
			return default(MergeSourcesType);
		}
		set
		{
		}
	}

	[IDTag(1)]
	public bool HaveMergeItem(int mergeId, MergeBoardEnum boardId, bool checkBox = false)
	{
		return false;
	}

	[IDTag(0)]
	public bool HaveMergeItem(TableMergeItem config, MergeBoardEnum boardId, bool checkBox = false)
	{
		return false;
	}

	[IDTag(1)]
	public void GetMergeResource(int id, MergeBoardEnum boardId, bool containsSelf = false)
	{
	}

	[IDTag(0)]
	public void GetMergeResource(TableMergeItem config, MergeBoardEnum boardId, bool containsSelf = false)
	{
	}

	public void CloseStoreGameView()
	{
	}

	public bool MergeResourceHandle(MergeSourcesType type, int index)
	{
		return false;
	}

	public bool MergeResourceInBoard(List<int> mergeProducts, bool checkCD)
	{
		return false;
	}

	public bool MergeResourceInBoard_Main(List<int> mergeProducts, bool checkCD)
	{
		return false;
	}

	public bool MergeResourceInPack(List<int> mergeProducts, MergeBoardEnum boardId)
	{
		return false;
	}

	public bool MergeResourceInReward(List<int> mergeProducts, MergeBoardEnum boardId)
	{
		return false;
	}

	[IDTag(1)]
	public void CancelMergeResource(MergeSourcesType type, MergeBoardEnum boardId, bool mandatory = false)
	{
	}

	[IDTag(0)]
	public void CancelMergeResource()
	{
	}

	public void InitMergeResourceData()
	{
	}

	public bool HaveMergeItemInBoard(List<int> mergeProducts, bool checkBox = true)
	{
		return false;
	}

	public bool HaveMergeItemInBoard_Main(List<int> mergeProducts, bool checkBox = true)
	{
		return false;
	}

	public bool HaveMergeItemInPack(List<int> mergeProducts, MergeBoardEnum boardId, bool checkBox = true)
	{
		return false;
	}

	public bool HaveMergeItemInReward(List<int> mergeProducts, MergeBoardEnum boardId, bool checkBox = false)
	{
		return false;
	}

	public bool HaveMergeItemInReward_Main(List<int> mergeProducts, MergeBoardEnum boardId, bool checkBox = false)
	{
		return false;
	}

	public bool HaveMergeItemInReward_HappyGo(List<int> mergeProducts, MergeBoardEnum boardId, bool checkBox = false)
	{
		return false;
	}

	public int GetMergeItemInReward_Main(List<int> mergeProducts, MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetMergeItemInReward_HappyGo(List<int> mergeProducts, MergeBoardEnum boardId)
	{
		return 0;
	}

	public List<int> GetMergeIndexsInPack(List<int> mergeProducts, MergeBoardEnum boardId)
	{
		return null;
	}

	public List<int> GetMergeIndexsInBuildPack(List<int> mergeProducts, MergeBoardEnum boardId)
	{
		return null;
	}

	public List<MergeBoard.Grid> GetMergeGridsInBoard_Main(List<int> mergeProducts)
	{
		return null;
	}

	public List<int> GetMergeReLine(TableMergeItem config)
	{
		return null;
	}

	public List<int> GetMergeReLineToChild(TableMergeItem config)
	{
		return null;
	}

	[IDTag(0)]
	public List<int> GetMergeProducts(TableMergeItem config)
	{
		return null;
	}

	[IDTag(1)]
	public List<int> GetMergeProducts(int id)
	{
		return null;
	}
}
