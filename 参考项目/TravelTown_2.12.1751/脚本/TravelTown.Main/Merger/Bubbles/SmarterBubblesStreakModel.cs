using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using Merger.Game.Data;
using Merger.Game.Model;
using Zenject;

namespace Merger.Bubbles
{
	public class SmarterBubblesStreakModel : ISmarterBubblesStreakModel
	{
		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[NonSerialized]
		public readonly IReadOnlyDictionary<CurrentBoardType, SmarterBubblesStreakData> _streakBoardData;

		public SmarterBubblesStreakData StreakData => null;

		public IReadOnlyDictionary<CurrentBoardType, SmarterBubblesStreakData> StreakBoardData => null;

		public void TryAdd(IMergeGraphItem mergeGraphItem)
		{
		}
	}
}
