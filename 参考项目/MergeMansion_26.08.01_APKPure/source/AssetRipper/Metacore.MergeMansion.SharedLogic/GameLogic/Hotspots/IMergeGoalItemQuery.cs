namespace GameLogic.Hotspots
{
	public interface IMergeGoalItemQuery
	{
		bool IsActiveMergeGoalItem(int itemId, out int requiredItemCount);
	}
}
