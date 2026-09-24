using System;
using System.Collections.Generic;
using MergePuzzle.BoardEvents;

namespace MergePuzzle
{
	[Serializable]
	public class EventEntity
	{
		public int Progress;

		public int Step;

		public List<BoardPositionEntity> Positions;

		public BoardTaskEntity BoardTask;

		public long EventEndUnix;

		public long EventStartUnix;

		public bool IsInitialized;

		public List<RewardEntity> ActiveRewards;

		public InventoryEntity Inventory;

		public bool IsEventFinished;

		public bool IsFinishPopupShown;

		public bool IsAllLevelsCompleted;

		public int Index;

		public long NextEnergyUpdatesAt;

		public int SpecialEnergy;

		public LevelUpReward TempLevelUpGameplayReward;

		public UserEntity.LevelUpPopupInfo TempLevelUpGameplayPopupInfo;

		public int CurrentEnergyPriceIndex;

		public bool UseDefaultEnergy;

		public List<string> PurchasedPackages;

		public bool IsProgressPopupShown;

		public List<EventDayInfo> EventDayInfo;

		public int LevelGemGet;

		public int LevelGemSpend;

		public int LevelEnergySpend;

		public void AllLevelsFinished()
		{
		}

		public void ResetLevelGainAndSpends()
		{
		}

		public void SetEventFinished()
		{
		}

		public void SetFinishPopupShown()
		{
		}

		public EventDayInfo GetCurrentEventDayInfo()
		{
			return null;
		}

		public bool HasUserSeenEventBefore()
		{
			return false;
		}

		public void ClearTempLevelupPopup()
		{
		}

		public int GetEventEnterCount()
		{
			return 0;
		}

		public int GetSpecialEnergy()
		{
			return 0;
		}

		public void AddEventEnterDay()
		{
		}

		public void ChangeEnergy(int amount, bool sendUpdate = true, bool saveBoard = true)
		{
		}

		public int GetPurchasedPackageCount()
		{
			return 0;
		}

		public void AddToPurchasedPackages(string packageID)
		{
		}

		public EventEntity()
		{
		}

		public EventEntity(EventBoardConfigItem eventConfig, int eventCount)
		{
		}

		public void Initialize(BoardTaskData boardTaskData, BoardData boardData, LevelData levelData)
		{
		}

		public List<RegularReward> GetUpcomingRegularRewards(LevelItem currentLevel)
		{
			return null;
		}

		public long GetNextEnergyUpdatesAt()
		{
			return 0L;
		}

		public bool IsAnyTaskDone()
		{
			return false;
		}

		public virtual bool ProcessTaskComplete(BoardData boardData, BoardTaskItem completedTask, LevelData levelData)
		{
			return false;
		}

		public void ChangeActiveRewards(BoardData boardData, int setID, int level, int amount, string trigger = "")
		{
		}

		public void ProcessEventProgressUpdate(BoardData boardData, BoardTaskItem completedTask, LevelItem currentLevel)
		{
		}

		public virtual void ProcessLevelUpdate(BoardData boardData, BoardTaskItem completedTask, int extraXp, LevelItem currentLevel, LevelItem newLevelData)
		{
		}

		public List<RegularReward> FindGainedRegularRewards(BoardData boardData, BoardTaskItem completedTask, List<RegularReward> regularRewards)
		{
			return null;
		}

		public int GetActiveBoardItemCount(int level, int setID)
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

		public bool IsBoardFull()
		{
			return false;
		}

		public List<BoardPositionEntity> GetMatchedPositionEntities(List<BoardTaskGoal> goals)
		{
			return null;
		}

		public bool IsOpenedBefore()
		{
			return false;
		}

		public void SaveBoard()
		{
		}
	}
}
