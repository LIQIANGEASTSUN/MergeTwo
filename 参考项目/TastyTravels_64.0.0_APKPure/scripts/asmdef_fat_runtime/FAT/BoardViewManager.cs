using System;
using System.Collections.Generic;
using Config;
using EL;
using FAT.Merge;
using UnityEngine;
using fat.rawdata;

namespace FAT
{
	public class BoardViewManager : Singleton<BoardViewManager>
	{
		[NonSerialized]
		public int width;

		[NonSerialized]
		public int height;

		[NonSerialized]
		public List<IMergeBoard> mAllCompList;

		[NonSerialized]
		public int mSelectedItemId;

		[NonSerialized]
		public Item mItemInDrag;

		[NonSerialized]
		public Item mItemTryToDrag;

		[NonSerialized]
		public Item mItemInteractTarget;

		[NonSerialized]
		public MatchChecker mChecker;

		[NonSerialized]
		public MergeHelper mMergeHelper;

		[NonSerialized]
		public Dictionary<int, int> mActiveBubbleCache;

		[NonSerialized]
		public Dictionary<int, int> mActiveBubbleFrozenCache;

		[NonSerialized]
		public Dictionary<int, int> mActiveItemCache;

		[NonSerialized]
		public Dictionary<int, int> mInSandItemCache;

		[NonSerialized]
		public Dictionary<int, int> mActiveBonusCache;

		[NonSerialized]
		public Dictionary<int, int> mActiveChestCache;

		[NonSerialized]
		public Dictionary<int, int> mActiveAutoSourceCache;

		[NonSerialized]
		public Dictionary<int, int> mActiveTapSourceCache;

		[NonSerialized]
		public int mCDItemNum;

		[NonSerialized]
		public bool mIsDirty;

		[NonSerialized]
		public bool mIsBgDirty;

		[NonSerialized]
		public bool mIsLevelDirty;

		[NonSerialized]
		public bool mPauseBoard;

		[NonSerialized]
		public Coroutine mCoAppearEffect;

		[NonSerialized]
		public float mLastActiveTime;

		[NonSerialized]
		public int mOverrideDragItemId;

		[NonSerialized]
		public int mOverrideDragItemRuntimeId;

		[NonSerialized]
		public MergeHelper.MergeAction mOverrideDragBehaviour;

		[NonSerialized]
		public MBBoardView view;

		public ItemEffectType filterEffectType;

		[NonSerialized]
		public RectTransform moveRootOverride;

		[NonSerialized]
		public Vector2 beginScreenOffset;

		[NonSerialized]
		public Vector2 beginDragBoardOffset;

		public MatchChecker checker => null;

		public Vector2 inventoryEntryScreenPos { get; set; }

		public Dictionary<int, int> ActiveBonusCache => null;

		public Dictionary<int, int> ActiveChestCache => null;

		public Dictionary<int, int> ActiveAutoSourceCache => null;

		public Dictionary<int, int> ActiveTapSourceCache => null;

		public bool IsLevelDirty
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public Item mCurrentBoardInfoItem { get; set; }

		public MBBoardView boardView => null;

		public MergeWorld world { get; set; }

		public Board board { get; set; }

		public bool IsReady => false;

		public bool IsFiltering => false;

		public Func<Item, bool> usable_check_filter { get; set; }

		public Func<Item, bool> ignore_filter { get; set; }

		public RectTransform moveRoot => null;

		public void OnBoardEnter(MergeWorld w, MergeWorldTracer tracer, MBBoardView v)
		{
		}

		public void OnBoardLeave()
		{
		}

		public void _BindAllComponent()
		{
		}

		public void _RegisterComponent(IMergeBoard board)
		{
		}

		public void _SetupComponent()
		{
		}

		public void _CleanupComponent()
		{
		}

		public void SetMoveRootOverride(RectTransform rt)
		{
		}

		public void RefreshInventoryEntryScreenPos(Vector2 sp)
		{
		}

		public void OnInventoryClose()
		{
		}

		public void SetPause(bool b)
		{
		}

		public bool IsDragItem()
		{
			return false;
		}

		public bool IsUserDragging()
		{
			return false;
		}

		public float GetSecondsSinceLastUserActive()
		{
			return 0f;
		}

		public bool IsItemInDrag(Item item)
		{
			return false;
		}

		public bool IsItemCanPutInInventory()
		{
			return false;
		}

		public void OnUserActive()
		{
		}

