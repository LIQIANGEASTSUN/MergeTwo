namespace Code.GameLogic.GameEvents;

public class MysteryMachineExtraItemGrantingSource : IConfigItemSource<MysteryMachineExtraItemGrantingInfo, MysteryMachineExtraItemGrantingId>, IGameConfigSourceItem<MysteryMachineExtraItemGrantingId, MysteryMachineExtraItemGrantingInfo>, IHasGameConfigKey<MysteryMachineExtraItemGrantingId>
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<String, ItemDef> <>9__20_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <ToConfigData>b__20_0(string itemType) { }

	}

	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineExtraItemGrantingId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MergeChainId <ChainId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<String> <ItemId>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<Int32> <ExtraItemCount>k__BackingField; //Field offset: 0x30

	public private MergeChainId ChainId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private override MysteryMachineExtraItemGrantingId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private List<Int32> ExtraItemCount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> ItemId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineExtraItemGrantingSource() { }

	[CompilerGenerated]
	public MergeChainId get_ChainId() { }

	[CompilerGenerated]
	public override MysteryMachineExtraItemGrantingId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<Int32> get_ExtraItemCount() { }

	[CompilerGenerated]
	private List<String> get_ItemId() { }

	[CompilerGenerated]
	private void set_ChainId(MergeChainId value) { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineExtraItemGrantingId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ExtraItemCount(List<Int32> value) { }

	[CompilerGenerated]
	private void set_ItemId(List<String> value) { }

	public override MysteryMachineExtraItemGrantingInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

