namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(1)]
public class PlayerItemRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, ItemDef> <>9__23_0; //Field offset: 0x8
		public static Func<Int32, ItemDef> <>9__24_0; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal ItemDef <.ctor>b__23_0(int itemType) { }

		internal ItemDef <.ctor>b__24_0(int itemType) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass14_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass14_0() { }

		internal IItemDefinition <ItemDefinitions>b__0(ItemDef itemRef) { }

	}

	[CompilerGenerated]
	private List<Int32> <ItemTypes>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<ItemDef> <ItemRefs>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Requirement>k__BackingField; //Field offset: 0x20

	[JsonProperty("item")]
	public Nullable<Int32> ItemKey
	{
		 get { } //Length: 220
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixRefs")]
	private List<ItemDef> ItemRefs
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public IReadOnlyCollection<Int32> Items
	{
		 get { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private List<Int32> ItemTypes
	{
		[CompilerGenerated]
		private get { } //Length: 8
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

	public PlayerItemRequirement(IEnumerable<Int32> itemIds, int requirement) { }

	public PlayerItemRequirement(IItemDefinition definition, int amount) { }

	public PlayerItemRequirement(int itemId, int requirement) { }

	public PlayerItemRequirement() { }

	public static List<ItemDef> FixRefs(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	public Nullable<Int32> get_ItemKey() { }

	[CompilerGenerated]
	private List<ItemDef> get_ItemRefs() { }

	public IReadOnlyCollection<Int32> get_Items() { }

	[CompilerGenerated]
	private List<Int32> get_ItemTypes() { }

	[CompilerGenerated]
	public int get_Requirement() { }

	public IItemDefinition Item(IPlayer player) { }

	public IItemDefinition Item(IMergeMansionGameConfig config) { }

	public IEnumerable<IItemDefinition> ItemDefinitions(IPlayer player) { }

	public IEnumerable<IItemDefinition> ItemDefinitions(IMergeMansionGameConfig config) { }

	public virtual bool Matches(IPlayer playerModel) { }

	public bool RequiresAnyItem(IEnumerable<IItemDefinition> itemsToCheck, IPlayer player) { }

	[CompilerGenerated]
	private void set_ItemRefs(List<ItemDef> value) { }

	[CompilerGenerated]
	private void set_ItemTypes(List<Int32> value) { }

	[CompilerGenerated]
	private void set_Requirement(int value) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

