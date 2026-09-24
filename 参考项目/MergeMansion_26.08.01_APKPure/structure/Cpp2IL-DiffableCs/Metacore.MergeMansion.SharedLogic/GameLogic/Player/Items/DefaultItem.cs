namespace GameLogic.Player.Items;

[MetaSerializableDerived(1)]
public class DefaultItem : IBoardItem
{
	[CompilerGenerated]
	private int <ItemId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <ItemType>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override int ItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public string ItemType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public DefaultItem() { }

	public DefaultItem(int itemId, string itemType) { }

	[CompilerGenerated]
	public override int get_ItemId() { }

	[CompilerGenerated]
	public string get_ItemType() { }

	public override string GetItemType(IMergeMansionGameConfig gameConfig) { }

	[CompilerGenerated]
	private void set_ItemId(int value) { }

	[CompilerGenerated]
	public void set_ItemType(string value) { }

}

