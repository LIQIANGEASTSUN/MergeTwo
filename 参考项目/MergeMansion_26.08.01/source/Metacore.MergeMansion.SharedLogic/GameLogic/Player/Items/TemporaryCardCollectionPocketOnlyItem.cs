using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Fallbacks;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializableDerived(3)]
	public class TemporaryCardCollectionPocketOnlyItem : IBoardItem
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int ItemId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string ItemType { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public CurrencySource Source { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public TemporaryCardCollectionEventId EventId { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public FallbackPlayerRewardId FallbackReward { get; set; }

		public string GetItemType(IMergeMansionGameConfig gameConfig)
		{
			return null;
		}

		public TemporaryCardCollectionPocketOnlyItem()
		{
		}

		public TemporaryCardCollectionPocketOnlyItem(int itemId, string itemType, CurrencySource source, FallbackPlayerRewardId fallbackReward, TemporaryCardCollectionEventId eventId)
		{
		}
	}
}
