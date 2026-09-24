using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Google.Protobuf.Collections;
using IFix.Core;
using UnityEngine;
using fat.rawdata;

namespace FAT.Merge
{
	public class Board
	{
		public struct FindEmptyIndexParam
		{
			public int centerCol;

			public int centerRow;

			public int itemTid;

			public IEnumerable<int> itemTids;

			public ItemComponentBase sourceComponent;

			public Item item;

			public int maxDist;
		}

		[NonSerialized]
		public List<Cloud> mClouds;

		[NonSerialized]
		public List<Area> mAreas;

		[NonSerialized]
		public List<SpeedEffect> mAllEffects;

		[NonSerialized]
		public MergeAdjacentEffectTimeScale mTimeScaleEffect;

		[NonSerialized]
		public MergeGrid[] mGrids;

		[NonSerialized]
		public bool[] mGridsCloud;

		[NonSerialized]
		public int mEmptyGridCount;

		[NonSerialized]
		public int mCols;

		[NonSerialized]
		public int mRows;

		[NonSerialized]
		public int mLongestSideLength;

		[NonSerialized]
		public MergeWorld mParent;

		[NonSerialized]
		public HashSet<int> mLockedPosIdx;

		[NonSerialized]
		public List<int> _lvAreaId;

		[NonSerialized]
		public List<IMergeBonusHandler> mCachedMergeBonusHandlers;

		[NonSerialized]
		public List<int> mCachedEmptyIdx;

		[NonSerialized]
		public bool mInGridWalk;

		public static readonly int[] kSearchRange;

		[NonSerialized]
		public List<IDisposeBonusHandler> mCachedDisposeBonusHandlers;

		[NonSerialized]
		public DisposeBonusContext mDisposeBonusDefaultContext;

		[NonSerialized]
		public List<ISpawnBonusHandler> mCachedSpawnBonusHandlers;

		[NonSerialized]
		public SpawnBonusContext mSpawnBonusDefaultContext;

		public MergeWorld world => null;

		public int boardId { get; set; }

		public int emptyGridCount => 0;

		public Vector2Int size => default(Vector2Int);

		public ReasonString ProduceReason => null;

		public bool EquivalentToMain { get; set; }

		public bool GiftBoxUnable { get; set; }

		public bool LockCloudEmptyGrid { get; set; }

		public event Action<Item, Item, Item> onItemMerge
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, Item> onItemEat
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, Item> onItemConsume
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onItemMove
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, ItemStateChangeContext> onItemStateChange
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, ItemDeadType> onItemDead
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, RewardCommitData> onItemSell
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<ItemSpawnContext, Item> onItemSpawn
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, List<RewardCommitData>> onItemSpawnFly
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, List<RewardCommitData>> onItemSpawnFlySmart
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onItemToInventory
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onItemFromInventory
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onItemComponentChange
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onUseTimeSkipper
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onUseTimeScaleSource
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onJumpCDBegin
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action onJumpCDEnd
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onTokenMultiBegin
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action onTokenMultiEnd
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action onLackOfEnergy
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, FeatureEntry> onFeatureClicked
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item, List<int>, Func<int, bool>> onChoiceBoxWaiting
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onItemLeave
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Item> onItemEnter
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<SpeedEffect> onEffectChange
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public Board(MergeWorld parent)
		{
		}

		public void Reset(int _boardId, int col, int row)
		{
		}

		public void SetBoardParam(bool EquivalentToMain, bool GiftBoxUnable)
		{
		}

		public void Deserialize(IDictionary<int, Item> unusedItem)
		{
		}

		public void WalkAllItem(Action<Item> func)
		{
		}

		public void WalkAllGrid(Action<IMergeGrid> func)
		{
		}

		public void WalkAllArea(Action<Area> func)
		{
		}

		public int GetGridTid(int c, int r)
		{
			return 0;
		}

		public void AddArea(MergeGridArea config)
		{
		}

		public void InitAllCloud()
		{
		}

