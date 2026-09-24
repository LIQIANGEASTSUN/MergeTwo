namespace MergePuzzle.Locations
{
	public class BoardTaskLocation : LocationBase
	{
		public BoardTaskGoal BoardTaskGoal { get; set; }

		public LocationHandler SetGoalUI(BoardTaskGoal boardTaskGoal)
		{
			return null;
		}
	}
}
