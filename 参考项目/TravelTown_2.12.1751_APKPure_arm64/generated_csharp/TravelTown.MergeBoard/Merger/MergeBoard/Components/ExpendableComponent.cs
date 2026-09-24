using System.Collections.Generic;
using ContextualizedECS;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Views.Data;

namespace Merger.MergeBoard.Components
{
	public struct ExpendableComponent : IComponent
	{
		public int Uses { get; set; }

		public int MaxUses { get; set; }

		public int NumItemsToSpawn { get; set; }

		public bool RequireAllItemsToSpawn { get; set; }

		public bool SpawnOnEachInteraction { get; set; }

		public bool IsTransformationByReason { get; set; }

		public List<WeightedItemSpawnable> Transforms { get; set; }

		public List<EmptiableWeightedItemSpawnable> SpawnOnExpendedItems { get; set; }

		public bool SpawnParticles { get; set; }

		public SpawnParticleType SpawnParticleType { get; set; }

		public ProducerTimerConfig ProducerTimer { get; set; }

		public bool HasTimer => false;
	}
}
