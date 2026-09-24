namespace GameLogic.Config;

[MetaSerializable]
public class QuantityPercentagePair
{
	[CompilerGenerated]
	private F32 <Quantity>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private F32 <Percentage>k__BackingField; //Field offset: 0x14

	[MetaMember(2, MetaMemberFlags::None (0))]
	public F32 Percentage
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public F32 Quantity
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public QuantityPercentagePair() { }

	public QuantityPercentagePair(F32 quantity, F32 percentage) { }

	[CompilerGenerated]
	public F32 get_Percentage() { }

	[CompilerGenerated]
	public F32 get_Quantity() { }

	[CompilerGenerated]
	public void set_Percentage(F32 value) { }

	[CompilerGenerated]
	public void set_Quantity(F32 value) { }

}

