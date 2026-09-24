using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using MergePuzzle.Board.Particle;
using MergePuzzle.Item.Creation;
using Paxie;
using Paxie.MergeStudio.GameCore.Gameplay.Board;
using UnityEngine;
using UnityEngine.Events;

namespace MergePuzzle
{
	public class BoardEvent
	{
		public struct Move : IEvent
		{
			public ItemController Item;

			public CellController Cell;
		}

		public struct RevertMove : IEvent
		{
			public ItemController Item;

			public bool ApplyScaleDownAnim;
		}

		public struct BubbleTimeFinish : IEvent
		{
			public ItemController Item;

			public bool SelectCell;

			public bool BubblePin;
		}

		public struct BubbleDestroyed : IEvent
		{
			public ItemController Item;
		}

		public struct JellyDestroyed : IEvent
		{
			public ItemController Item;
		}

		public struct PreMergeParticleActive : IEvent
		{
			public ItemController ItemController;
		}

		public struct InventoryParticleActive : IEvent
		{
			public bool IsActive;
		}

		public struct AnimationLoopException : IEvent
		{
			public Exception Exception;
		}

		public struct PickBoxItemSelection : IEvent
		{
			public ItemController Item;

			public BoardItemData NewItemData;
		}

		public struct MergeStart : IEvent
		{
			public ItemController Item1;

			public ItemController Item2;

			public BoardItemData SpawnedItem;
		}

		public struct Merge : IEvent
		{
			public ItemController Item1;

			public ItemController Item2;

			public BoardItemData SpawnedItem;
		}

		public struct MergeCompleted : IEvent
		{
			public ItemController NewItem;
		}

		public struct MergeChargeWithChargeable : IEvent
		{
			public ItemController ChargeItem;

			public ItemController ChargeableItem;
		}

		public struct Swap : IEvent
		{
			public ItemController Item1;

			public ItemController Item2;
		}

		public struct ShowItemInfo : IEvent
		{
			public ItemController SelectedItem;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct ActiveInfoItemChange : IEvent
		{
		}

		public struct ClearSelectedPosition : IEvent
		{
			public bool ResetInfo;

			public bool ItemDestroy;
		}

		public struct InitializeInventory : IEvent
		{
			public BoardEntity BoardEntity;

			public EventEntity EventEntity;

			public bool IsInventoryDisabled;

			public BoardParticleFactory BoardParticleFactory;
		}

		public struct InitializeBoard : IEvent
		{
			public BoardEntity BoardEntity;

			public EventEntity EventEntity;

			public BoardData BoardData;

			public MetaData MetaData;

			public LevelItem LevelData;

			public SpriteRenderer ItemActionArea;

			public bool IsFirstSession;

			public bool IsEventBoard;
		}

		public struct ScrollableItemDestroy : IEvent
		{
			public ScrollableItem ScrollableItem;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct SellItemDestroyed : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct UpdateScrollableUI : IEvent
		{
		}

		public struct UpdateScrollableItemsClickableStatus : IEvent
		{
			public bool Interactable;
		}

		public struct UpdateScrollableAreaScrolltatus : IEvent
		{
			public bool Scrollable;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct RetryAddressableDownload : IEvent
		{
		}

		public struct AddToInventory : IEvent
		{
			public ItemController Item;

			public BoardItemData ItemData;

			public bool DestroyItem;
		}

		public struct RemoveFromInventory : IEvent
		{
			public ItemEntity ItemEntity;

			public BoardItemData ItemData;

			public bool DestroyItem;

			public bool SpawnerInventory;
		}

		public struct RemoveFromRewardUI : IEvent
		{
			public ItemEntity ItemEntity;

			public BoardItemData ItemData;
		}

		public struct RemoveLastRewardFromRewardArea : IEvent
		{
			public BoardItemData ItemData;

			public bool IsEventBoard;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct UpdateLastRewardUIFromRewardArea : IEvent
		{
		}

		public struct InventoryLockedItemClick : IEvent
		{
			public InventoryCell InventoryCell;
		}

		public struct ItemDragStarted : IEvent
		{
			public ItemController ItemController;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct ItemDragStopped : IEvent
		{
		}

		public struct ItemDragging : IEvent
		{
			public ItemController ItemController;
		}

		public struct OpenRateUsPopup : IEvent
		{
			public int TaskNo;

			public bool IsAfterPrePopup;

			public bool IsEnqueuePopup;
		}

		public struct RateUsPrePopupAnswered : IEvent
		{
			public int TaskNo;

			public int Answer;
		}

		public struct BoardItemPositionUpdate : IEvent
		{
			public ItemController Item;

			public ItemController.PositionUpdateType Type;

			public ItemCreationHandler ItemCreationHandler;
		}

		public struct BoardItemPositionUpdateStart : IEvent
		{
			public ItemController Item;

			public ItemController.PositionUpdateType Type;
		}

		public struct OnStateChange : IEvent
		{
			public bool AnimateClockDisappear;
		}

		public struct CollectCollectable : IEvent
		{
			public ItemController Collectable;

			public BoardItemCollectable CollectableData;
		}

		public struct SpawnerSpawn : IEvent
		{
			public ItemController Spawner;

			public BoardItemDefaultSpawner DefaultSpawnerData;

			public BoardItemAutoSpawner AutoSpawnerData;

			public Coordinate TargetPosition;

