//Type is in global namespace

public class ItemProducer : Producer
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ItemToProduce, Single> <>9__40_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal float <GetItemToProduce>b__40_0(ItemToProduce a) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass41_0
	{
		public ItemToProduce itemToProduce; //Field offset: 0x10

		public <>c__DisplayClass41_0() { }

		internal bool <TestProduce>b__0(ItemToProduce a) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass42_0
	{
		public BaseItem item; //Field offset: 0x10
		public ItemProducer <>4__this; //Field offset: 0x18

		public <>c__DisplayClass42_0() { }

		internal void <Dispose>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <UpdateRechargeTime>d__47 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public ItemProducer <>4__this; //Field offset: 0x20

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
		public <UpdateRechargeTime>d__47(int <>1__state) { }

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

	public int CurrentDropCapacity; //Field offset: 0x30
	public bool IsRecharging; //Field offset: 0x34
	public int RechargeCount; //Field offset: 0x38
	public ItemProducerData ItemProducerData; //Field offset: 0x40
	public DateTime StartTimeOfRecharge; //Field offset: 0x48
	public DateTime EndTimeOfRecharge; //Field offset: 0x50
	public ItemProducerTimer ItemProducerTimer; //Field offset: 0x58
	public GameObject EnergyIcon; //Field offset: 0x60
	protected BaseItem producerItem; //Field offset: 0x68
	[Inject]
	protected GameSceneManager gameSceneManager; //Field offset: 0x70
	[Inject]
	protected AsyncProcessor asyncProcessor; //Field offset: 0x78
	[Inject]
	private IGameManager gameManager; //Field offset: 0x80
	[Inject]
	private EnergyController energyController; //Field offset: 0x88
	[Inject]
	private PopupManager popupManager; //Field offset: 0x90
	[Inject]
	private SignalBus signalBus; //Field offset: 0x98
	[Inject]
	private TutorialController tutorialController; //Field offset: 0xA0
	private IEnumerator rechargeTimerCoroutine; //Field offset: 0xA8
	private DateTime rechargeStopTime; //Field offset: 0xB0
	private bool isEnergyIconVisible; //Field offset: 0xB8
	private bool isPlayingCanProduceAnimation; //Field offset: 0xB9
	private bool activityEnergySkip; //Field offset: 0xBA
	private ParticleSystemController _producerParticles; //Field offset: 0xC0

	public override bool consumeEnergy
	{
		 get { } //Length: 36
	}

	protected override int dropPlaceDegree
	{
		 get { } //Length: 8
	}

	public bool isRechargeable
	{
		 get { } //Length: 140
	}

	public int rechargeDurationInSeconds
	{
		 get { } //Length: 24
	}

	public bool transformOnDispose
	{
		 get { } //Length: 24
	}

	public ItemProducer() { }

	[CompilerGenerated]
	private void <Dispose>b__42_0() { }

	[CompilerGenerated]
	private void <TryProduce>b__33_0() { }

	[CompilerGenerated]
	private void <UpdateRechargeTime>g__UpdateTimer|47_0() { }

	protected void Dispose() { }

	public override bool get_consumeEnergy() { }

	protected override int get_dropPlaceDegree() { }

	public bool get_isRechargeable() { }

	public int get_rechargeDurationInSeconds() { }

	public bool get_transformOnDispose() { }

	protected override ItemToProduce GetItemToProduce() { }

	public int GetRemainingTime() { }

	public override void Init(BaseItem producerBaseItem, ItemProducerData itemProducerData, ItemProducerTimer itemProducerTimer, GameObject energyIcon, bool startOnInit, ActiveItemProducerData activeItemProducerInitData = null, ParticleSystemController producerParticles = null) { }

	protected void OnCurrentCapacityChanged() { }

	protected virtual void OnProduceFailed(ProduceFailTypes produceFailType) { }

	public override void OnProducerItemTapped() { }

	protected virtual void OnProduceSucceed(BaseItem producedItem) { }

	protected override void OnRechargeEnded(bool isSpeedUpUsed = false) { }

	protected void OnRechargeFailed() { }

	public void Reset() { }

	public virtual void ResumeProductionCoroutines() { }

	protected void SetEnergyIconVisibility(bool visible) { }

	public void SpeedUpRecharge() { }

	public void StartRecharging(int secondsToDeductFromPrevRecharge = 0) { }

	private void StartUpdateRechargeTimeCoroutine() { }

	public virtual void StopProductionCoroutines() { }

	private void StopUpdateRechargeTimeCoroutine() { }

	[Obsolete("This method should only called for test GetItemToProduce method rng.", True)]
	public void TestProduce(int sampleSize) { }

	public void TryProduce() { }

	private void TryProduceActivityItem() { }

	[IteratorStateMachine(typeof(<UpdateRechargeTime>d__47))]
	private IEnumerator UpdateRechargeTime() { }

}

