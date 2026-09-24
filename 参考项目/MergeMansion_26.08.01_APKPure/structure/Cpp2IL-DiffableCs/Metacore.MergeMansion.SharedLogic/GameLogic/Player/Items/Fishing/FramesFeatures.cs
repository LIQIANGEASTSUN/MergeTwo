namespace GameLogic.Player.Items.Fishing;

[MetaSerializable]
public class FramesFeatures : IFramesFeatures
{
	public static readonly FramesFeatures NoFramesFeatures; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsFrames>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <WeightItem>k__BackingField; //Field offset: 0x14

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsFrames
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override int WeightItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static FramesFeatures() { }

	private FramesFeatures() { }

	public FramesFeatures(bool isFrames, int weightItem) { }

	[CompilerGenerated]
	public override bool get_IsFrames() { }

	[CompilerGenerated]
	public override int get_WeightItem() { }

	[CompilerGenerated]
	private void set_IsFrames(bool value) { }

	[CompilerGenerated]
	private void set_WeightItem(int value) { }

}

