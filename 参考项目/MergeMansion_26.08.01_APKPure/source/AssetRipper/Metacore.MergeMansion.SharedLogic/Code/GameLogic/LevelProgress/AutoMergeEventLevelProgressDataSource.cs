using System;
using Code.GameLogic.GameEvents;
using GameLogic.Player;

namespace Code.GameLogic.LevelProgress
{
	public class AutoMergeEventLevelProgressDataSource : ILevelProgressDataSource
	{
		[NonSerialized]
		public readonly CoreSupportEventInfo _eventInfo;

		public AutoMergeEventLevelProgressDataSource(CoreSupportEventInfo eventInfo)
		{
		}

		public LevelProgressData GetLevelProgressData(IPlayer player)
		{
			return default(LevelProgressData);
		}
	}
}
