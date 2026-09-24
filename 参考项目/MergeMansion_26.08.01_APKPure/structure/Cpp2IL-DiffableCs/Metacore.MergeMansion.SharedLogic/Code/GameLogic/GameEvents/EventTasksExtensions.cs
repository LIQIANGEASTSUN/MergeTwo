namespace Code.GameLogic.GameEvents;

[Extension]
public static class EventTasksExtensions
{

	[Extension]
	public static int GetCountOfCompletableTasks(List<EventTaskId> taskIds, PlayerModel playerModel, IEnumerable<EventTaskId> completedAtLeastOnce = null, Option<Int32> eventLevel = null) { }

	[Extension]
	public static int GetGainedCollectibleBoardEventProgress(EventTaskInfo taskInfo) { }

	[Extension]
	public static bool IsCompletable(EventTaskId taskId, PlayerModel playerModel, IEnumerable<EventTaskId> completedAtLeastOnce = null, Option<Int32> eventLevel = null) { }

}

