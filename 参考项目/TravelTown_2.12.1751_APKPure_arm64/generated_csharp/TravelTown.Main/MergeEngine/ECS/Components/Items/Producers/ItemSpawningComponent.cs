using System;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Data;
using MergeEngine.Util;

namespace MergeEngine.ECS.Components.Items.Producers
{
	[CacheAs(new Type[] { typeof(IItemSpawningComponent) })]
	public class ItemSpawningComponent<TCapability> : TimeCycleComponent<TCapability, SerializedItemSpawningComponent, SerializedItemSpawningComponent>, IItemSpawningComponent, ITimeCycleComponent, IComponentBase, IItemSpawning where TCapability : ItemsSpawningCapability
	{
		public const string SeedKey = "seed";

		public const string CurrentItemIndexKey = "itemIndex";

		public int Seed { get; set; }

		public string SpawnedItemsLabel => null;

		public ItemSpawningQueue ItemsQueue { get; set; }

		public int SeedWithOffset => 0;

		public bool ConsumedItemsDependant => false;

		public SkipCooldownSettings SkipCooldownSettings => null;

		public ItemSpawningComponent(TCapability capability, Entity entity)
			: base((TCapability)null, (Entity)null)
		{
		}

		public override void LoadComponent(SerializedItemSpawningComponent componentData)
		{
		}

		public override void OnBeforeSerialize()
		{
		}
	}
}
