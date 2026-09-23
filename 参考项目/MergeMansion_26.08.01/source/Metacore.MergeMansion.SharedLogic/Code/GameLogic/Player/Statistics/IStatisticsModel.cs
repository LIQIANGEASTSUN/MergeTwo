using System;
using Merge;
using Metaplay.Core;

namespace Code.GameLogic.Player.Statistics
{
	public interface IStatisticsModel
	{
		MetaTime FirstGameStartTimestamp { get; }

		MetaDuration TotalPlaytimeApprox { get; }

		int BubblesBurstCount { get; }

		MetaDictionary<int, int> ItemMergeCount { get; }

		MetaDictionary<Currencies, long> ResourceSpentCount { get; }

		MetaDictionary<Currencies, long> ResourceGainedCount { get; }

		MetaDictionary<int, int> ProducerUseCount { get; }

		MetaDictionary<int, int> ItemsClaimedFromShopCount { get; }

		MetaDictionary<int, int> ChestsOpenedCount { get; }

		MetaDictionary<int, int> TaskCompletedCount { get; }

		MetaDictionary<MergeBoardId, int> GetMergeCounts();

		long GetLevel1ExperienceCollectedAmount();

		T GetTestGroup<T>(T defaultValue = default(T)) where T : Enum;
	}
}
