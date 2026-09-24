using System;
using GameLogic.Player;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Game.Logic
{
	[AnalyticsEvent(5, "Gained/gifted item", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "item" })]
	public class PlayerEventGainedItem : PlayerEventBase
	{
		[Obsolete("Used for compatibility with old event data")]
		[MetaMember(1, MetaMemberFlags.None)]
		public int ItemId;

		[MetaMember(2, MetaMemberFlags.None)]
		public bool IsSupportGiven;

		[MetaMember(3, MetaMemberFlags.None)]
		public CurrencySource Source;

		[MetaMember(4, MetaMemberFlags.None)]
		public AnalyticsContext AnalyticsContext;

		[MetaMember(5, MetaMemberFlags.None)]
		public string ItemType;

		public override string EventDescription => null;

		public PlayerEventGainedItem()
		{
		}

		public PlayerEventGainedItem(string itemType, bool supportGiven, CurrencySource source, AnalyticsContext context)
		{
		}

		public string GetItemType()
		{
			return null;
		}
	}
}
