namespace GameLogic.MergeChains;

[MetaSerializableDerived(2)]
public class ListMergeChainElement : IMergeChainElement
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, ItemDef> <>9__7_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <.ctor>b__7_0(int t) { }

	}

	[CompilerGenerated]
	private List<ItemDef> <Items>k__BackingField; //Field offset: 0x10

	public override IEnumerable<ItemDef> AllItemDefs
	{
		 get { } //Length: 8
	}

	public override int Count
	{
		 get { } //Length: 72
	}

	public override ItemDef First
	{
		 get { } //Length: 92
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixRefList")]
	public private List<ItemDef> Items
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ListMergeChainElement() { }

	public ListMergeChainElement(IEnumerable<Int32> types) { }

	public ListMergeChainElement(IEnumerable<ItemDef> items) { }

	public override bool Contains(int itemId) { }

	public override ItemDef ElementAtOrDefault(int index) { }

	public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams) { }

	public override IEnumerable<ItemDef> get_AllItemDefs() { }

	public override int get_Count() { }

	public override ItemDef get_First() { }

	[CompilerGenerated]
	public List<ItemDef> get_Items() { }

	public override int IndexOf(int itemId) { }

	[CompilerGenerated]
	private void set_Items(List<ItemDef> value) { }

}

