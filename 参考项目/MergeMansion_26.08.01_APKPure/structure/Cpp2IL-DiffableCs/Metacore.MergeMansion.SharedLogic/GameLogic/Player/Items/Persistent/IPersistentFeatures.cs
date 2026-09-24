namespace GameLogic.Player.Items.Persistent;

public interface IPersistentFeatures
{

	public int DecayCycles
	{
		 get { } //Length: 0
	}

	public bool HasItemStates
	{
		 get { } //Length: 0
	}

	public bool HasPersistentFeatures
	{
		 get { } //Length: 0
	}

	public int ItemStates
	{
		 get { } //Length: 0
	}

	public ItemDef ResetToItem
	{
		 get { } //Length: 0
	}

	public int get_DecayCycles() { }

	public bool get_HasItemStates() { }

	public bool get_HasPersistentFeatures() { }

	public int get_ItemStates() { }

	public ItemDef get_ResetToItem() { }

}

