namespace GameLogic.Player.Items.Activation;

[MetaSerializableDerived(1)]
public class ActivationCycleData : IActivationCycleData
{
	[CompilerGenerated]
	private sealed class <GetAllLists>d__28 : IEnumerable<ValueTuple`2<IList, String>>, IEnumerable, IEnumerator<ValueTuple`2<IList, String>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"list", "name"})]
		private ValueTuple<IList, String> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28
		public ActivationCycleData <>4__this; //Field offset: 0x30

		private override ValueTuple<IList, String> System.Collections.Generic.IEnumerator<(System.Collections.IListlist,System.Stringname)>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 12
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 92
		}

		[DebuggerHidden]
		public <GetAllLists>d__28(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ValueTuple`2<IList, String>> System.Collections.Generic.IEnumerable<(System.Collections.IListlist,System.Stringname)>.GetEnumerator() { }

		[DebuggerHidden]
		private override ValueTuple<IList, String> System.Collections.Generic.IEnumerator<(System.Collections.IListlist,System.Stringname)>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	private List<MetaDuration> <DelaysBetweenCycles>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<F64> <TimerSkipMultiplier>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<Int32> <ActivationAmountInCycle>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<Int32> <HowManyAreGeneratedInCycle>k__BackingField; //Field offset: 0x28

	[MetaMember(3, MetaMemberFlags::None (0))]
	private List<Int32> ActivationAmountInCycle
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override int CycleCount
	{
		 get { } //Length: 72
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<MetaDuration> DelaysBetweenCycles
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IReadOnlyList<Int32> GetActivationAmountInCycle
	{
		 get { } //Length: 8
	}

	[IgnoreDataMember]
	public override IReadOnlyList<MetaDuration> GetDelaysBetweenCycles
	{
		 get { } //Length: 8
	}

	[IgnoreDataMember]
	public override IReadOnlyList<Int32> GetHowManyAreGeneratedInCycle
	{
		 get { } //Length: 8
	}

	[IgnoreDataMember]
	public override IReadOnlyList<F64> GetTimerSkipMultiplier
	{
		 get { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	private List<Int32> HowManyAreGeneratedInCycle
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private List<F64> TimerSkipMultiplier
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ActivationCycleData(List<MetaDuration> delaysBetweenCycles, List<F64> timerSkipMultiplier, List<Int32> activationAmountInCycle, List<Int32> howManyAreGeneratedInCycle) { }

	public ActivationCycleData() { }

	[CompilerGenerated]
	private List<Int32> get_ActivationAmountInCycle() { }

	public override int get_CycleCount() { }

	[CompilerGenerated]
	private List<MetaDuration> get_DelaysBetweenCycles() { }

	public override IReadOnlyList<Int32> get_GetActivationAmountInCycle() { }

	public override IReadOnlyList<MetaDuration> get_GetDelaysBetweenCycles() { }

	public override IReadOnlyList<Int32> get_GetHowManyAreGeneratedInCycle() { }

	public override IReadOnlyList<F64> get_GetTimerSkipMultiplier() { }

	[CompilerGenerated]
	private List<Int32> get_HowManyAreGeneratedInCycle() { }

	[CompilerGenerated]
	private List<F64> get_TimerSkipMultiplier() { }

	[IteratorStateMachine(typeof(<GetAllLists>d__28))]
	private IEnumerable<ValueTuple`2<IList, String>> GetAllLists() { }

	[CompilerGenerated]
	private void set_ActivationAmountInCycle(List<Int32> value) { }

	[CompilerGenerated]
	private void set_DelaysBetweenCycles(List<MetaDuration> value) { }

	[CompilerGenerated]
	private void set_HowManyAreGeneratedInCycle(List<Int32> value) { }

	[CompilerGenerated]
	private void set_TimerSkipMultiplier(List<F64> value) { }

	public override void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey) { }

}

