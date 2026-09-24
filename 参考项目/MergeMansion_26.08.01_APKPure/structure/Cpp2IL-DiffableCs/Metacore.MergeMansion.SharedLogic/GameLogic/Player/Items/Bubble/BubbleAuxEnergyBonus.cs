namespace GameLogic.Player.Items.Bubble;

[MetaSerializableDerived(3)]
public class BubbleAuxEnergyBonus : IBubbleBonus
{
	[CompilerGenerated]
	private EnergyType <EnergyType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private int <Chance>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int Chance
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

	public BubbleAuxEnergyBonus() { }

	public BubbleAuxEnergyBonus(EnergyType energyType, int amount) { }

	[CompilerGenerated]
	public int get_Amount() { }

	[CompilerGenerated]
	public int get_Chance() { }

	[CompilerGenerated]
	public EnergyType get_EnergyType() { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_Chance(int value) { }

	[CompilerGenerated]
	private void set_EnergyType(EnergyType value) { }

	public void SetChance(int value) { }

}

