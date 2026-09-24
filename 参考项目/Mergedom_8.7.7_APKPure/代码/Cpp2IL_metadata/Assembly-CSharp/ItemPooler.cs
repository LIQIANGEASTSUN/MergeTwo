//Type is in global namespace

public class ItemPooler : MonoBehaviour, IItemPooler
{
	[Inject]
	private SignalBus signalBus; //Field offset: 0x20
	[Inject]
	private DiContainer diContainer; //Field offset: 0x28
	[Inject]
	private GameData gameData; //Field offset: 0x30
	[Inject]
	private ItemLibraryController itemLibraryController; //Field offset: 0x38
	private Dictionary<ItemData, List`1<BaseItem>> itemCaches; //Field offset: 0x40

	private ItemData _GetItemData(int itemId, bool forceGetTutorialItemData) { }

	public ItemPooler() { }

	[CompilerGenerated]
	private void <Awake>b__5_0(ItemAddedSignal t) { }

	[CompilerGenerated]
	private void <Awake>b__5_1(PostMergeSignal t) { }

	private void Awake() { }

	public override void DisposeItem(BaseItem baseItem, bool willPlayEffect = false) { }

	private BaseItem GetFromCache(ItemData itemData) { }

	public override BaseItem GetItem(ItemData itemData) { }

	public override BaseItem GetItem(int itemId) { }

	public override ItemData GetItemData(int itemId) { }

	public override Dictionary<ItemType, List`1<ItemData>> GetItemTypesToItemsData() { }

	public override Sprite GetItemVisual(int itemId, int itemLevel, bool throwIfNull = true) { }

	public override void Initialize() { }

	public override bool IsItemConsumed(int id) { }

	public override bool IsItemExplored(int id, int level) { }

	public override bool IsValidItemId(int id) { }

	private void PopulateItem(ItemData itemData) { }

	public override void SetItemToConsumed(int id) { }

	public override void SetItemToExplored(int id, int level) { }

}

