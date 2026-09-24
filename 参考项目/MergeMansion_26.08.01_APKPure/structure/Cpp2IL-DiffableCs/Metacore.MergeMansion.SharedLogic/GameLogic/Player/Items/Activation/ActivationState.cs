namespace GameLogic.Player.Items.Activation;

[MetaSerializable]
public sealed class ActivationState
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	private int currentCycleNumber; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private int activationInCurrentCycle; //Field offset: 0x14
	[MetaMember(3, MetaMemberFlags::None (0))]
	private Nullable<MetaTime> nextEstimatedActivationStorageFillTime; //Field offset: 0x18
	[MetaMember(4, MetaMemberFlags::None (0))]
	private MetaTime startTimeOfActivationStorageFill; //Field offset: 0x28
	[MetaMember(5, MetaMemberFlags::None (0))]
	private MetaDuration relativeTimeSpendOnActivationStorageFill; //Field offset: 0x30
	[MetaMember(6, MetaMemberFlags::None (0))]
	private int tempFillForActivationStorage; //Field offset: 0x38
	[CompilerGenerated]
	private bool <Paused>k__BackingField; //Field offset: 0x3C
	[MetaMember(8, MetaMemberFlags::None (0))]
	private MetaTime lastTimeAddTime; //Field offset: 0x40
	[CompilerGenerated]
	private ulong <ActivationCount>k__BackingField; //Field offset: 0x48
	[MetaMember(10, MetaMemberFlags::None (0))]
	private Nullable<MetaTime> firstCycleActivationTime; //Field offset: 0x50
	[CompilerGenerated]
	private Nullable<MetaTime> <EstimatedDecayTime>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private int <DailyCycleIndex>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private long <LastCycleStartDaySinceEpoch>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private Nullable<MetaTime> <NextReEngagementTime>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private int <AccumulatedReEngagementTicks>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private bool <ReEngagementCycleActive>k__BackingField; //Field offset: 0x94

	[MetaMember(15, MetaMemberFlags::None (0))]
	public private int AccumulatedReEngagementTicks
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public ulong ActivationCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public private int DailyCycleIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public Nullable<MetaTime> EstimatedDecayTime
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public Option<MetaTime> GetNextReEngagementTime
	{
		 get { } //Length: 384
	}

	[IgnoreDataMember]
	public bool IsOnDecayDelay
	{
		 get { } //Length: 128
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	private long LastCycleStartDaySinceEpoch
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	private Nullable<MetaTime> NextReEngagementTime
	{
		[CompilerGenerated]
		private get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public bool Paused
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(16, MetaMemberFlags::None (0))]
	public private bool ReEngagementCycleActive
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ActivationState(ActivationState other, MetaTime timestamp) { }

	public ActivationState(MetacoreTime timestamp, Nullable<MetaTime> activationStartTime) { }

	private ActivationState() { }

	public void AddAbsoluteTimeSpendOnActivationStorageFill(MetaTime timestamp) { }

	public void AddRelativeTimeSpendOnActivationStorageFill(MetaDuration increaseAmount, MetaTime timestamp) { }

	public bool CanStillActivate(int cycleMax) { }

	public void DebugForceAddReEngagementTickWithoutTriggeringNext() { }

	public void DebugResetReEngagement() { }

	[CompilerGenerated]
	public int get_AccumulatedReEngagementTicks() { }

	[CompilerGenerated]
	public ulong get_ActivationCount() { }

	[CompilerGenerated]
	public int get_DailyCycleIndex() { }

	[CompilerGenerated]
	public Nullable<MetaTime> get_EstimatedDecayTime() { }

	public Option<MetaTime> get_GetNextReEngagementTime() { }

	public bool get_IsOnDecayDelay() { }

	[CompilerGenerated]
	private long get_LastCycleStartDaySinceEpoch() { }

	[CompilerGenerated]
	private Nullable<MetaTime> get_NextReEngagementTime() { }

	[CompilerGenerated]
	public bool get_Paused() { }

	[CompilerGenerated]
	public bool get_ReEngagementCycleActive() { }

	public int GetActivationInCurrentCycle() { }

	public static ActivationState GetBetter(ActivationState activationCycleData1, ActivationState activationCycleData2) { }

	public int GetCurrentCycleNumber() { }

	public CycleInfo GetCycleInfo() { }

	public Nullable<MetaTime> GetFirstCycleActivationTime() { }

	public Nullable<MetaTime> GetNextEstimatedActivationStorageFillStep() { }

	public MetaDuration GetRelativeTimeSpendOnActivationStorageFill() { }

	public MetaTime GetStartTimeOfActivationStorageFill() { }

	public int GetTempFillForActivationStorage() { }

	public bool HasNotActivatedAnythingYet() { }

	public void IncrementDailyCycleIndex(long localDaySinceEpoch) { }

	public bool IsOnCycleDelay() { }

	public void ManualIncreaseOfNextEstimatedActivationStorageFillTime(MetacoreDuration howMuchToIncrease) { }

	public void ManualIncreaseStartTimeOfActivationStorageFillTime(MetaDuration howMuchToIncrease) { }

	public void MoveToNext(int activationMax, IPlayer player, MetacoreTime timeStamp, Func<CycleInfo, Boolean> shouldIncrementDailyCycleIndexFunc) { }

	public void ReduceTempFillForActivationStorage(int reduceAmount) { }

	public void RegisterActivationForReEngagement(IActivationReEngagementSettings reEngagementSettings, MetacoreTime timeStamp) { }

	public void RegisterReEngagementTick(Option<IActivationReEngagementSettings> reEngagementSettingsOption, MetacoreTime timeStamp) { }

	public void ResetRelativeTimeSpendOnActivationStorageFill(MetacoreTime timestamp) { }

	public void ResetTempFillForActivationStorage() { }

	public void RestoreSpawnState(IActivationFeatures spawnFeatures) { }

	[CompilerGenerated]
	private void set_AccumulatedReEngagementTicks(int value) { }

	[CompilerGenerated]
	public void set_ActivationCount(ulong value) { }

	[CompilerGenerated]
	private void set_DailyCycleIndex(int value) { }

	[CompilerGenerated]
	public void set_EstimatedDecayTime(Nullable<MetaTime> value) { }

	[CompilerGenerated]
	private void set_LastCycleStartDaySinceEpoch(long value) { }

	[CompilerGenerated]
	private void set_NextReEngagementTime(Nullable<MetaTime> value) { }

	[CompilerGenerated]
	public void set_Paused(bool value) { }

	[CompilerGenerated]
	private void set_ReEngagementCycleActive(bool value) { }

	public void SetActivationInCurrentCycle(int value) { }

	public void SetNewStartTimeOfActivationStorageFill(MetacoreTime newStartTime) { }

	public void SetNextEstimatedActivationStorageFillStep(Nullable<MetacoreTime> newNextEstimatedActivationStorageFillTime) { }

	public void SetTempFillForActivationStorage(int newAmount) { }

	public void SkipGameTime(MetacoreDuration numMillisecondToSkip) { }

}

