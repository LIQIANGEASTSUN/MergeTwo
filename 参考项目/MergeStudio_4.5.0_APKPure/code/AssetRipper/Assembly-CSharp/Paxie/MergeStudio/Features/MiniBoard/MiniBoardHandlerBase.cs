using System;
using System.Collections.Generic;
using DG.Tweening;
using MergePuzzle;
using MergePuzzle.RecurringEvents;
using Paxie.MergeStudio.Features.Core;
using Paxie.MergeStudio.GameCore.Gameplay.Board.Items;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public abstract class MiniBoardHandlerBase : RecurringEventHandlerBase, ISpawnerEnergyConsumeBaseHandler, IEventPointsOnBoardTaskHandler, IFeatureHandler, IMiniBoardHomeIconHandler, IHomeIconHandler, IBoardItemHandler, IPurchaseRewardAreaHandler
	{
		[NonSerialized]
		public List<IReward> _unclaimedRewards;

		public MiniBoardAddressableBase MiniBoardAddressableBase => null;

		public MiniBoardAssetContainerBase MiniBoardAssetContainer => null;

		public MiniBoardEventData MiniBoardEventData => null;

		public MiniBoardLocalConfigBase LocalConfigBase => null;

		public MiniBoardContainer MiniBoardContainer { get; set; }

		public List<int> SpawnerList { get; set; }

		public SpineAnimationData EventIconSpineAnimationData => null;

		public abstract void SetSpawnerList();

		public abstract void OnEnergyConsumed(ISpawnerEnergyConsumeBaseHandler.EnergyConsumeResult energyConsumeResult);

		public Sprite GetBoardTaskEventSprite()
		{
			return null;
		}

		public GameObject GetAnimationTarget()
		{
			return null;
		}

		public TweenCallback OnAnimationCompleted(AnimatedCollectableController animatedCollectableController)
		{
			return null;
		}

		public int GetBoardTaskEventPoint(int boardTaskCoinReward)
		{
			return 0;
		}

		public bool IsAddEventPointsToActiveTasks(BoardTaskItem boardTaskItem)
		{
			return false;
		}

		public SerializableDictionary<int, BoardItemSetData> GetBoardItemDictionary()
		{
			return null;
		}

		public List<BoardItemData> GetBoardItemSetItems(int setID)
		{
			return null;
		}

		public void AddItemsToItemCollection()
		{
		}

		public bool HasBoardItem()
		{
			return false;
		}

		public bool IsPurchaseRewardItemExists(int setID)
		{
			return false;
		}

		public void AddPurchaseRewardItemToEntity(int setID, int level, string trigger)
		{
		}

		public Sprite GetPurchaseRewardItemSprite(int setID, int level)
		{
			return null;
		}

		public override void StartEventInner()
		{
		}

		public override void FinishInitialize()
		{
		}

		public override void OnReceiveAddressable()
		{
		}

		public virtual void LoadSounds()
		{
		}

		public abstract MiniBoardContainer GetMiniBoardContainer();

		public abstract MiniBoardAssetContainerBase GetMiniBoardAssetContainer();

		public abstract MiniBoardData GetMiniBoardData();

		public abstract MiniBoardRemoteParticleData GetMiniBoardRemoteParticleData();

		public abstract KiteMiniBoardInitialBoardModel GetInitialBoardModel();

		public abstract List<KiteMiniBoardItemReward> GetInitialActiveRewardList();

		public abstract IMiniBoardEntity GetMiniBoardEntity();

		public abstract MiniBoardAreaEntity GetMiniBoardAreaEntity();

		public abstract PerishableSpawnerEntity GetPerishableSpawnerEntity(int setID);

		public abstract string GetSpawnerConsumeItemReward();

		public override bool IsAllRewardsClaimed()
		{
			return false;
		}

		public override void SetCurrentRewardDataOnInitialize()
		{
		}

		public override void OnBoardTaskDoneClicked(BoardTaskItem boardTaskItem)
		{
		}

		public virtual void ClaimMiniBoardItemsOnBoardTaskDone(BoardTaskItem boardTaskItem, int taskCoin)
		{
		}

		public void CreateGameItemFromSpawnerReward(ItemController itemController, int amount)
		{
		}

		public virtual void OnMainPopupBoardOpened()
		{
		}

		public virtual int GetActiveItemCount()
		{
			return 0;
		}

		public override bool CanRewardClaimableOnMeta()
		{
			return false;
		}

		public override bool IsGoingToMaxOut()
		{
			return false;
		}

		public (Sprite, int) GetRewardAreaInfoForNoticePopup()
		{
			return default((Sprite, int));
		}

		public Sprite GetTopMostRewardSprite(MiniBoardRewardEntity rewardEntity, BoardItemData itemData)
		{
			return null;
		}

		public override void SendScrollableItemFirebaseEvent()
		{
		}

		public bool IsOnFinishUnclaimedRewardsExist()
		{
			return false;
		}

		public void OnFinishTryClaimUnclaimedRewards()
		{
		}

		public List<IReward> GetUnclaimedRewardListAggregated()
		{
			return null;
		}

		public List<IReward> GetUnclaimedRewardList()
		{
			return null;
		}

		public (List<IReward>, BaseRewardImage.UIInfo[]) GetUnclaimedRewardDataInfo()
		{
			return default((List<IReward>, BaseRewardImage.UIInfo[]));
		}

		public void SpawnerConsumeAddItemReward(int amount)
		{
		}

		public int CalculatePowerValue(int level)
		{
			return 0;
		}

		public override RecurringEventIconPresenterBase GetBoardIconPrefab()
		{
			return null;
		}

		public override GameObject GetPopupPrefab(EventState eventState)
		{
			return null;
		}

		public override BasePopup GetCurrencyConversionPopup()
		{
			return null;
		}

		public override void ShowGenericPopup(bool isTutorial = false, bool userClicked = false)
		{
		}

		public override void EnqueueGenericPopup(bool isTutorial = false, bool userClicked = false)
		{
		}

		public override void EnqueueTriggerGenericPopup(bool isTutorial = false, bool userClicked = false)
		{
		}

		public override void EnqueueGenericPopupFinishTimeout()
		{
		}

		public override void ShowGenericPopupFinishTimeout()
		{
		}

		public MiniBoardHandlerBase()
		{
		}
	}
}
