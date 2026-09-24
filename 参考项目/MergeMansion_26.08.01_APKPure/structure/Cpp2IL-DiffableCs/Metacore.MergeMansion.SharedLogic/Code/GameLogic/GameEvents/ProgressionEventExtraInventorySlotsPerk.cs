namespace Code.GameLogic.GameEvents;

[MetaSerializableDerived(2)]
public class ProgressionEventExtraInventorySlotsPerk : ProgressionEventPerk
{
	[CompilerGenerated]
	private int <SlotCount>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int SlotCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ProgressionEventExtraInventorySlotsPerk() { }

	public ProgressionEventExtraInventorySlotsPerk(int slotCount) { }

	[CompilerGenerated]
	public int get_SlotCount() { }

	[CompilerGenerated]
	private void set_SlotCount(int value) { }

}

