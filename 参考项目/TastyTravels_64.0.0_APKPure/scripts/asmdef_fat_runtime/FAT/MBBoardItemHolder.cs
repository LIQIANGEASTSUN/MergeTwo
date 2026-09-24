using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBBoardItemHolder : MonoBehaviour, IMergeBoard
	{
		[SerializeField]
		public GameObject itemViewPrefab;

		[SerializeField]
		public GameObject itemHolderPrefab;

		[NonSerialized]
		public int width;

		[NonSerialized]
		public int height;

		[NonSerialized]
		public List<RectTransform> mCellList;

		[NonSerialized]
		public RectTransform mRoot;

		[NonSerialized]
		public Vector2 mItemInDragBeginPos;

		[NonSerialized]
		public Vector2Int mItemInDragBeginCoord;

		[NonSerialized]
		public MBItemView mItemInDragView;

		[NonSerialized]
		public int mLastUseFrameCount;

		[NonSerialized]
		public int mUseItemMinIntervalFrame;

		[NonSerialized]
		public float mLastUseTime;

		[NonSerialized]
		public float mUseItemMinIntervalTime;

		[NonSerialized]
		public Dictionary<int, MBItemView> mItemViewDict;

		[NonSerialized]
		public List<Item> mInventorySpawnQueue;

		[NonSerialized]
		public bool mIsClearing;

		public int mRecentSelectedItemId { get; set; }

		public string poolKey { get; set; }

		void IMergeBoard.Init()
		{
		}

		void IMergeBoard.Setup(int w, int h)
		{
		}

		void IMergeBoard.Cleanup()
		{
		}

		public bool CanGrabItem(Item item)
		{
			return false;
		}

		public bool GrabItem(Item item, Vector2 screenPos)
		{
			return false;
		}

		public void OnScreenStateChanged(ScreenState state)
		{
		}

		public void DragItem(Item item, Vector2 offset)
		{
		}

		public bool ClickItem(Item item)
		{
			return false;
		}

		public void ClickGirdReward(int id)
		{
		}

		public void ApplyFilter()
		{
		}

		public void RemoveFilter()
		{
		}

		public void SetSelectedItem(int itemId)
		{
		}

		public bool _UseItem(Item item)
		{
			return false;
		}

		public void MoveBack(Item item)
		{
		}

		public void HoldItem(int x, int y, RectTransform view)
		{
		}

		public void ReleaseItem(int id)
		{
		}

		public MBItemView FindItemView(int id)
		{
			return null;
		}

		public MBItemView TakeoverItem(int id)
		{
			return null;
		}

		public void TapItem(int id, bool isDelayHigh = false)
		{
		}

		public void TimeSkipItem(int id)
		{
		}

		public bool IsItemIdle(int id)
		{
			return false;
		}

		public void SetSelectItem(int id)
		{
		}

		public void SetDeselectItem(int id)
		{
		}

		public bool TryResolveInventorySpawnQueue()
		{
			return false;
		}

		public void _ClearItem()
		{
		}

		public void _FillItem()
		{
		}

		public void ReFillItem()
		{
		}

		public MBItemView _CreateView(Item item)
		{
			return null;
		}

		public void _PrepareGrid()
		{
		}

		public void _ReleaseGrid()
		{
		}

		public RectTransform _Grid(int x, int y)
		{
			return null;
		}

		public void _OnItemEvent(Item item, ItemEventType eventType)
		{
		}

		public void _OnItemMove(Item item)
		{
		}

		public void _OnItemMerge(Item src, Item dst, Item result)
		{
		}

		public void _OnItemSpawn(ItemSpawnContext context, Item item)
		{
		}

		public void _OnItemSpawnFly(Item item, List<RewardCommitData> rewardList)
		{
		}

		public void _OnItemSpawnFlySmart(Item item, List<RewardCommitData> rewardList)
		{
		}

		public void _OnItemDead(Item item, ItemDeadType type)
		{
		}

		public void _OnItemEat(Item item, Item food)
		{
		}

		public void _OnItemConsume(Item item, Item consumeTarget)
		{
		}

		public void _OnItemStateChange(Item item, ItemStateChangeContext context)
		{
		}

		public void _CalcInventory(out int itemNum, out int spaceNum)
		{
			itemNum = default(int);
			spaceNum = default(int);
		}

		public void _OnItemPutIntoInventory(Item item)
		{
		}

		public void _OnItemTakeOutFromInventory(Item item)
		{
		}

		public void _OnItemSell(Item item, RewardCommitData reward)
		{
		}

		public void _OnChestWaitStart(Item item)
		{
		}

		public void _OnChestWaitFinish(Item item)
		{
		}

		public void _OnItemComponentChange(Item item)
		{
		}

		public void _OnUseTimeScaleSource(Item item)
		{
		}
	}
}
