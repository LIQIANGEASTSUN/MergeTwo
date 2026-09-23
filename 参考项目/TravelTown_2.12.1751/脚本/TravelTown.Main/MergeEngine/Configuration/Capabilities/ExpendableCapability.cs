using System;
using System.Collections.Generic;
using Framework.Localisation;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Views.Data;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class ExpendableCapability : CapabilityBase
	{
		public int Uses;

		public bool IsTransformationByReason;

		public WeightedItemSpawnable[] Transformations;

		public EmptiableWeightedItemSpawnable[] SpawnItemOnExpended;

		public int NumItemsToSpawn;

		public bool RequireAllItemsToSpawn;

		public bool SpawnParticles;

		public bool SpawnOnEachInteraction;

		public SpawnParticleType SpawnParticleType;

		[LocalisationIdentifier]
		public string SpawnedItemsLabel;

		[NonSerialized]
		[NonSerialized]
		public List<IMergeItem> _allSpawnedMergeItems;

		public ProducerTimerConfig Timer;

		[JsonIgnore]
		public List<IMergeItem> SpawnedMergeItems => null;
	}
}
