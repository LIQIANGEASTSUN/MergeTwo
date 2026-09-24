namespace Game.Logic;

[AnalyticsEvent(22, "Item spawned with no energy", 1, null, True, False, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"item"})]
public class PlayerEventItemSpawnedFromZeroEnergyProducer : PlayerEventBase
{
	[CompilerGenerated]
	private string <ProducedItemType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <ProducerName>k__BackingField; //Field offset: 0x18

	public virtual string EventDescription
	{
		 get { } //Length: 108
	}

	public virtual IEnumerable<String> KeywordsForEventInstance
	{
		 get { } //Length: 268
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private string ProducedItemType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private string ProducerName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PlayerEventItemSpawnedFromZeroEnergyProducer() { }

	public PlayerEventItemSpawnedFromZeroEnergyProducer(string producedItemType, string producerName) { }

	public virtual string get_EventDescription() { }

	public virtual IEnumerable<String> get_KeywordsForEventInstance() { }

	[CompilerGenerated]
	public string get_ProducedItemType() { }

	[CompilerGenerated]
	public string get_ProducerName() { }

	[CompilerGenerated]
	private void set_ProducedItemType(string value) { }

	[CompilerGenerated]
	private void set_ProducerName(string value) { }

}

