using System.Collections.Generic;

namespace Merger.CoinMultipliers.Models
{
	public interface ICoinMultiplierStateModel
	{
		bool IsEnabled { get; }

		int? ActiveRangeStartLevel { get; }

		IReadOnlyDictionary<string, int> FinalCoinValuesByItemId { get; }

		bool TryGetFinalCoinValue(string itemId, out int amount);

		bool IsStartingNextRangeLevel(int currentLevel);
	}
}
