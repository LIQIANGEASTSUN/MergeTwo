namespace GameLogic.Player.Items.MiniEvents;

[MetaSerializable]
public class MiniEventFeatures : IMiniEventFeatures
{
	[CompilerGenerated]
	private List<Nullable`1<F64>> <ProducerTimeSkipPrice>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<Nullable`1<Int32>> <ProducerCapacity>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<Nullable`1<MetaDuration>> <ProducerTimer>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<Nullable`1<Int32>> <BubblePrice>k__BackingField; //Field offset: 0x28

	[MetaMember(4, MetaMemberFlags::None (0))]
	private List<Nullable`1<Int32>> BubblePrice
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public static MiniEventFeatures NoMiniEventFeatures
	{
		 get { } //Length: 84
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private List<Nullable`1<Int32>> ProducerCapacity
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private List<Nullable`1<MetaDuration>> ProducerTimer
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<Nullable`1<F64>> ProducerTimeSkipPrice
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MiniEventFeatures() { }

	public MiniEventFeatures(List<Nullable`1<F64>> producerTimeSkipPrice, List<Nullable`1<Int32>> producerCapacity, List<Nullable`1<MetaDuration>> producerTimer, List<Nullable`1<Int32>> bubblePrice) { }

	[CompilerGenerated]
	private List<Nullable`1<Int32>> get_BubblePrice() { }

	public static MiniEventFeatures get_NoMiniEventFeatures() { }

	[CompilerGenerated]
	private List<Nullable`1<Int32>> get_ProducerCapacity() { }

	[CompilerGenerated]
	private List<Nullable`1<MetaDuration>> get_ProducerTimer() { }

	[CompilerGenerated]
	private List<Nullable`1<F64>> get_ProducerTimeSkipPrice() { }

	[CompilerGenerated]
	private void set_BubblePrice(List<Nullable`1<Int32>> value) { }

	[CompilerGenerated]
	private void set_ProducerCapacity(List<Nullable`1<Int32>> value) { }

	[CompilerGenerated]
	private void set_ProducerTimer(List<Nullable`1<MetaDuration>> value) { }

	[CompilerGenerated]
	private void set_ProducerTimeSkipPrice(List<Nullable`1<F64>> value) { }

	public override bool TryGetBubblePriceOverride(IPlayer player, out int outPrice) { }

	public override bool TryGetProducerCapacityOverride(IPlayer player, out int outValue) { }

	public override bool TryGetProducerTimerOverride(IPlayer player, out MetaDuration outValue) { }

	public override bool TryGetProducerTimeSkipPriceOverride(IPlayer player, out F64 outPrice) { }

}

