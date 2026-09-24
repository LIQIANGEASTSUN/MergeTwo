namespace GameLogic.Player.Items.Chest;

public interface IChestState
{

	public ulong ActivationCount
	{
		 get { } //Length: 0
	}

	public ChestContext ChestContext
	{
		 get { } //Length: 0
	}

	public MetacoreTime EstimatedEndTime
	{
		 get { } //Length: 0
	}

	public MetacoreTime OpenStartTime
	{
		 get { } //Length: 0
	}

	public void AddAbsoluteTimeSpendOnOpen(MetacoreTime timestamp) { }

	public void CalculateEstimatedOpenEndTime(MetacoreDuration duration, F32 boostFactor, MetacoreTime currentTimestamp) { }

	public ValueTuple<Currencies, Int32> CalculateFastOpenCost(MetacoreTime currentTime, MetacoreDuration maxDuration) { }

	public static IChestState CreateChestState() { }

	public void ForceCompleteCountdown() { }

	public ulong get_ActivationCount() { }

	public ChestContext get_ChestContext() { }

	public MetacoreTime get_EstimatedEndTime() { }

	public MetacoreTime get_OpenStartTime() { }

	public int GetLootCount() { }

	public IItemDefinition GetNextLoot(IPlayer player) { }

	public bool HasOpeningStarted() { }

	public void IncreaseActivationCount() { }

	public void IncreaseRelativeTimeSpendOnOpen(MetacoreDuration add) { }

	public void InitChestContext(IPlayer player) { }

	public bool IsForceCompleted() { }

	public bool IsReadyForLooting() { }

	public bool IsReadyForOpen(MetacoreTime timestamp) { }

	public void OpenAndFillRewards(IEnumerable<IItemDefinition> rewards, IPlayer player) { }

	public IEnumerable<IItemDefinition> RemoveFromChest(Predicate<IItemDefinition> itemMatcher, IMergeMansionGameConfig config) { }

	public void SkipGameTime(MetacoreDuration numMillisecondToSkip) { }

	public void StartChestOpenCountdown(MetacoreTime startTime, MetacoreDuration duration, F32 boostFactor) { }

}

