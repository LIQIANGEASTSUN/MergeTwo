using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	public class PersistentComponent : ComponentBase<PersistentCapability>
	{
		public bool IsDirty;

		public string PersistentStoreKey { get; }

		public bool UseLiveOpsPrefix { get; }

		public PersistentComponent(PersistentCapability capability, Entity entity)
			: base((PersistentCapability)default(_00210), (Entity)null)
		{
		}
	}
}
