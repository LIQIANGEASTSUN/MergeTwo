namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(12)]
public class MergeChainItemNeededRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass16_0
	{
		public IPlayer playerModel; //Field offset: 0x10

		public <>c__DisplayClass16_0() { }

		internal IEnumerable<IEnumerable`1<IItemDefinition>> <Matches>b__0(MergeTask task) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass18_0
	{
		public IPlayer player; //Field offset: 0x10
		public MergeChainItemNeededRequirement <>4__this; //Field offset: 0x18

		public <>c__DisplayClass18_0() { }

		internal bool <MatchesChain>b__0(IItemDefinition itemDefinition) { }

	}

	[CompilerGenerated]
	private MergeChainDef <MergeChainDef>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Nullable<Int32> <MinLevel>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Nullable<Int32> <MaxLevel>k__BackingField; //Field offset: 0x20

	[MetaMember(3, MetaMemberFlags::None (0))]
	public Nullable<Int32> MaxLevel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixMergeChainRef")]
	public MergeChainDef MergeChainDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public Nullable<Int32> MinLevel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private MergeChainItemNeededRequirement() { }

	public MergeChainItemNeededRequirement(MergeChainId mergeChain, Nullable<Int32> minLevel, Nullable<Int32> maxLevel) { }

	public static MergeChainDef FixMergeChainRef(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public Nullable<Int32> get_MaxLevel() { }

	[CompilerGenerated]
	public MergeChainDef get_MergeChainDef() { }

	[CompilerGenerated]
	public Nullable<Int32> get_MinLevel() { }

	public virtual bool Matches(IPlayer playerModel) { }

	private bool MatchesChain(IPlayer player, IEnumerable<IItemDefinition> itemDefinitions) { }

	private IMergeChainDefinition MergeChain(IPlayer player) { }

	[CompilerGenerated]
	public void set_MaxLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	public void set_MergeChainDef(MergeChainDef value) { }

	[CompilerGenerated]
	public void set_MinLevel(Nullable<Int32> value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

