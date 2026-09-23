using System.Collections.Generic;
using GameLogic.Merge;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Spawning
{
	public class SpawnFeaturesSource : IItemConfigPart<SpawnFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string ProducerType;

		public string RandomMarker;

		public InitialSequenceType InitialSequenceType;

		public string InitialSequence;

		public List<string> Item;

		public List<int> Weight;

		public SpawnStyle SpawnStyle;

		public string SpawnCycleType;

		public MetaDuration SpawnDelay;

		public MetaDuration FirstCycleStartDelay;

		public MetaDuration DelayBetweenCycles;

		public int HowManyAreGeneratedPerSpawn;

		public int SpawnAmountInCycle;

		public int HowManyCycles;

		public int StorageMax;

		public string DecayProducerType;

		public string DecayRandomMarker;

		public InitialSequenceType DecayInitialSequenceType;

		public string DecayInitialSequence;

		public List<string> DecayItem;

		public List<int> DecayWeight;

		public ItemVisibility ProductVisibility;

		public string ConfigKey => null;

		public string ItemType => null;

		public SpawnFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
