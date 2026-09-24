using MergeEngine.Configuration.Capabilities;

namespace MergeEngine.ECS.Components.Items
{
	public class InteractionConstraintComponent : ComponentBase<InteractionConstraintCapability>
	{
		public bool DisableDragging { get; }

		public InteractionConstraintComponent(InteractionConstraintCapability capability, Entity entity)
			: base((InteractionConstraintCapability)default(_00210), (Entity)null)
		{
		}
	}
}