		public void RefreshCloudInfo(int boardMoveOffset, int curLevel)
		{
		}

		public void FillCurShowCloud(List<Cloud> container)
		{
		}

		public bool CheckHasLockCloud()
		{
			return false;
		}

		public bool CheckAllCloudUnlocked()
		{
			return false;
		}

		public bool HasCloud(int col, int row)
		{
			return false;
		}

		public bool DisposeItem(Item item, ItemDeadType type = ItemDeadType.Common)
		{
			return false;
		}

		public bool DisposeItemInventory(Item item, ItemDeadType type = ItemDeadType.Common)
		{
			return false;
		}

		public Item SpawnItem(int tid, int col, int row, bool locked, bool frozen)
		{
			return null;
		}

		public Item SpawnItemByConf(int col, int row, string itemConf)
		{
			return null;
		}

		public Item SpawnItemMustWithReason(int tid, ItemSpawnContext context, int col, int row, bool locked, bool frozen)
		{
			return null;
		}

		public bool CheckIsEmptyRow(int row, bool onlyCheckDrag = false)
		{
			return false;
		}

		public bool MoveItemToRewardBox(Item item, bool needItemEvent = false)
		{
			return false;
		}

		public bool TryMoveItemToCoord(int oldCol, int oldRow, int newCol, int newRow)
		{
			return false;
		}

		public Item TestSpawnItem(int id)
		{
			return null;
		}

		public Item TestSpawnBox(int id, int c, int r)
		{
			return null;
		}

		public Item FindItemById(int id)
		{
			return null;
		}

		public Item FindAnyItemByConfigId(int confId)
		{
			return null;
		}

		public bool EatSourceEatItem(Item eatSource, Item food)
		{
			return false;
		}

		public bool EatItem(Item eatSource, Item food)
		{
			return false;
		}

		public Item UseEatSource(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return null;
		}

		public Item UseToolSource(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return null;
		}

		public void UseItemToolSourceAll(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
		}

		public static void _PlayToolUseSound(Item item)
		{
		}

		public bool UseTrigAutoSource(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return false;
		}

		public int FindEmptyIdx(ItemComponentBase com, bool willDie)
		{
			return 0;
		}

		public Item TryResolveMagicHourOutput(IOrderData fromOrder, out IOrderData targetOrder)
		{
			targetOrder = null;
			return null;
		}

		public Item TrySpawnItem(int itemId, ItemSpawnReason reason, ItemSpawnContext context)
		{
			return null;
		}

		public bool UseActiveSource(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return false;
		}

		public Item UseSpecialBox(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return null;
		}

		public bool UseChoiceBox(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return false;
		}

		public Item UseClickItemSource(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return null;
		}

		public Item UseClickItemSourceWithConsume(Item item, Item consumeTarget, out ItemUseState state)
		{
			state = default(ItemUseState);
			return null;
		}

		public bool MixSourceConsume(Item item, Item itemToConsume, out ItemUseState state)
		{
			state = default(ItemUseState);
			return false;
		}

		public Item MixSourceProduce(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return null;
		}

		public Item MixSourceExtract(Item item, int targetId, out ItemUseState state)
		{
			state = default(ItemUseState);
			return null;
		}

		public void ChangeItem(Item item, int targetId, ItemDeadType deadType, ItemSpawnContext.SpawnType spawnType)
		{
		}

		public Item UseAutoItemSource(Item item, out ItemUseState state, int maxDist = 1)
		{
			state = default(ItemUseState);
			return null;
		}

		public Item UseChest(Item item, out ItemUseState state)
		{
			state = default(ItemUseState);
			return null;
		}

		public void UseFeatureEntry(Item item)
		{
		}

		public Item UseBox(Item item)
		{
			return null;
		}

		public bool CanUseBonusItem(Item item)
		{
			return false;
		}

		public bool UseBonusItem(Item item)
		{
			return false;
		}

		public bool CanUseTapBonusItem(Item item)
		{
			return false;
		}

