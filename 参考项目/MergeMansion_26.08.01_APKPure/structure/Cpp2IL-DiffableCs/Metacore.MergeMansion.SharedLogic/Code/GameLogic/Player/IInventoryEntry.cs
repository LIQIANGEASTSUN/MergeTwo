namespace Code.GameLogic.Player;

[MetaSerializable]
public interface IInventoryEntry
{

	public MergeItem Item
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public MetaTime Timestamp
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public MergeItem get_Item() { }

	public MetaTime get_Timestamp() { }

	public void set_Item(MergeItem value) { }

	public void set_Timestamp(MetaTime value) { }

}

