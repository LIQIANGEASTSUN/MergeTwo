using System;
using System.Collections.Generic;
using GameLogic.Config.Types;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Activation
{
	[MetaSerializable]
	public interface IActivationCycle
	{
		int HowManyCycles { get; }

		IActivationCycleData DailyActivationCyclesData { get; }

		Option<IActivationCycleData> InitialActivationCyclesDataOption { get; }

		Option<IActivationReEngagementSettings> ReEngagementSettingsOption { get; }

		MetaTime? CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, ActivationState activationState, StorageState activationStorageState, F32 boostFactor, MetaTime currentTime, bool useCalendarBasedCycle);

		void UpdateActivationCycleData(ActivationState activationState, IPlayer player, MetaTime timeStamp);

		MetaDuration GetActivationDelay();

		MetaDuration GetFirstCycleDelay();

		bool TryGetActiveDuration(IActivationFeatures activationFeatures, ActivationState activationState, MetacoreTime currentTime, out MetaDuration activeDuration);

		[Obsolete("Use the overload with MetacoreTime instead")]
		bool TryGetActiveDuration(IActivationFeatures activationFeatures, ActivationState activationState, MetaTime currentTime, out MetaDuration activeDuration);

		MetaDuration GetDelayBetweenCycles(CycleInfo cycleInfo);

		F64 GetTimerSkipCostMultiplier(CycleInfo cycleInfo);

		int GetActivationAmountInCycle(CycleInfo cycleInfo);

		int GetHowManyAreGeneratedInCycle(CycleInfo cycleInfo);

		IReadOnlyList<MetaDuration> GetDailyDelaysBetweenCycles();

		IReadOnlyList<F64> GetDailyTimerSkipMultipliers();

		IReadOnlyList<int> GetDailyActivationAmountInCycle();

		IReadOnlyList<int> GetDailyHowManyAreGeneratedInCycle();

		bool IsOutOfInitialCycles(int cycleNumber);

		void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey);

		void SetReEngagementSettings(Option<IActivationReEngagementSettings> activationReEngagementSettings);
	}
}
