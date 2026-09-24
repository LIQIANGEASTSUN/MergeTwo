namespace GameLogic.Utility;

[Extension]
public static class RewardUtilities
{
	[CompilerGenerated]
	private struct <>c__DisplayClass16_0
	{
		public List<DecorationId> decorationRewards; //Field offset: 0x0

	}

	[CompilerGenerated]
	private sealed class <GetRuntimeRewards>d__4 : IEnumerable<MetaPlayerRewardBase>, IEnumerable, IEnumerator<MetaPlayerRewardBase>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MetaPlayerRewardBase <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IEnumerable<MetaPlayerRewardBase> baseRewards; //Field offset: 0x28
		public IEnumerable<MetaPlayerRewardBase> <>3__baseRewards; //Field offset: 0x30
		private IPlayer player; //Field offset: 0x38
		public IPlayer <>3__player; //Field offset: 0x40
		private RewardSourceContext rewardSourceContext; //Field offset: 0x48
		public RewardSourceContext <>3__rewardSourceContext; //Field offset: 0x60
		private IEnumerator<MetaPlayerRewardBase> <>7__wrap1; //Field offset: 0x78

		private override MetaPlayerRewardBase System.Collections.Generic.IEnumerator<Metaplay.Core.Rewards.MetaPlayerRewardBase>.Current
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
		public <GetRuntimeRewards>d__4(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MetaPlayerRewardBase> System.Collections.Generic.IEnumerable<Metaplay.Core.Rewards.MetaPlayerRewardBase>.GetEnumerator() { }

		[DebuggerHidden]
		private override MetaPlayerRewardBase System.Collections.Generic.IEnumerator<Metaplay.Core.Rewards.MetaPlayerRewardBase>.get_Current() { }

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
	private sealed class <GetRuntimeRewards>d__5 : IEnumerable<IPlayerReward>, IEnumerable, IEnumerator<IPlayerReward>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IPlayerReward <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IEnumerable<IPlayerReward> playerRewards; //Field offset: 0x28
		public IEnumerable<IPlayerReward> <>3__playerRewards; //Field offset: 0x30
		private IPlayer player; //Field offset: 0x38
		public IPlayer <>3__player; //Field offset: 0x40
		private RewardSourceContext rewardSourceContext; //Field offset: 0x48
		public RewardSourceContext <>3__rewardSourceContext; //Field offset: 0x60
		private IEnumerator<IPlayerReward> <>7__wrap1; //Field offset: 0x78

		private override IPlayerReward System.Collections.Generic.IEnumerator<GameLogic.Player.Rewards.IPlayerReward>.Current
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
		public <GetRuntimeRewards>d__5(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IPlayerReward> System.Collections.Generic.IEnumerable<GameLogic.Player.Rewards.IPlayerReward>.GetEnumerator() { }

		[DebuggerHidden]
		private override IPlayerReward System.Collections.Generic.IEnumerator<GameLogic.Player.Rewards.IPlayerReward>.get_Current() { }

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
	private sealed class <GetRuntimeRewards>d__6 : IEnumerable<IPlayerReward>, IEnumerable, IEnumerator<IPlayerReward>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IPlayerReward <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IEnumerable<IPlayerReward> playerRewards; //Field offset: 0x28
		public IEnumerable<IPlayerReward> <>3__playerRewards; //Field offset: 0x30
		private IPlayer player; //Field offset: 0x38
		public IPlayer <>3__player; //Field offset: 0x40
		private IEnumerator<IPlayerReward> <>7__wrap1; //Field offset: 0x48

		private override IPlayerReward System.Collections.Generic.IEnumerator<GameLogic.Player.Rewards.IPlayerReward>.Current
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
		public <GetRuntimeRewards>d__6(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IPlayerReward> System.Collections.Generic.IEnumerable<GameLogic.Player.Rewards.IPlayerReward>.GetEnumerator() { }

		[DebuggerHidden]
		private override IPlayerReward System.Collections.Generic.IEnumerator<GameLogic.Player.Rewards.IPlayerReward>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private struct CardPackRewardDistinct
	{
		public CardCollectionPackId PackId; //Field offset: 0x0
		public CurrencySource Source; //Field offset: 0x8

		public CardPackRewardDistinct(CardCollectionPackId packId, CurrencySource source) { }

	}

	private struct CurrencyRewardDistinct
	{
		public Currencies Currency; //Field offset: 0x0
		public CurrencySource Source; //Field offset: 0x4

		public CurrencyRewardDistinct(Currencies currency, CurrencySource source) { }

	}

	private struct RewardItemDistinct
	{
		public IItemDefinition ItemDefinition; //Field offset: 0x0
		public MergeBoardId MergeBoardId; //Field offset: 0x8
		public bool FromSupport; //Field offset: 0x10
		public CurrencySource Source; //Field offset: 0x14

		public RewardItemDistinct(RewardItem rewardItem, IPlayer player) { }

	}


	[CompilerGenerated]
	internal static void <ClaimAllRewards>g__AddDecorationReward|16_0(DecorationInfo decorationInfo, ref <>c__DisplayClass16_0<TId>& unnamed_param_1) { }

	[CompilerGenerated]
	internal static bool <CombineSameRewards>g__IsCombinableCurrency|3_0(Currencies currency) { }

	public static void AddRewardItemToPocket(IPlayer player, int amount, bool forceOnTopOfPocket, ItemDef itemDef, MergeBoardId mergeBoardId, OverrideItemFeatures overrideItemFeatures, AnalyticsContext context, bool fromSupport, CurrencySource source, IBoardEventModel foundEvent) { }

	public static void ClaimAllRewards(IPlayer player, IEnumerable<ValueTuple`2<TId, List`1<IPlayerReward>>> allRewards, Action<IPlayer, TId> claim, RewardFlags flags) { }

	public static List<IPlayerReward> CombineSameRewards(IEnumerable<IPlayerReward> rewards, IPlayer player, bool allowDifferentSources = true) { }

	public static float GetOdds(List<ValueTuple`2<IPlayerReward, Int32>> rewards, int itemOdds) { }

	[Extension]
	public static IPlayerReward GetRuntimeReward(IPlayerReward reward, IPlayer player, Option<RewardSourceContext> rewardSourceContext) { }

	[Extension]
	public static IPlayerReward GetRuntimeReward(IPlayerReward reward, IPlayer player) { }

	[IteratorStateMachine(typeof(<GetRuntimeRewards>d__4))]
	public static IEnumerable<MetaPlayerRewardBase> GetRuntimeRewards(IEnumerable<MetaPlayerRewardBase> baseRewards, IPlayer player, RewardSourceContext rewardSourceContext) { }

	[IteratorStateMachine(typeof(<GetRuntimeRewards>d__5))]
	public static IEnumerable<IPlayerReward> GetRuntimeRewards(IEnumerable<IPlayerReward> playerRewards, IPlayer player, RewardSourceContext rewardSourceContext) { }

	[IteratorStateMachine(typeof(<GetRuntimeRewards>d__6))]
	public static IEnumerable<IPlayerReward> GetRuntimeRewards(IEnumerable<IPlayerReward> playerRewards, IPlayer player) { }

	public static Option<IItemDefinition> GetUpgradedCardPackItem(IPlayer player, IItemDefinition originalItem, CardPackUpgradeMode upgradeMode = 1) { }

	public static string ParseCollectionToAnalyticsString(List<T> values, Func<T, String> valueGetter) { }

	public static string ParsePlayerRewardsToAnalyticsStringWithIndex(List<List`1<IPlayerReward>> rewardsLists, IPlayer player) { }

	public static string ParsePlayerRewardsToAnalyticString(List<IPlayerReward> rewards, IPlayer player) { }

	[Extension]
	private static void RewardToAnalyticsString(StringBuilder sb, IPlayerReward reward, IPlayer player) { }

}

