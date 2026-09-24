using MergeEngine.Configuration.Capabilities;

namespace MergeEngine.ECS.Components.Items
{
	public class SplitComponent : ComponentBase<SplitCapability>
	{
		public SplitComponent(SplitCapability capability, Entity entity)
			: base((SplitCapability)default(_00210), (Entity)null)
		{
		}
	}
}
