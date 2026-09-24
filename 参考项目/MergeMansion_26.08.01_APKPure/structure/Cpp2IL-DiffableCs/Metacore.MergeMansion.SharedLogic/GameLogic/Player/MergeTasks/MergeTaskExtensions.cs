namespace GameLogic.Player.MergeTasks;

[Extension]
public static class MergeTaskExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<HotspotDefinition, Boolean> <>9__19_0; //Field offset: 0x8
		public static Func<F64, IItemDefinition, F64> <>9__26_2; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal F64 <GemValue>b__26_2(F64 sum, IItemDefinition item) { }

		internal bool <RepeatableTasks>b__19_0(HotspotDefinition hotspot) { }

	}

	[CompilerGenerated]
	private sealed class <>c__31
	{
		public static readonly <>c__31<T> <>9; //Field offset: 0x0
		public static Func<T, HotspotTask> <>9__31_0; //Field offset: 0x0

		private static <>c__31`1() { }

		public <>c__31`1() { }

		internal HotspotTask <InPriorityOrder>b__31_0(T task) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass12_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass12_0() { }

		internal bool <NonStoryEventMergeTasks>b__0(HotspotDefinition hotspot) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass13_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass13_0() { }

		internal bool <StoryEventMergeTasks>b__0(HotspotDefinition hotspot) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass16_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass16_0() { }

		internal bool <UndiscoveredAreasTasks>b__0(HotspotId hotspotId) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass17_0
	{
		public IReadOnlyDictionary<HotspotId, HotspotDefinition> hotspotDefinitions; //Field offset: 0x0
		public IPlayer player; //Field offset: 0x8
		public ProgressState progressState; //Field offset: 0x10

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass19_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass19_0() { }

		internal RepeatableTask <RepeatableTasks>b__1(HotspotDefinition hotspot) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass22_0
	{
		public ItemDefinition itemDefinition; //Field offset: 0x10

		public <>c__DisplayClass22_0() { }

		internal bool <RequiresItem>b__0(EventTaskInfo subTask) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass24_0
	{
		public IPlayer player; //Field offset: 0x10
		public Func<PlayerItemRequirement, IEnumerable`1<IItemDefinition>> <>9__3; //Field offset: 0x18

		public <>c__DisplayClass24_0() { }

		internal IEnumerable<IItemDefinition> <RequiresItems>b__0(PlayerItemRequirement req) { }

		internal IEnumerable<IItemDefinition> <RequiresItems>b__1(ItemNeededAndConsumeRequirement req) { }

		internal IEnumerable<IEnumerable`1<IItemDefinition>> <RequiresItems>b__2(EventTaskInfo subTask) { }

		internal IEnumerable<IItemDefinition> <RequiresItems>b__3(PlayerItemRequirement req) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass26_0
	{
		public IPlayer player; //Field offset: 0x10
		public Func<PlayerItemRequirement, IItemDefinition> <>9__3; //Field offset: 0x18

		public <>c__DisplayClass26_0() { }

		internal F64 <GemValue>b__0(F64 sum, PlayerItemRequirement req) { }

		internal IEnumerable<IItemDefinition> <GemValue>b__1(EventTaskInfo subTask) { }

		internal IItemDefinition <GemValue>b__3(PlayerItemRequirement req) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass29_0
	{
		public int item; //Field offset: 0x10

		public <>c__DisplayClass29_0() { }

		internal bool <IsItemRequired>b__0(PlayerItemRequirement req) { }

	}

	[CompilerGenerated]
	private sealed class <AutoMergeFeatureTasks>d__1 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <AutoMergeFeatureTasks>d__1(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <BoultonLeagueEventTasks>d__5 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private PlayerModel <playerModel>5__2; //Field offset: 0x38
		private IEnumerator<BoultonLeagueEventModel> <>7__wrap2; //Field offset: 0x40

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <BoultonLeagueEventTasks>d__5(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <CollectibleBoardEventProgressTasks>d__2 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private PlayerModel <playerModel>5__2; //Field offset: 0x38
		private IEnumerator<CollectibleBoardEventModel> <>7__wrap2; //Field offset: 0x40

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <CollectibleBoardEventProgressTasks>d__2(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <ComingSoonTasks>d__18 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <ComingSoonTasks>d__18(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <CoreSupportEventProgressTasks>d__0 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private PlayerModel <playerModel>5__2; //Field offset: 0x38
		private IEnumerator<CoreSupportEventModel> <>7__wrap2; //Field offset: 0x40

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <CoreSupportEventProgressTasks>d__0(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <EnergyModeEventProgressTasks>d__6 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private PlayerModel <playerModel>5__2; //Field offset: 0x38
		private PlayerEnergyModeEventsModel <energyModeEventsModel>5__3; //Field offset: 0x40
		private IEnumerator<EnergyModeEventInfo> <>7__wrap3; //Field offset: 0x48

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <EnergyModeEventProgressTasks>d__6(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <GarageCleanupTasks>d__8 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IEnumerator<GarageCleanupEventModel> <>7__wrap1; //Field offset: 0x38

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <GarageCleanupTasks>d__8(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <LeaderboardEventProgressTasks>d__3 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private PlayerModel <playerModel>5__2; //Field offset: 0x38
		private PlayerLeaderboardEventsModel <leaderboardEventsModel>5__3; //Field offset: 0x40
		private IEnumerator<LeaderboardEventInfo> <>7__wrap3; //Field offset: 0x48

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <LeaderboardEventProgressTasks>d__3(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <MergeTasksConditionalNotInPriorityOrder>d__10 : IEnumerable<HotspotMergeTask>, IEnumerable, IEnumerator<HotspotMergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private HotspotMergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private Func<HotspotDefinition, Boolean> checkCondition; //Field offset: 0x38
		public Func<HotspotDefinition, Boolean> <>3__checkCondition; //Field offset: 0x40
		private IReadOnlyDictionary<HotspotId, HotspotDefinition> <hotspotDefinitions>5__2; //Field offset: 0x48
		private Enumerator<HotspotId> <>7__wrap2; //Field offset: 0x50

		private override HotspotMergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.HotspotMergeTask>.Current
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
		public <MergeTasksConditionalNotInPriorityOrder>d__10(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<HotspotMergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.HotspotMergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override HotspotMergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.HotspotMergeTask>.get_Current() { }

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
	private sealed class <MysteryMachineEventProgressTasks>d__4 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private PlayerModel <playerModel>5__2; //Field offset: 0x38
		private PlayerMysteryMachineEventsModel <mysteryMachineEventsModel>5__3; //Field offset: 0x40
		private IEnumerator<MysteryMachineEventInfo> <>7__wrap3; //Field offset: 0x48

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <MysteryMachineEventProgressTasks>d__4(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <PlayerVisibleTasks>d__20 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IEnumerator<MergeTask> <>7__wrap1; //Field offset: 0x38

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <PlayerVisibleTasks>d__20(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally10() { }

		private void <>m__Finally11() { }

		private void <>m__Finally12() { }

		private void <>m__Finally13() { }

		private void <>m__Finally14() { }

		private void <>m__Finally15() { }

		private void <>m__Finally16() { }

		private void <>m__Finally2() { }

		private void <>m__Finally3() { }

		private void <>m__Finally4() { }

		private void <>m__Finally5() { }

		private void <>m__Finally6() { }

		private void <>m__Finally7() { }

		private void <>m__Finally8() { }

		private void <>m__Finally9() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <ProgressionEventTasks>d__9 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IEnumerator<ProgressionEventModel> <>7__wrap1; //Field offset: 0x38

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <ProgressionEventTasks>d__9(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <ShortLeaderboardEventProgressTasks>d__7 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private PlayerModel <playerModel>5__2; //Field offset: 0x38
		private PlayerShortLeaderboardEventsModel <shortLeaderboardEventsModel>5__3; //Field offset: 0x40
		private IEnumerator<ShortLeaderboardEventInfo> <>7__wrap3; //Field offset: 0x48

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <ShortLeaderboardEventProgressTasks>d__7(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <UndiscoveredAreasTasks>d__16 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30

		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.Current
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
		public <UndiscoveredAreasTasks>d__16(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.MergeTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.MergeTask>.get_Current() { }

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
	private sealed class <UnlockAreaTasksNotInPriorityOrder>d__14 : IEnumerable<UnlockAreaTask>, IEnumerable, IEnumerator<UnlockAreaTask>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private UnlockAreaTask <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IReadOnlyDictionary<HotspotId, HotspotDefinition> <hotspotDefinitions>5__2; //Field offset: 0x38
		private Enumerator<HotspotId> <>7__wrap2; //Field offset: 0x40

		private override UnlockAreaTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.UnlockAreaTask>.Current
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
		public <UnlockAreaTasksNotInPriorityOrder>d__14(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<UnlockAreaTask> System.Collections.Generic.IEnumerable<GameLogic.Player.MergeTasks.UnlockAreaTask>.GetEnumerator() { }

		[DebuggerHidden]
		private override UnlockAreaTask System.Collections.Generic.IEnumerator<GameLogic.Player.MergeTasks.UnlockAreaTask>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private class HotspotTaskComparer : IComparer<HotspotTask>
	{
		public static readonly IComparer<HotspotTask> Instance; //Field offset: 0x0

		private static HotspotTaskComparer() { }

		public HotspotTaskComparer() { }

		public override int Compare(HotspotTask x, HotspotTask y) { }

	}


	[CompilerGenerated]
	internal static bool <ShouldDisplayComingSoonTask>g__CanPotentiallyUnlockAreas|17_0(ref <>c__DisplayClass17_0 unnamed_param_0) { }

	[CompilerGenerated]
	internal static ValueTuple<IAreaInfo, Boolean> <ShouldDisplayComingSoonTask>g__GetOpenAreaData|17_1(ref <>c__DisplayClass17_0 unnamed_param_0) { }

	[Extension]
	[IteratorStateMachine(typeof(<AutoMergeFeatureTasks>d__1))]
	public static IEnumerable<MergeTask> AutoMergeFeatureTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<BoultonLeagueEventTasks>d__5))]
	public static IEnumerable<MergeTask> BoultonLeagueEventTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<CollectibleBoardEventProgressTasks>d__2))]
	public static IEnumerable<MergeTask> CollectibleBoardEventProgressTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<ComingSoonTasks>d__18))]
	public static IEnumerable<MergeTask> ComingSoonTasks(IPlayer player) { }

	[Extension]
	public static bool ContentsAreVisible(MergeTask task) { }

	[Extension]
	[IteratorStateMachine(typeof(<CoreSupportEventProgressTasks>d__0))]
	public static IEnumerable<MergeTask> CoreSupportEventProgressTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<EnergyModeEventProgressTasks>d__6))]
	public static IEnumerable<MergeTask> EnergyModeEventProgressTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<GarageCleanupTasks>d__8))]
	public static IEnumerable<MergeTask> GarageCleanupTasks(IPlayer player) { }

	[Extension]
	public static F64 GemValue(MergeTask task, IPlayer player) { }

	[Extension]
	private static HotspotDefinition GetLastCompletedMergeGoalHotspotForArea(IPlayer player, AreaInfo areaInfo) { }

	[Extension]
	public static HotspotMergeTask GetLastCompletedMergeGoalTaskForArea(IPlayer player, AreaInfo areaInfo) { }

	[Extension]
	public static HotspotMergeTask GetStackMiniGameTask(IPlayer player, CardStackId stackId) { }

	[Extension]
	private static IOrderedEnumerable<T> InPriorityOrder(IEnumerable<T> tasks) { }

	private static bool IsItemRequired(int item, IEnumerable<PlayerItemRequirement> requirements) { }

	private static bool IsItemRequired(ItemDefinition item, IEnumerable<PlayerItemRequirement> requirements) { }

	[Extension]
	[IteratorStateMachine(typeof(<LeaderboardEventProgressTasks>d__3))]
	public static IEnumerable<MergeTask> LeaderboardEventProgressTasks(IPlayer player) { }

	[Extension]
	public static IEnumerable<MergeTask> MergeTasksConditional(IPlayer player, Func<HotspotDefinition, Boolean> checkCondition) { }

	[Extension]
	[IteratorStateMachine(typeof(<MergeTasksConditionalNotInPriorityOrder>d__10))]
	public static IEnumerable<HotspotMergeTask> MergeTasksConditionalNotInPriorityOrder(IPlayer player, Func<HotspotDefinition, Boolean> checkCondition) { }

	[Extension]
	[IteratorStateMachine(typeof(<MysteryMachineEventProgressTasks>d__4))]
	public static IEnumerable<MergeTask> MysteryMachineEventProgressTasks(IPlayer player) { }

	[Extension]
	public static IEnumerable<MergeTask> NonStoryEventMergeTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<PlayerVisibleTasks>d__20))]
	public static IEnumerable<MergeTask> PlayerVisibleTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<ProgressionEventTasks>d__9))]
	public static IEnumerable<MergeTask> ProgressionEventTasks(IPlayer player) { }

	[Extension]
	public static IEnumerable<MergeTask> RepeatableTasks(IPlayer player) { }

	[Extension]
	public static bool RequiresAnyItem(MergeTask task, IEnumerable<IItemDefinition> mergeChainItems, IPlayer player) { }

	[Extension]
	public static bool RequiresItem(MergeTask task, ItemDefinition itemDefinition) { }

	[Extension]
	public static IEnumerable<IEnumerable`1<IItemDefinition>> RequiresItems(MergeTask task, IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<ShortLeaderboardEventProgressTasks>d__7))]
	public static IEnumerable<MergeTask> ShortLeaderboardEventProgressTasks(IPlayer player) { }

	private static bool ShouldDisplayComingSoonTask(IPlayer player) { }

	[Extension]
	public static IEnumerable<MergeTask> StoryEventMergeTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<UndiscoveredAreasTasks>d__16))]
	public static IEnumerable<MergeTask> UndiscoveredAreasTasks(IPlayer player) { }

	[Extension]
	public static IEnumerable<MergeTask> UnlockAreaTasks(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<UnlockAreaTasksNotInPriorityOrder>d__14))]
	public static IEnumerable<UnlockAreaTask> UnlockAreaTasksNotInPriorityOrder(IPlayer player) { }

}

