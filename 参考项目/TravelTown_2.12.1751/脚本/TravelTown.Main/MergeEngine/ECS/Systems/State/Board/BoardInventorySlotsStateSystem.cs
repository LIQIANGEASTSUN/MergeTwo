using System;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.ECS.Util;

namespace MergeEngine.ECS.Systems.State.Board
{
	public class BoardInventorySlotsStateSystem<TState> : StateSystemBase<TState> where TState : BoardInventorySlots
	{
		[InjectSystem]
		[NonSerialized]
		public InventorySystem _inventorySystem;

		public override void LoadState(TState boardInventorySlots)
		{
		}
	}
}
