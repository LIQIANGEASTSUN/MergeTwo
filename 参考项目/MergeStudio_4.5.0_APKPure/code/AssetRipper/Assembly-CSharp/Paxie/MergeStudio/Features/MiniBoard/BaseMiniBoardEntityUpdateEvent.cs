namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class BaseMiniBoardEntityUpdateEvent
	{
		public struct BoardItemStatusChange : IEvent
		{
			public bool UpdateBoardTask;
		}
	}
}
