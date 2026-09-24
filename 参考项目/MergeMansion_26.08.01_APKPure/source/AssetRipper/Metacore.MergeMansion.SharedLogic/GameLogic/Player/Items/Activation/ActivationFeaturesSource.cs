using System.Collections.Generic;
using GameLogic.Merge;
using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Activation
{
	public class ActivationFeaturesSource : IItemConfigPart<ActivationFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string ProducerType;

		public string RandomMarker;

		public InitialSequenceType InitialSequenceType;

		public string InitialSequence;

		public List<string> Item;

		public List<int> Weight;

		public ActivationPlacementStyle PlacementStyle;

		public MetaDuration ActivationDelay;

		public MetaDuration FirstCycleStartDelay;

		public List<MetaDuration> DelayBetweenCycles;

		public List<MetaDuration> InitialDelayBetweenCycles;

		public List<F64> TimerSkipMultiplier;

		public List<F64> InitialTimerSkipMultiplier;

		public List<int> HowManyAreGeneratedInCycle;

		public List<int> InitialHowManyAreGeneratedInCycle;

		public List<int> ActivationAmountInCycle;

		public List<int> InitialActivationAmountInCycle;

		public int HowManyCycles;

		public int StorageMax;

		public string DecayProducerType;

		public string DecayRandomMarker;

		public InitialSequenceType DecayInitialSequenceType;

		public string DecayInitialSequence;

		public List<string> DecayItem;

		public List<int> DecayWeight;

		public MetaDuration? DecayDelay;

		public ItemVisibility ProductVisibility;

		public bool StartsFull;

		public int? ActivationCost;

		public bool ShowTapTextOnDiscovery;

		public bool AllowCooldownRemover;

		public bool AllowEnergyMode;

		public string ConfigKey => null;

		public string ItemType => null;

		public List<string> ActivationRequirementType { get; set; }

		public List<string> ActivationRequirementId { get; set; }

		public List<string> ActivationRequirementAmount { get; set; }

		public List<string> ActivationRequirementAux0 { get; set; }

		public ActivationFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
