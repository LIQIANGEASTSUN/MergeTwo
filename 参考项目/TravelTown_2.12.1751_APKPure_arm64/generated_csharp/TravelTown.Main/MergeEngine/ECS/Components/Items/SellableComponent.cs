using MergeEngine.Configuration.Capabilities;

namespace MergeEngine.ECS.Components.Items
{
	public class SellableComponent : ComponentBase<SellCapability>
	{
		public SellableComponent(SellCapability capability, Entity entity)
			: base((SellCapability)default(_00210), (Entity)null)
		{
		}
	}
}
