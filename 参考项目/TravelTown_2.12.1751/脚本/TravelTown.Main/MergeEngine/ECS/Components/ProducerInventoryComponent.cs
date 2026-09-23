using System;
using System.Collections.Generic;
using Framework.Core.DataBinding.Collections;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.State;

namespace MergeEngine.ECS.Components
{
	[CacheAs(new Type[] { typeof(IWipeableComponent) })]
	public class ProducerInventoryComponent : ComponentBase<ProducerInventoryCapability>, IRemoteLoadedComponent<BoardProducerInventory>, IWipeableComponent, IComponentBase
	{
		public bool ProducerTabEnabled;

		public ObservableList<Entity> ProducerSlots;

		public ObservableList<string> NewProducerSlotItemIds;

		public List<string> UnlockedProducerSlotItemIds;

		public ProducerInventoryComponent(ProducerInventoryCapability capability, Entity entity)
			: base((ProducerInventoryCapability)default(_00210), (Entity)null)
		{
		}

		void IWipeableComponent.Wipe()
		{
		}

		public void LoadComponent(BoardProducerInventory componentData)
		{
		}
	}
}
