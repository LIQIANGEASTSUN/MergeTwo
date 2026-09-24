namespace Code.GameLogic.Player.MergeTasks;

public static class TaskCategoryFlags
{
	public const ulong TASK = 1; //Field offset: 0x0
	public const ulong EVENT = 2; //Field offset: 0x0
	public const ulong CORE_SUPPORT_EVENT = 4; //Field offset: 0x0
	public const ulong NONE = 0; //Field offset: 0x0
	public const ulong EVERYTHING = 7; //Field offset: 0x0

	public static ulong FromTaskCategory(TaskCategory taskCategory) { }

	public static UInt64[] FromTasksTabStyle(TasksTabStyle tasksTabStyle) { }

	public static bool HasTasksToDisplay(ulong flags, ICollection<MergeTask> tasks) { }

	public static bool IsNonTaskFlags(ulong flags) { }

	public static string ToDailyTodoPopupTabId(ulong flags) { }

	public static string ToDailyTodoPopupTabLocalizationId(ulong flags) { }

}

