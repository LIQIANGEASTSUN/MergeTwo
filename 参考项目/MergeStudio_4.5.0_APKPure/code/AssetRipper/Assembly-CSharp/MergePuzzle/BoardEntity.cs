using System;
using System.Collections.Generic;
using JetBrains.Annotations;
using MergePuzzle.CouponSystem;
using MergePuzzle.Model;
using MergePuzzle.Tutorial.Core;
using Newtonsoft.Json;
using UnityEngine;

namespace MergePuzzle
{
	[Serializable]
	public class BoardEntity
	{
		public List<BoardPositionEntity> Positions;

		public MetaEntity Meta;

		public UserEntity User;

		public SettingsEntity Settings;

		public InventoryEntity Inventory;

		public BoardTaskEntity BoardTask;

		public SrEntity SrEntity;

		public bool IsInitialized;

		public bool SellUnlocked;

		public List<ItemInfo> SeenItemList;

		public List<ItemInfo> SeenElseWhereItemList;

		public List<ItemInfo> RewardClaimableItemList;

		public List<int> OpenedCloudLevels;

		[JsonProperty]
		[SerializeField]
		public List<int> CompletedTutorialSteps;

		[CanBeNull]
		public List<int> TutorialStepsToExclude;

		public bool HasWaitingRateUsPopup;

		public int ReviewRequestCount;

		public int LastReviewShownTaskNo;

		public int ReviewPrePopupShownCount;

		public int ReviewPrePopupAnswer;

		public SessionSummary SessionSummary;

		public FeatureEntity FeatureEntity;

		public CouponEntity CouponEntity;

		public string Platform;

		public string InstallVersion;

		public long InstallDate;

		public List<EventEntity> BoardEventEntities;

		public AppsflyerEntity AppsflyerEntity;

		public string LastBoardTaskXPConfig;

		public int LastLegacyLevelXPRange;

		public int LastLegacyLevelXPRangeLevel;

		public PopupOffersEntity PopupOffersEntity;

		public int LevelGemGet;

		public int LevelGemSpend;

		public int LevelCoinGet;

		public int LevelCoinSpend;

		public string LastSaveTimestamp;

		public bool IsNewUIPopupShown440;

		public BoardEntity()
		{
		}

		public void ResetLevelGainAndSpends()
		{
		}

		public unsafe ref List<int> GetExcludedTutorialSteps()
		{
			return ref *(List<int>*)null;
		}

		public bool SetLastBoardTaskXPConfig(BalanceBoardTaskConfigModel config)
		{
			return false;
		}

		public HashSet<int> ClearNonSpecialActiveTasksDangerousOperation()
		{
			return null;
		}

		public SrEntity GetSrEntity()
		{
			return null;
		}

		public SeasonPassItemEntity GetSeasonItemEntityByID(int id)
		{
			return null;
		}

		public void ResetSessionSummary()
		{
		}

		public void UpdateSessionAdLoadAnalyticsData(bool isInterstitial, bool isSuccess)
		{
		}

		public void UpdateSessionAdShowAnalyticsData(bool isInterstitial, bool isReady)
		{
		}

		public void UpdateSessionSummary(bool merge, bool spawn, bool remove, bool undo, bool inventory, BoardType boardType, int energyConsume)
		{
		}

		public SessionSummary GetSessionSummary()
		{
			return null;
		}

		public BoardEntity(BoardData boardData)
		{
		}

		public string GetNewShopSuffix()
		{
			return null;
		}

		public ShopEntity GetShopEntity()
		{
			return null;
		}

		public int[] AddRewardsToEntity(EndlessTreasureOfferData offerData, string trigger = "")
		{
			return null;
		}

		public void AddUnlimitedEnergyDuration(long addedDuration)
		{
		}

		public bool ChangeBoardEntity(BoardEntity remoteBoardEntity)
		{
			return false;
		}

		public void CheckBoosterEntityCounts()
		{
		}

		public void IncreaseReviewRequestCount(int reviewLastTaskDone)
		{
		}

		public int GetActiveBoardItemCount(int level, int setID)
		{
			return 0;
		}

		public int GetTotalItemCount(int level, int setID)
		{
			return 0;
		}

		public List<BoardPositionEntity> GetActiveBoardPositions(ItemInfo itemInfo)
		{
			return null;
		}

		public bool IsEmptyCell(BoardPositionEntity pos)
		{
			return false;
		}

		public bool IsItemNull(ItemEntity item)
		{
			return false;
		}

		public bool IsItemExist(ItemEntity itemEntity)
		{
			return false;
		}

		public bool IsBoardFull()
		{
			return false;
		}

		public List<BoardPositionEntity> GetMatchedPositionEntities(List<BoardTaskGoal> goals, bool useCurrentID)
		{
			return null;
		}

		public List<BoardPositionEntity> GetMovableMatchedPositionEntities(int[] setIDs)
		{
			return null;
		}

		public List<BoardPositionEntity> GetNonBoxedMatchedPositionEntities(int[] setIDs)
		{
			return null;
		}

		public void AddToCompletedTutorials(TutorialIndex tutorialIndex, bool saveBoard = false, bool excludeStep = false)
		{
		}

		public void AddToCompletedTutorials(int stepNo, bool saveBoard = false, bool excludeStep = false)
		{
		}

		public bool RemoveFromCompletedTutorials(TutorialIndex tutorialIndex)
		{
			return false;
		}

		public bool RemoveFromCompletedTutorials(int stepNo)
		{
			return false;
		}

		public bool IsTutorialStepCompleted(int stepNo)
		{
			return false;
		}

		public bool IsTutorialStepCompleted(TutorialIndex tutorialIndex)
		{
			return false;
		}

		public bool IsTutorialStepsCompleted(List<int> stepNo)
		{
			return false;
		}

		public bool IsTutorialStepsCompleted(params TutorialIndex[] args)
		{
			return false;
		}

		public bool IsTutorialStepsCompleted(List<TutorialIndex> args)
		{
			return false;
		}

		public int GetMaxCompletedTutorialStep()
		{
			return 0;
		}

		public bool StartWithGameplay()
		{
			return false;
		}

		public void Initialize(BoardTaskData boardTaskData, BoardData boardData, LevelData levelData)
		{
		}

		public void AddEventEntity(EventEntity eventEntity)
		{
		}

		public EventEntity GetEventEntity(int index)
		{
			return null;
		}

		public void RemoveEventEntity(int index)
		{
		}

		public void RemoveFromGame(int setID)
		{
		}

		public int RemoveFromRewardsAndInventory(int setID)
		{
			return 0;
		}

		public string GetFillRateString()
		{
			return null;
		}

		public void SetNewUIPopupShown440()
		{
		}

		public bool GetNewUIPopupShown440()
		{
			return false;
		}

		public bool IsValidToShownNewUIPopup440()
		{
			return false;
		}
	}
}
