namespace GameLogic.Player.Items.Attachments;

[MetaSerializableDerived(2)]
public class AuxEnergyItemAttachment : IItemAttachment
{
	[CompilerGenerated]
	private EnergyType <EnergyType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <EnergyAmount>k__BackingField; //Field offset: 0x14

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int EnergyAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private EnergyType EnergyType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public AuxEnergyItemAttachment() { }

	public AuxEnergyItemAttachment(EnergyType energyType, int energyAmount) { }

	public override void Consume(IPlayer player, MergeBoardId mergeBoardId, int itemId) { }

	[CompilerGenerated]
	public int get_EnergyAmount() { }

	[CompilerGenerated]
	public EnergyType get_EnergyType() { }

	[CompilerGenerated]
	private void set_EnergyAmount(int value) { }

	[CompilerGenerated]
	private void set_EnergyType(EnergyType value) { }

}

