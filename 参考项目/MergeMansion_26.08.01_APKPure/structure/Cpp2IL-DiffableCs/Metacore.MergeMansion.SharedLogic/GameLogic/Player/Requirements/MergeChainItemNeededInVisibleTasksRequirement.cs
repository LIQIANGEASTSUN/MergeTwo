namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(21)]
public class MergeChainItemNeededInVisibleTasksRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private ItemDef <MinItemInChainDef>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public ItemDef MinItemInChainDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private MergeChainItemNeededInVisibleTasksRequirement() { }

	public MergeChainItemNeededInVisibleTasksRequirement(ItemDef minItemInChainDef) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public ItemDef get_MinItemInChainDef() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	public void set_MinItemInChainDef(ItemDef value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

