using MergeEngine.Configuration.Capabilities;

namespace MergeEngine.ECS.Components.Items
{
	public class AnimatedComponent : ComponentBase<AnimatedCapability>, ICollectable
	{
		public int Amount { get; }

		public string AndroidPath => null;

		public string IosPath => null;

		public bool IsValid => false;

		public AnimatedComponent(AnimatedCapability capability, Entity entity)
			: base((AnimatedCapability)default(_00210), (Entity)null)
		{
		}
	}
}
