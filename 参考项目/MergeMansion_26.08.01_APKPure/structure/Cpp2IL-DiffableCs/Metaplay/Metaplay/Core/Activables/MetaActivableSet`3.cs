namespace Metaplay.Core.Activables;

[MetaReservedMembers(100, 200)]
[MetaSerializable]
public abstract class MetaActivableSet : IMetaActivableSet<TId, TInfo, TActivableState>, IMetaActivableSet<TId>, IMetaActivableSet
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c<TId, TInfo, TActivableState> <>9; //Field offset: 0x0
		public static Predicate<KeyValue<TId, TActivableState>> <>9__2_0; //Field offset: 0x0
		public static Predicate<KeyValue<TId, TActivableState>> <>9__2_1; //Field offset: 0x0

		private static <>c() { }

		public <>c() { }

		internal bool <OrganizeActivableStatesByValidityOnDeserialization>b__2_0(KeyValue<TId, TActivableState> kv) { }

		internal bool <OrganizeActivableStatesByValidityOnDeserialization>b__2_1(KeyValue<TId, TActivableState> kv) { }

	}

	[CompilerGenerated]
	private sealed class <GetActiveStates>d__28 : IEnumerable<TActivableState>, IEnumerable, IEnumerator<TActivableState>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x0
		private TActivableState <>2__current; //Field offset: 0x0
		private int <>l__initialThreadId; //Field offset: 0x0
		public MetaActivableSet<TId, TInfo, TActivableState> <>4__this; //Field offset: 0x0
		private IPlayerModelBase player; //Field offset: 0x0
		public IPlayerModelBase <>3__player; //Field offset: 0x0
		private ValueEnumerator<TId, TActivableState> <>7__wrap1; //Field offset: 0x0

		private override TActivableState System.Collections.Generic.IEnumerator<TActivableState>.Current
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
		public <GetActiveStates>d__28(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<TActivableState> System.Collections.Generic.IEnumerable<TActivableState>.GetEnumerator() { }

		[DebuggerHidden]
		private override TActivableState System.Collections.Generic.IEnumerator<TActivableState>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[MetaMember(100, MetaMemberFlags::None (0))]
	protected MetaDictionary<TId, TActivableState> _activableStates; //Field offset: 0x0
	[MetaMember(101, MetaMemberFlags::None (0))]
	[ServerOnly]
	protected MetaDictionary<TId, TActivableState> _erroneousActivableStates; //Field offset: 0x0

	protected MetaActivableSet`3() { }

	public bool CanBeFinalized(TInfo info, IPlayerModelBase player) { }

	public override bool CanBeFinalized(TId id, IPlayerModelBase player) { }

	public bool CanStartActivation(TInfo info, IPlayerModelBase player) { }

	public override int ClearErroneousActivableStates() { }

	protected abstract TActivableState CreateActivableState(TInfo info, IPlayerModelBase player) { }

	protected override bool CustomCanStartActivation(TInfo info, IPlayerModelBase player) { }

	public void DebugForceSetPhase(TInfo info, IPlayerModelBase player, Nullable<DebugPhase> phaseMaybe) { }

	protected TActivableState EnsureHasState(TInfo info, IPlayerModelBase player) { }

	public override int ErroneousActivableStateCount() { }

	public void ForceEndActivation(TInfo info, IPlayerModelBase player) { }

	public void ForceEndActivation(TId id, IPlayerModelBase player) { }

	public void ForceStartActivation(TInfo info, IPlayerModelBase player) { }

	[IteratorStateMachine(typeof(<GetActiveStates>d__28))]
	public override IEnumerable<TActivableState> GetActiveStates(IPlayerModelBase player) { }

	public ValueCollection<TId, TActivableState> GetStates() { }

	public override bool IsActive(TId id, IPlayerModelBase player) { }

	public bool IsActive(TInfo info, IPlayerModelBase player) { }

	public bool IsInPreview(TInfo info, IPlayerModelBase player) { }

	public bool IsInReview(TInfo info, IPlayerModelBase player) { }

	public bool IsInReview(TId id, IPlayerModelBase player) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.CanBeFinalized(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.CanStartActivation(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override void Metaplay.Core.Activables.IMetaActivableSet.DebugForceSetPhase(IMetaActivableInfo info, IPlayerModelBase player, Nullable<DebugPhase> phase) { }

	private override void Metaplay.Core.Activables.IMetaActivableSet.ForceEndActivation(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override void Metaplay.Core.Activables.IMetaActivableSet.ForceStartActivation(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.IsActive(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.IsInPreview(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.IsInReview(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.TryConsume(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.TryFinalize(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override MetaActivableState Metaplay.Core.Activables.IMetaActivableSet.TryGetState(IMetaActivableInfo info) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.TryGetVisibleStatus(IMetaActivableInfo info, IPlayerModelBase player, out MetaActivableVisibleStatus visibleStatus) { }

	private override bool Metaplay.Core.Activables.IMetaActivableSet.TryStartActivation(IMetaActivableInfo info, IPlayerModelBase player) { }

	private override MetaActivableState Metaplay.Core.Activables.IMetaActivableSet<TId>.TryGetState(TId id) { }

	protected override void OnFinalizedActivation(TId id, IPlayerModelBase player) { }

	protected override void OnJustBeforeStartActivation(TInfo info, IPlayerModelBase player) { }

	protected override void OnStartedActivation(TInfo info, IPlayerModelBase player) { }

	[MetaOnDeserialized]
	private void OrganizeActivableStatesByValidityOnDeserialization() { }

	public override int TryAdjustEachActivation(IPlayerModelBase player) { }

	public bool TryConsume(TInfo info, IPlayerModelBase player) { }

	public bool TryConsume(TId id, IPlayerModelBase player) { }

	public bool TryFinalize(TInfo info, IPlayerModelBase player) { }

	public bool TryFinalize(TId id, IPlayerModelBase player) { }

	public void TryFinalizeEach(ValueCollection<T, TInfo> infos, IPlayerModelBase player) { }

	public void TryFinalizeEach(IEnumerable<TInfo> infos, IPlayerModelBase player) { }

	public override void TryFinalizeEach(IEnumerable<TId> ids, IPlayerModelBase player) { }

	private bool TryGetDebugVisibleStatus(TActivableState activableState, IPlayerModelBase player, DebugPhase phase, out MetaActivableVisibleStatus visibleStatus) { }

	public TActivableState TryGetState(TInfo info) { }

	public override TActivableState TryGetState(TId id) { }

	public bool TryGetVisibleStatus(TInfo info, IPlayerModelBase player, out MetaActivableVisibleStatus visibleStatus) { }

	public bool TryStartActivation(TInfo info, IPlayerModelBase player) { }

	public void TryStartActivationForEach(ValueCollection<T, TInfo> infos, IPlayerModelBase player) { }

	public void TryStartActivationForEach(IEnumerable<TInfo> infos, IPlayerModelBase player) { }

}