		public void OnBeginDragAtTile(int x, int y, Vector2 pointerScreenPos)
		{
		}

		public void _TryGrabItem(int coordX, int coordY, Vector2 offset, Vector2 pointerScreenPos, Item item)
		{
		}

		public (Item, MergeHelper.MergeAction) _CheckDragBehaviour(Vector2 pointerScreenPos)
		{
			return default((Item, MergeHelper.MergeAction));
		}

		public void OnDrag(Vector2 offset, Vector2 pointerScreenPos)
		{
		}

		public void OnEndDrag(Vector2 pointerScreenPos)
		{
		}

		public void _OnDragFinish()
		{
		}

		public void OnClickAtTile(int x, int y)
		{
		}

		public void _UseSkillToTarget(Item skillItem, Item targetItem)
		{
		}

		public void _ApplyFilter()
		{
		}

		public void _RemoveFilter()
		{
		}

		public bool _IsEdible(Item food)
		{
			return false;
		}

		public void _Setup_Filter_For_Skill(ItemSkillComponent skill)
		{
		}

		public void _Setup_Filter_For_Feed()
		{
		}

		public void _Setup_Filter_Feed(ItemEffectType effectType = ItemEffectType.Filter_Feed)
		{
		}

		public void _Setup_Filter_Skill_Default(ItemEffectType effectType = ItemEffectType.Filter_Scissor)
		{
		}

		public bool _TryPutInInventory(Item item)
		{
			return false;
		}

		public void OnItemChangeState(Item item, ItemLifecycle state)
		{
		}

		public void OnItemFlagChange()
		{
		}

		public void SetCheckerMask(Vector2Int coord)
		{
		}

		public void UnsetCheckerMask(Vector2Int coord)
		{
		}

		public void SetCurrentBoardInfoItem(Item item)
		{
		}

		public Item GetCurrentBoardInfoItem()
		{
			return null;
		}

		public int GetCurrentBoardInfoItemTid()
		{
			return 0;
		}

		public void RefreshInfo(int x, int y)
		{
		}

		public Vector2 ReAnchorItemForDrag(RectTransform itemView, Vector2 targetScreenPos)
		{
			return default(Vector2);
		}

		public void ReAnchorItemForMove(Transform itemView)
		{
		}

		public void ReAnchorItemForPair(Transform itemView)
		{
		}

		public void HoldItemIfNotInMoveLayer(Item item)
		{
		}

		public void HoldItem(int x, int y, RectTransform itemView)
		{
		}

		public void ReleaseItem(int id)
		{
		}

		public MBItemView GetItemView(int id)
		{
			return null;
		}

		public MBItemView TakeoverItem(int id)
		{
			return null;
		}

		public void ShowUnlockNormalEffect(Vector2Int coord)
		{
		}

		public void ShowUnlockLevelEffect(Vector2Int coord, AssetConfig res, int level)
		{
		}

		public GameObject ShowInstantEffect(Vector2Int coord, string key, float lifetime)
		{
			return null;
		}

		public void AddStateEffect(Vector2Int coord, string eff)
		{
		}

		public void RemoveStateEffect(Vector2Int coord, string eff)
		{
		}

		public void ShowSellItemReward(Item item, RewardCommitData reward)
		{
		}

		public MBBoardItemHolder GetBoardItemHolder()
		{
			return null;
		}

		public void _HideSelector()
		{
		}

		public void _RefreshInfo(int x, int y)
		{
		}

		public void _SetSelectItem(Item item)
		{
		}

		public void _SetDeselectItem()
		{
		}

		public void _CancelSelect()
		{
		}

		public void CancelSelectCurItem()
		{
		}

		public void _TryAddInteractableHintToTarget(Item item)
		{
		}

		public void _TryRemoveInteractableHint()
		{
		}

		public void _ShowMergeHighlight(Item item)
		{
		}

		public void _HideMergeHighlight()
		{
		}

		public void _ShowInventoryIndicator()
		{
		}

		public void _HideInventoryIndicator()
		{
		}

		public void _ShowInventoryPutInFeedback()
		{
		}

		public void SyncBoard(float delta)
		{
		}

		public void ForceRefreshCache()
		{
		}

		public void _CacheBoardItem()
		{
		}

		public Item FindItem(int tid, bool isBubble)
		{
			return null;
		}

		public Item FindBoostItem()
		{
			return null;
		}

		public bool HasBubbleItem(ItemBubbleType type, int tid, int num)
		{
			return false;
		}

