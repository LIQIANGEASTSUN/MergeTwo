namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(13)]
public class ItemNeededRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private ItemDef <ItemDef>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	private ItemDef ItemDef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ItemNeededRequirement() { }

	public ItemNeededRequirement(ItemDef itemDef) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	private ItemDef get_ItemDef() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_ItemDef(ItemDef value) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

