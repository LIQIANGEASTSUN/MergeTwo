using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Config
{
	[MetaSerializable]
	public class CollectItemsOnSessionStartSettings
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public bool Enabled { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration DurationSinceLastSession { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<int> TypesToCollect { get; set; }

		public CollectItemsOnSessionStartSettings()
		{
		}

		public CollectItemsOnSessionStartSettings(bool enabled, MetaDuration durationSinceLastSession, List<int> typesToCollect)
		{
		}
	}
}
