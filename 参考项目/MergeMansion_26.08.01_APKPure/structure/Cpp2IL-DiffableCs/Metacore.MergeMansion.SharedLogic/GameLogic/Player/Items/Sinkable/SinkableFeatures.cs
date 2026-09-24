namespace GameLogic.Player.Items.Sinkable;

[MetaSerializable]
public class SinkableFeatures : ISinkableFeatures
{
	public static readonly SinkableFeatures NoSinkableFeatures; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsSinkable>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<ISinkInAction> <SinkInActions>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsSinkable
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override List<ISinkInAction> SinkInActions
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static SinkableFeatures() { }

	private SinkableFeatures() { }

	public SinkableFeatures(bool isSinkable, IEnumerable<ISinkInAction> sinkInActions) { }

	[CompilerGenerated]
	public override bool get_IsSinkable() { }

	[CompilerGenerated]
	public override List<ISinkInAction> get_SinkInActions() { }

	[CompilerGenerated]
	private void set_IsSinkable(bool value) { }

	[CompilerGenerated]
	private void set_SinkInActions(List<ISinkInAction> value) { }

}

