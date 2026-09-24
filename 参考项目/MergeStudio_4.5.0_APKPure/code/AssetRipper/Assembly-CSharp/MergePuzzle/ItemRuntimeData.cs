using System;
using DG.Tweening;
using UnityEngine;

namespace MergePuzzle
{
	[Serializable]
	public class ItemRuntimeData : IItemRuntimeData
	{
		public string Name;

		public long NextSpawnerUpdateMs;

		public int UpdateStepMs;

		public bool SpawnerHintLock;

		public int AutoOfflineCount;

		public int ItemPrice;

		public int SkipPrice;

		public BoardItemData BoardItemData;

		public Vector3 PreviousPosition;

		public Coordinate PreviousIndexForSellable;

		public ItemEntity ItemEntity;

		public int TimeRequiredToExitNoCapacity;

		public bool IsBoosterPanelActive;

		public BoosterItemData BoosterData;

		public long BoosterPanelOpenTick;

		public bool LevelUp;

		public Sequence SpawnerHintSequence;

		public Sequence ClickSequence;

		public Sequence PanelSpawnSequence;

		public Sequence MergeHintSequence;

		public Animator ChestBoardGlowAnimatorInstance;

		public bool SrOptionsEnabled;

		public bool SpawnAnimating;

		public bool RewardWaiting;

		public bool RewardEarned;

		public bool IsFlyingToTask;

		public bool IsHidden;

		public ProgressiveItemGoalData CurrentGoal;

		public GameObject RemoveParticle;

		public int SpawnBubbleGemCount;

		public bool ProgressBarPresent;

		public bool IsTaskTick;

		public Tuple<int, bool> IsProgressiveTick;

		public bool PreventItemSelect;

		public bool ClickDownLock;

		public bool SpawnLock;

		public bool MergeTargetLock;

		public bool DragLock;

		public bool BubbleLock;

		public bool SpawnerUsedEnergy;

		public bool MergeHintLock { get; set; }

		public bool IsTick => false;

		public IItemEntity GetItemEntity => null;

		public int GetUpdateStepMs => 0;

		public void SetUpdateStepMs(int updateStepMs)
		{
		}

		public void SetTimeRequiredToExitNoCapacity(int time)
		{
		}

		public void SetNextSpawnerUpdateMs(long spawnerUpdateMs)
		{
		}

		public void ChangeNextSpawnerUpdateMs(long changedUpdateMs)
		{
		}

		public void SetSkipPrice(int skipPrice)
		{
		}

		public bool PreventItemSell()
		{
			return false;
		}
	}
}
