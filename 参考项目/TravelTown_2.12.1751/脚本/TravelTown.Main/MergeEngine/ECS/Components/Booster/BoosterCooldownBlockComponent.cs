using MergeEngine.ECS.Components.Items;
using Merger.Boosters.Declarations.Capabilities;

namespace MergeEngine.ECS.Components.Booster
{
	public class BoosterCooldownBlockComponent : ComponentBase<CooldownBlockCapability>
	{
		public BoosterCooldownBlockComponent(CooldownBlockCapability capability, Entity entity)
			: base((CooldownBlockCapability)default(_00210), (Entity)null)
		{
		}
	}
}
