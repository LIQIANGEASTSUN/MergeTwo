//Type is in global namespace

public interface IItemPooler
{

	public void DisposeItem(BaseItem baseItem, bool willPlayEffect = false) { }

	public BaseItem GetItem(int itemId) { }

	public BaseItem GetItem(ItemData itemData) { }

	public ItemData GetItemData(int itemId) { }

	public Dictionary<ItemType, List`1<ItemData>> GetItemTypesToItemsData() { }

	public Sprite GetItemVisual(int itemId, int itemLevel, bool throwIfNull = true) { }

	public void Initialize() { }

	public bool IsItemConsumed(int id) { }

	public bool IsItemExplored(int id, int itemLevel) { }

	public bool IsValidItemId(int id) { }

	public void SetItemToConsumed(int id) { }

	public void SetItemToExplored(int id, int itemLevel) { }

}

