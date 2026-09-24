using System.Collections.Generic;
using MergeEngine.Configuration;
using Merger.Game.Data;

namespace Merger.Bubbles
{
	public interface ISmarterBubblesStreakModel
	{
		SmarterBubblesStreakData StreakData { get; }

		IReadOnlyDictionary<CurrentBoardType, SmarterBubblesStreakData> StreakBoardData { get; }

		void TryAdd(IMergeGraphItem mergeGraphItem);
	}
}
