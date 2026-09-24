using System;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Game.Logic
{
	[Obsolete("Item sold no longer used, combined with coins gained", false)]
	[AnalyticsEvent(2, "Item sold", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "item", "buysell" })]
	public class PlayerEventSoldItem : PlayerEventBase
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public Currencies Currency;

		[MetaMember(2, MetaMemberFlags.None)]
		public long Amount;

		[MetaMember(3, MetaMemberFlags.None)]
		public int SoldItemType;

		public override string EventDescription => null;

		public PlayerEventSoldItem()
		{
		}

		public PlayerEventSoldItem(Currencies currency, long amount, int soldItemType)
		{
		}
	}
}
