using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Chest
{
	public interface IChestState
	{
		ulong ActivationCount { get; }

		ChestContext ChestContext { get; }

		MetacoreTime OpenStartTime { get; }

		MetacoreTime EstimatedEndTime { get; }

		bool HasOpeningStarted();

		bool IsReadyForOpen(MetacoreTime timestamp);

		void StartChestOpenCountdown(MetacoreTime startTime, MetacoreDuration duration, F32 boostFactor);

		void CalculateEstimatedOpenEndTime(MetacoreDuration duration, F32 boostFactor, MetacoreTime currentTimestamp);

		void IncreaseRelativeTimeSpendOnOpen(MetacoreDuration add);

		void AddAbsoluteTimeSpendOnOpen(MetacoreTime timestamp);

		bool IsReadyForLooting();

		void ForceCompleteCountdown();

		bool IsForceCompleted();

		void OpenAndFillRewards(IEnumerable<IItemDefinition> rewards, IPlayer player);

		int GetLootCount();

		IItemDefinition GetNextLoot(IPlayer player);

		IEnumerable<IItemDefinition> RemoveFromChest(Predicate<IItemDefinition> itemMatcher, IMergeMansionGameConfig config);

		(Currencies, int) CalculateFastOpenCost(MetacoreTime currentTime, MetacoreDuration maxDuration);

		void SkipGameTime(MetacoreDuration numMillisecondToSkip);

		void IncreaseActivationCount();

		void InitChestContext(IPlayer player);

		static IChestState CreateChestState()
		{
			return null;
		}
	}
}
