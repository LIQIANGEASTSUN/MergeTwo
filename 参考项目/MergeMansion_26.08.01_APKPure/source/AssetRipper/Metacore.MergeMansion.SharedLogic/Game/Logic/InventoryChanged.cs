using Analytics;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;

namespace Game.Logic
{
	[AnalyticsEvent(23, "Inventory changed", 1, null, true, true, false)]
	[AnalyticsEventKeywords(new string[] { "item" })]
	public class InventoryChanged : AnalyticsServersideEventBase
	{
		public override AnalyticsEventType EventType => default(AnalyticsEventType);

		[MetaMember(1, MetaMemberFlags.None)]
		public string ItemType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Count { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public PlayerInventoryChangeEventType ChangeType { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int GarageEmptyBoardSlots { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int GarageFreeInventorySlots { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public int FreeProducerInventorySlots { get; set; }

		public override string EventDescription => null;

		public InventoryChanged()
		{
		}

		public InventoryChanged(string itemType, MergeBoardId boardId, int count, PlayerInventoryChangeEventType changeType, Option<IPlayer> player = default(Option<IPlayer>))
		{
		}
	}
}