		public bool UseTapBonusItem(Item item)
		{
			return false;
		}

		public bool CanUseJumpCDItem(Item item)
		{
			return false;
		}

		public bool UseJumpCD(Item item)
		{
			return false;
		}

		public bool CanUseTokenMultiItem(Item item)
		{
			return false;
		}

		public bool UseTokenMulti(Item item)
		{
			return false;
		}

		public bool CanUseOrderBoxItem(Item item)
		{
			return false;
		}

		public bool UseOrderBox(Item item)
		{
			return false;
		}

		public Item UnleashBubbleItem(Item item)
		{
			return null;
		}

		public Item ConvertItem(Item item, int tid)
		{
			return null;
		}

		public Item KillBubbleItem(Item item, ItemBubbleType type, out int transItemId)
		{
			transItemId = default(int);
			return null;
		}

		public Item KillBubbleItemManualToTarget(Item item, int targetTid)
		{
			return null;
		}

		public Item GetItemByCoord(int col, int row)
		{
			return null;
		}

		public Item FindConsumableItemById(int tid)
		{
			return null;
		}

		public Item FindAnyNormalItemByComponent<T>() where T : ItemComponentBase
		{
			return null;
		}

		public bool PutItemInInventory(Item item)
		{
			return false;
		}

		public bool GetItemFromInventory(int idx, int bagId)
		{
			return false;
		}

		public bool CanMerge(Item src, Item dst)
		{
			return false;
		}

		public Item Merge(Item src, Item dst)
		{
			return null;
		}

		public MoveState GetMoveState(Item item, int newCol, int newRow)
		{
			return default(MoveState);
		}

		public bool MoveItem(Item item, int newCol, int newRow, out MoveState state)
		{
			state = default(MoveState);
			return false;
		}

		public Item SpawnNextRewardItem()
		{
			return null;
		}

		public bool _TryConsumeRewardItemImmediately(int idx, out Item rewardItem)
		{
			rewardItem = null;
			return false;
		}

		public bool _TryUseRewardItemImmediately(Item item)
		{
			return false;
		}

		public Item SpawnRewardItemByIdx(int idx)
		{
			return null;
		}

		public void TriggerItemComponentChange(Item item)
		{
		}

		public bool SellItem(Item item)
		{
			return false;
		}

		public void TriggerUseTimeSkipper(Item item)
		{
		}

		public void UnfrozenItemByGem(Item item)
		{
		}

		public void UnfrozenItem(Item item)
		{
		}

		public void FreezeItem(Item item)
		{
		}

		public bool UndoSellItem()
		{
			return false;
		}

		public void TriggerLevelUnlock()
		{
		}

		public void AddEffect(SpeedEffect effect)
		{
		}

		public void KillEffect(SpeedEffect effect)
		{
		}

		public int CalculateIdxByCoord(int col, int row)
		{
			return 0;
		}

		public void WalkEffects(Action<SpeedEffect> cb)
		{
		}

		public void TriggerEffectChange(SpeedEffect effect)
		{
		}

		public void TriggerItemStatusChange(Item item)
		{
		}

		public int CalcTimeScale(Item item)
		{
			return 0;
		}

		public void TriggerUseTimeScaleSource(Item item)
		{
		}

		public void TriggerJumpCDBegin(Item item)
		{
		}

		public void TriggerJumpCDEnd()
		{
		}

		public void TriggerTokenMultiBegin(Item item)
		{
		}

		public void TriggerTokenMultiEnd()
		{
		}

		public void _TriggerUnlockAround(int col, int row, ItemStateChangeContext context = null)
		{
		}

		public void ForceUnlockCloud(int cloudConfId)
		{
		}

		public void TriggerUnlockAroundCloud(int cloudConfId)
		{
		}

		public Cloud FindCloudByConfId(int cloudConfId)
		{
			return null;
		}

		public void _NotifyItemComponents<T>(Action<T> notifier) where T : class
		{
		}

		public bool CheckHasBonusItem()
		{
			return false;
		}

