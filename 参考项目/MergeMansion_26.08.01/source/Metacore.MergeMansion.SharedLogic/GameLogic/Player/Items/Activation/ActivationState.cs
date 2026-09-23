using System;
using System.Runtime.Serialization;
using GameLogic.Config.Types;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Activation
{
	[MetaSerializable]
	public sealed class ActivationState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public int currentCycleNumber;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public int activationInCurrentCycle;

		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime? nextEstimatedActivationStorageFillTime;

		[MetaMember(4, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime startTimeOfActivationStorageFill;

		[MetaMember(5, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDuration relativeTimeSpendOnActivationStorageFill;

		[MetaMember(6, MetaMemberFlags.None)]
		[NonSerialized]
		public int tempFillForActivationStorage;

		[MetaMember(8, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime lastTimeAddTime;

		[MetaMember(10, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime? firstCycleActivationTime;

		[MetaMember(7, MetaMemberFlags.None)]
		public bool Paused { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public ulong ActivationCount { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public MetaTime? EstimatedDecayTime { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public int DailyCycleIndex { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public long LastCycleStartDaySinceEpoch { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public MetaTime? NextReEngagementTime { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public int AccumulatedReEngagementTicks { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public bool ReEngagementCycleActive { get; set; }

		[IgnoreDataMember]
		public bool IsOnDecayDelay => false;

		[IgnoreDataMember]
		public Option<MetaTime> GetNextReEngagementTime => default(Option<MetaTime>);

		public ActivationState()
		{
		}

		public ActivationState(MetacoreTime timestamp, MetaTime? activationStartTime)
		{
		}

		public ActivationState(ActivationState other, MetaTime timestamp)
		{
		}

		public CycleInfo GetCycleInfo()
		{
			return default(CycleInfo);
		}

		public int GetActivationInCurrentCycle()
		{
			return 0;
		}

		public void SetActivationInCurrentCycle(int value)
		{
		}

		public bool CanStillActivate(int cycleMax)
		{
			return false;
		}

		public bool HasNotActivatedAnythingYet()
		{
			return false;
		}

		public int GetCurrentCycleNumber()
		{
			return 0;
		}

		public void MoveToNext(int activationMax, IPlayer player, MetacoreTime timeStamp, Func<CycleInfo, bool> shouldIncrementDailyCycleIndexFunc)
		{
		}

		public void IncrementDailyCycleIndex(long localDaySinceEpoch)
		{
		}

		public bool IsOnCycleDelay()
		{
			return false;
		}

		public static ActivationState GetBetter(ActivationState activationCycleData1, ActivationState activationCycleData2)
		{
			return null;
		}

		public MetaTime? GetFirstCycleActivationTime()
		{
			return null;
		}

		public void SetNewStartTimeOfActivationStorageFill(MetacoreTime newStartTime)
		{
		}

		public MetaTime GetStartTimeOfActivationStorageFill()
		{
			return default(MetaTime);
		}

		public void ManualIncreaseStartTimeOfActivationStorageFillTime(MetaDuration howMuchToIncrease)
		{
		}

		public MetaDuration GetRelativeTimeSpendOnActivationStorageFill()
		{
			return default(MetaDuration);
		}

		public void ResetRelativeTimeSpendOnActivationStorageFill(MetacoreTime timestamp)
		{
		}

		public void AddRelativeTimeSpendOnActivationStorageFill(MetaDuration increaseAmount, MetaTime timestamp)
		{
		}

		public void AddAbsoluteTimeSpendOnActivationStorageFill(MetaTime timestamp)
		{
		}

		public MetaTime? GetNextEstimatedActivationStorageFillStep()
		{
			return null;
		}

		public void SetNextEstimatedActivationStorageFillStep(MetacoreTime? newNextEstimatedActivationStorageFillTime)
		{
		}

		public void ManualIncreaseOfNextEstimatedActivationStorageFillTime(MetacoreDuration howMuchToIncrease)
		{
		}

		public int GetTempFillForActivationStorage()
		{
			return 0;
		}

		public void SetTempFillForActivationStorage(int newAmount)
		{
		}

		public void ResetTempFillForActivationStorage()
		{
		}

		public void ReduceTempFillForActivationStorage(int reduceAmount)
		{
		}

		public void SkipGameTime(MetacoreDuration numMillisecondToSkip)
		{
		}

		public void RestoreSpawnState(IActivationFeatures spawnFeatures)
		{
		}

		public void RegisterActivationForReEngagement(IActivationReEngagementSettings reEngagementSettings, MetacoreTime timeStamp)
		{
		}

		public void RegisterReEngagementTick(Option<IActivationReEngagementSettings> reEngagementSettingsOption, MetacoreTime timeStamp)
		{
		}

		public void DebugResetReEngagement()
		{
		}

		public void DebugForceAddReEngagementTickWithoutTriggeringNext()
		{
		}
	}
}
