using System;
using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Spawning
{
	[MetaSerializable]
	public sealed class SpawnState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public int currentCycleNumber;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public int spawnInCurrentCycle;

		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime? nextEstimatedSpawnStorageFillTime;

		[MetaMember(4, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime startTimeOfSpawnStorageFill;

		[MetaMember(5, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDuration relativeTimeSpendOnSpawnStorageFill;

		[MetaMember(6, MetaMemberFlags.None)]
		[NonSerialized]
		public int tempFillForSpawnStorage;

		[MetaMember(7, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime? estimatedDecayTime;

		[MetaMember(8, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime lastTimeAddTime;

		[MetaMember(9, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime? pausedUntil;

		[MetaMember(11, MetaMemberFlags.None)]
		[NonSerialized]
		public int customCycleMax;

		[MetaMember(12, MetaMemberFlags.None)]
		[NonSerialized]
		public bool hasCustomCycleMax;

		[MetaMember(10, MetaMemberFlags.None)]
		public ulong SpawnCount { get; set; }

		public SpawnState()
		{
		}

		public SpawnState(MetaTime timestamp)
		{
		}

		public SpawnState(SpawnState other, MetaTime timestamp)
		{
		}

		public int GetCurrentCycleNumber()
		{
			return 0;
		}

		public void SetCurrentCycleNumber(int cycleNumber)
		{
		}

		public int GetSpawnInCurrentCycle()
		{
			return 0;
		}

		public void SetSpawnInCurrentCycle(int value)
		{
		}

		public void AddCyclesToCycleMax(int cycleMax, int cyclesToAdd)
		{
		}

		public bool CanStillSpawn(int cycleMax)
		{
			return false;
		}

		public int GetRemainingCycles(int cycleMax)
		{
			return 0;
		}

		public bool HasNotSpawnedAnythingYet()
		{
			return false;
		}

		public void MoveToNext(int spawnMax)
		{
		}

		public bool IsOnCycleDelay()
		{
			return false;
		}

		public static SpawnState GetBetter(SpawnState spawnCycleData1, SpawnState spawnCycleData2)
		{
			return null;
		}

		public void SetNewStartTimeOfSpawnStorageFill(MetacoreTime newStartTime)
		{
		}

		public MetaTime GetStartTimeOfSpawnStorageFill()
		{
			return default(MetaTime);
		}

		public void ManualIncreaseStartTimeOfSpawnStorageFillTime(MetacoreDuration howMuchToIncrease)
		{
		}

		public MetaDuration GetRelativeTimeSpendOnSpawnStorageFill()
		{
			return default(MetaDuration);
		}

		public void ResetRelativeTimeSpendOnSpawnStorageFill(MetacoreTime timestamp)
		{
		}

		public void AddRelativeTimeSpendOnSpawnStorageFill(MetaDuration increaseAmount, MetaTime timestamp)
		{
		}

		public void AddAbsoluteTimeSpendOnSpawnStorageFill(MetaTime timestamp)
		{
		}

		public void PauseUntil(MetacoreTime until)
		{
		}

		public bool IsPaused(MetacoreTime timestamp)
		{
			return false;
		}

		public MetaTime? GetNextEstimatedSpawnStorageFillStep()
		{
			return null;
		}

		public void SetNextEstimatedSpawnStorageFillStep(MetaTime? newNextEstimatedSpawnStorageFillTime)
		{
		}

		public void ManualIncreaseOfNextEstimatedSpawnStorageFillTime(MetacoreDuration howMuchToIncrease)
		{
		}

		public int GetTempFillForSpawnStorage()
		{
			return 0;
		}

		public void SetTempFillForSpawnStorage(int newAmount)
		{
		}

		public void ResetTempFillForSpawnStorage()
		{
		}

		public void ReduceTempFillForSpawnStorage(int reduceAmount)
		{
		}

		public MetaTime? GetEstimatedDecayTime()
		{
			return null;
		}

		public void SetEstimatedDecayTime(MetaTime decayTime)
		{
		}

		public void SkipGameTime(MetacoreDuration numMillisecondToSkip)
		{
		}

		public void RestoreSpawnState(ISpawnFeatures spawnFeatures)
		{
		}
	}
}
