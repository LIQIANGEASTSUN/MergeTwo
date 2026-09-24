namespace Game.Logic;

[MetaSerializable]
public abstract class PlayerEventGainedCurrency : PlayerEventBase
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public long Amount; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public CurrencySource CurrencySource; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	public long TotalAfterAdd; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	public AnalyticsContext AnalyticsContext; //Field offset: 0x28

	public virtual IEnumerable<String> KeywordsForEventInstance
	{
		 get { } //Length: 324
	}

	public PlayerEventGainedCurrency() { }

	public PlayerEventGainedCurrency(long amount, CurrencySource currencySource, long total, AnalyticsContext context) { }

	public virtual IEnumerable<String> get_KeywordsForEventInstance() { }

}

