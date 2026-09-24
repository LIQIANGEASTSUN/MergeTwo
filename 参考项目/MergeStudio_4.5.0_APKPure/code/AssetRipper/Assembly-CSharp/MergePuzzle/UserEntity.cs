using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class UserEntity
	{
		[Serializable]
		public class VersionEntryLevel
		{
			public int VersionNumber;

			public int Level;

			public VersionEntryLevel()
			{
			}

			public VersionEntryLevel(int versionNumber, int level)
			{
			}
		}

		[Serializable]
		public struct LevelUpPopupInfo
		{
			public LevelUpReward TempLevelUpReward;

			public int ExtraXp;

			public List<RegularReward> RegularRewardsGained;

			public LevelItem NewLevelData;

			public bool Set;

			public bool PrePopup;
		}

		[Serializable]
		public class DailyRewardEntity
		{
			[Serializable]
			public class DailyChestEntity
			{
				public int Week;

				public List<int> ClaimedChests;

				public DailyChestEntity()
				{
				}

				public DailyChestEntity(bool set)
				{
				}
			}

			public long CurrentStartTimeSecond;

			public int TotalProgress;

			public int VolatileProgress;

			public bool CheckedInToday;

			public bool UpdatedForBalanceChanges;

			public DailyChestEntity ChestEntity;

			public DailyRewardEntity()
			{
			}

			public DailyRewardEntity(bool set)
			{
			}

			public void ProgressReward()
			{
			}

			public void GetProgress(int dataCount, out int currentDataIndex, out int weekStartIndex, out int currentWeekIndex)
			{
				currentDataIndex = default(int);
				weekStartIndex = default(int);
				currentWeekIndex = default(int);
			}
		}

		[Serializable]
		public class RewardedAdEntityModel
		{
			public int EnergyRefillAdCount;

			public int SpawnerRechargeAdCount;

			public int BubblePopAdCount;

			public void Reset()
			{
			}

			public void EnergyRefillRewardEarned()
			{
			}

			public void SpawnerRechargeRewardEarned()
			{
			}

			public void BubblePopRewardEarned()
			{
			}
		}

		[Serializable]
		public class BalanceTestEntityModel
		{
			public int SavedGroup;

			public int IsDefault;

			public bool RolloutUser;

			public bool RolloutUserXpFixed;

			public BalanceTestEntityModel()
			{
			}

			public BalanceTestEntityModel(bool set)
			{
			}
		}

		public int Gem;

		public int Coin;

		public int Energy;

		public int TotalXP;

		public int LevelXP;

		public int Level;

		public List<RewardEntity> ActiveRewards;

		public List<BoosterEntity> Boosters;

		public LevelUpReward TempLevelUpReward;

		public LevelUpPopupInfo TempLevelUpPopupInfo;

		public long NextEnergyUpdatesAt;

		public bool NoAds;

		public bool SeenFirstAd;

		public bool NoSpawnerHelp;

		public List<RewardData> WaitingEventRewardData;

		public DiscoveryBoxEntity NewItemBoxEntity;

		public long LastFreeSpinCompletedMs;

		public int DailyJackpotSpinLevel;

		public bool AllDailyJackpotCompleted;

		public int DailyInterstitialCount;

		public int CurrentEnergyPriceIndex;

		public long EnergyPriceResetAt;

		public int EndlessTreasureIndex;

		public int EndlessTreasureYilanIndex;

		public UnlimitedEnergyEntity UnlimitedEnergyEntity;

		public bool SeenDailyJackpotBefore;

		public bool EnergizedBundlePurchasedBefore;

		public long EnergizedBundlePurchasedTime;

		public bool SeenLeaderBoardBefore;

		public PiggyBankEntity PiggyBankEntity;

		public SeasonPassEntity SeasonPassEntity;

		public long FirstDailyJackpotOpeningMs;

		public DailyRewardEntity DailyReward;

		public RewardedAdEntityModel RewardedAdEntity;

		public long MidnightLocal;

		public long MidnightUtc;

		public BalanceTestEntityModel BalanceTestEntity;

		public List<VersionEntryLevel> VersionEntryLevelList;

		public int DeviceScore;

		public bool DeviceScoreOverridden;

		public AvatarEntity AvatarEntity;

		public UserEntity()
		{
		}

		public void ClearTempLevelupPopup()
		{
		}

		public UserEntity(BoardData boardData)
		{
		}

		public bool HasWaitingAnimations(bool isLevelup, bool isEvent)
		{
			return false;
		}

		public void ChangeXPLevelAndRewardsBecauseOfLevelupRollout(int newLevel, int levelXP, int totalXP, LevelUpReward reward)
		{
		}

		public void EnableNoAds()
		{
		}

		public void InitBoosters(BoardData boardData)
		{
		}

		public List<BoosterEntity> CheckBoosterLockStatuses(int newLevel)
		{
			return null;
		}

		public string GetBoosterCountsAsString()
		{
			return null;
		}

		public int GetInitialGemAmount(BoardData boardData)
		{
			return 0;
		}

		public int GetInitialCoinAmount(BoardData boardData)
		{
			return 0;
		}

		public int GetInitialEnergyAmount(BoardData boardData)
		{
			return 0;
		}

		public List<RegularReward> GetUpcomingRegularRewards(LevelItem currentLevel)
		{
			return null;
		}

		public bool ProcessTaskComplete(BoardTaskItem boardTaskItem, BoardData boardData, LevelData levelData)
		{
			return false;
		}

		public bool ProcessXPUpdate(LevelData levelData, int addedXP, bool isEvent, bool saveBoard, bool isXpFixWorkaround, string triggerName = "")
		{
			return false;
		}

		public void ProcessXPUpdate(int taskXp, LevelItem currentLevel, bool isEvent)
		{
		}

		public List<RegularReward> FindGainedRegularRewards(int taskXp, LevelItem currentLevel, bool isEvent)
		{
			return null;
		}

		public void ProcessLevelUpdate(int taskXp, int extraXp, LevelItem currentLevel, LevelItem newLevelData, bool isEvent)
		{
		}

		public void SetTempLevelUpInfo(EntityUpdateEvent.LevelUpdateEntity levelUpEvent)
		{
		}

		public void RemoveActiveRewards(int setID)
		{
		}

		public void ChangeActiveRewards(int setID, int level, int amount, string trigger = "")
		{
		}

		public void ChangeActiveRewardsDontSendFirebase(int setID, int level, string trigger = "", bool ignoreArchiveLogic = false)
		{
		}

		public void ChangeActiveRewards(int setID, int level, string trigger = "", bool ignoreArchiveLogic = false)
		{
		}

		public void ChangeActiveRewardsFeature(int setID, int level, int featureID, int amount, string trigger)
		{
		}

		public void ChangeActiveRewardsFeature(int setID, int level, int featureID, string trigger)
		{
		}

		public bool CheckDailyChallengeItem(int setID)
		{
			return false;
		}

		public void AddRewardToActiveRewards(int setID, int level, int featureID, string trigger)
		{
		}

		public bool CheckAndFixRewardSorting()
		{
			return false;
		}

		public void RemoveAllActiveRewards()
		{
		}

		public void RemoveActiveReward(RewardEntity rewardEntity)
		{
		}

		public void ChangeCurrency(int setID, int amount, bool sendUpdate = true, bool saveBoard = true, string triggerName = "")
		{
		}

		public void ChangeCurrency(CollectableType collectableType, int amount, bool sendUpdate = true, bool saveBoard = true, string triggerName = "")
		{
		}

		public void ArrangeLevelGemGetAndSpend(int gemGain)
		{
		}

		public void ArrangeLevelCoinGetAndSpend(int coinGain)
		{
		}

		public void ChangeGem(int changedGem, bool sendUpdate = true, bool saveBoard = true)
		{
		}

		public void ChangeCoin(int changedCoin, bool sendUpdate = true, bool saveBoard = true, string triggerName = "", string eventName = "")
		{
		}

		public void ChangeEnergy(int changedEnergy, bool sendUpdate = true, bool saveBoard = true)
		{
		}

		public void ChangeXP(int changedXP, bool sendUpdate = true, bool saveBoard = true, string triggerName = "")
		{
		}

		public void ChangeBooster(BoosterType boosterType, int quantity, string trigger = "", bool saveBoard = false)
		{
		}

		public void ChangeBooster(int boosterID, int quantity, string trigger = "", bool saveBoard = false)
		{
		}

		public int GetTotalBoosterCount()
		{
			return 0;
		}

		public void ResetDailyJackpot()
		{
		}

		public void SaveBoard()
		{
		}
	}
}