		public bool CheckHasEmptyIdx()
		{
			return false;
		}

		[IDTag(1)]
		public int _FindEmptyIdx(int centercol, int centerrow, int maxDist = -1)
		{
			return 0;
		}

		[IDTag(0)]
		public int _FindEmptyIdx(FindEmptyIndexParam param)
		{
			return 0;
		}

		public bool _FindEmptyIdxes(List<int> container, FindEmptyIndexParam param)
		{
			return false;
		}

		public void Update(int milli)
		{
		}

		public int _GetNextCheckPointDist(int milli)
		{
			return 0;
		}

		public void UpdateChest(int milli)
		{
		}

		public void _Update(int milli)
		{
		}

		public bool _WalkNearestFirstForEmptyIdxes(List<int> container, FindEmptyIndexParam param, int targetId, IEnumerator<int> targetIds)
		{
			return false;
		}

		public bool _TryAddEmptyIdx(List<int> container, ItemComponentBase sourceComponent, int idx, int targetId)
		{
			return false;
		}

		public bool _ClampRange(ref int min, ref int max, int length)
		{
			return false;
		}

		public void _SetItemPos(Item item, int previousIdx, int idx, int col, int row, bool triggerEvent = true)
		{
		}

		public int _DisposeBonusHandlerSort(IDisposeBonusHandler a, IDisposeBonusHandler b)
		{
			return 0;
		}

		public void _DisposeBonusProcess(Item self, Item target, ItemDeadType deadType = ItemDeadType.Common)
		{
		}

		public void _DisposeItem(Item item, bool triggerEvent = true, ItemDeadType deadType = ItemDeadType.Common)
		{
		}

		public int _SpawnBonusHandlerSort(ISpawnBonusHandler a, ISpawnBonusHandler b)
		{
			return 0;
		}

		public void _SpawnBonusProcess(Item spawnResult, bool isBubble, int energyCost, ItemSpawnReason reason, Item from = null)
		{
		}

		public Item _SpawnItem(int id, int idx, int col, int row, bool locked, bool frozen, bool triggerEvent = true)
		{
			return null;
		}

		public Item _SpawnItemByConf(int idx, int col, int row, string itemConf, bool triggerEvent = true)
		{
			return null;
		}

		public void _OnItemSpawn(ItemSpawnContext cxt, Item item)
		{
		}

		public void _OnItemSpawnFly(Item item, List<RewardCommitData> reward)
		{
		}

		public void _OnItemSpawnFlySmart(Item item, List<RewardCommitData> reward)
		{
		}

		public Item TrySpawnBubbleItem(Item srcItem, int targetId, string spawnTypeStr)
		{
			return null;
		}

		public Item _SpawnBubbleItem(int id, int idx, int col, int row, bool triggerEvent = true)
		{
			return null;
		}

		public Item TrySpawnFrozenItem(Item srcItem, int targetId, long lifeTime)
		{
			return null;
		}

		public Item _SpawnFrozenItem(long lifeTime, int id, int idx, int col, int row, bool triggerEvent = true)
		{
			return null;
		}

		public bool _UnlockItem(int col, int row, ItemStateChangeContext context = null)
		{
			return false;
		}

		public int _CalculateIdxByCoord(int col, int row)
		{
			return 0;
		}

		public bool _CalculateCoordByIdx(int idx, out int col, out int row)
		{
			col = default(int);
			row = default(int);
			return false;
		}

		public void _Reset(int col, int row)
		{
		}

		public void _SetSize(int col, int row)
		{
		}

		public void _TriggerItemStateChange(Item item, ItemStateChangeContext context = null)
		{
		}

		public void _RefreshEmptyGridCount()
		{
		}

		public void _RefreshCloudMark()
		{
		}

		public void _ChangeEmptyGridCount(int delta)
		{
		}

		public bool TryGetLvAreaId(out List<int> id)
		{
			id = null;
			return false;
		}

		public void SetLvAreaID(RepeatedField<int> areaId)
		{
		}
	}
}
