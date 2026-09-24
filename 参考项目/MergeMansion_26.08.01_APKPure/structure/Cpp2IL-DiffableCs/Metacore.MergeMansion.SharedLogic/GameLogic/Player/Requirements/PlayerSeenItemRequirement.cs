namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(7)]
public class PlayerSeenItemRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private ItemDef <ItemDef>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Requirement>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private ItemDef ItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Requirement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public PlayerSeenItemRequirement() { }

	public PlayerSeenItemRequirement(int itemId) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public ItemDef get_ItemDef() { }

	[CompilerGenerated]
	public int get_Requirement() { }

	public IItemDefinition GetItem(IMergeMansionGameConfig config) { }

	public IEnumerable<IItemDefinition> GetItems(IMergeMansionGameConfig config) { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_ItemDef(ItemDef value) { }

	[CompilerGenerated]
	private void set_Requirement(int value) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

