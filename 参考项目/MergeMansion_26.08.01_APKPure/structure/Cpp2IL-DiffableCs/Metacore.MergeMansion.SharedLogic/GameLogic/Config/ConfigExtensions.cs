namespace GameLogic.Config;

[Extension]
public static class ConfigExtensions
{
	[CompilerGenerated]
	private sealed class <<ValidateAllConfigDefinitionReferences>g__RecurseMembers|72_0>d : IEnumerable<ValueTuple`3<IConfigDefinitionValidation, String, Type>>, IEnumerable, IEnumerator<ValueTuple`3<IConfigDefinitionValidation, String, Type>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ValueTuple<IConfigDefinitionValidation, String, Type> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x30
		private object obj; //Field offset: 0x38
		public object <>3__obj; //Field offset: 0x40
		private HashSet<Object> seen; //Field offset: 0x48
		public HashSet<Object> <>3__seen; //Field offset: 0x50
		private string path; //Field offset: 0x58
		public string <>3__path; //Field offset: 0x60
		private Type previousType; //Field offset: 0x68
		public Type <>3__previousType; //Field offset: 0x70
		private Type <type>5__2; //Field offset: 0x78
		private IEnumerator<ValueTuple`3<IConfigDefinitionValidation, String, Type>> <>7__wrap2; //Field offset: 0x80
		private IDictionaryEnumerator <>7__wrap3; //Field offset: 0x88
		private int <i>5__5; //Field offset: 0x90
		private IEnumerator <>7__wrap5; //Field offset: 0x98
		private IEnumerator<MemberInfo> <>7__wrap6; //Field offset: 0xA0

		private override ValueTuple<IConfigDefinitionValidation, String, Type> System.Collections.Generic.IEnumerator<(Game.Cloud.Config.IConfigDefinitionValidation,System.String,System.Type)>.Current
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
		public <<ValidateAllConfigDefinitionReferences>g__RecurseMembers|72_0>d(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private void <>m__Finally3() { }

		private void <>m__Finally4() { }

		private void <>m__Finally5() { }

		private void <>m__Finally6() { }

		private void <>m__Finally7() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ValueTuple`3<IConfigDefinitionValidation, String, Type>> System.Collections.Generic.IEnumerable<(Game.Cloud.Config.IConfigDefinitionValidation,System.String,System.Type)>.GetEnumerator() { }

