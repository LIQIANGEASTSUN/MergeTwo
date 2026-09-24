//Type is in global namespace

public class EnergyController : IInitializable
{
	[CompilerGenerated]
	private sealed class <UpdateRechargeTime>d__34 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public EnergyController <>4__this; //Field offset: 0x20

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
		public <UpdateRechargeTime>d__34(int <>1__state) { }

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

	[CompilerGenerated]
	private sealed class <UpdateUnlimitedEnergyTime>d__43 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public EnergyController <>4__this; //Field offset: 0x20

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
		public <UpdateUnlimitedEnergyTime>d__43(int <>1__state) { }

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

	public const int RECHARGE_DURATION_IN_SECONDS = 120; //Field offset: 0x0
	public const int MAX_ENERGY_AMOUNT_FOR_RECHARGE = 100; //Field offset: 0x0
	private const string KEY_ENERGY_Pack_Threshold = "energy_pack_threshold"; //Field offset: 0x0
	public bool isUnlimitedEnergyActive; //Field offset: 0x10
	[Inject]
	private AsyncProcessor asyncProcessor; //Field offset: 0x18
	[Inject]
	private EnergyAmountViewer energyAmountViewer; //Field offset: 0x20
	[Inject]
	private EnergyTimer energyTimer; //Field offset: 0x28
	[Inject]
	private readonly SignalBus signalBus; //Field offset: 0x30
	[Inject]
	private GameData gameData; //Field offset: 0x38
	private bool isRecharging; //Field offset: 0x40
	private IEnumerator unlimitedEnergyTimerCoroutine; //Field offset: 0x48
	private IEnumerator rechargeTimerCoroutine; //Field offset: 0x50
	private DateTime pauseTime; //Field offset: 0x58
	private bool isPaused; //Field offset: 0x60
	private long _energyPackThreshold; //Field offset: 0x68
	[CompilerGenerated]
	private EnergyPauseCounter <energyPauseCounter>k__BackingField; //Field offset: 0x70

	public long EnergyPackThreshold
	{
		 get { } //Length: 8
	}

	public EnergyPauseCounter energyPauseCounter
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private DateTime rechargeFinishTime
	{
		private get { } //Length: 36
		private set { } //Length: 36
	}

	private DateTime rechargeStartTime
	{
		private get { } //Length: 36
		private set { } //Length: 36
	}

	private DateTime unlimitedEnergyFinishTime
	{
		private get { } //Length: 36
		private set { } //Length: 36
	}

	private DateTime unlimitedEnergyStartTime
	{
		private get { } //Length: 36
		private set { } //Length: 36
	}

	public EnergyController() { }

	private void AddSecondsToUnlimited(int seconds) { }

	public void CheckUnlimitedEnergyPause() { }

	public long get_EnergyPackThreshold() { }

	[CompilerGenerated]
	public EnergyPauseCounter get_energyPauseCounter() { }

	private DateTime get_rechargeFinishTime() { }

	private DateTime get_rechargeStartTime() { }

	private DateTime get_unlimitedEnergyFinishTime() { }

	private DateTime get_unlimitedEnergyStartTime() { }

	public int GetRechargeRemainingTime() { }

	private int GetUnlimitedEnergyRemainingTime() { }

	public override void Initialize() { }

	private void OnEnergyAdded() { }

	private void OnEnergySpend() { }

	private void OnEnergyUpdated(EnergyUpdatedSignal energyUpdatedSignal) { }

	private void OnRechargeEnded() { }

	private void OnUnlimitedEnergyEnded() { }

	[CompilerGenerated]
	public void set_energyPauseCounter(EnergyPauseCounter value) { }

	private void set_rechargeFinishTime(DateTime value) { }

	private void set_rechargeStartTime(DateTime value) { }

	private void set_unlimitedEnergyFinishTime(DateTime value) { }

	private void set_unlimitedEnergyStartTime(DateTime value) { }

	public void StartUnlimitedEnergy(int seconds, string trigger) { }

	public void StartUnlimitedEnergyWithoutUpdateView(int seconds, string trigger) { }

	public void TrySetUnlimitedPause() { }

	private void TryStartUnlimitedEnergyTimerCoroutine() { }

	[IteratorStateMachine(typeof(<UpdateRechargeTime>d__34))]
	private IEnumerator UpdateRechargeTime() { }

	[IteratorStateMachine(typeof(<UpdateUnlimitedEnergyTime>d__43))]
	private IEnumerator UpdateUnlimitedEnergyTime() { }

	public void UpdateUnlimitedEnergyView() { }

}

