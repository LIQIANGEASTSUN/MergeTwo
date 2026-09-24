namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(16)]
public class ItemNeededAndConsumeRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, ItemDef> <>9__16_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <.ctor>b__16_0(int itemType) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass13_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass13_0() { }

		internal IItemDefinition <GetItemDefinitions>b__0(ItemDef itemDef) { }

	}

	[CompilerGenerated]
	private List<Int32> <ItemTypes>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<ItemDef> <ItemDefs>k__BackingField; //Field offset: 0x18

	public ItemDef ItemDef
	{
		 get { } //Length: 92
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemListRef")]
	private List<ItemDef> ItemDefs
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public IReadOnlyCollection<Int32> Items
	{
		 get { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<Int32> ItemTypes
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ItemNeededAndConsumeRequirement() { }

	public ItemNeededAndConsumeRequirement(IEnumerable<Int32> itemTypes) { }

	public ItemNeededAndConsumeRequirement(int itemType) { }

	private static bool AddItem(IPlayer player, IItemDefinition item) { }

	public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	public ItemDef get_ItemDef() { }

	[CompilerGenerated]
	private List<ItemDef> get_ItemDefs() { }

	public IReadOnlyCollection<Int32> get_Items() { }

	[CompilerGenerated]
	private List<Int32> get_ItemTypes() { }

	public IItemDefinition GetItem(IMergeMansionGameConfig config) { }

	public IEnumerable<IItemDefinition> GetItemDefinitions(IMergeMansionGameConfig config) { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_ItemDefs(List<ItemDef> value) { }

	[CompilerGenerated]
	private void set_ItemTypes(List<Int32> value) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

