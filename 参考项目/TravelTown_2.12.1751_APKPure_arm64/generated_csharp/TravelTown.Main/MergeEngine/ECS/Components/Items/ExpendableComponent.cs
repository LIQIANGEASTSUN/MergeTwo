using System.Collections.Generic;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Systems.State;
using Merger.Game.Views.Data;

namespace MergeEngine.ECS.Components.Items
{
	public class ExpendableComponent : RemoteLoadedComponent<ExpendableCapability, SerializedExpendableComponent, SerializedExpendableComponent>
	{
		public const string Key = "expandable";

		public int Uses;

		public override string ComponentKey => null;

		public List<WeightedItemSpawnable> Transforms { get; }

		public bool SpawnParticles { get; }

		public SpawnParticleType SpawnParticleType { get; }

		public int NumItemsToSpawn { get; }

		public bool RequireAllItemsToSpawn { get; }

		public bool SpawnOnEachInteraction { get; }

		public List<EmptiableWeightedItemSpawnable> SpawnOnExpendedItems { get; }

		public string SpawnedItemsLabel => null;

		public ProducerTimerConfig ProducerTimer { get; }

		public bool HasTimer => false;

		public bool NeedProcessCombiningProducer { get; set; }

		public bool IsTransformationByReason { get; set; }

		public ItemSpawningTrackingData ItemSpawningTrackingData { get; set; }

		public ExpendableComponent(ExpendableCapability capability, Entity entity)
			: base((ExpendableCapability)default(_00210), (Entity)null)
		{
		}

		public override void LoadComponent(SerializedExpendableComponent componentData)
		{
		}

		public override void OnBeforeSerialize()
		{
		}
	}
}
