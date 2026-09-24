namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class BoardCell
{
	[CompilerGenerated]
	private int <ItemId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ItemVisibility <ItemVisibility>k__BackingField; //Field offset: 0x14

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int ItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private ItemVisibility ItemVisibility
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BoardCell() { }

	public BoardCell(int itemId, ItemVisibility itemVisibility) { }

	public static BoardCell FromTuple(ValueTuple<Int32, ItemVisibility> tuple) { }

	[CompilerGenerated]
	public int get_ItemId() { }

	[CompilerGenerated]
	public ItemVisibility get_ItemVisibility() { }

	[CompilerGenerated]
	private void set_ItemId(int value) { }

	[CompilerGenerated]
	private void set_ItemVisibility(ItemVisibility value) { }

	public ValueTuple<Int32, ItemVisibility> ToTuple() { }

}

