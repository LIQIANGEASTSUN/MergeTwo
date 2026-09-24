namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class BaseMiniBoardMoveEvent
	{
		public struct NonMovableItemClick : IEvent
		{
			public MiniBoardMovable Moving;

			public MiniBoardMovable.InteractionStatus InteractionStatus;
		}

		public struct ItemClick : IEvent
		{
			public MiniBoardMovable Moving;

			public MiniBoardMovable.InteractionStatus InteractionStatus;
		}

		public struct DragCollisionButtonStays : IEvent
		{
			public MiniBoardMovable Moving;
		}
	}
}
