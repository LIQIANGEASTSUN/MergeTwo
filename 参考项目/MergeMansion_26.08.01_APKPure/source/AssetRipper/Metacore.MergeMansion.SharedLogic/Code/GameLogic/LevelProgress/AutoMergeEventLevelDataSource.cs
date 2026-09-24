using System;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;

namespace Code.GameLogic.LevelProgress
{
	public class AutoMergeEventLevelDataSource : ILevelDataSource
	{
		public static readonly LevelData FALLBACK_LEVEL_DATA;

		[NonSerialized]
		public readonly CoreSupportEventInfo _eventInfo;

		public AutoMergeEventLevelDataSource(CoreSupportEventInfo eventInfo)
		{
		}

		public LevelData GetLevelData(IPlayer player, int level)
		{
			return default(LevelData);
		}

		public Option<int> GetMainLevelCount(IPlayer player)
		{
			return default(Option<int>);
		}
	}
}
