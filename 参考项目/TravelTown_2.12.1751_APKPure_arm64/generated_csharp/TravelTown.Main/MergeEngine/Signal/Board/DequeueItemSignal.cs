using UnityEngine;

namespace MergeEngine.Signal.Board
{
	public class DequeueItemSignal
	{
		public Vector2 QueuePositionInRoot { get; }

		public Vector2 QueueWorldPosition { get; }

		public DequeueItemSignal(Vector2 queuePositionInRoot, Vector2 queueWorldPosition)
		{
		}
	}
}
