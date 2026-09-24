namespace GameLogic.Player.Items.Activation;

[MetaSerializable]
public interface IActivationCycle
{

	public IActivationCycleData DailyActivationCyclesData
	{
		 get { } //Length: 0
	}

	public int HowManyCycles
	{
		 get { } //Length: 0
	}

	public Option<IActivationCycleData> InitialActivationCyclesDataOption
	{
		 get { } //Length: 0
	}

	public Option<IActivationReEngagementSettings> ReEngagementSettingsOption
	{
		 get { } //Length: 0
	}

	public Nullable<MetaTime> CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, ActivationState activationState, StorageState activationStorageState, F32 boostFactor, MetaTime currentTime, bool useCalendarBasedCycle) { }

	public IActivationCycleData get_DailyActivationCyclesData() { }

	public int get_HowManyCycles() { }

	public Option<IActivationCycleData> get_InitialActivationCyclesDataOption() { }

	public Option<IActivationReEngagementSettings> get_ReEngagementSettingsOption() { }

	public int GetActivationAmountInCycle(CycleInfo cycleInfo) { }

	public MetaDuration GetActivationDelay() { }

	public IReadOnlyList<Int32> GetDailyActivationAmountInCycle() { }

	public IReadOnlyList<MetaDuration> GetDailyDelaysBetweenCycles() { }

	public IReadOnlyList<Int32> GetDailyHowManyAreGeneratedInCycle() { }

	public IReadOnlyList<F64> GetDailyTimerSkipMultipliers() { }

	public MetaDuration GetDelayBetweenCycles(CycleInfo cycleInfo) { }

	public MetaDuration GetFirstCycleDelay() { }

	public int GetHowManyAreGeneratedInCycle(CycleInfo cycleInfo) { }

	public F64 GetTimerSkipCostMultiplier(CycleInfo cycleInfo) { }

	public bool IsOutOfInitialCycles(int cycleNumber) { }

	public void SetReEngagementSettings(Option<IActivationReEngagementSettings> activationReEngagementSettings) { }

	[Obsolete("Use the overload with MetacoreTime instead")]
	public bool TryGetActiveDuration(IActivationFeatures activationFeatures, ActivationState activationState, MetaTime currentTime, out MetaDuration activeDuration) { }

	public bool TryGetActiveDuration(IActivationFeatures activationFeatures, ActivationState activationState, MetacoreTime currentTime, out MetaDuration activeDuration) { }

	public void UpdateActivationCycleData(ActivationState activationState, IPlayer player, MetaTime timeStamp) { }

	public void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey) { }

}

