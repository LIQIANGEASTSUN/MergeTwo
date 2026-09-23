using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Merge;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Merging
{
	public class MergeFeaturesCollectionSource : IItemConfigPart<MergeFeatures>, IItemConfigPart, IHasGameConfigKey<string>, IPrioritizedConfigEntry
	{
		public string ItemKey;

		public ItemVisibility ResultVisibility;

		public StorageActionType StorageAction;

		public bool ResetTimers;

		public List<string> First;

		public List<string> Second;

		public List<string> Producer;

		public string AdditionalSpawnProducerType;

		public string AdditionalSpawnRandomMarker;

		public InitialSequenceType AdditionalSpawnInitialSequenceType;

		public string AdditionalSpawnInitialSequence;

		public List<string> AdditionalSpawnItem;

		public List<int> AdditionalSpawnWeight;

		public string ConfigKey => null;

		public string ItemType => null;

		public int Priority { get; set; }

		public MergeFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
