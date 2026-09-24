using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	public interface IWipeableComponent : IComponentBase
	{
		void Wipe();
	}
}
