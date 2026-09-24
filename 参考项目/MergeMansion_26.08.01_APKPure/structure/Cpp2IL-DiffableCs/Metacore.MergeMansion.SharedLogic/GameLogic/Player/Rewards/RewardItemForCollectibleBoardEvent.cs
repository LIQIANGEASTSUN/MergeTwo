namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(42)]
public class RewardItemForCollectibleBoardEvent : PlayerReward
{
	[CompilerGenerated]
	private sealed class <GetEventIds>d__51 : IEnumerable<CollectibleBoardEventId>, IEnumerable, IEnumerator<CollectibleBoardEventId>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private CollectibleBoardEventId <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public RewardItemForCollectibleBoardEvent <>4__this; //Field offset: 0x28
		private Enumerator<CollectibleBoardEventId> <>7__wrap1; //Field offset: 0x30

		private override CollectibleBoardEventId System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.CollectibleBoardEventId>.Current
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
		public <GetEventIds>d__51(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<CollectibleBoardEventId> System.Collections.Generic.IEnumerable<Code.GameLogic.GameEvents.CollectibleBoardEventId>.GetEnumerator() { }

		[DebuggerHidden]
		private override CollectibleBoardEventId System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.CollectibleBoardEventId>.get_Current() { }

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
	private sealed class <ResolveEvents>d__52 : IEnumerable<CollectibleBoardEventModel>, IEnumerable, IEnumerator<CollectibleBoardEventModel>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private CollectibleBoardEventModel <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		public RewardItemForCollectibleBoardEvent <>4__this; //Field offset: 0x38
		private IEnumerator<CollectibleBoardEventModel> <>7__wrap1; //Field offset: 0x40
		private CollectibleBoardEventModel <activeEvent>5__3; //Field offset: 0x48
		private IEnumerator<CollectibleBoardEventId> <>7__wrap3; //Field offset: 0x50

		private override CollectibleBoardEventModel System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.CollectibleBoardEventModel>.Current
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
		public <ResolveEvents>d__52(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<CollectibleBoardEventModel> System.Collections.Generic.IEnumerable<Code.GameLogic.GameEvents.CollectibleBoardEventModel>.GetEnumerator() { }

		[DebuggerHidden]
		private override CollectibleBoardEventModel System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.CollectibleBoardEventModel>.get_Current() { }

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
	private ItemDef <ItemDef>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <FromSupport>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private CollectibleBoardEventId <EventId_DEPRECATED>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private OverrideItemFeatures <OverrideItemFeatures>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private bool <ForceOnTopOfPocket>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private string <OverridePoolTag>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<CollectibleBoardEventId> <EventIds>k__BackingField; //Field offset: 0x48

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private CollectibleBoardEventId EventId_DEPRECATED
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public Option<CollectibleBoardEventId> EventIdOption_DEPRECATED
	{
		 get { } //Length: 132
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private List<CollectibleBoardEventId> EventIds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private Option<List`1<CollectibleBoardEventId>> EventIdsOption
	{
		private get { } //Length: 132
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public bool ForceOnTopOfPocket
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaFormNotEditable]
	[MetaMember(3, MetaMemberFlags::None (0))]
	public private bool FromSupport
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	[ValidateItemDefMetaMember]
	public private ItemDef ItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaFormNotEditable]
	[MetaMember(5, MetaMemberFlags::None (0))]
	public private OverrideItemFeatures OverrideItemFeatures
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	private string OverridePoolTag
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public virtual bool ShouldShowInfoButton
	{
		 get { } //Length: 8
	}

	public RewardItemForCollectibleBoardEvent(List<CollectibleBoardEventId> eventIds, ItemDef itemDef, int amount, bool fromSupport, CurrencySource currencySource, OverrideItemFeatures overrideItemFeatures = null, bool forceOnTopOfPocket = false, string overridePoolTag = null) { }

	public RewardItemForCollectibleBoardEvent(List<CollectibleBoardEventId> eventIds, int itemId, int amount, bool fromSupport, CurrencySource currencySource, OverrideItemFeatures overrideItemFeatures, bool forceOnTopOfPocket = false, string overridePoolTag = null) { }

	public RewardItemForCollectibleBoardEvent() { }

	public RewardItem AsRewardItem(Option<IPlayer> playerOption) { }

	public virtual void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public int get_Amount() { }

	[CompilerGenerated]
	public CollectibleBoardEventId get_EventId_DEPRECATED() { }

	public Option<CollectibleBoardEventId> get_EventIdOption_DEPRECATED() { }

	[CompilerGenerated]
	public List<CollectibleBoardEventId> get_EventIds() { }

	private Option<List`1<CollectibleBoardEventId>> get_EventIdsOption() { }

	[CompilerGenerated]
	public bool get_ForceOnTopOfPocket() { }

	[CompilerGenerated]
	public bool get_FromSupport() { }

	[CompilerGenerated]
	public ItemDef get_ItemDef() { }

	[CompilerGenerated]
	public OverrideItemFeatures get_OverrideItemFeatures() { }

	[CompilerGenerated]
	private string get_OverridePoolTag() { }

	public virtual bool get_ShouldShowInfoButton() { }

	public virtual string GetAmountString(Nullable<Int32> value) { }

	public virtual string GetAmountString(Nullable<Int32> value, bool isPlusSigned) { }

	[IteratorStateMachine(typeof(<GetEventIds>d__51))]
	private IEnumerable<CollectibleBoardEventId> GetEventIds() { }

	public IItemDefinition GetItem(IMergeMansionGameConfig config) { }

	public string GetPoolTag(IMergeMansionGameConfig config) { }

	public virtual string Name(IPlayer player) { }

	[IteratorStateMachine(typeof(<ResolveEvents>d__52))]
	private IEnumerable<CollectibleBoardEventModel> ResolveEvents(IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_EventId_DEPRECATED(CollectibleBoardEventId value) { }

	[CompilerGenerated]
	private void set_EventIds(List<CollectibleBoardEventId> value) { }

	[CompilerGenerated]
	public void set_ForceOnTopOfPocket(bool value) { }

	[CompilerGenerated]
	private void set_FromSupport(bool value) { }

	[CompilerGenerated]
	private void set_ItemDef(ItemDef value) { }

	[CompilerGenerated]
	private void set_OverrideItemFeatures(OverrideItemFeatures value) { }

	[CompilerGenerated]
	private void set_OverridePoolTag(string value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

