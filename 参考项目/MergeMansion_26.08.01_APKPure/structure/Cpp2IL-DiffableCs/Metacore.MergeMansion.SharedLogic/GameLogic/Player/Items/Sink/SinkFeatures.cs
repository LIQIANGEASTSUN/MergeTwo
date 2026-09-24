namespace GameLogic.Player.Items.Sink;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {3})]
[MetaSerializable]
public class SinkFeatures : ISinkFeatures
{
	public static readonly SinkFeatures NoSink; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsSink>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ISinkStateFactory <Factory>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private bool <HideProgressBar>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <HideUndiscoveredItemsInHints>k__BackingField; //Field offset: 0x21
	[CompilerGenerated]
	private bool <AllowReverseSinking>k__BackingField; //Field offset: 0x22

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override bool AllowReverseSinking
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override ISinkStateFactory Factory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override bool HideProgressBar
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override bool HideUndiscoveredItemsInHints
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsSink
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static SinkFeatures() { }

	private SinkFeatures() { }

	public SinkFeatures(bool isSinkItem, ISinkStateFactory sinkStateFactory, bool hideProgressBar, bool hideUndiscoveredItemsInHints, bool allowReverseSinking) { }

	[CompilerGenerated]
	public override bool get_AllowReverseSinking() { }

	[CompilerGenerated]
	public override ISinkStateFactory get_Factory() { }

	[CompilerGenerated]
	public override bool get_HideProgressBar() { }

	[CompilerGenerated]
	public override bool get_HideUndiscoveredItemsInHints() { }

	[CompilerGenerated]
	public override bool get_IsSink() { }

	[CompilerGenerated]
	private void set_AllowReverseSinking(bool value) { }

	[CompilerGenerated]
	private void set_Factory(ISinkStateFactory value) { }

	[CompilerGenerated]
	private void set_HideProgressBar(bool value) { }

	[CompilerGenerated]
	private void set_HideUndiscoveredItemsInHints(bool value) { }

	[CompilerGenerated]
	private void set_IsSink(bool value) { }

}

