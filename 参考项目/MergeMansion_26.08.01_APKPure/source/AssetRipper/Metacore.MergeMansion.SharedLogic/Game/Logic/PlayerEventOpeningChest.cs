using System;
using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Game.Logic
{
	[AnalyticsEvent(28, "Player opening chest", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "chest" })]
	[MetaBlockedMembers(new int[] { 3 })]
	public class PlayerEventOpeningChest : PlayerEventBase
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public string ItemType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration TimeToOpen { get; set; }

		public override string EventDescription => null;

		public PlayerEventOpeningChest()
		{
		}

		[Obsolete("Use the version with MetacoreDuration instead")]
		public PlayerEventOpeningChest(string itemId, MetaDuration duration)
		{
		}

		public PlayerEventOpeningChest(string itemId, MetacoreDuration duration)
		{
		}
	}
}
