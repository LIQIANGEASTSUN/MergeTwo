using System;
using Analytics;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;

namespace Game.Logic
{
	[AnalyticsEvent(12, "Pocket changed", 1, null, true, true, false)]
	[AnalyticsEventKeywords(new string[] { "item", "pocket" })]
	public class PlayerPocketChanged : AnalyticsServersideEventBase
	{
		public override AnalyticsEventType EventType => default(AnalyticsEventType);

		[Obsolete("Item information now stored in ItemName. Item Id kept for backwards compatibility")]
		[MetaMember(1, MetaMemberFlags.None)]
		public int Item { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Count { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public PlayerPocketChangeEventType ChangeType { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public string ItemName { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int GarageEmptyBoardSlots { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public int GarageFreeInventorySlots { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public int FreeProducerInventorySlots { get; set; }

		public override string EventDescription => null;

		public PlayerPocketChanged()
		{
		}

		public PlayerPocketChanged(int itemId, string itemName, MergeBoardId boardId, int count, PlayerPocketChangeEventType changeType, Option<IPlayer> player = default(Option<IPlayer>))
		{
		}
	}
}
