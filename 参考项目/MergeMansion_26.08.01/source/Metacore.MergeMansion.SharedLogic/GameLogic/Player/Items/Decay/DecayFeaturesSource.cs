using System.Collections.Generic;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Decay
{
	public class DecayFeaturesSource : IItemConfigPart<DecayFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public bool DoesDecay;

		public MetaDuration Lifetime;

		public string ProducerType;

		public string RandomMarker;

		public InitialSequenceType InitialSequenceType;

		public string InitialSequence;

		public List<string> Item;

		public List<int> Weight;

		public DecayMergeMode DecayMergeMode;

		public DecayInheritMode DecayInheritMode;

		public bool DoesBoosterAccelerateDecay;

		public bool ShowDecayTimer;

		public bool ShowDecayVfx;

		public string ConfigKey => null;

		public string ItemType => null;

		public MetaDuration RemainingDurationForDecayVfx { get; set; }

		public DecayFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
