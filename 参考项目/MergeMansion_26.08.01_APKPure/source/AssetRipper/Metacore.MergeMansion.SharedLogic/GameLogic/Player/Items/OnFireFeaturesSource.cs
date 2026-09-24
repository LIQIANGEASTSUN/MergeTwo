using System.Collections.Generic;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items
{
	public class OnFireFeaturesSource : IItemConfigPart<OnFireFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ConfigKey => null;

		public string ItemKey { get; set; }

		public string ProducerType { get; set; }

		public string RandomMarker { get; set; }

		public InitialSequenceType InitialSequenceType { get; set; }

		public string InitialSequence { get; set; }

		public List<string> Item { get; set; }

		public List<int> Weight { get; set; }

		public bool UseMaxLevel { get; set; }

		public OnFireFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
