namespace GameLogic.Config.Costs;

[MetaSerializableDerived(1)]
public class GameCurrencyCost : CurrencyCost
{
	[CompilerGenerated]
	private Currencies <Type>k__BackingField; //Field offset: 0x18

	public virtual Currencies Currency
	{
		 get { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private Currencies Type
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private GameCurrencyCost() { }

	public GameCurrencyCost(Currencies currencies, long currencyAmount) { }

	public virtual CurrencyCost Clone(long currencyAmount) { }

	public virtual Currencies get_Currency() { }

	[CompilerGenerated]
	public Currencies get_Type() { }

	public static ValueTuple<Currencies, Int64> op_Implicit(GameCurrencyCost cost) { }

	[CompilerGenerated]
	private void set_Type(Currencies value) { }

	public virtual string ToString() { }

	public virtual void WithdrawFrom(PlayerModel playerModel) { }

}

