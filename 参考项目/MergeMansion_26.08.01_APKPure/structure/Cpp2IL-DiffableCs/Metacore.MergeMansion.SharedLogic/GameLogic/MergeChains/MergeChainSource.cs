namespace GameLogic.MergeChains;

public class MergeChainSource : IConfigItemSource<MergeChainDefinition, MergeChainId>, IGameConfigSourceItem<MergeChainId, MergeChainDefinition>, IHasGameConfigKey<MergeChainId>
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<String, IMergeChainElement> <>9__44_0; //Field offset: 0x8
		public static Func<String, IMergeChainElement> <>9__44_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal IMergeChainElement <ToConfigData>b__44_0(string entry) { }

		internal IMergeChainElement <ToConfigData>b__44_1(string entry) { }

	}

	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeChainId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<String> <Item>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<String> <FallbackItem>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private CodexCategoryId <CodexCategory>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private CodexDiscoveryRewardId <DiscoveryReward>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private string <CompletionSfx>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private string <OverrideMergeChainSfx>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private Nullable<Int32> <InitialLevel>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private Nullable<Int32> <UnsellableUntilPlayerLevel>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private Nullable<Int32> <ShowSellConfirmationUntilPlayerLevel>k__BackingField; //Field offset: 0x60

	private CodexCategoryId CodexCategory
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string CompletionSfx
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override MergeChainId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private CodexDiscoveryRewardId DiscoveryReward
	{
		[CompilerGenerated]
		private get { } //Length: 8
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

	private List<String> FallbackItem
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<Int32> InitialLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> Item
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string OverrideMergeChainSfx
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<Int32> ShowSellConfirmationUntilPlayerLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<Int32> UnsellableUntilPlayerLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MergeChainSource() { }

	[CompilerGenerated]
	private CodexCategoryId get_CodexCategory() { }

	[CompilerGenerated]
	private string get_CompletionSfx() { }

	[CompilerGenerated]
	public override MergeChainId get_ConfigKey() { }

	[CompilerGenerated]
	private CodexDiscoveryRewardId get_DiscoveryReward() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<String> get_FallbackItem() { }

	[CompilerGenerated]
	private Nullable<Int32> get_InitialLevel() { }

	[CompilerGenerated]
	private List<String> get_Item() { }

	[CompilerGenerated]
	private string get_OverrideMergeChainSfx() { }

	[CompilerGenerated]
	private Nullable<Int32> get_ShowSellConfirmationUntilPlayerLevel() { }

	[CompilerGenerated]
	private Nullable<Int32> get_UnsellableUntilPlayerLevel() { }

	[CompilerGenerated]
	private void set_CodexCategory(CodexCategoryId value) { }

	[CompilerGenerated]
	private void set_CompletionSfx(string value) { }

	[CompilerGenerated]
	public void set_ConfigKey(MergeChainId value) { }

	[CompilerGenerated]
	private void set_DiscoveryReward(CodexDiscoveryRewardId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_FallbackItem(List<String> value) { }

	[CompilerGenerated]
	private void set_InitialLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_Item(List<String> value) { }

	[CompilerGenerated]
	private void set_OverrideMergeChainSfx(string value) { }

	[CompilerGenerated]
	private void set_ShowSellConfirmationUntilPlayerLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_UnsellableUntilPlayerLevel(Nullable<Int32> value) { }

	public override MergeChainDefinition ToConfigData(GameConfigBuildLog buildLog) { }

}

