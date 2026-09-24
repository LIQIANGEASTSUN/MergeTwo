namespace GameLogic.Player.Items.Spawning;

[MetaSerializable]
public sealed class SpawnState
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	private int currentCycleNumber; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private int spawnInCurrentCycle; //Field offset: 0x14
	[MetaMember(3, MetaMemberFlags::None (0))]
	private Nullable<MetaTime> nextEstimatedSpawnStorageFillTime; //Field offset: 0x18
	[MetaMember(4, MetaMemberFlags::None (0))]
	private MetaTime startTimeOfSpawnStorageFill; //Field offset: 0x28
	[MetaMember(5, MetaMemberFlags::None (0))]
	private MetaDuration relativeTimeSpendOnSpawnStorageFill; //Field offset: 0x30
	[MetaMember(6, MetaMemberFlags::None (0))]
	private int tempFillForSpawnStorage; //Field offset: 0x38
	[MetaMember(7, MetaMemberFlags::None (0))]
	private Nullable<MetaTime> estimatedDecayTime; //Field offset: 0x40
	[MetaMember(8, MetaMemberFlags::None (0))]
	private MetaTime lastTimeAddTime; //Field offset: 0x50
	[MetaMember(9, MetaMemberFlags::None (0))]
	private Nullable<MetaTime> pausedUntil; //Field offset: 0x58
	[CompilerGenerated]
	private ulong <SpawnCount>k__BackingField; //Field offset: 0x68
	[MetaMember(11, MetaMemberFlags::None (0))]
	private int customCycleMax; //Field offset: 0x70
	[MetaMember(12, MetaMemberFlags::None (0))]
	private bool hasCustomCycleMax; //Field offset: 0x74

	[MetaMember(10, MetaMemberFlags::None (0))]
	public ulong SpawnCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private SpawnState() { }

	public SpawnState(MetaTime timestamp) { }

	public SpawnState(SpawnState other, MetaTime timestamp) { }

	public void AddAbsoluteTimeSpendOnSpawnStorageFill(MetaTime timestamp) { }

	public void AddCyclesToCycleMax(int cycleMax, int cyclesToAdd) { }

	public void AddRelativeTimeSpendOnSpawnStorageFill(MetaDuration increaseAmount, MetaTime timestamp) { }

	public bool CanStillSpawn(int cycleMax) { }

	[CompilerGenerated]
	public ulong get_SpawnCount() { }

	public static SpawnState GetBetter(SpawnState spawnCycleData1, SpawnState spawnCycleData2) { }

	public int GetCurrentCycleNumber() { }

	public Nullable<MetaTime> GetEstimatedDecayTime() { }

	public Nullable<MetaTime> GetNextEstimatedSpawnStorageFillStep() { }

	public MetaDuration GetRelativeTimeSpendOnSpawnStorageFill() { }

	public int GetRemainingCycles(int cycleMax) { }

	public int GetSpawnInCurrentCycle() { }

	public MetaTime GetStartTimeOfSpawnStorageFill() { }

	public int GetTempFillForSpawnStorage() { }

	public bool HasNotSpawnedAnythingYet() { }

	public bool IsOnCycleDelay() { }

	public bool IsPaused(MetacoreTime timestamp) { }

	public void ManualIncreaseOfNextEstimatedSpawnStorageFillTime(MetacoreDuration howMuchToIncrease) { }

	public void ManualIncreaseStartTimeOfSpawnStorageFillTime(MetacoreDuration howMuchToIncrease) { }

	public void MoveToNext(int spawnMax) { }

	public void PauseUntil(MetacoreTime until) { }

	public void ReduceTempFillForSpawnStorage(int reduceAmount) { }

	public void ResetRelativeTimeSpendOnSpawnStorageFill(MetacoreTime timestamp) { }

	public void ResetTempFillForSpawnStorage() { }

	public void RestoreSpawnState(ISpawnFeatures spawnFeatures) { }

	[CompilerGenerated]
	public void set_SpawnCount(ulong value) { }

	public void SetCurrentCycleNumber(int cycleNumber) { }

	public void SetEstimatedDecayTime(MetaTime decayTime) { }

	public void SetNewStartTimeOfSpawnStorageFill(MetacoreTime newStartTime) { }

	public void SetNextEstimatedSpawnStorageFillStep(Nullable<MetaTime> newNextEstimatedSpawnStorageFillTime) { }

	public void SetSpawnInCurrentCycle(int value) { }

	public void SetTempFillForSpawnStorage(int newAmount) { }

	public void SkipGameTime(MetacoreDuration numMillisecondToSkip) { }

}

