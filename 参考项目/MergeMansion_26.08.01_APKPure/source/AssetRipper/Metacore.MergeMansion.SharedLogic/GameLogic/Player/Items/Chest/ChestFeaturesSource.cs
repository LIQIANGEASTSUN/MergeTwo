using System.Collections.Generic;
using GameLogic.Fallbacks;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Chest
{
	public class ChestFeaturesSource : IItemConfigPart<ChestFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public MetaDuration OpenDuration;

		public int HowManyToRoll;

		public string HintLocId;

		public string ProducerType;

		public string RandomMarker;

		public InitialSequenceType InitialSequenceType;

		public string InitialSequence;

		public List<string> Item;

		public List<int> Weight;

		public FallbackPlayerRewardId FallbackChestId;

		public string ConfigKey => null;

		public string ItemType => null;

		public ChestFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}

		public void ValidateHowManyToRoll()
		{
		}
	}
}
