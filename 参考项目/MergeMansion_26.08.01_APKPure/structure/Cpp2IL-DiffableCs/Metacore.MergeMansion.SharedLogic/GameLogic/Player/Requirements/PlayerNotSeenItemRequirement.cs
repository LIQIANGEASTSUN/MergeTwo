namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(49)]
public class PlayerNotSeenItemRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private ItemDef <ItemDef>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private ItemDef ItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public PlayerNotSeenItemRequirement() { }

	public PlayerNotSeenItemRequirement(int itemId) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public ItemDef get_ItemDef() { }

	public IItemDefinition GetItem(IMergeMansionGameConfig config) { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_ItemDef(ItemDef value) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

