using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Player.MergeTasks;

namespace Code.GameLogic.Player.MergeTasks
{
	public static class TaskCategoryFlags
	{
		public const ulong TASK = 1uL;

		public const ulong EVENT = 2uL;

		public const ulong CORE_SUPPORT_EVENT = 4uL;

		public const ulong NONE = 0uL;

		public const ulong EVERYTHING = 7uL;

		public static ulong FromTaskCategory(TaskCategory taskCategory)
		{
			return 0uL;
		}

		public static ulong[] FromTasksTabStyle(TasksTabStyle tasksTabStyle)
		{
			return null;
		}

		public static string ToDailyTodoPopupTabId(ulong flags)
		{
			return null;
		}

		public static string ToDailyTodoPopupTabLocalizationId(ulong flags)
		{
			return null;
		}

		public static bool IsNonTaskFlags(ulong flags)
		{
			return false;
		}

		public static bool HasTasksToDisplay(ulong flags, ICollection<MergeTask> tasks)
		{
			return false;
		}
	}
}
