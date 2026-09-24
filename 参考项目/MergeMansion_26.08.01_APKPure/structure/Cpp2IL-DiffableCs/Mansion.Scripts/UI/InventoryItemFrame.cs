namespace UI;

public class InventoryItemFrame : MonoBehaviour
{
	[SerializeField]
	private GameObject itemIcon; //Field offset: 0x20
	[SerializeField]
	private GameObject infoButton; //Field offset: 0x28
	[Header("Buyable slot content")]
	[SerializeField]
	private GameObject buyContainer; //Field offset: 0x30
	[SerializeField]
	private TextMeshProUGUI buyText; //Field offset: 0x38
	[SerializeField]
	private CurrencyButton buyButton; //Field offset: 0x40
	[Header("Claimable slot content")]
	[SerializeField]
	private GameObject claimContainer; //Field offset: 0x48
	[SerializeField]
	private TweenedButton claimButton; //Field offset: 0x50
	[SerializeField]
	private GameObject lockedButton; //Field offset: 0x58
	[SerializeField]
	private TooltippedObject tooltip; //Field offset: 0x60
	[SerializeField]
	private RedDotIndicator newTeasedSlotIndicator; //Field offset: 0x68
	[SerializeField]
	[Space(10)]
	private Button moveItemIntoBoard; //Field offset: 0x70
	[SerializeField]
	private Image checkmark; //Field offset: 0x78
	[SerializeField]
	private Image greenBackground; //Field offset: 0x80
	[SerializeField]
	private InventoryItemFrameUsesLeft usesLeft; //Field offset: 0x88
	[SerializeField]
	private InventoryItemFrameTimeStorage timeStorage; //Field offset: 0x90
	[SerializeField]
	private Transform eventIndicatorContainer; //Field offset: 0x98
	[SerializeField]
	private UIParticle unlockParticles; //Field offset: 0xA0
	private MergeItem mergeItem; //Field offset: 0xA8
	private IBoardInventory inventory; //Field offset: 0xB0
	private Option<PlayerModel> playerOption; //Field offset: 0xB8
	private List<ValueTuple`2<GameObject, String>> pooledObjects; //Field offset: 0xC8
	private Animation itemSlotBounceAnimation; //Field offset: 0xD0
	private PlayerRequirement teasedUnlockRequirement; //Field offset: 0xD8
	private IMenuController menuController; //Field offset: 0xE0

	private IAudioPlayer Audio
	{
		private get { } //Length: 8
	}

	public GameObject InfoButtonGameObject
	{
		 get { } //Length: 8
	}

	public IBoardInventory Inventory
	{
		 get { } //Length: 8
	}

	public MergeItem Item
	{
		 get { } //Length: 8
	}

	public InventoryItemFrame() { }

	[CompilerGenerated]
	private void <SetupEventIndicator>g__AddToPool|51_0(string effectTag) { }

	public void AssignBuyAction(Action processBuySlot) { }

	public void AssignClaimAction(Action processClaimSlot) { }

	private void Awake() { }

	private IAudioPlayer get_Audio() { }

	public GameObject get_InfoButtonGameObject() { }

	public IBoardInventory get_Inventory() { }

	public MergeItem get_Item() { }

	public IItemDefinition GetDefinition(IPlayer player) { }

	public Button GetMoveItemIntoBoardButton() { }

	public void Hide() { }

	private string LocaliseUnlockRequirement(IPlayer player, PlayerRequirement requirement) { }

	private void PlayCelebratoryEffects(bool withAnimation, bool withParticles) { }

	public void SetCheckmarkIndicatorsEnabled(bool value) { }

	public void SetPrice(Currencies currency, long price) { }

	private void SetupBoosterContent(IPlayer player, MergeItem item) { }

	private void SetupEventIndicator(Option<PlayerClientCache> playerClientCacheOption) { }

	private void SetupTimeStorage(IPlayer player, MergeItem item) { }

	private void SetupUsesLeft(IPlayer player, MergeItem item) { }

	public void Show(MergeItem item, IBoardInventory inventory, PlayerModel player, PlayerClientCache playerClientCache, bool withAnimation = false, bool withParticles = false) { }

	public void ShowBuySlot(IPlayer player, bool withAnimation, bool withParticles) { }

	public void ShowEmpty(bool withAnimation, bool withParticles) { }

	public void ShowItemInfo() { }

	public void ShowSlotUnlockInfo() { }

	public void ShowTeasedSlot(PlayerModel playerModel, PlayerRequirement requirement, bool withAnimation, bool withParticles, bool seen) { }

	public void ShowUnlockableSlot(bool withAnimation, bool withParticles) { }

	private void Start() { }

}

