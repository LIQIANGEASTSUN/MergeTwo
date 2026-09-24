namespace Code.GameLogic.ExtraSpawns;

[MetaSerializableDerived(2)]
public class PurchaseBubbleTrigger : IExtraSpawnTrigger
{
	[CompilerGenerated]
	private Nullable<Int32> <Cost>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public Nullable<Int32> Cost
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override ExtraSpawnTriggerType Type
	{
		 get { } //Length: 8
	}

	public PurchaseBubbleTrigger() { }

	public PurchaseBubbleTrigger(Nullable<Int32> cost) { }

	[CompilerGenerated]
	public Nullable<Int32> get_Cost() { }

	public override ExtraSpawnTriggerType get_Type() { }

	public override bool Matches(IExtraSpawnTrigger other) { }

	[CompilerGenerated]
	public void set_Cost(Nullable<Int32> value) { }

	public override CurrencySource ToCurrencySource() { }

	public override ItemActSource ToItemActSource() { }

	public virtual string ToString() { }

}

