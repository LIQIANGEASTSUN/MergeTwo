namespace Game.Logic;

[MetaSerializable]
public abstract class PlayerEventUsedCurrencyBase : PlayerEventBase
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public long Amount; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public CurrencySink CurrencySink; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemType")]
	public string SpendOnItemType; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	public long TotalAfterUse; //Field offset: 0x28
	[MetaMember(5, MetaMemberFlags::None (0))]
	public AnalyticsContext AnalyticsContext; //Field offset: 0x30
	[MetaMember(6, MetaMemberFlags::None (0))]
	public string FlashSaleContext; //Field offset: 0x38

	public abstract Currencies Currency
	{
		 get { } //Length: 0
	}

	public virtual string EventDescription
	{
		 get { } //Length: 544
	}

	public PlayerEventUsedCurrencyBase() { }

	public PlayerEventUsedCurrencyBase(long amount, CurrencySink currencySink, string spendOnItemType, long totalAfterUse, AnalyticsContext analyticsContext, string flashSaleContext = "None") { }

	public static string FixItemType(MetaMemberDeserializationFailureParams failureParams) { }

	public abstract Currencies get_Currency() { }

	public virtual string get_EventDescription() { }

	public override string GetCurrencyName() { }

	private string GetSpendOnItem() { }

}

