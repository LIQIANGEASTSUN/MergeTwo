namespace Game.Logic;

[AnalyticsEvent(1, "Currency used", 1, null, True, False, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"buysell"})]
public class PlayerEventUsedCurrency : PlayerEventBase
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public Currencies Currency; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public long Amount; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	public CurrencySink CurrencySink; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemType")]
	public string SpendOnItemType; //Field offset: 0x28
	[MetaMember(5, MetaMemberFlags::None (0))]
	public long TotalAfterUse; //Field offset: 0x30

	public virtual string EventDescription
	{
		 get { } //Length: 568
	}

	public virtual IEnumerable<String> KeywordsForEventInstance
	{
		 get { } //Length: 156
	}

	private PlayerEventUsedCurrency() { }

	public PlayerEventUsedCurrency(Currencies currency, long amount, CurrencySink currencySink, string spendOnItemType, long totalAfterUse) { }

	public static string FixItemType(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual string get_EventDescription() { }

	public virtual IEnumerable<String> get_KeywordsForEventInstance() { }

	private string GetSpendOnItem() { }

}

