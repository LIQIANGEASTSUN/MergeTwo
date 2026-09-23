using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Util;

namespace MergeEngine.ECS.Systems.State.Board
{
	public class BoardInventoryStateSystem<TState> : ItemsStateSystemBase<TState> where TState : BoardInventory
	{
		[InjectSystem]
		[NonSerialized]
		public InventorySystem _inventorySystem;

		public override void EntitiesRemovalLogic(IComponentBase component)
		{
		}

		public override List<IdComponent> GetExistingEntityIds()
		{
			return null;
		}

		public override void ProcessItems(TState boardInventory, List<IdComponent> existingEntityIds)
		{
		}
	}
}
