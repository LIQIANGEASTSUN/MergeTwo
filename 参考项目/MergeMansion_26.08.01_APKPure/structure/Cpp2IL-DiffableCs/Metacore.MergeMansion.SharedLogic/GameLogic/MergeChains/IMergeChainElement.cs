namespace GameLogic.MergeChains;

[MetaSerializable]
public interface IMergeChainElement
{

	public IEnumerable<ItemDef> AllItemDefs
	{
		 get { } //Length: 0
	}

	public int Count
	{
		 get { } //Length: 0
	}

	public ItemDef First
	{
		 get { } //Length: 0
	}

	public bool Contains(int itemId) { }

	public ItemDef ElementAtOrDefault(int index) { }

	public IEnumerable<ItemDef> get_AllItemDefs() { }

	public int get_Count() { }

	public ItemDef get_First() { }

	public int IndexOf(int itemId) { }

}

