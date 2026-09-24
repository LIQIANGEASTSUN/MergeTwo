using System;
using System.Collections.Generic;
using MergePuzzle;
using MergePuzzle.ItemRewardBackup;
using MergePuzzle.RecurringEvents;
using Paxie.MergeStudio.Features.MiniBoard;
using Paxie.MergeStudio.GameCore.Gameplay.Board.Items;
using UnityEngine.Events;

namespace Paxie.MergeStudio.Features.RecurringEvents.MiniBoardProgression
{
	public class MiniBoardProgressionHandler : MiniBoardHandler<MiniBoardProgressionConfig>
	{
		[NonSerialized]
		public Dictionary<int, float> _itemProbabilityCache;

		public MiniBoardProgressionConfig MiniBoardProgressionConfig => null;

		public MiniBoardProgressionAddressable MiniBoardProgressionAddressable => null;

		public MiniBoardProgressionAssetContainer MiniBoardProgressionAssetContainer => null;

		public MiniBoardProgressionEventData MiniBoardProgressionEventData => null;

		public MiniBoardProgressionData MiniBoardProgressionBoardData => null;

		public MiniBoardProgressionExtraEntity MiniBoardProgressionExtraEntity { get; set; }

		public MiniBoardProgressionContainer MiniBoardProgressionContainer { get; set; }

		public override string GetScrollableFeatureParams(int point)
		{
			return null;
		}

		public void InitializeItemProbabilityCache()
		{
		}

		public sealed override void SetSpawnerList()
		{
		}

		public override void OnEnergyConsumed(ISpawnerEnergyConsumeBaseHandler.EnergyConsumeResult energyConsumeResult)
		{
		}

		public bool CheckCurrencySpawn(float probability)
		{
			return false;
		}

		public int GetSpawnerEnergyConsumeAmount()
		{
			return 0;
		}

		public void SetSpawnerEnergyConsumeAmount(int energyConsumeAmount)
		{
		}

		public MiniBoardProgressionHandler(BoardEntity boardEntity, BoardData boardData, MiniBoardProgressionConfig config)
		{
		}

		public override void LoadSounds()
		{
		}

		public override MiniBoardContainer GetMiniBoardContainer()
		{
			return null;
		}

		public override MiniBoardAssetContainerBase GetMiniBoardAssetContainer()
		{
			return null;
		}

		public override MiniBoardData GetMiniBoardData()
		{
			return null;
		}

		public override MiniBoardRemoteParticleData GetMiniBoardRemoteParticleData()
		{
			return null;
		}

		public override KiteMiniBoardInitialBoardModel GetInitialBoardModel()
		{
			return null;
		}

		public override List<KiteMiniBoardItemReward> GetInitialActiveRewardList()
		{
			return null;
		}

		public override IMiniBoardEntity GetMiniBoardEntity()
		{
			return null;
		}

		public override MiniBoardAreaEntity GetMiniBoardAreaEntity()
		{
			return null;
		}

		public override PerishableSpawnerEntity GetPerishableSpawnerEntity(int setID)
		{
			return null;
		}

		public BoardItemData GetFinishedBoardTargetItemData()
		{
			return null;
		}

		public int GetTargetItemLevel()
		{
			return 0;
		}

		public int GetSeenMaxLevelItem()
		{
			return 0;
		}

		public bool IsLastBoard()
		{
			return false;
		}

		public override string GetSpawnerConsumeItemReward()
		{
			return null;
		}

		public override void ClaimMiniBoardItemsOnBoardTaskDone(BoardTaskItem boardTaskItem, int taskCoin)
		{
		}

		public override void OnMainPopupBoardOpened()
		{
		}

		public override void SetSavedEntity(RecurringEventEntity savedEntity)
		{
		}

		public override void CreateEntity()
		{
		}

		public void CreateEntityFromScratch()
		{
		}

		public void TryCreateAdditionalEntityValues()
		{
		}

		public override void ResetEntity()
		{
		}

		public override void Disable()
		{
		}

		public void TryProcessMaxLevelItemSeen(int level, UnityAction<int> onLevelSet)
		{
		}

		public void TryProcessBoardLevelUp(Action<bool> indexIncreased)
		{
		}

		public void OnMaxLevelItemChanged()
		{
		}

		public override void OnTimeoutFinish()
		{
		}

		public override void OnMaxReachedFinish()
		{
		}

		public override void ShowRewardsArea()
		{
		}

		public override RecurringEventInfoPopupControllerBase GetRecurringEventInfoPopupController()
		{
			return null;
		}

		public void OpenBoardNoticePopup()
		{
		}

		public void OpenBoardCongratsPopup()
		{
		}

		public override void FinishInitialize()
		{
		}

		public void InitPerishableSpawnerAdaptors()
		{
		}

		public MiniBoardProgressionLocalConfig GetLocalConfig()
		{
			return null;
		}

		public void OnFinishTryGetCurrencyConversion()
		{
		}

		public CollectableReward GetCurrencyConversionCollectableReward()
		{
			return null;
		}

		public override void UpdateEntityOnClaim(bool isUpdateUI = true)
		{
		}

		public override void InitializeItemRewardConversion()
		{
		}

		public override void ItemRewardConvertUpdated(ItemRewardConvertEvent.FeatureStatusUpdated e)
		{
		}
	}
}
