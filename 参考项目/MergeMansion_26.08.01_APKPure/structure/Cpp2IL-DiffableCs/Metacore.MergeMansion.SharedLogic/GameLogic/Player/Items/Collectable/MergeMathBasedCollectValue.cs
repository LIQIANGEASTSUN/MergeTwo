namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(2)]
public class MergeMathBasedCollectValue : ICalculateCollectValue
{
	private static readonly Int32[] levelToValueConversion; //Field offset: 0x0
	[CompilerGenerated]
	private Currencies <Currency>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Multiplier>k__BackingField; //Field offset: 0x14

	[MetaMember(1, MetaMemberFlags::None (0))]
	public Currencies Currency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int Multiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private static MergeMathBasedCollectValue() { }

	private MergeMathBasedCollectValue() { }

	public MergeMathBasedCollectValue(Currencies currency) { }

	public MergeMathBasedCollectValue(Currencies currency, int multiplier) { }

	public override ValueTuple<Currencies, Int32> CalculateCollectValue(IItemDefinition itemDefinition) { }

	protected bool Equals(MergeMathBasedCollectValue other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public Currencies get_Currency() { }

	[CompilerGenerated]
	public int get_Multiplier() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	public void set_Currency(Currencies value) { }

	[CompilerGenerated]
	public void set_Multiplier(int value) { }

}

