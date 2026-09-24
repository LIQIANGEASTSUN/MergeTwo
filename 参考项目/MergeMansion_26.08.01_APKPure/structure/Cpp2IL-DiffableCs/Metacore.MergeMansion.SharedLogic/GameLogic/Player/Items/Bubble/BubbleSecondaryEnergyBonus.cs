namespace GameLogic.Player.Items.Bubble;

[MetaSerializableDerived(2)]
[Obsolete("Replaced by BubbleAuxEnergyBonus.")]
public class BubbleSecondaryEnergyBonus : IBubbleBonus
{
	[CompilerGenerated]
	private int <SecondaryEnergy>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int SecondaryEnergy
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BubbleSecondaryEnergyBonus() { }

	public BubbleSecondaryEnergyBonus(int secondaryEnergy) { }

	[CompilerGenerated]
	public int get_SecondaryEnergy() { }

	[CompilerGenerated]
	private void set_SecondaryEnergy(int value) { }

}

