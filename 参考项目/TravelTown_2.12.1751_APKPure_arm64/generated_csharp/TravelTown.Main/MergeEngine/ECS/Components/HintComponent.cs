using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	public class HintComponent : ComponentBase
	{
		public double Timer;

		public bool Hinting;

		public bool Disabled;

		public bool Cooldown;

		public HintComponent(Entity entity)
			: base(null)
		{
		}
	}
}
