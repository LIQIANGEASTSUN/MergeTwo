using System;
using IFix.Core;
using UnityEngine;
using UnityEngine.UI;

public class MergePackageUnit : MonoBehaviour
{
	[NonSerialized]
	public MergeBoardEnum _boardId;

	[NonSerialized]
	public bool _boardIdSetFlag;

	[NonSerialized]
	public MergePackageUnitState state1;

	[NonSerialized]
	public MergePackageUnitState state2;

	[NonSerialized]
	public MergePackageUnitState state3;

	[NonSerialized]
	public MergePackageUnitState state4;

	[NonSerialized]
	public Image icon;

	[NonSerialized]
	public Transform masterCardIcon;

	[NonSerialized]
	public Button useBtn;

	[NonSerialized]
	public Button tipBtn;

	[NonSerialized]
	[NonSerialized]
	public int index;

	[NonSerialized]
	[NonSerialized]
	public MergePackageUnitType mType;

	[NonSerialized]
	[NonSerialized]
	public TableMergeItem mergeItemConfig;

	[NonSerialized]
	public Transform Bg;

	[NonSerialized]
	public Transform BgBuilding;

	public MergeBoardEnum BoardId => default(MergeBoardEnum);

	public void SetBoardId(MergeBoardEnum boardId)
	{
	}

	public void Awake()
	{
	}

	public void OnDestroy()
	{
	}

	[IDTag(0)]
	public void SetItemInfomation(TableMergeItem itemConfig, int choosedIndex, MergePackageUnitType type, int parentId = 0, int count = 0)
	{
	}

	[IDTag(1)]
	public void SetItemInfomation(int itemId, MergePackageUnitType type)
	{
	}

	public void SetNameText(string txt)
	{
	}

	public void SetLevelText(string txt)
	{
	}

	public void ClearStatus()
	{
	}

	public void SetTaskStatus(int curCount, int needCount)
	{
	}

	public void SetTaskText(string msg)
	{
	}

	public void SetBagCost(int type, int cost)
	{
	}

	public void OnClickItem()
	{
	}

	public void UseBagItem(int emptyIndex)
	{
	}

	public void UseBuildBagItem(int emptyIndex)
	{
	}

	public void MergeInfoProductEvent(BaseEvent e)
	{
	}
}
