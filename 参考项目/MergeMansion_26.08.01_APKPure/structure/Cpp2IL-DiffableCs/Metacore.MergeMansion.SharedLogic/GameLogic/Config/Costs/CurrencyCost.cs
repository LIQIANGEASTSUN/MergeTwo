namespace GameLogic.Config.Costs;

public abstract class CurrencyCost : ICost
{
	[CompilerGenerated]
	private long <CurrencyAmount>k__BackingField; //Field offset: 0x10

	public abstract Currencies Currency
	{
		 get { } //Length: 0
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private long CurrencyAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	protected CurrencyCost() { }

	protected CurrencyCost(long currencyAmount) { }

	public override bool CanPay(IPlayer playerModel, out long missingQuantity) { }

	public abstract CurrencyCost Clone(long currencyAmount) { }

	public abstract Currencies get_Currency() { }

	[CompilerGenerated]
	public long get_CurrencyAmount() { }

	public override void Pay(IPlayer playerModel, CurrencySink currencySink, int itemId, AnalyticsContext analyticsContext) { }

	[CompilerGenerated]
	private void set_CurrencyAmount(long value) { }

	public abstract void WithdrawFrom(PlayerModel playerModel) { }

}

