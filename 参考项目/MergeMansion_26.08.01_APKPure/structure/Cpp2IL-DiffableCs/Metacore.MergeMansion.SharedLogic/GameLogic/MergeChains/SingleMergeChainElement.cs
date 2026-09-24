namespace GameLogic.MergeChains;

[MetaSerializableDerived(1)]
public class SingleMergeChainElement : IMergeChainElement
{
	[CompilerGenerated]
	private ItemDef <Item>k__BackingField; //Field offset: 0x10

	public override IEnumerable<ItemDef> AllItemDefs
	{
		 get { } //Length: 160
	}

	public override int Count
	{
		 get { } //Length: 8
	}

	public override ItemDef First
	{
		 get { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixRef")]
	public private ItemDef Item
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private SingleMergeChainElement() { }

	public SingleMergeChainElement(int type) { }

	public SingleMergeChainElement(ItemDef item) { }

	public override bool Contains(int itemId) { }

	public override ItemDef ElementAtOrDefault(int index) { }

	public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams) { }

	public override IEnumerable<ItemDef> get_AllItemDefs() { }

	public override int get_Count() { }

	public override ItemDef get_First() { }

	[CompilerGenerated]
	public ItemDef get_Item() { }

	public override int IndexOf(int itemId) { }

	[CompilerGenerated]
	private void set_Item(ItemDef value) { }

}

