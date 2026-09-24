namespace Game.Logic;

[AnalyticsEvent(2, "Item sold", 1, null, True, False, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"item", "buysell"})]
[Obsolete("Item sold no longer used, combined with coins gained", False)]
public class PlayerEventSoldItem : PlayerEventBase
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public Currencies Currency; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public long Amount; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	public int SoldItemType; //Field offset: 0x20

	public virtual string EventDescription
	{
		 get { } //Length: 196
	}

	private PlayerEventSoldItem() { }

	public PlayerEventSoldItem(Currencies currency, long amount, int soldItemType) { }

	public virtual string get_EventDescription() { }

}

