using MergeEngine.Configuration.Capabilities;

namespace MergeEngine.ECS.Components.Items
{
	public class OrderSpawnComponent : ComponentBase<OrderSpawnCapability>
	{
		public string OrderTreeId { get; }

		public OrderSpawnComponent(OrderSpawnCapability capability, Entity entity)
			: base((OrderSpawnCapability)default(_00210), (Entity)null)
		{
		}
	}
}
