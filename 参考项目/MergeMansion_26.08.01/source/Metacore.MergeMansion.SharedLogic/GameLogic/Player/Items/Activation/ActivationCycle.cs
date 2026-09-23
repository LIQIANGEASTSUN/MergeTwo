using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config.Types;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Activation
{
	[MetaSerializableDerived(1)]
	[MetaBlockedMembers(new int[] { 3, 4, 5 })]
	public class ActivationCycle : IActivationCycle
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration ActivationDelay { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration FirstCycleStartDelay { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int HowManyCycles { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public IActivationCycleData DailyActivationCyclesData { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public IActivationCycleData InitialActivationCyclesData { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public IActivationReEngagementSettings ReEngagementSettings { get; set; }

		[IgnoreDataMember]
		public Option<IActivationCycleData> InitialActivationCyclesDataOption => default(Option<IActivationCycleData>);

		[IgnoreDataMember]
		public Option<IActivationReEngagementSettings> ReEngagementSettingsOption => default(Option<IActivationReEngagementSettings>);

		public IReadOnlyList<MetaDuration> GetDailyDelaysBetweenCycles()
		{
			return null;
		}

		public IReadOnlyList<F64> GetDailyTimerSkipMultipliers()
		{
			return null;
		}

		public IReadOnlyList<int> GetDailyActivationAmountInCycle()
		{
			return null;
		}

		public IReadOnlyList<int> GetDailyHowManyAreGeneratedInCycle()
		{
			return null;
		}

		public ActivationCycle()
		{
		}

		public ActivationCycle(long firstCycleStartDelay, long activationDelay, int howManyCycles, IActivationCycleData dailyActivationCycles, Option<IActivationCycleData> initialActivationCycles)
		{
		}

		public ActivationCycle(MetaDuration firstCycleStartDelay, MetaDuration activationDelay, int howManyCycles, IActivationCycleData dailyActivationCycles, Option<IActivationCycleData> initialActivationCycles)
		{
		}

		public MetaTime? CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, ActivationState activationState, StorageState activationStorageState, F32 boostFactor, MetaTime currentTime, bool useCalendarBasedCycle)
		{
			return null;
		}

		[Obsolete("Use the overload with MetacoreTime instead")]
		public bool TryGetActiveDuration(IActivationFeatures activationFeatures, ActivationState activationState, MetaTime currentTime, out MetaDuration activeDuration)
		{
			activeDuration = default(MetaDuration);
			return false;
		}

		public bool TryGetActiveDuration(IActivationFeatures activationFeatures, ActivationState activationState, MetacoreTime currentTime, out MetaDuration activeDuration)
		{
			activeDuration = default(MetaDuration);
			return false;
		}

		public void UpdateActivationCycleData(ActivationState activationState, IPlayer player, MetaTime timeStamp)
		{
		}

		public bool ShouldIncrementDailyCycleIndex(CycleInfo cycleInfo)
		{
			return false;
		}

		public bool IsOutOfInitialCycles(int cycleNumber)
		{
			return false;
		}

		public MetaDuration GetActivationDelay()
		{
			return default(MetaDuration);
		}

		public MetaDuration GetFirstCycleDelay()
		{
			return default(MetaDuration);
		}

		public MetaDuration GetDelayBetweenCycles(CycleInfo cycleInfo)
		{
			return default(MetaDuration);
		}

		public F64 GetTimerSkipCostMultiplier(CycleInfo cycleInfo)
		{
			return default(F64);
		}

		public int GetActivationAmountInCycle(CycleInfo cycleInfo)
		{
			return 0;
		}

		public int GetHowManyAreGeneratedInCycle(CycleInfo cycleInfo)
		{
			return 0;
		}

		public Option<IActivationReEngagementSettings> GetReEngagementSettingsIfActive(CycleInfo cycleInfo)
		{
			return default(Option<IActivationReEngagementSettings>);
		}

		public static T GetValueFromLists<T>(Option<IReadOnlyList<T>> initialListOption, IReadOnlyList<T> regularDailyList, CycleInfo cycleInfo)
		{
			return default(T);
		}

		public void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey)
		{
		}

		public void SetReEngagementSettings(Option<IActivationReEngagementSettings> activationReEngagementSettings)
		{
		}
	}
}
