using GameLogic.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializableDerived(1)]
	public class DefaultItem : IBoardItem
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int ItemId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string ItemType { get; set; }

		public string GetItemType(IMergeMansionGameConfig gameConfig)
		{
			return null;
		}

		public DefaultItem()
		{
		}

		public DefaultItem(int itemId, string itemType)
		{
		}
	}
}
