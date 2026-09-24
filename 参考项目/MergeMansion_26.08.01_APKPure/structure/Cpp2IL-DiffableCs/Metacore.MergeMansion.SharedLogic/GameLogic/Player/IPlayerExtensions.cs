namespace GameLogic.Player;

[Extension]
public static class IPlayerExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<MergeBoardId, Boolean> <>9__6_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <RemoveEnergyModes>b__6_0(MergeBoardId _) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass7_0
	{
		public IPlayer player; //Field offset: 0x10
		public EnergyType energyType; //Field offset: 0x18

		public <>c__DisplayClass7_0() { }

		internal bool <RemoveEnergyModesForEnergyType>b__0(MergeBoardId boardId) { }

	}

	[CompilerGenerated]
	private sealed class <GetActiveExtraInventories>d__4 : IEnumerable<IBoardInventory>, IEnumerable, IEnumerator<IBoardInventory>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IBoardInventory <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private PlayerProgressionEventsModel <playerProgressionEvents>5__2; //Field offset: 0x38
		private MetacoreTime <currentTime>5__3; //Field offset: 0x40
		private IEnumerator<ProgressionEventId> <>7__wrap3; //Field offset: 0x48

		private override IBoardInventory System.Collections.Generic.IEnumerator<GameLogic.Player.IBoardInventory>.Current
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
		public <GetActiveExtraInventories>d__4(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IBoardInventory> System.Collections.Generic.IEnumerable<GameLogic.Player.IBoardInventory>.GetEnumerator() { }

		[DebuggerHidden]
		private override IBoardInventory System.Collections.Generic.IEnumerator<GameLogic.Player.IBoardInventory>.get_Current() { }

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
	private sealed class <GetAllActiveBoardEvents>d__1 : IEnumerable<IBoardEventModel>, IEnumerable, IEnumerator<IBoardEventModel>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IBoardEventModel <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IEnumerator<CollectibleBoardEventModel> <>7__wrap1; //Field offset: 0x38
		private IEnumerator<LeaderboardEventModel> <>7__wrap2; //Field offset: 0x40
		private IEnumerator<MysteryMachineEventModel> <>7__wrap3; //Field offset: 0x48
		private IEnumerator<ShortLeaderboardEventModel> <>7__wrap4; //Field offset: 0x50

		private override IBoardEventModel System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.IBoardEventModel>.Current
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
		public <GetAllActiveBoardEvents>d__1(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private void <>m__Finally3() { }

		private void <>m__Finally4() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IBoardEventModel> System.Collections.Generic.IEnumerable<Code.GameLogic.GameEvents.IBoardEventModel>.GetEnumerator() { }

		[DebuggerHidden]
		private override IBoardEventModel System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.IBoardEventModel>.get_Current() { }

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
	private sealed class <GetAllActiveEventsWithPoints>d__3 : IEnumerable<IPointsEvent>, IEnumerable, IEnumerator<IPointsEvent>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IPointsEvent <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IEnumerator<CollectibleBoardEventModel> <>7__wrap1; //Field offset: 0x38
		private IEnumerator<LeaderboardEventModel> <>7__wrap2; //Field offset: 0x40
		private IEnumerator<BoultonLeagueEventModel> <>7__wrap3; //Field offset: 0x48
		private IEnumerator<ShortLeaderboardEventModel> <>7__wrap4; //Field offset: 0x50

		private override IPointsEvent System.Collections.Generic.IEnumerator<GameLogic.Player.Rewards.IPointsEvent>.Current
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
		public <GetAllActiveEventsWithPoints>d__3(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private void <>m__Finally3() { }

		private void <>m__Finally4() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IPointsEvent> System.Collections.Generic.IEnumerable<GameLogic.Player.Rewards.IPointsEvent>.GetEnumerator() { }

		[DebuggerHidden]
		private override IPointsEvent System.Collections.Generic.IEnumerator<GameLogic.Player.Rewards.IPointsEvent>.get_Current() { }

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
	private sealed class <GetAllEnergyAttachmentEvents>d__2 : IEnumerable<IEnergyAttachmentEvent>, IEnumerable, IEnumerator<IEnergyAttachmentEvent>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IEnergyAttachmentEvent <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IEnumerator<SoloMilestoneEventModel> <>7__wrap1; //Field offset: 0x38

		private override IEnergyAttachmentEvent System.Collections.Generic.IEnumerator<Code.GameLogic.IEnergyAttachmentEvent>.Current
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
		public <GetAllEnergyAttachmentEvents>d__2(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IEnergyAttachmentEvent> System.Collections.Generic.IEnumerable<Code.GameLogic.IEnergyAttachmentEvent>.GetEnumerator() { }

		[DebuggerHidden]
		private override IEnergyAttachmentEvent System.Collections.Generic.IEnumerator<Code.GameLogic.IEnergyAttachmentEvent>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}


	[Extension]
	[IteratorStateMachine(typeof(<GetActiveExtraInventories>d__4))]
	public static IEnumerable<IBoardInventory> GetActiveExtraInventories(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<GetAllActiveBoardEvents>d__1))]
	public static IEnumerable<IBoardEventModel> GetAllActiveBoardEvents(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<GetAllActiveEventsWithPoints>d__3))]
	public static IEnumerable<IPointsEvent> GetAllActiveEventsWithPoints(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<GetAllEnergyAttachmentEvents>d__2))]
	public static IEnumerable<IEnergyAttachmentEvent> GetAllEnergyAttachmentEvents(IPlayer player) { }

	[Extension]
	public static Option<IBoardEventInfo> GetBoardEventById(IPlayer player, string id) { }

	[Extension]
	public static ProgressionEventInfo GetRandomActiveProgressionEvent(IPlayer player, MetacoreTime currentTime) { }

	[Extension]
	public static ValueTuple<IBoardInventory, Nullable`1<MetaTime>> GetRentableInventories(IPlayer player) { }

	[Extension]
	public static void RemoveEnergyModes(IPlayer player) { }

	[Extension]
	private static void RemoveEnergyModesByFilter(IPlayer player, Func<MergeBoardId, Boolean> boardFilter) { }

	[Extension]
	public static void RemoveEnergyModesForEnergyType(IPlayer player, EnergyType energyType) { }

}

