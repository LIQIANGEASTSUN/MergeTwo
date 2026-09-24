namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(32)]
public class AtLeastNInventorySlotsRequirement : PlayerRequirement
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

	private AtLeastNInventorySlotsRequirement() { }

	public AtLeastNInventorySlotsRequirement(int slotCount) { }

	public virtual void ForceComplete(IPlayer player) { }

	[CompilerGenerated]
	public int get_SlotCount() { }

	public virtual bool Matches(IPlayer player) { }

	[CompilerGenerated]
	private void set_SlotCount(int value) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

