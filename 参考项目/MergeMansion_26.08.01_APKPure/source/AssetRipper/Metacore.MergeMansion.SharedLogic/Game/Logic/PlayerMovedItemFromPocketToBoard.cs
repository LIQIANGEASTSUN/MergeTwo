using Analytics;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;

namespace Game.Logic
{
	[AnalyticsEvent(11, "Item moved from pocket to board", 1, null, true, true, false)]
	[AnalyticsEventKeywords(new string[] { "item", "pocket" })]
	public class PlayerMovedItemFromPocketToBoard : AnalyticsServersideEventBase
	{
		public override AnalyticsEventType EventType => default(AnalyticsEventType);

		[MetaMember(1, MetaMemberFlags.None)]
		public int Item { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string ItemName { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int GarageEmptyBoardSlots { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int GarageFreeInventorySlots { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int FreeProducerInventorySlots { get; set; }

		public override string EventDescription => null;

		public PlayerMovedItemFromPocketToBoard()
		{
		}

		public PlayerMovedItemFromPocketToBoard(int item, MergeBoardId boardId, string itemName, Option<IPlayer> player = default(Option<IPlayer>))
		{
		}
	}
}
