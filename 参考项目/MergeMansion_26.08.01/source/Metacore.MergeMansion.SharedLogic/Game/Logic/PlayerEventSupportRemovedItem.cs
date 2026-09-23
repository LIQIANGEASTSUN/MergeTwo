using System;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Game.Logic
{
	[AnalyticsEvent(10, "Support removed item", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "item" })]
	public class PlayerEventSupportRemovedItem : PlayerEventBase
	{
		[Obsolete("Item information now stored in ItemType. ItemId kept for backwards compatibility")]
		[MetaMember(1, MetaMemberFlags.None)]
		public int ItemId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool FromInventory { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public bool FromPocket { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public string ItemType { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public bool FromProducerInventory { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public bool FromRentableInventory { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public bool FromExtraInventory { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public int GarageEmptyBoardSlots { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public int GarageFreeInventorySlots { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public int FreeProducerInventorySlots { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public int? BatchDeleteJobId { get; set; }

		public override string EventDescription => null;

		public PlayerEventSupportRemovedItem()
		{
		}

		public PlayerEventSupportRemovedItem(int itemId, string itemType, MergeBoardId boardId, Option<IPlayer> player = default(Option<IPlayer>), bool fromInventory = false, bool fromPocket = false, bool fromProducerInventory = false, bool fromRentableInventory = false, bool fromExtraInventory = false, int? batchDeleteJobId = null)
		{
		}

		public PlayerEventSupportRemovedItem(string itemType, MergeBoardId boardId, bool fromInventory, bool fromPocket, bool fromProducerInventory)
		{
		}

		public string EventSource()
		{
			return null;
		}

		public string ItemTypeForDescription()
		{
			return null;
		}
	}
}
