using MergeEngine.Configuration.Capabilities;

namespace MergeEngine.ECS.Components.Items.Producers
{
	public class SpawnerComponent : ItemSpawningComponent<SpawnCapability>
	{
		public bool Anywhere { get; }

		public SpawnerComponent(SpawnCapability capability, Entity entity)
			: base((SpawnCapability)default(_00210), (Entity)null)
		{
		}
	}
}
