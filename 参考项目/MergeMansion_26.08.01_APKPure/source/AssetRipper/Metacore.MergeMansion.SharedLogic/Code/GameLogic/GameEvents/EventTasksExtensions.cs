using System.Collections.Generic;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;

namespace Code.GameLogic.GameEvents
{
	public static class EventTasksExtensions
	{
		public static int GetCountOfCompletableTasks(this List<EventTaskId> taskIds, PlayerModel playerModel, IEnumerable<EventTaskId> completedAtLeastOnce = null, Option<int> eventLevel = default(Option<int>))
		{
			return 0;
		}

		public static bool IsCompletable(this EventTaskId taskId, PlayerModel playerModel, IEnumerable<EventTaskId> completedAtLeastOnce = null, Option<int> eventLevel = default(Option<int>))
		{
			return false;
		}

		public static int GetGainedCollectibleBoardEventProgress(this EventTaskInfo taskInfo)
		{
			return 0;
		}
	}
}
