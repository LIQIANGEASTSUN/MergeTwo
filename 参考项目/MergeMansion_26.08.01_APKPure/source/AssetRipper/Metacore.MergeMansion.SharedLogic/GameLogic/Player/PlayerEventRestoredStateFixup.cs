using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace GameLogic.Player
{
	[AnalyticsEvent(30, "State Restored Fixup", 1, null, true, false, false)]
	public class PlayerEventRestoredStateFixup : PlayerEventBase
	{
		[MetaSerializable]
		public class FixupEntry
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public string Source { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public string Change { get; set; }

			public FixupEntry()
			{
			}

			public FixupEntry(string source, string change)
			{
			}
		}

		[MetaMember(1, MetaMemberFlags.None)]
		public List<FixupEntry> Changes { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDictionary<string, int> TotalChangesBySource { get; set; }

		public override string EventDescription => null;

		public PlayerEventRestoredStateFixup()
		{
		}

		public PlayerEventRestoredStateFixup(List<FixupEntry> changes, MetaDictionary<string, int> totalChangesBySource)
		{
		}
	}
}
