using Merger.Boosters.Declarations.Capabilities;

namespace MergeEngine.ECS.Components.Booster
{
	public class BoosterIdComponent : BaseIdComponent<BoosterIdCapability>
	{
		public BoosterIdComponent(BoosterIdCapability capability, Entity entity)
			: base((BoosterIdCapability)default(_00210), (Entity)null)
		{
		}
	}
}
