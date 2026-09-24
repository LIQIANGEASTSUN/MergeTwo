namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(48)]
public class PlayerNoItemRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, ItemDef> <>9__10_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <.ctor>b__10_0(int itemType) { }

	}

	[CompilerGenerated]
	private List<ItemDef> <ItemDefs>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<Int32> <ItemTypes>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemListRef")]
	private List<ItemDef> ItemDefs
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private List<Int32> ItemTypes
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public PlayerNoItemRequirement() { }

	public PlayerNoItemRequirement(ItemDefinition definition) { }

	public PlayerNoItemRequirement(IEnumerable<Int32> itemIds) { }

	public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	private List<ItemDef> get_ItemDefs() { }

	[CompilerGenerated]
	private List<Int32> get_ItemTypes() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_ItemDefs(List<ItemDef> value) { }

	[CompilerGenerated]
	private void set_ItemTypes(List<Int32> value) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

