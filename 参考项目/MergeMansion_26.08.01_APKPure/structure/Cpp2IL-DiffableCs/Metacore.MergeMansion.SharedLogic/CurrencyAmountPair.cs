//Type is in global namespace

[MetaSerializable]
public sealed class CurrencyAmountPair
{
	[CompilerGenerated]
	private Currencies <currency>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <amount>k__BackingField; //Field offset: 0x14

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public Currencies currency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public CurrencyAmountPair() { }

	[CompilerGenerated]
	public int get_amount() { }

	[CompilerGenerated]
	public Currencies get_currency() { }

	[CompilerGenerated]
	public void set_amount(int value) { }

	[CompilerGenerated]
	public void set_currency(Currencies value) { }

}

