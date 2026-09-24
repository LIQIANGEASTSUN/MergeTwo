using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	public class BaseIdComponent<TCapability> : ComponentBase<TCapability> where TCapability : BaseIdCapability
	{
		public string Id => null;

		public string UUId => null;

		public BaseIdComponent(TCapability capability, Entity entity)
			: base((TCapability)null, (Entity)null)
		{
		}
	}
}
