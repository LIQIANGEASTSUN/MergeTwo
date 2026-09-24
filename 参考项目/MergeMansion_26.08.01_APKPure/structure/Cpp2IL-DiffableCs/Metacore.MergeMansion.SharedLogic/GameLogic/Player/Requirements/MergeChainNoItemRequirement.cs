namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(45)]
public class MergeChainNoItemRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private MergeChainDef <MergeChainDef>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ItemDef <MinItemDef>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private ItemDef <MaxItemDef>k__BackingField; //Field offset: 0x20

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public ItemDef MaxItemDef
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
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public ItemDef MinItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private MergeChainNoItemRequirement() { }

	public MergeChainNoItemRequirement(MergeChainId mergeChain, int minItemRef, int maxItemRef) { }

	private IItemDefinition DefaultItem(IPlayer player) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	public static MergeChainDef FixMergeChainRef(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public ItemDef get_MaxItemDef() { }

	[CompilerGenerated]
	public MergeChainDef get_MergeChainDef() { }

	[CompilerGenerated]
	public ItemDef get_MinItemDef() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	public void set_MaxItemDef(ItemDef value) { }

	[CompilerGenerated]
	public void set_MergeChainDef(MergeChainDef value) { }

	[CompilerGenerated]
	public void set_MinItemDef(ItemDef value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

