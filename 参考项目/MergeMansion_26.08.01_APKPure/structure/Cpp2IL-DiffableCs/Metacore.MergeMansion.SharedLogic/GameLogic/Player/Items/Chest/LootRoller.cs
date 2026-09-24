namespace GameLogic.Player.Items.Chest;

[MetaSerializable]
public class LootRoller
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemId", "weight"})]
		public static Predicate<ValueTuple`2<Int32, Int32>> <>9__23_0; //Field offset: 0x8
		public static Func<Int32, ItemDef> <>9__23_1; //Field offset: 0x10
		public static Func<Int32, ItemDef> <>9__24_1; //Field offset: 0x18
		public static Func<Int32, ItemDef> <>9__24_2; //Field offset: 0x20
		public static Func<Int32, ItemDef> <>9__25_0; //Field offset: 0x28

		private static <>c() { }

		public <>c() { }

		internal bool <.ctor>b__23_0(ValueTuple<Int32, Int32> item) { }

		internal ItemDef <.ctor>b__23_1(int type) { }

		internal ItemDef <.ctor>b__24_1(int type) { }

		internal ItemDef <.ctor>b__24_2(int type) { }

		internal ItemDef <.ctor>b__25_0(int type) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass24_0
	{
		public int startRange; //Field offset: 0x10

		public <>c__DisplayClass24_0() { }

		internal LootSequence <.ctor>b__0(ValueTuple<Int32, Int32> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass27_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass27_0() { }

		internal IItemDefinition <GetStaticLoot>b__0(ItemDef item) { }

	}

	[MetaSerializable]
	internal class LootSequence
	{
		[CompilerGenerated]
		private int <Start>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private int <End>k__BackingField; //Field offset: 0x14
		[CompilerGenerated]
		private ItemDef <Loot>k__BackingField; //Field offset: 0x18

		[MetaMember(2, MetaMemberFlags::None (0))]
		public int End
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		[MetaMember(3, MetaMemberFlags::None (0))]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef Loot
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		[MetaMember(1, MetaMemberFlags::None (0))]
		public int Start
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		public LootSequence() { }

		protected bool Equals(LootSequence other) { }

		public virtual bool Equals(object obj) { }

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

		[CompilerGenerated]
		public int get_End() { }

		[CompilerGenerated]
		public ItemDef get_Loot() { }

		[CompilerGenerated]
		public int get_Start() { }

		public virtual int GetHashCode() { }

		[CompilerGenerated]
		public void set_End(int value) { }

		[CompilerGenerated]
		public void set_Loot(ItemDef value) { }

		[CompilerGenerated]
		public void set_Start(int value) { }

	}

	private const string LootRollerPrefix = "loot"; //Field offset: 0x0
	[CompilerGenerated]
	private List<LootSequence> <RandomLootRollList>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <TotalWeight>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <SpawnId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<ItemDef> <ForcedLoot>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<ItemDef> <StaticLoot>k__BackingField; //Field offset: 0x30

	[MetaMember(4, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemListRef")]
	public private List<ItemDef> ForcedLoot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private List<LootSequence> RandomLootRollList
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private string SpawnId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemListRef")]
	public private List<ItemDef> StaticLoot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int TotalWeight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private LootRoller() { }

	public LootRoller(IReadOnlyCollection<Int32> staticItems) { }

	public LootRoller(IEnumerable<ValueTuple`2<Int32, Int32>> randomItemWeights, IEnumerable<Int32> forcedItems, IEnumerable<Int32> staticItems, string spawnId) { }

	public LootRoller(List<ValueTuple`2<Int32, Int32>> randomItemWeights, IEnumerable<Int32> forcedItems, int itemId) { }

	public virtual bool Equals(object obj) { }

	protected bool Equals(LootRoller other) { }

	public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public List<ItemDef> get_ForcedLoot() { }

	[CompilerGenerated]
	public List<LootSequence> get_RandomLootRollList() { }

	[CompilerGenerated]
	public string get_SpawnId() { }

	[CompilerGenerated]
	public List<ItemDef> get_StaticLoot() { }

	[CompilerGenerated]
	public int get_TotalWeight() { }

	public virtual int GetHashCode() { }

	public IEnumerable<IItemDefinition> GetStaticLoot(IPlayer player) { }

	public bool IsStaticLoot() { }

	public IItemDefinition RollLoot(IGenerationContext generationContext, IPlayer player) { }

	[CompilerGenerated]
	private void set_ForcedLoot(List<ItemDef> value) { }

	[CompilerGenerated]
	private void set_RandomLootRollList(List<LootSequence> value) { }

	[CompilerGenerated]
	private void set_SpawnId(string value) { }

	[CompilerGenerated]
	private void set_StaticLoot(List<ItemDef> value) { }

	[CompilerGenerated]
	private void set_TotalWeight(int value) { }

}

