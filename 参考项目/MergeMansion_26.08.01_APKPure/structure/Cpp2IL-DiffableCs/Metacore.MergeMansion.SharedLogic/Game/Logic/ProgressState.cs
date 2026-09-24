namespace Game.Logic;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {1, 10, 11, 15, 16, 20, 21, 23, 28, 35, 36, 37, 38, 39, 41, 44, 48, 50, 62, 69, 70, 71, 73, 75, 84, 87, 88, 89, 90, 91, 92, 94})]
[MetaSerializable]
public sealed class ProgressState
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, String> <>9__283_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Key", "Value"})]
		public static Func<KeyValuePair`2<String, HotspotId>, ValueTuple`2<String, HotspotId>> <>9__315_0; //Field offset: 0x10
		public static Func<MergeItem, Int32> <>9__356_0; //Field offset: 0x18
		public static Func<String, Boolean> <>9__407_0; //Field offset: 0x20
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Key", "Value"})]
		public static Func<KeyValuePair`2<String, DecorationId>, ValueTuple`2<String, DecorationId>> <>9__412_0; //Field offset: 0x28
		public static Func<PlayCard, Boolean> <>9__469_0; //Field offset: 0x30
		public static Func<PlayCard, Int32> <>9__478_1; //Field offset: 0x38

		private static <>c() { }

		public <>c() { }

		internal bool <CanVisibleCardStackBeCompleted>b__469_0(PlayCard x) { }

		internal string <get_DiscoveredItemTypeStrings>b__283_0(int item) { }

		internal int <GetCurrentStackRow>b__478_1(PlayCard x) { }

		internal bool <GetVisibleDecorationCount>b__407_0(string entry) { }

		internal ValueTuple<String, DecorationId> <GetVisibleEventDecorations>b__412_0(KeyValuePair<String, DecorationId> kvp) { }

		internal ValueTuple<String, HotspotId> <GetVisibleEventHotspots>b__315_0(KeyValuePair<String, HotspotId> kvp) { }

		internal int <TrySetMergeItemsDiscovered>b__356_0(MergeItem def) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass484_0
	{
		public CustomHotspotTableId customHotspotTableId; //Field offset: 0x10
		public IPlayer player; //Field offset: 0x18

		public <>c__DisplayClass484_0() { }

		internal bool <GetIllustrationTasksOnCompletion>b__0(HotspotDefinition hotspot) { }

	}

	[CompilerGenerated]
	private sealed class <GetAllClaimableWeightStarRewards>d__436 : IEnumerable<PlayerReward>, IEnumerable, IEnumerator<PlayerReward>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private PlayerReward <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		public ProgressState <>4__this; //Field offset: 0x38
		private IEnumerator<ConfigLookupValue`1<IItemDefinition>> <>7__wrap1; //Field offset: 0x40
		private IItemDefinition <itemDef>5__3; //Field offset: 0x48
		private IReadOnlyList<IWeightStarRewardData> <weightStarRewards>5__4; //Field offset: 0x50
		private int <count>5__5; //Field offset: 0x58
		private int <i>5__6; //Field offset: 0x5C

		private override PlayerReward System.Collections.Generic.IEnumerator<GameLogic.Player.Rewards.PlayerReward>.Current
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
		public <GetAllClaimableWeightStarRewards>d__436(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<PlayerReward> System.Collections.Generic.IEnumerable<GameLogic.Player.Rewards.PlayerReward>.GetEnumerator() { }

		[DebuggerHidden]
		private override PlayerReward System.Collections.Generic.IEnumerator<GameLogic.Player.Rewards.PlayerReward>.get_Current() { }

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
	private sealed class <GetProgressionTracksWithArg>d__294 : IEnumerable<ProgressionTrack>, IEnumerable, IEnumerator<ProgressionTrack>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ProgressionTrack <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public ProgressState <>4__this; //Field offset: 0x28
		private string arg; //Field offset: 0x30
		public string <>3__arg; //Field offset: 0x38
		private ValueEnumerator<ProgressionTrackId, ProgressionTrack> <>7__wrap1; //Field offset: 0x40

		private override ProgressionTrack System.Collections.Generic.IEnumerator<Code.GameLogic.ProgressionTracks.ProgressionTrack>.Current
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
		public <GetProgressionTracksWithArg>d__294(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ProgressionTrack> System.Collections.Generic.IEnumerable<Code.GameLogic.ProgressionTracks.ProgressionTrack>.GetEnumerator() { }

		[DebuggerHidden]
		private override ProgressionTrack System.Collections.Generic.IEnumerator<Code.GameLogic.ProgressionTracks.ProgressionTrack>.get_Current() { }

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
	private sealed class <GetStoredAnimationStates>d__345 : IEnumerable<ValueTuple`3<String, String, String>>, IEnumerable, IEnumerator<ValueTuple`3<String, String, String>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"gameObjectName", "animationTrackName", "state"})]
		private ValueTuple<String, String, String> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x30
		public ProgressState <>4__this; //Field offset: 0x38
		private Enumerator<String, String> <>7__wrap1; //Field offset: 0x40

		private override ValueTuple<String, String, String> System.Collections.Generic.IEnumerator<(System.StringgameObjectName,System.StringanimationTrackName,System.Stringstate)>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 20
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 100
		}

		[DebuggerHidden]
		public <GetStoredAnimationStates>d__345(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ValueTuple`3<String, String, String>> System.Collections.Generic.IEnumerable<(System.StringgameObjectName,System.StringanimationTrackName,System.Stringstate)>.GetEnumerator() { }

		[DebuggerHidden]
		private override ValueTuple<String, String, String> System.Collections.Generic.IEnumerator<(System.StringgameObjectName,System.StringanimationTrackName,System.Stringstate)>.get_Current() { }

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
	private sealed class <GetStoredUnityAnimationStates>d__346 : IEnumerable<ValueTuple`2<String, String>>, IEnumerable, IEnumerator<ValueTuple`2<String, String>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"gameObjectName", "state"})]
		private ValueTuple<String, String> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28
		public ProgressState <>4__this; //Field offset: 0x30
		private Enumerator<String, String> <>7__wrap1; //Field offset: 0x38

		private override ValueTuple<String, String> System.Collections.Generic.IEnumerator<(System.StringgameObjectName,System.Stringstate)>.Current
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
		public <GetStoredUnityAnimationStates>d__346(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ValueTuple`2<String, String>> System.Collections.Generic.IEnumerable<(System.StringgameObjectName,System.Stringstate)>.GetEnumerator() { }

		[DebuggerHidden]
		private override ValueTuple<String, String> System.Collections.Generic.IEnumerator<(System.StringgameObjectName,System.Stringstate)>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	internal sealed class EventDecorationRemovedEvent : MulticastDelegate
	{

		public EventDecorationRemovedEvent(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(DecorationId decorationId, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(DecorationId decorationId) { }

	}

	internal sealed class EventDecorationSetEvent : MulticastDelegate
	{

		public EventDecorationSetEvent(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(DecorationId decorationId, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(DecorationId decorationId) { }

	}

	internal sealed class EventHotspotRemovedEvent : MulticastDelegate
	{

		public EventHotspotRemovedEvent(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(string eventId, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(string eventId) { }

	}

	private static readonly DirectorGroupId notificationsGroupId; //Field offset: 0x0
	private static readonly char animationSplitChar; //Field offset: 0x8
	public static readonly DecorationId DecorationNone; //Field offset: 0x10
	[CompilerGenerated]
	private int <playerLevel>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<Int32> <legacyEventGroupsCompleted>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private OrderedSet<HotspotId> <visibleHotspots>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private OrderedSet<HotspotId> <completedHotspots>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private MetaDictionary<String, String> <storedAnimationStates>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private OrderedSet<Int32> <discoveredItemTypes>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <boughtBoxAmounts>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private RandomPCG <random>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private MetaTime <endTimeOfCurrentEventBoard>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private int <currentEventBoardAdventureStep>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private CalendarBoardEventStatus <currentEventBoardStatus>k__BackingField; //Field offset: 0x5C
	[CompilerGenerated]
	private MergeItem <undoItemSellItem>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private int <undoItemSellCoordinateX>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private int <undoItemSellCoordinateY>k__BackingField; //Field offset: 0x6C
	public Action OnUndoSellItemCleared; //Field offset: 0x70
	public ItemDiscoveredEvent ItemDiscovered; //Field offset: 0x78
	public ItemUnlockedEvent ItemUnlocked; //Field offset: 0x80
	[CompilerGenerated]
	private OrderedSet<MassMailIdenfiers> <addedMassEmails>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private bool <isInventoryAvailable>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private OrderedSet<String> <ownedDecorations>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private List<String> <visibleDecorations>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private MergeBoardId <undoBoardId>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private MergeBoardId <currentEventBoardId2>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private MetaDictionary<MergeBoardId, Int64> <nextPossibleEventReplayDay2>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private MetaDictionary<MergeBoardId, Int32> <eventProgressValues2>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private MetaDictionary<MergeBoardId, Int32> <eventStartedTimes2>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private OrderedSet<String> <eventsStartedAtLeastOnce>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private MetaDictionary<String, String> <storedUnityAnimationStates>k__BackingField; //Field offset: 0xD8
	[ExcludeFromGdprExport]
	[MetaMember(40, MetaMemberFlags::None (0))]
	private OrderedSet<HotspotId> FinalizedHotspots; //Field offset: 0xE0
	[CompilerGenerated]
	private OrderedSet<Int32> <claimedDiscoveryRewards>k__BackingField; //Field offset: 0xE8
	[CompilerGenerated]
	private OrderedSet<MergeChainId> <claimedDiscoveryCompletionRewards>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private OrderedSet<AreaId> <completedAreas>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private OrderedSet<MergeRewardId> <CollectedMergeRewards>k__BackingField; //Field offset: 0x100
	[CompilerGenerated]
	private OrderedSet<AreaId> <notedTeasedAreas>k__BackingField; //Field offset: 0x108
	[CompilerGenerated]
	private OrderedSet<DirectorGroupId> <eventGroupsCompleted>k__BackingField; //Field offset: 0x110
	[CompilerGenerated]
	private MetaDictionary<MergeChainId, Int32> <mergeChainLevels>k__BackingField; //Field offset: 0x118
	[CompilerGenerated]
	private OrderedSet<DialogCharacterType> <discoveredCharacterTypes>k__BackingField; //Field offset: 0x120
	[CompilerGenerated]
	private MetaDictionary<LayeredDecorationSetId, Int32> <layeredDecorationProgress>k__BackingField; //Field offset: 0x128
	[CompilerGenerated]
	private MetaDictionary<String, DecorationId> <visibleEventDecorations>k__BackingField; //Field offset: 0x130
	[CompilerGenerated]
	private EventDecorationRemovedEvent EventDecorationRemoved; //Field offset: 0x138
	[CompilerGenerated]
	private EventDecorationSetEvent EventDecorationSet; //Field offset: 0x140
	[CompilerGenerated]
	private MetaDictionary<String, HotspotId> <visibleEventHotspots>k__BackingField; //Field offset: 0x148
	[CompilerGenerated]
	private MetaDictionary<Int32, F32> <itemWeightRecords>k__BackingField; //Field offset: 0x150
	[CompilerGenerated]
	private OrderedSet<Int32> <photoTakenItems>k__BackingField; //Field offset: 0x158
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <itemCaughtCount>k__BackingField; //Field offset: 0x160
	[CompilerGenerated]
	private List<Int32> <UnclaimedWorldRecordRewardFishes>k__BackingField; //Field offset: 0x168
	[CompilerGenerated]
	private MetaDictionary<Int32, OrderedSet`1<Int32>> <ClaimedWeightStarRewards>k__BackingField; //Field offset: 0x170
	[CompilerGenerated]
	private OrderedSet<SeasonId> <seasonsDiscovered>k__BackingField; //Field offset: 0x178
	[CompilerGenerated]
	private MetaDictionary<HotspotId, Int32> <completedRepeatableTasks>k__BackingField; //Field offset: 0x180
	[CompilerGenerated]
	private bool <DidClaimFreeGems>k__BackingField; //Field offset: 0x188
	[CompilerGenerated]
	private MetaDictionary<HotspotId, MetaTime> <visibleHotspotsWithTimestamps>k__BackingField; //Field offset: 0x190
	[CompilerGenerated]
	private bool <DidFlashSellTutorialFinished>k__BackingField; //Field offset: 0x198
	[CompilerGenerated]
	private OrderedSet<PetId> <Pets>k__BackingField; //Field offset: 0x1A0
	[CompilerGenerated]
	private PetId <ActivePet>k__BackingField; //Field offset: 0x1A8
	[CompilerGenerated]
	private MetaDictionary<MergeBoardId, Int64> <AnalyticsFakeZeroEnergySaldoByMergeBoardId>k__BackingField; //Field offset: 0x1B0
	[CompilerGenerated]
	private MetaDictionary<HotspotId, CardStack> <visibleCardStacks>k__BackingField; //Field offset: 0x1B8
	public Dictionary<IItemDefinition, Int32> DebugGeneratedDynamicTasksPool; //Field offset: 0x1C0
	[CompilerGenerated]
	private MetaDictionary<HotspotId, Int32> <hotspotAppearActionCount>k__BackingField; //Field offset: 0x1C8
	[CompilerGenerated]
	private Nullable<MetaTime> <latestCompletedHotspotTime>k__BackingField; //Field offset: 0x1D0
	[CompilerGenerated]
	private MetaDictionary<Int32, F32> <gemWeightRecords>k__BackingField; //Field offset: 0x1E0
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <gemFoundCount>k__BackingField; //Field offset: 0x1E8
	[CompilerGenerated]
	private List<Int32> <UnclaimedWorldRecordGemReward>k__BackingField; //Field offset: 0x1F0
	[CompilerGenerated]
	private MetaDictionary<Int32, OrderedSet`1<Int32>> <ClaimedGemWeightRewards>k__BackingField; //Field offset: 0x1F8
	[CompilerGenerated]
	private List<Int32> <GemMineStoryItems>k__BackingField; //Field offset: 0x200
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <itemWeightRecordsRodUsed>k__BackingField; //Field offset: 0x208
	[CompilerGenerated]
	private OrderedSet<Int32> <completedPlayerSteps>k__BackingField; //Field offset: 0x210
	[CompilerGenerated]
	private MetaDictionary<HotspotId, List`1<ValueTuple`2<Int32, Int32>>> <visibleStackMiniGamePositions>k__BackingField; //Field offset: 0x218
	[CompilerGenerated]
	private PlayerReward <LatestDailyAdReward>k__BackingField; //Field offset: 0x220
	[CompilerGenerated]
	private OrderedSet<AreaId> <_notedUnlockableAreas>k__BackingField; //Field offset: 0x228
	[CompilerGenerated]
	private MetaDictionary<ProgressionTrackId, ProgressionTrack> <ProgressionTracks>k__BackingField; //Field offset: 0x230
	[CompilerGenerated]
	private EventHotspotRemovedEvent EventHotspotRemoved; //Field offset: 0x238
	public CharacterDiscoveredEvent CharacterDiscovered; //Field offset: 0x240
	private int lastVisibleHotpotChangedHash; //Field offset: 0x248
	[CompilerGenerated]
	private MetacoreTime <LastModificationTime>k__BackingField; //Field offset: 0x250

	public event EventDecorationRemovedEvent EventDecorationRemoved
	{
		[CompilerGenerated]
		 add { } //Length: 156
		[CompilerGenerated]
		 remove { } //Length: 156
	}

	public event EventDecorationSetEvent EventDecorationSet
	{
		[CompilerGenerated]
		 add { } //Length: 156
		[CompilerGenerated]
		 remove { } //Length: 156
	}

	public event EventHotspotRemovedEvent EventHotspotRemoved
	{
		[CompilerGenerated]
		 add { } //Length: 156
		[CompilerGenerated]
		 remove { } //Length: 156
	}

	[ExcludeFromGdprExport]
	[MetaMember(95, MetaMemberFlags::None (0))]
	private OrderedSet<AreaId> _notedUnlockableAreas
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(68, MetaMemberFlags::None (0))]
	private PetId ActivePet
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(22, MetaMemberFlags::None (0))]
	private OrderedSet<MassMailIdenfiers> addedMassEmails
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(72, MetaMemberFlags::None (0))]
	public MetaDictionary<MergeBoardId, Int64> AnalyticsFakeZeroEnergySaldoByMergeBoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> boughtBoxAmounts
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(43, MetaMemberFlags::None (0))]
	private OrderedSet<MergeChainId> claimedDiscoveryCompletionRewards
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(42, MetaMemberFlags::None (0))]
	private OrderedSet<Int32> claimedDiscoveryRewards
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(81, MetaMemberFlags::None (0))]
	public MetaDictionary<Int32, OrderedSet`1<Int32>> ClaimedGemWeightRewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(60, MetaMemberFlags::None (0))]
	public MetaDictionary<Int32, OrderedSet`1<Int32>> ClaimedWeightStarRewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(46, MetaMemberFlags::None (0))]
	private OrderedSet<MergeRewardId> CollectedMergeRewards
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(45, MetaMemberFlags::None (0))]
	public private OrderedSet<AreaId> completedAreas
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(5, MetaMemberFlags::None (0))]
	private OrderedSet<HotspotId> completedHotspots
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(85, MetaMemberFlags::None (0))]
	private OrderedSet<Int32> completedPlayerSteps
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(63, MetaMemberFlags::None (0))]
	private MetaDictionary<HotspotId, Int32> completedRepeatableTasks
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(13, MetaMemberFlags::None (0))]
	private int currentEventBoardAdventureStep
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(29, MetaMemberFlags::None (0))]
	private MergeBoardId currentEventBoardId2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(14, MetaMemberFlags::None (0))]
	[NoChecksum]
	private CalendarBoardEventStatus currentEventBoardStatus
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(64, MetaMemberFlags::None (0))]
	public bool DidClaimFreeGems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(66, MetaMemberFlags::None (0))]
	public bool DidFlashSellTutorialFinished
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(52, MetaMemberFlags::None (0))]
	private OrderedSet<DialogCharacterType> discoveredCharacterTypes
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public IEnumerable<Int32> DiscoveredItems
	{
		 get { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(7, MetaMemberFlags::None (0))]
	private OrderedSet<Int32> discoveredItemTypes
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public IEnumerable<String> DiscoveredItemTypeStrings
	{
		 get { } //Length: 252
	}

	[ExcludeFromGdprExport]
	[MetaMember(12, MetaMemberFlags::None (0))]
	private MetaTime endTimeOfCurrentEventBoard
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(49, MetaMemberFlags::None (0))]
	private OrderedSet<DirectorGroupId> eventGroupsCompleted
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(31, MetaMemberFlags::None (0))]
	private MetaDictionary<MergeBoardId, Int32> eventProgressValues2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(33, MetaMemberFlags::None (0))]
	private OrderedSet<String> eventsStartedAtLeastOnce
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(32, MetaMemberFlags::None (0))]
	private MetaDictionary<MergeBoardId, Int32> eventStartedTimes2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(79, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> gemFoundCount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(82, MetaMemberFlags::None (0))]
	public List<Int32> GemMineStoryItems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(78, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, F32> gemWeightRecords
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(76, MetaMemberFlags::None (0))]
	private MetaDictionary<HotspotId, Int32> hotspotAppearActionCount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(24, MetaMemberFlags::None (0))]
	private bool isInventoryAvailable
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(58, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> itemCaughtCount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(56, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, F32> itemWeightRecords
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(83, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> itemWeightRecordsRodUsed
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public private MetacoreTime LastModificationTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(77, MetaMemberFlags::None (0))]
	[ServerOnly]
	private Nullable<MetaTime> latestCompletedHotspotTime
	{
		[CompilerGenerated]
		private get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public MetaTime LatestCompletedHotspotTime
	{
		 get { } //Length: 232
	}

	[MetaMember(93, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerReward")]
	public PlayerReward LatestDailyAdReward
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(53, MetaMemberFlags::None (0))]
	private MetaDictionary<LayeredDecorationSetId, Int32> layeredDecorationProgress
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(3, MetaMemberFlags::None (0))]
	public List<Int32> legacyEventGroupsCompleted
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(51, MetaMemberFlags::None (0))]
	private MetaDictionary<MergeChainId, Int32> mergeChainLevels
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(30, MetaMemberFlags::None (0))]
	private MetaDictionary<MergeBoardId, Int64> nextPossibleEventReplayDay2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(47, MetaMemberFlags::None (0))]
	private OrderedSet<AreaId> notedTeasedAreas
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(25, MetaMemberFlags::None (0))]
	private OrderedSet<String> ownedDecorations
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(67, MetaMemberFlags::None (0))]
	private OrderedSet<PetId> Pets
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(57, MetaMemberFlags::None (0))]
	private OrderedSet<Int32> photoTakenItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private int playerLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(96, MetaMemberFlags::None (0))]
	public MetaDictionary<ProgressionTrackId, ProgressionTrack> ProgressionTracks
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(9, MetaMemberFlags::None (0))]
	private RandomPCG random
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(61, MetaMemberFlags::None (0))]
	private OrderedSet<SeasonId> seasonsDiscovered
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public IEnumerable<SeasonId> SeasonsDiscovered
	{
		 get { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(6, MetaMemberFlags::None (0))]
	private MetaDictionary<String, String> storedAnimationStates
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(34, MetaMemberFlags::None (0))]
	private MetaDictionary<String, String> storedUnityAnimationStates
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(80, MetaMemberFlags::None (0))]
	public List<Int32> UnclaimedWorldRecordGemReward
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(59, MetaMemberFlags::None (0))]
	public List<Int32> UnclaimedWorldRecordRewardFishes
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(27, MetaMemberFlags::None (0))]
	[Transient]
	private MergeBoardId undoBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(18, MetaMemberFlags::None (0))]
	[Transient]
	private int undoItemSellCoordinateX
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(19, MetaMemberFlags::None (0))]
	[Transient]
	private int undoItemSellCoordinateY
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(17, MetaMemberFlags::None (0))]
	[Transient]
	private MergeItem undoItemSellItem
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(74, MetaMemberFlags::None (0))]
	private MetaDictionary<HotspotId, CardStack> visibleCardStacks
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(26, MetaMemberFlags::None (0))]
	private List<String> visibleDecorations
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(54, MetaMemberFlags::None (0))]
	private MetaDictionary<String, DecorationId> visibleEventDecorations
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(55, MetaMemberFlags::None (0))]
	private MetaDictionary<String, HotspotId> visibleEventHotspots
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(4, MetaMemberFlags::None (0))]
	private OrderedSet<HotspotId> visibleHotspots
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[ExcludeFromGdprExport]
	[MetaMember(65, MetaMemberFlags::None (0))]
	private MetaDictionary<HotspotId, MetaTime> visibleHotspotsWithTimestamps
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(86, MetaMemberFlags::None (0))]
	private MetaDictionary<HotspotId, List`1<ValueTuple`2<Int32, Int32>>> visibleStackMiniGamePositions
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private static ProgressState() { }

	public ProgressState() { }

	[CompilerGenerated]
	internal static int <GetCurrentStackRow>g__GetAmountOnRow|478_0(List<PlayCard> cardList, int row) { }

	[CompilerGenerated]
	internal static int <IsCardStackRowUsable>g__GetAmountOnRow|477_0(List<PlayCard> cardList, int row) { }

	[CompilerGenerated]
	public void add_EventDecorationRemoved(EventDecorationRemovedEvent value) { }

	[CompilerGenerated]
	public void add_EventDecorationSet(EventDecorationSetEvent value) { }

	[CompilerGenerated]
	public void add_EventHotspotRemoved(EventHotspotRemovedEvent value) { }

	public void AddCompletedArea(AreaId areaId) { }

	public void AddCompletedHotspot(HotspotDefinition definition) { }

	public void AddCompletedHotspot(HotspotId hotspotId) { }

	public bool AddDiscoveredSeason(SeasonId seasonId) { }

	public void AddEventStarted(string eventId) { }

	public void AddLayeredDecorationProgress(LayeredDecorationSetId setId) { }

	public bool AddNewDecoration(DecorationId decorationId) { }

	public void AddNewPet(PetId petId) { }

	public void AddNotedTeasedArea(AreaId areaId) { }

	public void AddNotedUnlockableArea(AreaId areaId) { }

	private void AddVisibleCardStack(HotspotId hotspot, CardStackId cardStackId, List<PlayCard> cards, GroupingStyle style) { }

	public bool AddVisibleHotspot(IPlayer playerModel, IHotspotDefinition hotspotDefinition, MetacoreTime currentTime, bool isUnlockedAndAvailable) { }

	public void AddVisibleHotspotWithTimestamp(HotspotId hotspotId, MetacoreTime currentTime) { }

	public List<PetId> AllOwnedPets() { }

	public bool CanCardBeFoundFromInventory(IPlayer player, HotspotId hotspotId, int index) { }

	public bool CanClaimAnyWeightStarReward(IPlayer player, IItemDefinition itemDefinition) { }

	public bool CanClaimAnyWeightStarReward(IPlayer player) { }

	public bool CanClaimWeightStarReward(IPlayer player, IItemDefinition itemDefinition, int starIndex) { }

	public bool CanUndoSell() { }

	public bool CanVisibleCardBeCompleted(IPlayer player, HotspotId hotspotId, int index) { }

	public bool CanVisibleCardStackBeCompleted(HotspotId hotspotId, bool ignoreLast = false) { }

	public bool CheckIfDirectorEventGroupIsCompleted(DirectorGroupId groupId) { }

	public void ClaimAllClaimableWeightStarRewards(IPlayer player, CollectibleBoardEventId eventId) { }

	public void ClaimUnclaimedWorldRecordFishRewards(IPlayer player) { }

	public void ClaimWeightStarReward(IPlayer player, CollectibleBoardEventId eventId, IItemDefinition itemDefinition, int starIndex) { }

	public void ClearAllPlayerSteps() { }

	public void ClearItemDiscoveryRewardClaims() { }

	public void ClearLayeredDecorationProgress(LayeredDecorationSetId setId) { }

	public void ClearUndoSellItem() { }

	public bool CollectMergeReward(MergeReward mergeReward) { }

	public void CompletePlayerStep(PlayerStep step) { }

	public int CountCompletedHotspots() { }

	public void DecreaseRepeatableTaskCompletionCount(HotspotId hotspotId) { }

	public bool DoesOwnDecoration(DecorationId decorationId) { }

	public bool DoesOwnPet(PetId petId) { }

	public void EndCurrentEventBoard() { }

	public void EventBoardIsGenerated() { }

	private void ExecuteItemDiscoveredActions(IPlayer player, int itemId) { }

	private static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams) { }

	public void ForgetDirectorEventGroup(DirectorGroupId groupId) { }

	[CompilerGenerated]
	private OrderedSet<AreaId> get__notedUnlockableAreas() { }

	[CompilerGenerated]
	private PetId get_ActivePet() { }

	[CompilerGenerated]
	private OrderedSet<MassMailIdenfiers> get_addedMassEmails() { }

	[CompilerGenerated]
	public MetaDictionary<MergeBoardId, Int64> get_AnalyticsFakeZeroEnergySaldoByMergeBoardId() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> get_boughtBoxAmounts() { }

	[CompilerGenerated]
	private OrderedSet<MergeChainId> get_claimedDiscoveryCompletionRewards() { }

	[CompilerGenerated]
	private OrderedSet<Int32> get_claimedDiscoveryRewards() { }

	[CompilerGenerated]
	public MetaDictionary<Int32, OrderedSet`1<Int32>> get_ClaimedGemWeightRewards() { }

	[CompilerGenerated]
	public MetaDictionary<Int32, OrderedSet`1<Int32>> get_ClaimedWeightStarRewards() { }

	[CompilerGenerated]
	private OrderedSet<MergeRewardId> get_CollectedMergeRewards() { }

	[CompilerGenerated]
	public OrderedSet<AreaId> get_completedAreas() { }

	[CompilerGenerated]
	private OrderedSet<HotspotId> get_completedHotspots() { }

	[CompilerGenerated]
	private OrderedSet<Int32> get_completedPlayerSteps() { }

	[CompilerGenerated]
	private MetaDictionary<HotspotId, Int32> get_completedRepeatableTasks() { }

	[CompilerGenerated]
	private int get_currentEventBoardAdventureStep() { }

	[CompilerGenerated]
	private MergeBoardId get_currentEventBoardId2() { }

	[CompilerGenerated]
	private CalendarBoardEventStatus get_currentEventBoardStatus() { }

	[CompilerGenerated]
	public bool get_DidClaimFreeGems() { }

	[CompilerGenerated]
	public bool get_DidFlashSellTutorialFinished() { }

	[CompilerGenerated]
	private OrderedSet<DialogCharacterType> get_discoveredCharacterTypes() { }

	public IEnumerable<Int32> get_DiscoveredItems() { }

	[CompilerGenerated]
	private OrderedSet<Int32> get_discoveredItemTypes() { }

	public IEnumerable<String> get_DiscoveredItemTypeStrings() { }

	[CompilerGenerated]
	private MetaTime get_endTimeOfCurrentEventBoard() { }

	[CompilerGenerated]
	private OrderedSet<DirectorGroupId> get_eventGroupsCompleted() { }

	[CompilerGenerated]
	private MetaDictionary<MergeBoardId, Int32> get_eventProgressValues2() { }

	[CompilerGenerated]
	private OrderedSet<String> get_eventsStartedAtLeastOnce() { }

	[CompilerGenerated]
	private MetaDictionary<MergeBoardId, Int32> get_eventStartedTimes2() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> get_gemFoundCount() { }

	[CompilerGenerated]
	public List<Int32> get_GemMineStoryItems() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, F32> get_gemWeightRecords() { }

	[CompilerGenerated]
	private MetaDictionary<HotspotId, Int32> get_hotspotAppearActionCount() { }

	[CompilerGenerated]
	private bool get_isInventoryAvailable() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> get_itemCaughtCount() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, F32> get_itemWeightRecords() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> get_itemWeightRecordsRodUsed() { }

	[CompilerGenerated]
	public MetacoreTime get_LastModificationTime() { }

	[CompilerGenerated]
	private Nullable<MetaTime> get_latestCompletedHotspotTime() { }

	public MetaTime get_LatestCompletedHotspotTime() { }

	[CompilerGenerated]
	public PlayerReward get_LatestDailyAdReward() { }

	[CompilerGenerated]
	private MetaDictionary<LayeredDecorationSetId, Int32> get_layeredDecorationProgress() { }

	[CompilerGenerated]
	public List<Int32> get_legacyEventGroupsCompleted() { }

	[CompilerGenerated]
	private MetaDictionary<MergeChainId, Int32> get_mergeChainLevels() { }

	[CompilerGenerated]
	private MetaDictionary<MergeBoardId, Int64> get_nextPossibleEventReplayDay2() { }

	[CompilerGenerated]
	private OrderedSet<AreaId> get_notedTeasedAreas() { }

	[CompilerGenerated]
	private OrderedSet<String> get_ownedDecorations() { }

	[CompilerGenerated]
	private OrderedSet<PetId> get_Pets() { }

	[CompilerGenerated]
	private OrderedSet<Int32> get_photoTakenItems() { }

	[CompilerGenerated]
	private int get_playerLevel() { }

	[CompilerGenerated]
	public MetaDictionary<ProgressionTrackId, ProgressionTrack> get_ProgressionTracks() { }

	[CompilerGenerated]
	private RandomPCG get_random() { }

	[CompilerGenerated]
	private OrderedSet<SeasonId> get_seasonsDiscovered() { }

	public IEnumerable<SeasonId> get_SeasonsDiscovered() { }

	[CompilerGenerated]
	private MetaDictionary<String, String> get_storedAnimationStates() { }

	[CompilerGenerated]
	private MetaDictionary<String, String> get_storedUnityAnimationStates() { }

	[CompilerGenerated]
	public List<Int32> get_UnclaimedWorldRecordGemReward() { }

	[CompilerGenerated]
	public List<Int32> get_UnclaimedWorldRecordRewardFishes() { }

	[CompilerGenerated]
	private MergeBoardId get_undoBoardId() { }

	[CompilerGenerated]
	private int get_undoItemSellCoordinateX() { }

	[CompilerGenerated]
	private int get_undoItemSellCoordinateY() { }

	[CompilerGenerated]
	private MergeItem get_undoItemSellItem() { }

	[CompilerGenerated]
	private MetaDictionary<HotspotId, CardStack> get_visibleCardStacks() { }

	[CompilerGenerated]
	private List<String> get_visibleDecorations() { }

	[CompilerGenerated]
	private MetaDictionary<String, DecorationId> get_visibleEventDecorations() { }

	[CompilerGenerated]
	private MetaDictionary<String, HotspotId> get_visibleEventHotspots() { }

	[CompilerGenerated]
	private OrderedSet<HotspotId> get_visibleHotspots() { }

	[CompilerGenerated]
	private MetaDictionary<HotspotId, MetaTime> get_visibleHotspotsWithTimestamps() { }

	[CompilerGenerated]
	private MetaDictionary<HotspotId, List`1<ValueTuple`2<Int32, Int32>>> get_visibleStackMiniGamePositions() { }

	public int GetActiveDecorationSlotCount() { }

	public PetId GetActivePetId() { }

	public IEnumerable<IPlayerReward> GetAllClaimableDigEventMuseumRewards(PlayerModel player, MergeBoardId id) { }

	[IteratorStateMachine(typeof(<GetAllClaimableWeightStarRewards>d__436))]
	public IEnumerable<PlayerReward> GetAllClaimableWeightStarRewards(IPlayer player) { }

	public IEnumerable<DirectorGroupId> GetAllCompletedDirectorEventGroups() { }

	public MetaDictionary<Int32, Int32> GetAllGemsFound() { }

	public MetaDictionary<Int32, Int32> GetAllItemsCaughtCount() { }

	public int GetBoxesBoughtAmount(int itemId) { }

	public bool GetCanSellItems(IPlayer playerModel) { }

	public PlayCard GetCardStackItem(HotspotId hotspotId, int index) { }

	public int GetClaimedItemDiscoveryCompletionRewardCount() { }

	public HashSet<HotspotId> GetCompletedHotspots() { }

	public OrderedSet<HotspotId> GetCompletedHotspotsInCompletionOrder() { }

	public MetaDictionary<HotspotId, Int32> GetCompletedRepeatableTasksInCompletionOrder() { }

	public IReadOnlyCollection<IAreaInfo> GetCurrentAreas(IPlayer player) { }

	public int GetCurrentEventBoardAdventureStep() { }

	public CalendarBoardEventStatus GetCurrentEventBoardStatus() { }

	public int GetCurrentPlayerLevel() { }

	public int GetCurrentStackRow(IPlayer player, HotspotId hotspotId) { }

	public MergeBoardId GetCurrentStoryEventBoardId() { }

	public DecorationId GetDecorationInSlotIndex(int slotIndex) { }

	public DecorationId GetDecorationInSlotNumber(int slotNumber) { }

	public MetaTime GetEndTimeOfCurrentEventBoard() { }

	public int GetEventProgress(MergeBoardId timedMergeBoardId) { }

	public int GetEventStartedTimes(MergeBoardId mergeBoardId) { }

	public PlayerReward GetFirstClaimableWeightStarReward(IPlayer player) { }

	public HotspotId GetFirstHotspotWithCardStack() { }

	public int GetHotspotAppearActionCount(HotspotId hotspotId) { }

	public List<HotspotDefinition> GetIllustrationTasksOnCompletion(IPlayer player, CustomHotspotTableId customHotspotTableId) { }

	public Option<PlayCard> GetLastCardFromCardStack(HotspotId hotspotId) { }

	public int GetLastChangedVisibleHotspotHash() { }

	public ValueTuple<PlayCard, Int32> GetLastCompletableCardFromCardStack(IPlayer player, HotspotId hotspotId) { }

	public HotspotId GetLastCompletedHotspot() { }

	public Nullable<Int32> GetLayeredDecorationProgress(LayeredDecorationSetId setId) { }

	public IEnumerable<MergeChainId> GetMergeChainLevels() { }

	public long GetNextPossibleEventReplayEpochDay(MergeBoardId storyEventMergeBoardId) { }

	public int GetOwnedDecorationCount() { }

	public IReadOnlyCollection<String> GetOwnedDecorations() { }

	public int GetPetCount() { }

	[IteratorStateMachine(typeof(<GetProgressionTracksWithArg>d__294))]
	public IEnumerable<ProgressionTrack> GetProgressionTracksWithArg(string arg) { }

	public int GetRepeatableTaskCompletionCount(HotspotId hotspotId) { }

	public string GetStoredAnimationState(string gameObjectName, string animationTrackName) { }

	[IteratorStateMachine(typeof(<GetStoredAnimationStates>d__345))]
	public IEnumerable<ValueTuple`3<String, String, String>> GetStoredAnimationStates() { }

	public string GetStoredUnityAnimationState(string gameObjectName) { }

	[IteratorStateMachine(typeof(<GetStoredUnityAnimationStates>d__346))]
	public IEnumerable<ValueTuple`2<String, String>> GetStoredUnityAnimationStates() { }

	public ValueTuple<MergeBoardId, MergeItem, Coordinate> GetUndoSellItem() { }

	public int GetVisibleDecorationCount() { }

	public IReadOnlyCollection<String> GetVisibleDecorations() { }

	public IEnumerable<ValueTuple`2<String, DecorationId>> GetVisibleEventDecorations() { }

	public HotspotId GetVisibleEventHotspot(string eventId) { }

	public IEnumerable<ValueTuple`2<String, HotspotId>> GetVisibleEventHotspots() { }

	public MetaDictionary<HotspotId, CardStack> GetVisibleHotspotCardStackInOrder() { }

	public HashSet<HotspotId> GetVisibleHotspots() { }

	public OrderedSet<HotspotId> GetVisibleHotspotsInOrder() { }

	public Option<List`1<HotspotId>> GetVisibleIllustrationChildTasks(IPlayer player, CustomHotspotTableId hotspotTableId) { }

	public ValueTuple<Int32, Int32, Boolean> GetWeightStarRewardData(IPlayer player, IItemDefinition itemDefinition) { }

	public bool HasAnyPet() { }

	public bool HasAreaBeenCompleted(AreaId areaId) { }

	public bool HasCharacterBeenDiscovered(DialogCharacterType characterType) { }

	public bool HasClaimedAllWeightStarRewards(IPlayer player, IItemDefinition itemDefinition) { }

	public bool HasClaimedGemWeightReward(IItemDefinition itemDefinition, int weightRewardIndex) { }

	public bool HasClaimedWeightStarReward(IItemDefinition itemDefinition, int starIndex) { }

	public bool HasCompletableIllustrationTasksAvailable(IPlayer player, CustomHotspotTableId hotspotTableId) { }

	public bool HasHotspotBeenCompleted(HotspotId hotspotId) { }

	public bool HasHotspotsBeenCompleted(List<HotspotDefinition> hotspots) { }

	public bool HasIllustrationTasksAvailable(IPlayer player, CustomHotspotTableId hotspotTableId) { }

	public bool HasItemBeenDiscovered(int itemId) { }

	public bool HasItemBeenDiscovered(IItemDefinition itemDefinition) { }

	public bool HasPhotoOfItemBeenTaken(IItemDefinition itemDefinition) { }

	public bool HasSeasonBeenDiscovered(SeasonId seasonId) { }

	public bool HasStartedEventAtLeastOnce(string eventId) { }

	public bool HasTeasedAreaBeenNoted(AreaId areaId) { }

	public bool HasUnlockableAreaBeenNoted(AreaId areaId) { }

	public bool HasVisibleCardStack(CardStackId cardStackId) { }

	public void IncreaseBoxesBoughtAmount(int itemId) { }

	public void IncreaseCurrentEventBoardAdventureStep() { }

	public void IncreaseEventStartedTimes(MergeBoardId mergeBoardId) { }

	public void IncreaseHotspotAppearActionCount(HotspotDefinition hotspotDefinition) { }

	public void IncreaseRepeatableTaskCompletionCount(HotspotId hotspotId) { }

	public void IncrementEventProgress(MergeBoardId timedMergeBoardId, int increment) { }

	public void IncrementGemItemAmount(IMergeItem item) { }

	public void IncrementItemCaught(MergeItem item) { }

	public void IncrementProgressionTrack(IPlayer player, ProgressionTrackId trackId, int increment) { }

	public void InitializeMergeChainLevel(IMergeChainDefinition mergeChainDefinition) { }

	public bool IsAreaRewardAvailable(AreaId areaId) { }

	public bool IsCardStackCardUsable(IPlayer player, HotspotId hotspotId, int index) { }

	public bool IsCardStackRequirementMatched(IPlayer player, CardStackId cardStackId) { }

	public bool IsCardStackRowUsable(IPlayer player, HotspotId hotspotId, int currentRow) { }

	public bool IsHotspotBonusAvailable(IHotspotDefinition hotspot, IPlayer player) { }

	private bool IsHotspotBonusRewardDefinedAndRelevant(IHotspotDefinition hotspot, IPlayer player) { }

	public bool IsHotspotFinalized(HotspotId hotspotId) { }

	public bool IsHotspotTimestampAdded(HotspotId hotspotId) { }

	public bool IsHotspotVisible(HotspotId hotspotId) { }

	public bool IsHotspotVisibleOrCompleted(HotspotId hotspotId) { }

	public bool IsItemDiscoveryCompletionRewardClaimed(MergeChainId rewardId) { }

	public bool IsItemDiscoveryRewardClaimed(int rewardId) { }

	public bool IsLocationTravelUnlocked(IPlayer player, LocationId currentLocation) { }

	public bool IsMassMailAdded(MassMailIdenfiers idenfier) { }

	public bool IsPlayerStepCompleted(PlayerStep step) { }

	public bool IsVisibleCardStackAvailable() { }

	public void MarkHotspotFinalized(HotspotId hotspotId) { }

	public void MassMailAddedForPlayer(MassMailIdenfiers idenfier) { }

	private void RandomizeItemPositionsForStackMiniGame(RandomPCG random, HotspotId id, int Height, int Width, List<PlayCard> Cards) { }

	public bool ReachedNotifications() { }

	[CompilerGenerated]
	public void remove_EventDecorationRemoved(EventDecorationRemovedEvent value) { }

	[CompilerGenerated]
	public void remove_EventDecorationSet(EventDecorationSetEvent value) { }

	[CompilerGenerated]
	public void remove_EventHotspotRemoved(EventHotspotRemovedEvent value) { }

	public void RemoveCardsFromVisibleCardStack(HotspotId hotspotId, int firstItem, int secondItem) { }

	public void RemoveCompletedArea(AreaId areaId) { }

	public void RemoveCompletedHotspot(HotspotId hotspotId) { }

	public bool RemoveDecoration(DecorationId decorationId) { }

	public void RemoveDiscoveredItem(int itemId) { }

	public bool RemoveDiscoveredSeason(SeasonId seasonId) { }

	public void RemoveMergeChainLevel(MergeChainId mergeChainId) { }

	public void RemovePet(PetId petId) { }

	public void RemoveProgressionTrack(ProgressionTrackId trackId) { }

	private void RemoveStoredAnimationState(string gameObjectName, string animationTrackName) { }

	public void RemoveVisibleCardStack(HotspotId hotspotId) { }

	public void RemoveVisibleEventHotspot(string eventId) { }

	public bool RemoveVisibleHotspot(HotspotId hotspotId) { }

	public void RemoveVisibleHotspot(HotspotDefinition hotspotDefinition) { }

	public void RemoveVisibleIfExists(HotspotId hotspotId) { }

	public void ResetEventProgress(MergeBoardId timedMergeBoardId) { }

	public void ResetHotspotProgress() { }

	public void ResetStoredUnityAnimationStates() { }

	[CompilerGenerated]
	private void set__notedUnlockableAreas(OrderedSet<AreaId> value) { }

	[CompilerGenerated]
	private void set_ActivePet(PetId value) { }

	[CompilerGenerated]
	private void set_addedMassEmails(OrderedSet<MassMailIdenfiers> value) { }

	[CompilerGenerated]
	public void set_AnalyticsFakeZeroEnergySaldoByMergeBoardId(MetaDictionary<MergeBoardId, Int64> value) { }

	[CompilerGenerated]
	private void set_boughtBoxAmounts(MetaDictionary<Int32, Int32> value) { }

	[CompilerGenerated]
	private void set_claimedDiscoveryCompletionRewards(OrderedSet<MergeChainId> value) { }

	[CompilerGenerated]
	private void set_claimedDiscoveryRewards(OrderedSet<Int32> value) { }

	[CompilerGenerated]
	public void set_ClaimedGemWeightRewards(MetaDictionary<Int32, OrderedSet`1<Int32>> value) { }

	[CompilerGenerated]
	public void set_ClaimedWeightStarRewards(MetaDictionary<Int32, OrderedSet`1<Int32>> value) { }

	[CompilerGenerated]
	private void set_CollectedMergeRewards(OrderedSet<MergeRewardId> value) { }

	[CompilerGenerated]
	private void set_completedAreas(OrderedSet<AreaId> value) { }

	[CompilerGenerated]
	private void set_completedHotspots(OrderedSet<HotspotId> value) { }

	[CompilerGenerated]
	private void set_completedPlayerSteps(OrderedSet<Int32> value) { }

	[CompilerGenerated]
	private void set_completedRepeatableTasks(MetaDictionary<HotspotId, Int32> value) { }

	[CompilerGenerated]
	private void set_currentEventBoardAdventureStep(int value) { }

	[CompilerGenerated]
	private void set_currentEventBoardId2(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_currentEventBoardStatus(CalendarBoardEventStatus value) { }

	[CompilerGenerated]
	public void set_DidClaimFreeGems(bool value) { }

	[CompilerGenerated]
	public void set_DidFlashSellTutorialFinished(bool value) { }

	[CompilerGenerated]
	private void set_discoveredCharacterTypes(OrderedSet<DialogCharacterType> value) { }

	[CompilerGenerated]
	private void set_discoveredItemTypes(OrderedSet<Int32> value) { }

	[CompilerGenerated]
	private void set_endTimeOfCurrentEventBoard(MetaTime value) { }

	[CompilerGenerated]
	private void set_eventGroupsCompleted(OrderedSet<DirectorGroupId> value) { }

	[CompilerGenerated]
	private void set_eventProgressValues2(MetaDictionary<MergeBoardId, Int32> value) { }

	[CompilerGenerated]
	private void set_eventsStartedAtLeastOnce(OrderedSet<String> value) { }

	[CompilerGenerated]
	private void set_eventStartedTimes2(MetaDictionary<MergeBoardId, Int32> value) { }

	[CompilerGenerated]
	private void set_gemFoundCount(MetaDictionary<Int32, Int32> value) { }

	[CompilerGenerated]
	public void set_GemMineStoryItems(List<Int32> value) { }

	[CompilerGenerated]
	private void set_gemWeightRecords(MetaDictionary<Int32, F32> value) { }

	[CompilerGenerated]
	private void set_hotspotAppearActionCount(MetaDictionary<HotspotId, Int32> value) { }

	[CompilerGenerated]
	private void set_isInventoryAvailable(bool value) { }

	[CompilerGenerated]
	private void set_itemCaughtCount(MetaDictionary<Int32, Int32> value) { }

	[CompilerGenerated]
	private void set_itemWeightRecords(MetaDictionary<Int32, F32> value) { }

	[CompilerGenerated]
	private void set_itemWeightRecordsRodUsed(MetaDictionary<Int32, Int32> value) { }

	[CompilerGenerated]
	private void set_LastModificationTime(MetacoreTime value) { }

	[CompilerGenerated]
	private void set_latestCompletedHotspotTime(Nullable<MetaTime> value) { }

	[CompilerGenerated]
	public void set_LatestDailyAdReward(PlayerReward value) { }

	[CompilerGenerated]
	private void set_layeredDecorationProgress(MetaDictionary<LayeredDecorationSetId, Int32> value) { }

	[CompilerGenerated]
	public void set_legacyEventGroupsCompleted(List<Int32> value) { }

	[CompilerGenerated]
	private void set_mergeChainLevels(MetaDictionary<MergeChainId, Int32> value) { }

	[CompilerGenerated]
	private void set_nextPossibleEventReplayDay2(MetaDictionary<MergeBoardId, Int64> value) { }

	[CompilerGenerated]
	private void set_notedTeasedAreas(OrderedSet<AreaId> value) { }

	[CompilerGenerated]
	private void set_ownedDecorations(OrderedSet<String> value) { }

	[CompilerGenerated]
	private void set_Pets(OrderedSet<PetId> value) { }

	[CompilerGenerated]
	private void set_photoTakenItems(OrderedSet<Int32> value) { }

	[CompilerGenerated]
	private void set_playerLevel(int value) { }

	[CompilerGenerated]
	public void set_ProgressionTracks(MetaDictionary<ProgressionTrackId, ProgressionTrack> value) { }

	[CompilerGenerated]
	private void set_random(RandomPCG value) { }

	[CompilerGenerated]
	private void set_seasonsDiscovered(OrderedSet<SeasonId> value) { }

	[CompilerGenerated]
	private void set_storedAnimationStates(MetaDictionary<String, String> value) { }

	[CompilerGenerated]
	private void set_storedUnityAnimationStates(MetaDictionary<String, String> value) { }

	[CompilerGenerated]
	public void set_UnclaimedWorldRecordGemReward(List<Int32> value) { }

	[CompilerGenerated]
	public void set_UnclaimedWorldRecordRewardFishes(List<Int32> value) { }

	[CompilerGenerated]
	private void set_undoBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_undoItemSellCoordinateX(int value) { }

	[CompilerGenerated]
	private void set_undoItemSellCoordinateY(int value) { }

	[CompilerGenerated]
	private void set_undoItemSellItem(MergeItem value) { }

	[CompilerGenerated]
	private void set_visibleCardStacks(MetaDictionary<HotspotId, CardStack> value) { }

	[CompilerGenerated]
	private void set_visibleDecorations(List<String> value) { }

	[CompilerGenerated]
	private void set_visibleEventDecorations(MetaDictionary<String, DecorationId> value) { }

	[CompilerGenerated]
	private void set_visibleEventHotspots(MetaDictionary<String, HotspotId> value) { }

	[CompilerGenerated]
	private void set_visibleHotspots(OrderedSet<HotspotId> value) { }

	[CompilerGenerated]
	private void set_visibleHotspotsWithTimestamps(MetaDictionary<HotspotId, MetaTime> value) { }

	[CompilerGenerated]
	private void set_visibleStackMiniGamePositions(MetaDictionary<HotspotId, List`1<ValueTuple`2<Int32, Int32>>> value) { }

	public void SetActivePet(PetId petId) { }

	public void SetCharacterDiscovered(DialogCharacterType characterType) { }

	public void SetCharacterDiscovered(IEnumerable<DialogCharacterType> dialogCharacterTypes) { }

	public void SetCharacterNotDiscovered(DialogCharacterType characterType) { }

	public void SetCurrentPlayerLevel(IPlayer player, int playerLevel) { }

	public void SetDecorationToSlot(DecorationId decorationId, int zeroBasedSlotNumber) { }

	public void SetDirectorEventGroupCompleted(DirectorGroupId groupId) { }

	public void SetHotspotAppearActionCount(HotspotId hotspotId, int count) { }

	public void SetItemDiscoveryCompletionRewardClaimed(MergeChainId rewardId) { }

	public void SetItemDiscoveryRewardClaimed(int rewardId) { }

	public void SetItemNotDiscovered(int itemId) { }

	public void SetItemsNotDiscovered(List<Int32> itemIds) { }

	public void SetItemWeightRecordIfExceeded(IPlayer player, IMergeItem item, F32 weight, int rodUsed, out bool isWeightRecord, out bool worldRecordRewardAdded) { }

	public void SetLayeredDecorationProgress(LayeredDecorationSetId setId, int progress) { }

	public void SetMergeChainLevel(MergeChainId mergeChainId, int level) { }

	public void SetNewEventEndtime(MetaTime newEndTime) { }

	public void SetNextPossibleEventReplayEpochDay(MergeBoardId storyEventMergeBoardId, long epochDay) { }

	public void SetPhotoTakenOfItem(IItemDefinition item, bool photoTaken) { }

	public void SetRepeatableTaskCompletionCount(HotspotId hotspotId, int count) { }

	public void SetUndoSellItem(MergeBoardId boardId, MergeItem item, Coordinate coordinate) { }

	public void SetVisibleEventDecoration(string eventId, DecorationId decorationId) { }

	public void SetVisibleEventHotspot(string eventId, HotspotId hotspotId) { }

	public void ShouldCollectEventBoardReward() { }

	public void SkipGameTime(MetaDuration numMillisecondToSkip, MetaTime currentTime) { }

	public void StartNewEventBoard(MergeBoardId mergeBoardId, MetacoreTime endTimestamp) { }

	public List<HotspotId> TryGetCompletedIllustrationTasks(IPlayer player, CustomHotspotTableId hotspotTableId) { }

	public bool TryGetGemItemFoundCount(int item, out int caughtCount) { }

	public bool TryGetGemItemWeightRecord(int item, out F32 weightRecord) { }

	public bool TryGetHotspotBonusEndTime(IHotspotDefinition hotspot, IPlayer player, out MetaTime endTime) { }

	public bool TryGetHotspotBonusEndTimeFromHistory(IHotspotDefinition hotspot, out MetaTime endTime) { }

	public CardStack TryGetHotspotCardStack(HotspotId hotspotId) { }

	public List<ValueTuple`2<Int32, Int32>> TryGetHotspotStackMiniGamePositions(HotspotId id) { }

	public bool TryGetItemCaughtCount(int item, out int caughtCount) { }

	public bool TryGetItemWeightRecord(int item, out F32 weightRecord) { }

	public bool TryGetItemWeightRecordRodUsed(int item, out int rodUsed) { }

	public bool TryGetMergeChainLevel(MergeChainId mergeChainId, out int level) { }

	public HotspotDefinition TryGetVisibleIllustrationParentTask(IPlayer player, CustomHotspotTableId hotspotTableId) { }

	public bool TryLevelUpMergeChain(IPlayer player, MergeChainId mergeChainId, out int levelAfter) { }

	public bool TryLevelUpMergeChainIfLessThan(IPlayer player, MergeChainId mergeChainId, int comparison, out int levelBefore, out int levelAfter) { }

	public void TrySetItemDiscovered(IPlayer player, MergeBoard mergeBoard, int itemId) { }

	public void TrySetItemsDiscovered(IPlayer player, MergeBoard mergeBoard, IEnumerable<Int32> itemIds) { }

	public void TrySetMergeItemDiscovered(IPlayer player, MergeBoard mergeBoard, IMergeItem mergeItem) { }

	public void TrySetMergeItemsDiscovered(IPlayer player, MergeBoard mergeBoard, IEnumerable<MergeItem> itemDefinitions) { }

	public void UpdateStoredAnimationState(string gameObjectName, string animationTrackName, string animationName) { }

	public void UpdateStoredUnityAnimationState(string gameObjectName, string animationName) { }

	public bool WasMergeRewardCollected(MergeReward mergeReward) { }

}

