using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Chest
{
	[MetaSerializable]
	public class ChestContext : IItemContext
	{
		public enum ItemAvailability
		{
			Available = 0,
			Expired = 1,
			WasNeverAvailable = 2
		}

		[MetaMember(1, MetaMemberFlags.None)]
		public TemporaryCardCollectionEventId TemporaryCardCollectionEventIdWhenChestWasGenerated { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public bool ShouldUpgradeCardPacks { get; set; }

		public ChestContext()
		{
		}

		public ChestContext(IPlayer player, bool shouldUpgradeCardPacks)
		{
		}

		public bool IsItemUnlockedAndAvailable(IItemDefinition itemDefinition, IPlayer player)
		{
			return false;
		}

		public bool TryGetReplacementItem(IItemDefinition itemDefinition, IPlayer player, out IItemDefinition replacementItem)
		{
			replacementItem = null;
			return false;
		}

		public ItemAvailability GetItemAvailability(IItemDefinition itemDefinition, IPlayer player)
		{
			return default(ItemAvailability);
		}
	}
}
