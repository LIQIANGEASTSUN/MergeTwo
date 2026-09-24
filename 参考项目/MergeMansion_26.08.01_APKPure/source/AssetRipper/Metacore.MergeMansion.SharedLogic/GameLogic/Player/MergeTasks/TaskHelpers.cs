namespace GameLogic.Player.MergeTasks
{
	public static class TaskHelpers
	{
		public static bool IsDifficult(this ITaskCardView taskView)
		{
			return false;
		}

		public static bool IsRepeatable(this ITaskCardView taskView)
		{
			return false;
		}
	}
}
