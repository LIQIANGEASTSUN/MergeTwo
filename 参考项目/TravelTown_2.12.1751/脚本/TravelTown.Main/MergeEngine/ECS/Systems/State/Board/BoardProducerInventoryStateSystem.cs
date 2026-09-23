using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Zenject;

namespace MergeEngine.ECS.Systems.State.Board
{
	public class BoardProducerInventoryStateSystem : ItemsStateSystemBase<BoardProducerInventory>
	{
		[InjectSystem]
		[NonSerialized]
		public InventorySystem _inventorySystem;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public override void ProcessItems(BoardProducerInventory itemsState, List<IdComponent> existingEntityIds)
		{
		}

		public void CreateMissingEntities(List<IdComponent> existingEntityIds, List<ProducerInventoryItem> itemsStateItems)
		{
		}

		public override void EntitiesRemovalLogic(IComponentBase component)
		{
		}

		public override List<IdComponent> GetExistingEntityIds()
		{
			return null;
		}
	}
}