		public int GetBubbleFrozenItemCount()
		{
			return 0;
		}

		public int GetFirstFrozenItemId()
		{
			return 0;
		}

		public int GetFirstBalloonItemId()
		{
			return 0;
		}

		public bool HasInSandItem(int tid, int num)
		{
			return false;
		}

		public bool HasActiveItem(int tid, int num)
		{
			return false;
		}

		public bool HasClickSourceReviving(int tid)
		{
			return false;
		}

		public bool HasClickSourceCanOutput(int tid)
		{
			return false;
		}

		public void AllAutoGuideNeedItem(List<Item> merge, List<Item> auto, List<Item> bonus, List<Item> tap)
		{
		}

		public bool CheckCDItemNumEnough(int num)
		{
			return false;
		}

		public void Update(float dt)
		{
		}

		public void _SyncBoard(int milliSec)
		{
		}

		public void _CalcScaleCoe()
		{
		}

		public void OverrideScaleCoe(float scale)
		{
		}

		public void CalcScaleCoe()
		{
		}

		public void _CalcSize()
		{
		}

		public void CalcSize()
		{
		}

		public void _CalcOrigin()
		{
		}

		public void _CalcOriginGuide()
		{
		}

		public void CalcOrigin()
		{
		}

		public void CalcOriginGuide()
		{
		}

		public void RefreshScreenLayoutCache()
		{
		}

		public void OnScreenStateChanged(ScreenState state)
		{
		}

		public bool IsOriginConsistentWithBoard(float epsilon = 0.5f)
		{
			return false;
		}

		public void _OnItemStateChange(Item item, ItemStateChangeContext context)
		{
		}

		public void _OnItemEnter(Item item)
		{
		}

		public void _OnItemLeave(Item item)
		{
		}

		public void _OnItemEvent(Item item, ItemEventType eventType)
		{
		}

		public void _OnItemMove(Item item)
		{
		}

		public void _OnItemComponentChange(Item item)
		{
		}

		public void _OnLackOfEnergy()
		{
		}

		public void _OnFeatureClicked(Item item, FeatureEntry entry)
		{
		}

		public void _OnChoiceBoxWaiting(Item item, List<int> choices, Func<int, bool> onConfirm)
		{
		}

		public void _OnItemSpawnLoginGift(ItemSpawnContext context, Item item)
		{
		}

		public void _OnCollectBonus(MergeWorld.BonusClaimRewardData context)
		{
		}

		public void _OnCollectTapBonus(MergeWorld.BonusClaimRewardData context)
		{
		}

		public Vector3 _CoordToWorldPos(Vector2Int coord)
		{
			return default(Vector3);
		}

		public Vector3 CoordToWorldPos(Vector2Int coord)
		{
			return default(Vector3);
		}

		public int _CdItemNum()
		{
			return 0;
		}

		public void _OnUseTimeSkipper(Item item)
		{
		}

		public void _OnUseTimeScaleSource(Item item)
		{
		}

		public void _OnJumpCDBegin(Item source)
		{
		}

		public void _OnJumpCDEnd()
		{
		}

		public void _OnTokenMultiBegin(Item source)
		{
		}

		public void _OnTokenMultiEnd()
		{
		}

		public void Guide_OverrideDraggableItemBehaviour(int tid = 0, int runtimeId = 0, MergeHelper.MergeAction act = MergeHelper.MergeAction.None)
		{
		}

		public void _OnMessageFocused(float deltaSec)
		{
		}

		public void _OnMessageLevelChange(int oldLevel)
		{
		}

		public void _OnMessageOrderCompleted(List<IOrderData> changedOrders, List<IOrderData> newlyAddedOrders)
		{
		}

		public void _OnMessageOrderDisplayChange()
		{
		}

		public void _OnMessageFlyScore((Item item, ScoreEntity.ScoreFlyRewardData r, string prefab) data)
		{
		}

		public void RegisterBonusCache(int id, int tid)
		{
		}

		public void UnregisterBonusCache(int id)
		{
		}

		public void RegisterChestCache(int id, int tid)
		{
		}

		public void UnregisterChestCache(int id)
		{
		}

		public void RegisterAutoSourceCache(int id, int tid)
		{
		}

		public void UnregisterAutoSourceCache(int id)
		{
		}

		public void RegisterTapSourceCache(int id, int tid)
		{
		}

		public void UnregisterTapSourceCache(int id)
		{
		}
	}
}
