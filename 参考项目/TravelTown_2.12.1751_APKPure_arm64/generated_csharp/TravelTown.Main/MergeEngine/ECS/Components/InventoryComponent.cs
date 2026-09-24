using System;
using System.Collections.Generic;
using Framework.Core.DataBinding.Collections;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.State;
using MergeEngine.Model;

namespace MergeEngine.ECS.Components
{
	[CacheAs(new Type[] { typeof(IWipeableComponent) })]
	public class InventoryComponent : ComponentBase<InventoryCapability>, IRemoteLoadedComponent<BoardInventorySlots>, IRemoteLoadedComponent<Dictionary<PlayerResourceEnum, float>>, IWipeableComponent, IComponentBase
	{
		public ObservableList<Entity> Slots;

		public bool Enabled;

		public Dictionary<PlayerResourceEnum, float> ToolsProgress { get; set; }

		public int MaxSlots { get; set; }

		public InventorySlotCost NextSlotCost { get; set; }

		public InventoryComponent(InventoryCapability capability, Entity entity)
			: base((InventoryCapability)default(_00210), (Entity)null)
		{
		}

		void IWipeableComponent.Wipe()
		{
		}

		public void UpdateToolProgress(PlayerResourceEnum toolType, float progressToAdd)
		{
		}

		public float GetToolProgressPercentage(PlayerResourceEnum toolType)
		{
			return 0f;
		}

		public void OverrideSlotsConfig(int startSlots, int maxSlots)
		{
		}

		public void LoadComponent(BoardInventorySlots componentData)
		{
		}

		public void LoadComponent(Dictionary<PlayerResourceEnum, float> backendProgressData)
		{
		}

		public Dictionary<PlayerResourceEnum, float> InitializeEmptyToolsProgress()
		{
			return null;
		}
	}
}
