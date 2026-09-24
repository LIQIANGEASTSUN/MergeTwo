using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Merge;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Merging
{
	public class MergeFeaturesXpAndSameSource : IItemConfigPart<MergeFeatures>, IItemConfigPart, IHasGameConfigKey<string>, IPrioritizedConfigEntry
	{
		public string ItemKey;

		public ItemVisibility ResultVisibility;

		public StorageActionType StorageAction;

		public bool ResetTimers;

		public string ProducerType;

		public string RandomMarker;

		public InitialSequenceType InitialSequenceType;

		public string InitialSequence;

		public List<string> Item;

		public List<int> Weight;

		public string AdditionalSpawnProducerType;

		public string AdditionalSpawnRandomMarker;

		public InitialSequenceType AdditionalSpawnInitialSequenceType;

		public string AdditionalSpawnInitialSequence;

		public List<string> AdditionalSpawnItem;

		public List<int> AdditionalSpawnWeight;

		public List<MergeRewardId> MergeRewardIds;

		public string ConfigKey => null;

		public string ItemType => null;

		public MechanicConfigType Type { get; set; }

		public string TypeAux0 { get; set; }

		public int Priority { get; set; }

		public int ExperienceRequired { get; set; }

		public MergeFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}

		public List<int> ParseMultipleAllowedItems()
		{
			return null;
		}

		public static Exception CreateMultipleAllowedItemsTypeAux0Exception()
		{
			return null;
		}
	}
}