		[DebuggerHidden]
		private override ValueTuple<IConfigDefinitionValidation, String, Type> System.Collections.Generic.IEnumerator<(Game.Cloud.Config.IConfigDefinitionValidation,System.String,System.Type)>.get_Current() { }

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
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ValueTuple`8<String, String, String, String, String, String, String, ValueTuple`3<String, String, String>>, OverrideSpawnChance> <>9__18_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"ItemKey", "VariantIdMaybe"})]
		public static Func<VariantConfigItem`2<String, ItemIdShadow>, ValueTuple`2<String, String>> <>9__37_3; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"ItemKey", "VariantIdMaybe"})]
		public static Func<List`1<VariantConfigItem`2<String, ItemIdShadow>>, IEnumerable`1<ValueTuple`2<String, String>>> <>9__37_1; //Field offset: 0x18
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"ItemKey", "VariantIdMaybe"})]
		public static Func<ValueTuple`2<String, String>, Boolean> <>9__37_2; //Field offset: 0x20
		public static Func<String, IDirectorAction> <>9__46_0; //Field offset: 0x28
		public static Comparison<QuantityPercentagePair> <>9__51_0; //Field offset: 0x30
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemType", "item", "itemAux0", "itemAux1", "minAmount", "maxAmount", "batchAmount", "segmentedWeights", "showMinAmount", "showMaxAmount", null, null, null})]
		public static Func<ValueTuple`8<PlayerRewardType, String, String, String, Int32, Int32, Nullable`1<Int32>, ValueTuple`3<Dictionary`2<PlayerSegmentId, Int32>, Int32, Int32>>, RewardContainerItem> <>9__66_0; //Field offset: 0x38
		public static Func<MemberInfo, Boolean> <>9__72_1; //Field offset: 0x40

		private static <>c() { }

		public <>c() { }

		internal IEnumerable<ValueTuple`2<String, String>> <ItemIds>b__37_1(List<VariantConfigItem`2<String, ItemIdShadow>> library) { }

		internal bool <ItemIds>b__37_2(ValueTuple<String, String> x) { }

		internal ValueTuple<String, String> <ItemIds>b__37_3(VariantConfigItem<String, ItemIdShadow> variant) { }

		internal IDirectorAction <ParseActionsNoContext>b__46_0(string action) { }

		internal int <ParseQuantityPercentagePairs>b__51_0(QuantityPercentagePair p1, QuantityPercentagePair p2) { }

		internal OverrideSpawnChance <ResolveOverrideSpawnChances>b__18_0(ValueTuple<String, String, String, String, String, String, String, ValueTuple`3<String, String, String>> overrideSpawnChance) { }

		internal RewardContainerItem <ResolveRewardContainerItems>b__66_0(ValueTuple<PlayerRewardType, String, String, String, Int32, Int32, Nullable`1<Int32>, ValueTuple`3<Dictionary`2<PlayerSegmentId, Int32>, Int32, Int32>> item) { }

		internal bool <ValidateAllConfigDefinitionReferences>b__72_1(MemberInfo o) { }

	}

	[CompilerGenerated]
	private sealed class <>c__31
	{
		public static readonly <>c__31<TRef, TItem> <>9; //Field offset: 0x0
		public static Func<TItem, VariantConfigItem`2<TRef, TItem>> <>9__31_0; //Field offset: 0x0

		private static <>c__31`2() { }

		public <>c__31`2() { }

		internal VariantConfigItem<TRef, TItem> <ToConfigList>b__31_0(TItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__39
	{
		public static readonly <>c__39<TComponent> <>9; //Field offset: 0x0
		public static Func<VariantConfigItem`2<String, TComponent>, Boolean> <>9__39_1; //Field offset: 0x0
		public static Func<VariantConfigItem`2<String, TComponent>, Int32> <>9__39_2; //Field offset: 0x0

		private static <>c__39`1() { }

		public <>c__39`1() { }

		internal bool <GetVariantConfigItemOrDefault>b__39_1(VariantConfigItem<String, TComponent> variant) { }

		internal int <GetVariantConfigItemOrDefault>b__39_2(VariantConfigItem<String, TComponent> variant) { }

	}

	[CompilerGenerated]
	private sealed class <>c__41
	{
		public static readonly <>c__41<TComponent> <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"key", "variantMaybe", "component"})]
		public static Func<ValueTuple`3<String, String, TComponent>, Boolean> <>9__41_1; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"key", "variantMaybe", "component"})]
		public static Func<ValueTuple`3<String, String, TComponent>, Int32> <>9__41_2; //Field offset: 0x0

		private static <>c__41`1() { }

		public <>c__41`1() { }

		internal bool <GetOrDefault>b__41_1(ValueTuple<String, String, TComponent> variant) { }

		internal int <GetOrDefault>b__41_2(ValueTuple<String, String, TComponent> variant) { }

	}

	[CompilerGenerated]
	private sealed class <>c__44
	{
		public static readonly <>c__44<TK, TV> <>9; //Field offset: 0x0
		public static Func<KeyValuePair`2<Object, IGameConfigData>, ValueTuple`2<TK, TV>> <>9__44_0; //Field offset: 0x0

		private static <>c__44`2() { }

		public <>c__44`2() { }

		internal ValueTuple<TK, TV> <Enumerate>b__44_0(KeyValuePair<Object, IGameConfigData> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass0_0
	{
		public ConfigContext context; //Field offset: 0x10
		public CurrencySource defaultCurrencySource; //Field offset: 0x28
		public bool allowEmpty; //Field offset: 0x2C

		public <>c__DisplayClass0_0() { }

		internal PlayerReward <ResolvePlayerRewards>b__0(ValueTuple<String, String, String, String, Int32> reward) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_0
	{
		public ConfigContext context; //Field offset: 0x10
		public CurrencySource defaultCurrencySource; //Field offset: 0x28
		public bool allowEmpty; //Field offset: 0x2C

		public <>c__DisplayClass1_0() { }

		internal PlayerReward <ResolvePlayerRewards>b__0(ValueTuple<String, String, String, String, String, Int32> reward) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_0
	{
		public string debugText; //Field offset: 0x10

		public <>c__DisplayClass2_0() { }

		internal PlayerRequirement <ResolveRequirements>b__0(ValueTuple<String, String, String, String> requirement) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass37_0
	{
		public IGameConfigBuilder builder; //Field offset: 0x10
		public string configEntryName; //Field offset: 0x18
		public IDictionary<String, SpreadsheetContent> sheets; //Field offset: 0x20

		public <>c__DisplayClass37_0() { }

		internal List<VariantConfigItem`2<String, ItemIdShadow>> <ItemIds>b__0(string sheetName) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass39_0
	{
		public string key; //Field offset: 0x0
		public string variantMaybe; //Field offset: 0x0

		public <>c__DisplayClass39_0`1() { }

		internal bool <GetVariantConfigItemOrDefault>b__0(VariantConfigItem<String, TComponent> variant) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass41_0
	{
		public string key; //Field offset: 0x0
		public string variantMaybe; //Field offset: 0x0

		public <>c__DisplayClass41_0`1() { }

		internal bool <GetOrDefault>b__0(ValueTuple<String, String, TComponent> variant) { }

	}

	[CompilerGenerated]
	private sealed class <ParseBoultonLeagueEventIds>d__23 : IEnumerable<BoultonLeagueEventId>, IEnumerable, IEnumerator<BoultonLeagueEventId>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private BoultonLeagueEventId <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private string boultonLeagueEventIdsSource; //Field offset: 0x28
		public string <>3__boultonLeagueEventIdsSource; //Field offset: 0x30
		private String[] <>7__wrap1; //Field offset: 0x38
		private int <>7__wrap2; //Field offset: 0x40

		private override BoultonLeagueEventId System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.BoultonLeagueEventId>.Current
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
		public <ParseBoultonLeagueEventIds>d__23(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<BoultonLeagueEventId> System.Collections.Generic.IEnumerable<Code.GameLogic.GameEvents.BoultonLeagueEventId>.GetEnumerator() { }

		[DebuggerHidden]
		private override BoultonLeagueEventId System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.BoultonLeagueEventId>.get_Current() { }

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
	private sealed class <ParseLayeredDecorationInfos>d__57 : IEnumerable<DecorationLayerInfo>, IEnumerable, IEnumerator<DecorationLayerInfo>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private DecorationLayerInfo <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private String[] layerInfo; //Field offset: 0x28
		public String[] <>3__layerInfo; //Field offset: 0x30
		private LayeredDecorationSetId setId; //Field offset: 0x38
		public LayeredDecorationSetId <>3__setId; //Field offset: 0x40
		private int <i>5__2; //Field offset: 0x48

		private override DecorationLayerInfo System.Collections.Generic.IEnumerator<GameLogic.Decorations.DecorationLayerInfo>.Current
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
		public <ParseLayeredDecorationInfos>d__57(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<DecorationLayerInfo> System.Collections.Generic.IEnumerable<GameLogic.Decorations.DecorationLayerInfo>.GetEnumerator() { }

		[DebuggerHidden]
		private override DecorationLayerInfo System.Collections.Generic.IEnumerator<GameLogic.Decorations.DecorationLayerInfo>.get_Current() { }

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
	private sealed class <ParseLeaderboardEventIds>d__22 : IEnumerable<LeaderboardEventId>, IEnumerable, IEnumerator<LeaderboardEventId>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private LeaderboardEventId <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private string leaderboardEventIdsSource; //Field offset: 0x28
		public string <>3__leaderboardEventIdsSource; //Field offset: 0x30
		private String[] <>7__wrap1; //Field offset: 0x38
		private int <>7__wrap2; //Field offset: 0x40

		private override LeaderboardEventId System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.LeaderboardEventId>.Current
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
		public <ParseLeaderboardEventIds>d__22(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<LeaderboardEventId> System.Collections.Generic.IEnumerable<Code.GameLogic.GameEvents.LeaderboardEventId>.GetEnumerator() { }

		[DebuggerHidden]
		private override LeaderboardEventId System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.LeaderboardEventId>.get_Current() { }

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
	private sealed class <ParseMergeBoardIds>d__67 : IEnumerable<MergeBoardId>, IEnumerable, IEnumerator<MergeBoardId>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeBoardId <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private string mergeBoardIdsSource; //Field offset: 0x28
		public string <>3__mergeBoardIdsSource; //Field offset: 0x30
		private String[] <>7__wrap1; //Field offset: 0x38
		private int <>7__wrap2; //Field offset: 0x40

		private override MergeBoardId System.Collections.Generic.IEnumerator<Merge.MergeBoardId>.Current
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
		public <ParseMergeBoardIds>d__67(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeBoardId> System.Collections.Generic.IEnumerable<Merge.MergeBoardId>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeBoardId System.Collections.Generic.IEnumerator<Merge.MergeBoardId>.get_Current() { }

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
	private sealed class <ParseSinkInActions>d__64 : IEnumerable<ISinkInAction>, IEnumerable, IEnumerator<ISinkInAction>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ISinkInAction <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IEnumerable<String> actions; //Field offset: 0x28
		public IEnumerable<String> <>3__actions; //Field offset: 0x30
		private IEnumerator<String> <>7__wrap1; //Field offset: 0x38

		private override ISinkInAction System.Collections.Generic.IEnumerator<GameLogic.Player.Items.Sinkable.ISinkInAction>.Current
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
		public <ParseSinkInActions>d__64(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ISinkInAction> System.Collections.Generic.IEnumerable<GameLogic.Player.Items.Sinkable.ISinkInAction>.GetEnumerator() { }

		[DebuggerHidden]
		private override ISinkInAction System.Collections.Generic.IEnumerator<GameLogic.Player.Items.Sinkable.ISinkInAction>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private class ItemIdShadow : IHasGameConfigKey<String>
	{
		[CompilerGenerated]
		private string <ItemKey>k__BackingField; //Field offset: 0x10

		public override string ConfigKey
		{
			 get { } //Length: 8
		}

		public string ItemKey
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		public ItemIdShadow() { }

		public override string get_ConfigKey() { }

		[CompilerGenerated]
		public string get_ItemKey() { }

		[CompilerGenerated]
		public void set_ItemKey(string value) { }

	}

	public static readonly IReadOnlyList<InAppProductId> LEGACY_PROGRESSION_EVENT_IAPS; //Field offset: 0x0

	private static ConfigExtensions() { }

	[CompilerGenerated]
	[IteratorStateMachine(typeof(<<ValidateAllConfigDefinitionReferences>g__RecurseMembers|72_0>d))]
	internal static IEnumerable<ValueTuple`3<IConfigDefinitionValidation, String, Type>> <ValidateAllConfigDefinitionReferences>g__RecurseMembers|72_0(object obj, HashSet<Object> seen, Type previousType, string path) { }

	[Extension]
	public static IPlacement ConstructPlacement(ActivationPlacementStyle placementStyle) { }

	[Extension]
	public static IPlacement ConstructPlacement(SpawnStyle spawnStyle) { }

	public static PlayerReward CreateCurrencyReward(Currencies currency, int amount, CurrencySource source) { }

	[Extension]
	public static IEnumerable<ValueTuple`2<TK, TV>> Enumerate(GameConfigLibrary<TK, TV> configLibrary) { }

	public static IReadOnlyList<InAppProductId> GetCurrencyBankIAPs(IPlayerModelBase player) { }

	public static EventTaskInfo GetEventTask(PlayerModel player, EventTaskId taskId) { }

	[Extension]
	public static MetaCalendarPeriod GetLeaderboardEventSafetyMargin(IMergeMansionGameConfig config) { }

	[Extension]
	public static TComponent GetOrDefault(IEnumerable<ValueTuple`3<String, String, TComponent>> source, string key, string variantMaybe, TComponent defaultValue) { }

	[Extension]
	public static TComponent GetOrDefault(IEnumerable<ValueTuple`3<String, String, TComponent>> source, ValueTuple<String, String> key, TComponent defaultValue) { }

	public static IReadOnlyList<InAppProductId> GetProgressionEventIAPs(IPlayerModelBase player) { }

	[Extension]
	public static VariantConfigItem<String, TComponent> GetVariantConfigItemOrDefault(IEnumerable<VariantConfigItem`2<String, TComponent>> source, string key, string variantMaybe, TComponent defaultValue) { }

	[Extension]
	public static VariantConfigItem<String, TComponent> GetVariantConfigItemOrDefault(IEnumerable<VariantConfigItem`2<String, TComponent>> source, ValueTuple<String, String> key, TComponent defaultValue) { }

	[Extension]
	public static ICollection<ValueTuple`2<String, String>> ItemIds(IDictionary<String, SpreadsheetContent> sheets, IGameConfigBuilder builder, string configEntryName, IEnumerable<String> sheetNames) { }

	private static IDirectorAction ParseAction(string actionType, IList<String> actionArgs) { }

	[Extension]
	public static List<IDirectorAction> ParseActions(IEnumerable<String> actions, ConfigContext context) { }

	[Extension]
	public static List<IDirectorAction> ParseActionsNoContext(IEnumerable<String> actions) { }

	[IteratorStateMachine(typeof(<ParseBoultonLeagueEventIds>d__23))]
	private static IEnumerable<BoultonLeagueEventId> ParseBoultonLeagueEventIds(string boultonLeagueEventIdsSource) { }

	[Extension]
	public static IBubbleLogic ParseBubbleLogic(string source) { }

	public static List<Int32> ParseConfigKeys(List<String> itemIds) { }

	[Extension]
	public static List<DecorationDialogueEntry> ParseDecorationDialogueEntries(string source) { }

	[Extension]
	public static MetaDuration ParseDuration(string duration) { }

	[Extension]
	public static T ParseEnum(string source) { }

	[Extension]
	public static T ParseEnum(ConfigLexer lexer) { }

	[Extension]
	public static List<EventLevelId> ParseEventLevelIds(string source) { }

	[Extension]
	public static List<EventTaskLocEntry> ParseEventTaskLocEntries(string source) { }

	public static List<TId> ParseIds(string str) { }

	[Extension]
	public static List<ItemDialogueEntry> ParseItemDialogueEntries(string source) { }

	public static IEnumerable<Int32> ParseItemTypes(string itemTypesSource) { }

	public static Int32[] ParseItemWeightCategoryOdds(string source) { }

	[Extension]
	[IteratorStateMachine(typeof(<ParseLayeredDecorationInfos>d__57))]
	public static IEnumerable<DecorationLayerInfo> ParseLayeredDecorationInfos(String[] layerInfo, LayeredDecorationSetId setId) { }

	[IteratorStateMachine(typeof(<ParseLeaderboardEventIds>d__22))]
	private static IEnumerable<LeaderboardEventId> ParseLeaderboardEventIds(string leaderboardEventIdsSource) { }

	[IteratorStateMachine(typeof(<ParseMergeBoardIds>d__67))]
	private static IEnumerable<MergeBoardId> ParseMergeBoardIds(string mergeBoardIdsSource) { }

	private static PlayerRequirement ParseMergeChainItemNeededRequirement(string mergeChainId, string min, string max) { }

	[Extension]
	private static T ParseOrDefaultEnum(string source, T defaultValue) { }

	[Extension]
	public static List<QuantityPercentagePair> ParseQuantityPercentagePairs(string source) { }

	private static int ParseRequirementAmount(string requirementAmount, string debugText = "") { }

	public static List<PlayerReward> ParseRewardString(ConfigContext context, string rewardString, CurrencySource currencySource) { }

	public static List<PlayerReward> ParseRewardStringNoContext(string rewardString, CurrencySource currencySource) { }

	public static IScheduledAction ParseScheduledAction(string actionType) { }

	[Extension]
	public static CollectItemsOnSessionStartSettings ParseSetting(string source) { }

	public static ISinkInAction ParseSinkInAction(string action) { }

	[Extension]
	[IteratorStateMachine(typeof(<ParseSinkInActions>d__64))]
	public static IEnumerable<ISinkInAction> ParseSinkInActions(IEnumerable<String> actions) { }

	[Extension]
	public static SpeedUpCostBehavior ParseSpeedUpCostBehavior(string source) { }

	[Extension]
	public static StartingValues ParseStartingValues(string source) { }

	[Extension]
	public static Nullable<MetaTime> ParseTime(string timeString) { }

	public static MetaDictionary<Int32, Int32> ParseWaterDropletCounts(string source) { }

	[Extension]
	public static IEnumerable<BubbleBonusInfo> ResolveBubbleBonusInfos(IEnumerable<ValueTuple`3<Int32, F32, Boolean>> entries) { }

	public static ICost ResolveCost(string costLine) { }

	public static ICost ResolveCost(string costType, string priceId, int priceAmount, string debugText = "") { }

	public static OverrideSpawnChance ResolveOverrideSpawnChance(string triggerType, string triggerId, string triggerAmount, string triggerAux0, string targetBoardId, string chanceToSpawn, string endType, string endId, string endAmount, string endAux0) { }

	[Extension]
	public static IEnumerable<OverrideSpawnChance> ResolveOverrideSpawnChances(IEnumerable<ValueTuple`8<String, String, String, String, String, String, String, ValueTuple`3<String, String, String>>> overrideSpawnChanceInConfigFormat) { }

	[Extension]
	public static PlayerReward ResolvePlayerReward(ValueTuple<String, String, String, String, Int32> rewardInConfigFormat, ConfigContext context, CurrencySource defaultCurrencySource, bool allowEmpty = false) { }

	[Extension]
	private static PlayerReward ResolvePlayerRewardNoContext(ValueTuple<String, String, String, String, Int32> rewardInConfigFormat, CurrencySource defaultCurrencySource, bool allowEmpty = false) { }

	[Extension]
	public static IEnumerable<PlayerReward> ResolvePlayerRewards(IEnumerable<ValueTuple`6<String, String, String, String, String, Int32>> rewardsInConfigFormat, ConfigContext context, CurrencySource defaultCurrencySource, bool allowEmpty = false) { }

	[Extension]
	public static IEnumerable<PlayerReward> ResolvePlayerRewards(IEnumerable<ValueTuple`5<String, String, String, String, Int32>> rewardsInConfigFormat, ConfigContext context, CurrencySource defaultCurrencySource, bool allowEmpty = false) { }

	public static ProgressionEventPerk ResolveProgressionEventPerk(ProgressionEventPerkType type, String[] args) { }

	public static PlayerRequirement ResolveRequirement(string requirementType, string requirementId, string requirementAmount, string requirementAux0, string debugText = "") { }

	[Extension]
	public static IEnumerable<PlayerRequirement> ResolveRequirements(IEnumerable<ValueTuple`4<String, String, String, String>> requirementsInConfigFormat, string debugText = "") { }

	public static PlayerReward ResolveReward(ConfigContext context, string rewardType, string currencySource, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false) { }

	public static PlayerReward ResolveReward(ConfigContext context, string rewardType, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false, Option<IMergeMansionGameConfig> gameConfigForImmediateResolve = null) { }

	public static PlayerReward ResolveReward(ConfigContext context, PlayerRewardType rewardType, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false, Option<IMergeMansionGameConfig> gameConfigForImmediateResolve = null) { }

	[Extension]
	public static IEnumerable<RewardContainerItem> ResolveRewardContainerItems(IEnumerable<ValueTuple`8<PlayerRewardType, String, String, String, Int32, Int32, Nullable`1<Int32>, ValueTuple`3<Dictionary`2<PlayerSegmentId, Int32>, Int32, Int32>>> itemsInConfigFormat) { }

	public static PlayerReward ResolveRewardNoContext(string rewardType, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false, Option<IMergeMansionGameConfig> gameConfigForImmediateResolve = null) { }

	private static PlayerReward ResolveRewardNoContext(string rewardType, string currencySource, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false) { }

	public static PlayerReward ResolveRewardNoContext(PlayerRewardType rewardType, string rewardId, string rewardAux0, string rewardAux1, int rewardAmount, CurrencySource defaultCurrencySource, bool allowEmpty = false, Option<IMergeMansionGameConfig> gameConfigForImmediateResolve = null) { }

	[Extension]
	public static List<VariantConfigItem`2<TRef, TItem>> ToConfigList(IEnumerable<TItem> source) { }

	[Extension]
	private static bool TryParseBool(string source, bool defaultValue) { }

	[Extension]
	private static MetaRef<T> TryParseEnumMetaRef(string source) { }

	[Extension]
	private static Nullable<Single> TryParseFloat(string source) { }

	[Extension]
	private static Nullable<Int32> TryParseInt(string source) { }

	[Extension]
	private static MetaRef<T> TryParseMetaRef(string source) { }

	[Extension]
	public static void ValidateAgainstMutableReward(GameConfigValidationResult variantEntries, IMergeMansionGameConfig config, string sheetName, string configKey, IPlayerReward reward) { }

	public static List<ValueTuple`2<Int32, String>> ValidateAllConfigDefinitionReferences(IMergeMansionGameConfig config, PlayerModel playerModel, GameConfigValidationResult validationResult) { }

}

