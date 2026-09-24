namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(1)]
public class LevelBasedCollectValue : ICalculateCollectValue
{
	[CompilerGenerated]
	private int <Factor>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Currencies <Currency>k__BackingField; //Field offset: 0x14

	[MetaMember(2, MetaMemberFlags::None (0))]
	public Currencies Currency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public int Factor
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private LevelBasedCollectValue() { }

	public LevelBasedCollectValue(Currencies currency, int multiplyFactor) { }

	public override ValueTuple<Currencies, Int32> CalculateCollectValue(IItemDefinition itemDefinition) { }

	protected bool Equals(LevelBasedCollectValue other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public Currencies get_Currency() { }

	[CompilerGenerated]
	public int get_Factor() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	public void set_Currency(Currencies value) { }

	[CompilerGenerated]
	public void set_Factor(int value) { }

}

