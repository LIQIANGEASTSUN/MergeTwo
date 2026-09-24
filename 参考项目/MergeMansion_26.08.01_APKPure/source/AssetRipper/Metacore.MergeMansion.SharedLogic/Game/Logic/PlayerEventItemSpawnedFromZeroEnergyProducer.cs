using System.Collections.Generic;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Game.Logic
{
	[AnalyticsEvent(22, "Item spawned with no energy", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "item" })]
	public class PlayerEventItemSpawnedFromZeroEnergyProducer : PlayerEventBase
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public string ProducedItemType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string ProducerName { get; set; }

		public override string EventDescription => null;

		public override IEnumerable<string> KeywordsForEventInstance => null;

		public PlayerEventItemSpawnedFromZeroEnergyProducer()
		{
		}

		public PlayerEventItemSpawnedFromZeroEnergyProducer(string producedItemType, string producerName)
		{
		}
	}
}
