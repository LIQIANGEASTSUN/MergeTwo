//Type is in global namespace

public class InventoryPopup : PopupBase<InventoryPopupMenuState>, ITabs
{
	[CompilerGenerated]
	private sealed class <ScrollToBottom>d__42 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public InventoryPopup <>4__this; //Field offset: 0x20

		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <ScrollToBottom>d__42(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	internal struct BoardInventoryData
	{
		public InventorySlotsView SlotsView; //Field offset: 0x0
		public TabButton TabButton; //Field offset: 0x8
		public Transform TabButtonCenter; //Field offset: 0x10

	}

	internal struct References
	{
		public GameObject popup; //Field offset: 0x0
		public Image blueOverlay; //Field offset: 0x8
		public TextMeshProUGUI headerLabel; //Field offset: 0x10
		public BoardInventoryData defaultInventoryData; //Field offset: 0x18
		public BoardInventoryData producerInventoryData; //Field offset: 0x30
		public RedDotIndicator producerInventoryRedDotIndicator; //Field offset: 0x48
		public RectTransform inventoriesContainer; //Field offset: 0x50
		public TextMeshProUGUI descriptionText; //Field offset: 0x58
		public ScrollRect scrollRect; //Field offset: 0x60
		public Transform extraInventoryParent; //Field offset: 0x68
		public ExtraInventoryContainer extraInventoryPrefab; //Field offset: 0x70
		public RentableInventoryContainer rentableInventoryContainer; //Field offset: 0x78
		public CanvasGroup extraInventoryCanvasGroup; //Field offset: 0x80
		public TextMeshProUGUI sortButtonText; //Field offset: 0x88

	}

	[SerializeField]
	private References refs; //Field offset: 0xA0
	private ExtraInventoryContainer extraInventoryInstance; //Field offset: 0x130
	private InventoryItemFrame buyNewSlot; //Field offset: 0x138
	[CompilerGenerated]
	private InventoryPopupMenuState <MenuState>k__BackingField; //Field offset: 0x140
	[Header("Tween options")]
	[SerializeField]
	private float itemFlyTweenDuration; //Field offset: 0x148
	[SerializeField]
	private Ease itemFlyTweenEase; //Field offset: 0x14C
	private TooltippedObject producerInventoryLockedTooltip; //Field offset: 0x150

	protected virtual Image BlueOverlay
	{
		 get { } //Length: 8
	}

	protected virtual InventoryPopupMenuState MenuState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public virtual string MenuTag
	{
		 get { } //Length: 88
	}

	protected virtual GameObject Popup
	{
		 get { } //Length: 8
	}

	public Transform ProducerInventoryButtonCenter
	{
		 get { } //Length: 8
	}

	protected virtual ScrollRect ScrollRect
	{
		 get { } //Length: 8
	}

	public virtual string SubSection
	{
		 get { } //Length: 140
	}

	public InventoryPopup() { }

	[CompilerGenerated]
	private void <SetupBoardInventories>b__28_0(TabButton _) { }

	[CompilerGenerated]
	private void <SetupBoardInventories>b__28_1(TabButton _) { }

	public virtual void CloseMenuButton() { }

	private void DestroyExtraInventory() { }

	private void DestroyRentableInventory() { }

	public void DisplacePopupByExtraInventory(bool displace) { }

	protected virtual void DisposeContent(DisposeContentReason reason) { }

	public virtual bool DoesSupportHardwareBackButton() { }

	private void ForceLayoutRebuild() { }

	protected virtual Image get_BlueOverlay() { }

	[CompilerGenerated]
	protected virtual InventoryPopupMenuState get_MenuState() { }

	public virtual string get_MenuTag() { }

	protected virtual GameObject get_Popup() { }

	public Transform get_ProducerInventoryButtonCenter() { }

	protected virtual ScrollRect get_ScrollRect() { }

	public virtual string get_SubSection() { }

	private static int GetInventoryTypeFlagForTabIndex(int tabIndex) { }

	public virtual bool NeedsBlockingLayer() { }

	private void OnRentableInventoryBatchBought() { }

	public void OnRentableInventoryExpired() { }

	public void PlayProducerInventoryUnlockAnimation() { }

	protected virtual void PopulateContent() { }

	public void RefreshProducerInventoryIndicator(bool showIndicator) { }

	private void RefreshSortButton() { }

	[IteratorStateMachine(typeof(<ScrollToBottom>d__42))]
	private IEnumerator ScrollToBottom() { }

	[CompilerGenerated]
	protected virtual void set_MenuState(InventoryPopupMenuState value) { }

	public void SetExtraInventoryAlpha(float alpha) { }

	public override void SetTab(int tabIndex) { }

	private void SetupBoardInventories(bool withAnimation) { }

	private void SetupProgressionEventExtraInventoryContainer() { }

	private void SetupRentableInventory() { }

	private void TabButtonClicked(int inventoryTypeFlag, bool forceRefresh) { }

	public void ToggleSortMode() { }

	private void TryPutItemIntoBoard(InventoryItemFrame itemFrame, MergeBoard board) { }

}

