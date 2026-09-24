namespace Game.Logic;

[AnalyticsEvent(5, "Gained/gifted item", 1, null, True, False, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"item"})]
public class PlayerEventGainedItem : PlayerEventBase
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	[Obsolete("Used for compatibility with old event data")]
	public int ItemId; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public bool IsSupportGiven; //Field offset: 0x14
	[MetaMember(3, MetaMemberFlags::None (0))]
	public CurrencySource Source; //Field offset: 0x18
	[MetaMember(4, MetaMemberFlags::None (0))]
	public AnalyticsContext AnalyticsContext; //Field offset: 0x20
	[MetaMember(5, MetaMemberFlags::None (0))]
	public string ItemType; //Field offset: 0x28

	public virtual string EventDescription
	{
		 get { } //Length: 216
	}

	private PlayerEventGainedItem() { }

	public PlayerEventGainedItem(string itemType, bool supportGiven, CurrencySource source, AnalyticsContext context) { }

	public virtual string get_EventDescription() { }

	private string GetItemType() { }

}

