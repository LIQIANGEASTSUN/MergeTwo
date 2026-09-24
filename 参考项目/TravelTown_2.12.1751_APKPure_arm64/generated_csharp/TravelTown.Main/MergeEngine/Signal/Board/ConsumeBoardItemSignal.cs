using System;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS;
using UnityEngine;

namespace MergeEngine.Signal.Board
{
	public class ConsumeBoardItemSignal
	{
		public Vector2 TargetPosition;

		public Action CompleteCallback { get; }

		public IMergeItem ItemToConsume { get; }

		public BoardItemPosition PositionOfItemToConsume { get; }

		public Entity Entity { get; }

		public ConsumeBoardItemSignal(Entity entity, Vector2 targetPosition, Action completeCallback, IMergeItem itemToConsume, BoardItemPosition positionOfItemToConsume)
		{
		}
	}
}
