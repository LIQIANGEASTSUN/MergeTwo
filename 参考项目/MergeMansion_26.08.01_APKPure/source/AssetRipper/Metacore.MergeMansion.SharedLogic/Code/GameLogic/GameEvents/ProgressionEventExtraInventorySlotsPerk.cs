using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializableDerived(2)]
	public class ProgressionEventExtraInventorySlotsPerk : ProgressionEventPerk
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int SlotCount { get; set; }

		public ProgressionEventExtraInventorySlotsPerk()
		{
		}

		public ProgressionEventExtraInventorySlotsPerk(int slotCount)
		{
		}
	}
}