			public int EnergyConsumeAmount;
		}

		public struct PerishableSpawnerSpawn : IEvent
		{
			public ItemController Spawner;

			public BoardItemPerishableSpawner PerishableSpawnerData;

			public Coordinate TargetPosition;

			public int EnergyConsumeAmount;
		}

		public struct AutoSpawnerSpawn : IEvent
		{
			public ItemController Spawner;

			public int ItemCountToSpawn;

			public BoardItemAutoSpawner AutoSpawnerData;

			public bool NotAnimated;
		}

		public struct ChestSpawnerSpawn : IEvent
		{
			public ItemController Spawner;

			public BoardItemChestSpawner ChestSpawnerData;

			public Coordinate TargetPosition;

			public int EnergyConsumeAmount;
		}

		public struct TaskSupportChestSpawnerSpawn : IEvent
		{
			public ItemController Spawner;

			public BoardItemTaskSupportChest TaskSupportChest;

			public Coordinate TargetPosition;

			public int EnergyConsumeAmount;
		}

		public struct SellItemTrial : IEvent
		{
			public ItemController Item;

			public bool IsNotSellable;
		}

		public struct BoardPositionSelection : IEvent
		{
			public ItemController Item;
		}

		public struct UndoItemSell : IEvent
		{
			public ItemEntity ItemEntity;

			public BoardItemData ItemData;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct ResetInfoArea : IEvent
		{
		}

		public struct BoardItemRemoved : IEvent
		{
			public ItemController Item;

			public bool InventoryAdd;

			public bool IsItemSell;
		}

		public struct BoosterPanelStatusChange : IEvent
		{
			public BoosterItemController BoosterItemController;

			public List<BoardPositionEntity> AvailablePositionsToBoost;

			public bool BoosterActive;

			public bool WaitForBoosterAnimation;

			public BoosterEntity BoosterEntity;
		}

		public struct BoosterBoardAction : IEvent
		{
			public ItemController Item;

			public BoosterItemController BoosterItemController;

			public BoosterEntity BoosterEntity;
		}

		public struct BoosterUsed : IEvent
		{
			public BoosterItemController BoosterItemController;

			public BoardItemData BoardItemData;

			public bool DismissPanel;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct DecreaseBoosterCountEntity : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct BoosterAnimationCompleted : IEvent
		{
		}

		public struct DestroyItemAfterTaskComplete : IEvent
		{
			public Coordinate BoardIndex;

			public bool SaveBoard;

			public bool IsStart;
		}

		public struct CloudDestroy : IEvent
		{
			public UnityAction OnItemsSet;

			public int Level;

			public bool IsSentByTutorial;
		}

		public struct CloudClicked : IEvent
		{
			public bool Destroy;
		}

		public struct ClearBoard : IEvent
		{
			public bool DeleteSpawner;
		}

		public struct DestroyFromBoard : IEvent
		{
			public int SetID;

			public int Level;
		}

		public struct EnergyRefillSuccess : IEvent
		{
			public bool IsEvent;

			public bool IsMeta;

			public int SetID;

			public int Amount;

			public Vector3 Position;

			public bool IsRewardedAd;

			public bool IsTutorial;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct MoveDispersedItems : IEvent
		{
		}

		public struct RewardBoosterArrived : IEvent
		{
			public int ID;

			public bool UpdateAll;
		}

		public struct SendOutPopupPurchaseRewards : IEvent
		{
			public string PackageID;

			public bool IsShopPopup;
		}

		public struct SendOutButtonBoosters : IEvent
		{
			public int BoosterID;
		}

		public struct RemoveItemViaSellComplete : IEvent
		{
			public bool IsNotSellable;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct ItemRemoved : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct ChestCharged : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct TutorialLevelUpEvent : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct TutorialLevelUpActiveFalse : IEvent
		{
		}

		public struct ApplicationPause : IEvent
		{
			public bool PauseStatus;

			public bool IsAdsOpened;

			public long ElapsedTimeInPause;
		}

		public struct ReturnSave : IEvent
		{
			public Exception Exception;

			public Dictionary<string, string> Tmp;

			public long TimeToWrite;

			public bool SkipDiskWrite;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct BoardItemRemoveFinished : IEvent
		{
		}

		public struct SetUnlimitedEnergyDurationWaiting : IEvent
		{
			public long Duration;
		}

		public struct InfoAreaHighlight : IEvent
		{
			public ItemController ItemController;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct ResetSellButton : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct RewardAnimationStartFromXPProgressbar : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct UpdateScrollableAreaFinished : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct FillUpcomingTasksAfterXPRollout : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct OpenRewardsAreaEmpty : IEvent
		{
		}

		public struct ActiveRewardAdded : IEvent
		{
			public int SetID;

			public int Level;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct UpdateUIBooster : IEvent
		{
		}

		public struct ItemBecomeTick : IEvent
		{
			public ItemController Item;
		}

		public struct BoardFeatureTutorialStatusChanged : IEvent
		{
			public bool IsActive;
		}

		public struct ArchiveTaskEjectFinished : IEvent
		{
			public Transform AnimatedTrans;

			public ItemLinkID ItemLinkID;
		}

		public struct RemoveArchiveTask : IEvent
		{
			public ItemLinkID LinkID;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct LockedChestDoubleClick : IEvent
		{
		}
	}
}
