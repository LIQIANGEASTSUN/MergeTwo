namespace GameLogic.MergeChains;

[MetaSerializable]
public class MergeChainDefinition : IGameConfigData<MergeChainId>, IGameConfigData, IHasGameConfigKey<MergeChainId>, IValidatable, IMergeChainDefinition
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Object, Type> <>9__64_0; //Field offset: 0x8
		public static Func<Type, Boolean> <>9__64_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal Type <CheckIfValidTypes>b__64_0(object entry) { }

		internal bool <CheckIfValidTypes>b__64_1(Type type) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass57_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass57_0() { }

		internal IItemDefinition <DefaultItems>b__0(IMergeChainElement item) { }

	}

	private static readonly HashSet<Type> allowedTypes; //Field offset: 0x0
	[CompilerGenerated]
	private MergeChainId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<IMergeChainElement> <PrimaryChain>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<IMergeChainElement> <FallbackChain>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private MetaRef<CodexCategoryInfo> <CodexCategory>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private MetaRef<CodexDiscoveryRewardInfo> <DiscoveryRewardRef>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <CompletionSfx>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private Nullable<Int32> <InitialLevel>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private Nullable<Int32> <UnsellableUntilPlayerLevel>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private Nullable<Int32> <ShowSellConfirmationUntilPlayerLevel>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private string <OverrideMergeChainSfx>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x60

	[MetaMember(4, MetaMemberFlags::None (0))]
	public MetaRef<CodexCategoryInfo> CodexCategory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public override string CompletionSfx
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MergeChainId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public MetaRef<CodexDiscoveryRewardInfo> DiscoveryRewardRef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public List<IMergeChainElement> FallbackChain
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int FallbackLength
	{
		 get { } //Length: 76
	}

	[IgnoreDataMember]
	private override CodexCategoryInfo GameLogic.MergeChains.IMergeChainDefinition.CodexCategory
	{
		private get { } //Length: 76
	}

	[IgnoreDataMember]
	private override CodexDiscoveryRewardInfo GameLogic.MergeChains.IMergeChainDefinition.DiscoveryReward
	{
		private get { } //Length: 76
	}

	[IgnoreDataMember]
	private override IReadOnlyList<IMergeChainElement> GameLogic.MergeChains.IMergeChainDefinition.FallbackChain
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IReadOnlyList<IMergeChainElement> GameLogic.MergeChains.IMergeChainDefinition.PrimaryChain
	{
		private get { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public override Nullable<Int32> InitialLevel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int Length
	{
		 get { } //Length: 72
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public override string OverrideMergeChainSfx
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public List<IMergeChainElement> PrimaryChain
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public override Nullable<Int32> ShowSellConfirmationUntilPlayerLevel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public override Nullable<Int32> UnsellableUntilPlayerLevel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private static MergeChainDefinition() { }

	public MergeChainDefinition(MergeChainId configKey, IEnumerable<IMergeChainElement> primaryChain, IEnumerable<IMergeChainElement> fallbackChain, Nullable<Int32> initialLevel, Nullable<Int32> unsellableUntilPlayerLevel, Nullable<Int32> showSellConfirmationUntilPlayerLevel, int experimentPriority) { }

	public MergeChainDefinition(MergeChainId chainId, Object[] items, Object[] fallbacks) { }

	public MergeChainDefinition(MergeChainId chainId, Object[] items, int experimentPriority) { }

	public MergeChainDefinition() { }

	[Conditional("UNITY_EDITOR")]
	[Conditional("DO_EXTRA_CHECKS")]
	private static void CheckIfValidTypes(IEnumerable<Object> entries) { }

	private static IMergeChainElement Convert(object sourceObject) { }

	public override IEnumerable<IItemDefinition> DefaultItems(IMergeMansionGameConfig config) { }

	public override IEnumerable<IItemDefinition> DefaultItems(IPlayer player) { }

	private override CodexCategoryInfo GameLogic.MergeChains.IMergeChainDefinition.get_CodexCategory() { }

	private override CodexDiscoveryRewardInfo GameLogic.MergeChains.IMergeChainDefinition.get_DiscoveryReward() { }

	private override IReadOnlyList<IMergeChainElement> GameLogic.MergeChains.IMergeChainDefinition.get_FallbackChain() { }

	private override IReadOnlyList<IMergeChainElement> GameLogic.MergeChains.IMergeChainDefinition.get_PrimaryChain() { }

	[CompilerGenerated]
	public MetaRef<CodexCategoryInfo> get_CodexCategory() { }

	[CompilerGenerated]
	public override string get_CompletionSfx() { }

	[CompilerGenerated]
	public override MergeChainId get_ConfigKey() { }

	[CompilerGenerated]
	public MetaRef<CodexDiscoveryRewardInfo> get_DiscoveryRewardRef() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public List<IMergeChainElement> get_FallbackChain() { }

	public override int get_FallbackLength() { }

	[CompilerGenerated]
	public override Nullable<Int32> get_InitialLevel() { }

	public override int get_Length() { }

	[CompilerGenerated]
	public override string get_OverrideMergeChainSfx() { }

	[CompilerGenerated]
	public List<IMergeChainElement> get_PrimaryChain() { }

	[CompilerGenerated]
	public override Nullable<Int32> get_ShowSellConfirmationUntilPlayerLevel() { }

	[CompilerGenerated]
	public override Nullable<Int32> get_UnsellableUntilPlayerLevel() { }

	[CompilerGenerated]
	public void set_CodexCategory(MetaRef<CodexCategoryInfo> value) { }

	[CompilerGenerated]
	public void set_CompletionSfx(string value) { }

	[CompilerGenerated]
	private void set_ConfigKey(MergeChainId value) { }

	[CompilerGenerated]
	public void set_DiscoveryRewardRef(MetaRef<CodexDiscoveryRewardInfo> value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_FallbackChain(List<IMergeChainElement> value) { }

	[CompilerGenerated]
	public void set_InitialLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	public void set_OverrideMergeChainSfx(string value) { }

	[CompilerGenerated]
	public void set_PrimaryChain(List<IMergeChainElement> value) { }

	[CompilerGenerated]
	public void set_ShowSellConfirmationUntilPlayerLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	public void set_UnsellableUntilPlayerLevel(Nullable<Int32> value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

	private void ValidateChainElementVariants(List<IMergeChainElement> chain, string field, GameConfigValidationResult variantEntries) { }

}

