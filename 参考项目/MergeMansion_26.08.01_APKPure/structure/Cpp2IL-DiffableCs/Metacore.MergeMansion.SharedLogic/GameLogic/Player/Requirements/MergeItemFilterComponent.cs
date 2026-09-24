namespace GameLogic.Player.Requirements;

[MetaSerializable]
public class MergeItemFilterComponent
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, ItemDef> <>9__8_0; //Field offset: 0x8
		public static Func<MergeChainId, MergeChainDef> <>9__9_0; //Field offset: 0x10
		public static Func<String, String> <>9__10_0; //Field offset: 0x18
		public static Func<String, Boolean> <>9__10_1; //Field offset: 0x20
		public static Func<List`1<MergeItemExtra>, IEnumerable`1<MergeItemExtra>> <>9__12_0; //Field offset: 0x28

		private static <>c() { }

		public <>c() { }

		internal IEnumerable<MergeItemExtra> <GetMergeItemExtras>b__12_0(List<MergeItemExtra> v) { }

		internal ItemDef <ParseItemDefs>b__8_0(int x) { }

		internal MergeChainDef <ParseMergeChainDefs>b__9_0(MergeChainId x) { }

		internal string <Split>b__10_0(string s) { }

		internal bool <Split>b__10_1(string s) { }

	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<ItemDef> _itemDefinitions; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private List<MergeChainDef> _mergeChainDefinitions; //Field offset: 0x18

	[IgnoreDataMember]
	public IReadOnlyList<ItemDef> ItemDefinitions
	{
		 get { } //Length: 8
	}

	[IgnoreDataMember]
	public IReadOnlyList<MergeChainDef> MergeChainDefinitions
	{
		 get { } //Length: 8
	}

	public MergeItemFilterComponent() { }

	public MergeItemFilterComponent(string itemDefinitionKeysCsv, string mergeChainDefinitionKeysCsv) { }

	public IReadOnlyList<ItemDef> get_ItemDefinitions() { }

	public IReadOnlyList<MergeChainDef> get_MergeChainDefinitions() { }

	public IEnumerable<MergeItemExtra> GetMergeItemExtras(IPlayer player) { }

	private static List<ItemDef> ParseItemDefs(string itemIds) { }

	private static MergeChainDef ParseMergeChainDef(string key) { }

	private static List<MergeChainDef> ParseMergeChainDefs(string chainIds) { }

	private static IEnumerable<String> Split(string csv) { }

}

