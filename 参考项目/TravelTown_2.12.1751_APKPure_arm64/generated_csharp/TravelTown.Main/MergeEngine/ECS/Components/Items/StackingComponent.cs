using System;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Systems.State;

namespace MergeEngine.ECS.Components.Items
{
	public class StackingComponent : ComponentBase<StackingCapability>, IRemoteLoadedComponent<SerializedStackingComponent>
	{
		public const string Key = "stacking";

		[NonSerialized]
		public int _stackSize;

		public int StackSize
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public bool IsStacking => false;

		public StackingComponent(StackingCapability capability, Entity entity)
			: base((StackingCapability)default(_00210), (Entity)null)
		{
		}

		public void LoadComponent(SerializedStackingComponent componentData)
		{
		}

		public void IncrementStackSize(int amount = 1)
		{
		}

		public void DecrementStackSize(int amount = 1)
		{
		}
	}
}
