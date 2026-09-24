namespace Game.Logic;

[AnalyticsEvent(28, "Player opening chest", 1, null, True, False, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"chest"})]
[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {3})]
public class PlayerEventOpeningChest : PlayerEventBase
{
	[CompilerGenerated]
	private string <ItemType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <TimeToOpen>k__BackingField; //Field offset: 0x18

	public virtual string EventDescription
	{
		 get { } //Length: 176
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private string ItemType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MetaDuration TimeToOpen
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PlayerEventOpeningChest() { }

	[Obsolete("Use the version with MetacoreDuration instead")]
	public PlayerEventOpeningChest(string itemId, MetaDuration duration) { }

	public PlayerEventOpeningChest(string itemId, MetacoreDuration duration) { }

	public virtual string get_EventDescription() { }

	[CompilerGenerated]
	public string get_ItemType() { }

	[CompilerGenerated]
	public MetaDuration get_TimeToOpen() { }

	[CompilerGenerated]
	private void set_ItemType(string value) { }

	[CompilerGenerated]
	private void set_TimeToOpen(MetaDuration value) { }

}

