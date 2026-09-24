namespace Metaplay.Core.Activables;

[MetaSerializable]
public abstract class MetaActivableState : MetaActivableStateStorage
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static ActionRef<Activation> <>9__19_0; //Field offset: 0x8
		public static ActionRef<Activation> <>9__23_0; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal void <ForceConsume>b__19_0(ref Activation act) { }

		internal void <TryFinalize>b__23_0(ref Activation act) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass20_0
	{
		public IPlayerModelBase player; //Field offset: 0x10
		public bool skipCooldown; //Field offset: 0x18
		public MetaActivableState <>4__this; //Field offset: 0x20

		public <>c__DisplayClass20_0() { }

		internal void <ForceEndActivation>b__0(ref Activation act) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass21_0
	{
		public MetaTime newCooldownEndAt; //Field offset: 0x10

		public <>c__DisplayClass21_0() { }

		internal void <TryAdjustActivation>b__0(ref Activation act) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass21_1
	{
		public Nullable<MetaTime> endAt; //Field offset: 0x10
		public Nullable<MetaTime> cooldownEndAt; //Field offset: 0x20

		public <>c__DisplayClass21_1() { }

		internal void <TryAdjustActivation>b__1(ref Activation act) { }

	}

	internal sealed class ActionRef : MulticastDelegate
	{

		public ActionRef`1(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(ref T value, AsyncCallback callback, object object) { }

		public override void EndInvoke(ref T value, IAsyncResult result) { }

		public override void Invoke(ref T value) { }

	}

	[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {4})]
	[MetaSerializable]
	internal struct Activation
	{
		[MetaMember(1, MetaMemberFlags::None (0))]
		public MetaDuration UtcOffset; //Field offset: 0x0
		[MetaMember(2, MetaMemberFlags::None (0))]
		public MetaTime StartedAt; //Field offset: 0x8
		[MetaMember(3, MetaMemberFlags::None (0))]
		public Nullable<MetaTime> EndAt; //Field offset: 0x10
		[MetaMember(8, MetaMemberFlags::None (0))]
		public bool EndedExplicitly; //Field offset: 0x20
		[MetaMember(6, MetaMemberFlags::None (0))]
		public Nullable<MetaTime> CooldownEndAt; //Field offset: 0x28
		[MetaMember(5, MetaMemberFlags::None (0))]
		public int NumConsumed; //Field offset: 0x38
		[MetaMember(7, MetaMemberFlags::None (0))]
		public bool IsFinalized; //Field offset: 0x3C

		[IgnoreDataMember]
		public PlayerLocalTime LocalStartedAt
		{
			 get { } //Length: 44
		}

		public Activation(MetaDuration utcOffset, MetaTime startedAt, Nullable<MetaTime> endAt, bool endedExplicitly, Nullable<MetaTime> cooldownEndAt, int numConsumed, bool isFinalized) { }

		public PlayerLocalTime get_LocalStartedAt() { }

	}

	[MetaSerializable]
	internal enum DebugPhase : int
	{
		Preview = 0,
		Active = 1,
		EndingSoon = 2,
		Review = 3,
		Inactive = 4,
	}

	[MetaSerializable]
	internal class DebugState
	{
		[CompilerGenerated]
		private DebugPhase <Phase>k__BackingField; //Field offset: 0x10

		[MetaMember(1, MetaMemberFlags::None (0))]
		public private DebugPhase Phase
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		private DebugState() { }

		public DebugState(DebugPhase phase) { }

		[CompilerGenerated]
		public DebugPhase get_Phase() { }

		[CompilerGenerated]
		private void set_Phase(DebugPhase value) { }

	}


	[IgnoreDataMember]
	public abstract MetaActivableParams ActivableParams
	{
		 get { } //Length: 0
	}

	public override bool IsValidState
	{
		 get { } //Length: 8
	}

	protected MetaActivableState() { }

	protected override bool AllowConsume(IPlayerModelBase player) { }

	public override bool CanBeFinalized(IPlayerModelBase player) { }

	public bool CanStartActivation(IPlayerModelBase player) { }

	public bool CanStartActivationAt(IPlayerModelBase player, MetaTime time) { }

	protected override bool CustomCanStartActivation(IPlayerModelBase player, MetaTime time) { }

	protected override void Finalize(IPlayerModelBase player) { }

	public void ForceConsume(IPlayerModelBase player) { }

	public void ForceEndActivation(IPlayerModelBase player, bool skipCooldown = false) { }

	public void ForceStartActivation(IPlayerModelBase player) { }

	public void ForceStartDebugEndlessActivation(IPlayerModelBase player) { }

	public abstract MetaActivableParams get_ActivableParams() { }

	public override bool get_IsValidState() { }

	public override Nullable<MetaTime> GetActivationEndingSoonStartsAtTime(IPlayerModelBase player) { }

	public override Nullable<MetaTime> GetActivationVisibilityEndsAtTime(IPlayerModelBase player) { }

	public override Nullable<MetaTime> GetAdjustedActivationEndTime(IPlayerModelBase player) { }

	private MetaDuration GetUtcOffsetForActivation(MetaDuration playerLocalUtcOffset) { }

	public bool HasOngoingActivation(MetaTime currentTime) { }

	public bool IsActive(IPlayerModelBase player) { }

	public bool IsInCooldown(MetaTime currentTime) { }

	public override bool IsInReview(MetaTime currentTime) { }

	public bool IsScheduleOffsetBlocked(PlayerLocalTime currentTime) { }

	protected void MutateLatestActivation(ActionRef<Activation> mutate) { }

	protected override void OnStartedActivation(IPlayerModelBase player) { }

	public bool TotalLimitsAreReached() { }

	public bool TryAdjustActivation(IPlayerModelBase player) { }

	public bool TryConsume(IPlayerModelBase player) { }

	public bool TryFinalize(IPlayerModelBase player) { }

	protected abstract object TryGetActivableId() { }

	private void TryInvokeOnActivationStartedListener(IPlayerModelBase player) { }

	private void TryInvokeOnConsumedListener(IPlayerModelBase player) { }

	private void TryInvokeOnFinalizedListener(IPlayerModelBase player) { }

	public bool TryStartActivation(IPlayerModelBase player) { }

}

