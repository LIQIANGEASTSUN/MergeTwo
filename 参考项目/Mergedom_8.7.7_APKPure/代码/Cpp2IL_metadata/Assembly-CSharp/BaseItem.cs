//Type is in global namespace

public class BaseItem : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ItemProducer, Boolean> <>9__77_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <CanMergeWith>b__77_0(ItemProducer a) { }

	}

	[CompilerGenerated]
	private struct <OnMerged>d__64 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<BaseItem> <>t__builder; //Field offset: 0x8
		public BaseItem <>4__this; //Field offset: 0x20

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <PreMerge>d__63 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public bool withAnimation; //Field offset: 0x18
		public BaseItem <>4__this; //Field offset: 0x20

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	internal sealed class OnMergedDelegate : MulticastDelegate
	{

		public OnMergedDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	[Inject]
	private DiContainer _diContainer; //Field offset: 0x20
	[Inject]
	protected EffectsManager EffectsManager; //Field offset: 0x28
	[Inject]
	private ItemInfoViewer _itemInfoViewer; //Field offset: 0x30
	[Inject]
	private SignalBus signalBus; //Field offset: 0x38
	public bool IsLocked; //Field offset: 0x40
	public int Level; //Field offset: 0x44
	[CompilerGenerated]
	private bool <isNewFtueItem>k__BackingField; //Field offset: 0x48
	public ItemData Data; //Field offset: 0x50
	[CompilerGenerated]
	private BoardSlot <BoardSlot>k__BackingField; //Field offset: 0x58
	public Visual Visual; //Field offset: 0x60
	public GameObject ObjectiveTick; //Field offset: 0x68
	public GameObject QuestObjectiveTick; //Field offset: 0x70
	public GameObject Lock; //Field offset: 0x78
	public ItemProducerTimer ItemProducerTimer; //Field offset: 0x80
	public ItemProducerTimer SecondaryItemProducerTimer; //Field offset: 0x88
	public GameObject Energy; //Field offset: 0x90
	public ItemAnimator ItemAnimator; //Field offset: 0x98
	public ParticleSystemController ProducerParticles; //Field offset: 0xA0
	public ParticleSystemController MergedParticles; //Field offset: 0xA8
	private ItemLevelData _currentItemLevelData; //Field offset: 0xB0
	protected List<ItemProducer> Producers; //Field offset: 0xB8
	public OnMergedDelegate OnMerge; //Field offset: 0xC0
	private bool _settingProducers; //Field offset: 0xC8
	private readonly object lockTap; //Field offset: 0xD0

	public private BoardSlot BoardSlot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ItemLevelData CurrentLevelData
	{
		 get { } //Length: 228
	}

	public bool IsMaxLeveled
	{
		 get { } //Length: 156
	}

	public private bool isNewFtueItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public bool IsSellable
	{
		 get { } //Length: 48
	}

	public int MaxLevel
	{
		 get { } //Length: 80
	}

	public BaseItem() { }

	[CompilerGenerated]
	internal static void <ResetProducerViewers>g__ResetProducerTimer|47_0(ItemProducerTimer timer) { }

	public void ActivateObjectiveTick(bool status) { }

	private void Awake() { }

	public override bool CanHintedForMerge() { }

	private bool CanMerge() { }

	public override bool CanMergeWith(BaseItem otherItem) { }

	public void DisableQuestObjectiveTick() { }

	public void EnableQuestObjectiveTick() { }

	public void ForceCompleteProducerViewerAnimations() { }

	[CompilerGenerated]
	public BoardSlot get_BoardSlot() { }

	public ItemLevelData get_CurrentLevelData() { }

	public bool get_IsMaxLeveled() { }

	[CompilerGenerated]
	public bool get_isNewFtueItem() { }

	public bool get_IsSellable() { }

	public int get_MaxLevel() { }

	public ItemProducer GetFirstRechargingProducer() { }

	private Nullable<Int32> GetFirstRechargingProducerIndex() { }

	public int GetProducerRemainingRechargeTime() { }

	public List<ItemProducer> GetProducers() { }

	public int GetRechargeCost() { }

	public override void Init(bool isLocked, int level) { }

	public override void Init(BoardSlotData boardSlotData) { }

	public bool IsProducer() { }

	public bool IsProducersRecharging() { }

	protected void LevelUp() { }

	public override void OnEndItemDrag() { }

	public override void OnItemDragging() { }

	public override void OnItemPlacedToBoard(bool willPlayParticle = false) { }

	[AsyncStateMachine(typeof(<OnMerged>d__64))]
	public override UniTask<BaseItem> OnMerged(BaseItem otherItem = null) { }

	public override void OnProducerCapacityEmpty() { }

	public override void OnRechargeCompleted() { }

	public override void OnRechargeStarted() { }

	public void OnSell() { }

	public override void OnStartItemDrag() { }

	public override void OnTapped() { }

	public void OnUndoSell() { }

	[AsyncStateMachine(typeof(<PreMerge>d__63))]
	public override UniTask PreMerge(bool withAnimation) { }

	public override void Reset(bool willPlayEffect = false) { }

	public void ResetProducerViewers() { }

	[CompilerGenerated]
	private void set_BoardSlot(BoardSlot value) { }

	[CompilerGenerated]
	private void set_isNewFtueItem(bool value) { }

	public void SetBoardSlot(BoardSlot slot) { }

	public void SetIsNewFtueItem(bool value) { }

	private void SetLevelProperties() { }

	public void SetProducers(bool startOnInit, List<ActiveItemProducerData> savedProducersData = null) { }

	protected override void SetVisual() { }

	public void SpeedUpAllProducersRechargeTime() { }

	public void SpeedUpProducerRechargeTime() { }

	public virtual string ToString() { }

	public void Unlock() { }

	private void UpdateProducerTimers() { }

}

