namespace GameLogic.Player.Items.MiniEvents;

public class MiniEventFeaturesSource : IItemConfigPart<MiniEventFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	[CompilerGenerated]
	private List<String> <ProducerTimeSkipPrice>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<Int32> <ProducerCapacity>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<String> <ProducerTimer>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<Int32> <BubblePrice>k__BackingField; //Field offset: 0x30

	public List<Int32> BubblePrice
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public List<Int32> ProducerCapacity
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> ProducerTimer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> ProducerTimeSkipPrice
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public MiniEventFeaturesSource() { }

	[CompilerGenerated]
	public List<Int32> get_BubblePrice() { }

	public override string get_ConfigKey() { }

	[CompilerGenerated]
	public List<Int32> get_ProducerCapacity() { }

	[CompilerGenerated]
	public List<String> get_ProducerTimer() { }

	[CompilerGenerated]
	public List<String> get_ProducerTimeSkipPrice() { }

	[CompilerGenerated]
	public void set_BubblePrice(List<Int32> value) { }

	[CompilerGenerated]
	public void set_ProducerCapacity(List<Int32> value) { }

	[CompilerGenerated]
	public void set_ProducerTimer(List<String> value) { }

	[CompilerGenerated]
	public void set_ProducerTimeSkipPrice(List<String> value) { }

	public override MiniEventFeatures ToConfigData(IProducerFactory producerFactory) { }

}

