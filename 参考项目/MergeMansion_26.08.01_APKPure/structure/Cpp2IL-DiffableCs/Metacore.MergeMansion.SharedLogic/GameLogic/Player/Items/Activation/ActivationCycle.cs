namespace GameLogic.Player.Items.Activation;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {3, 4, 5})]
[MetaSerializableDerived(1)]
public class ActivationCycle : IActivationCycle
{
	[CompilerGenerated]
	private MetaDuration <ActivationDelay>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <FirstCycleStartDelay>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <HowManyCycles>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private IActivationCycleData <DailyActivationCyclesData>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private IActivationCycleData <InitialActivationCyclesData>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private IActivationReEngagementSettings <ReEngagementSettings>k__BackingField; //Field offset: 0x38

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaDuration ActivationDelay
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private override IActivationCycleData DailyActivationCyclesData
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private MetaDuration FirstCycleStartDelay
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override int HowManyCycles
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	private IActivationCycleData InitialActivationCyclesData
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override Option<IActivationCycleData> InitialActivationCyclesDataOption
	{
		 get { } //Length: 92
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	private IActivationReEngagementSettings ReEngagementSettings
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override Option<IActivationReEngagementSettings> ReEngagementSettingsOption
	{
		 get { } //Length: 92
	}

	private ActivationCycle() { }

	public ActivationCycle(MetaDuration firstCycleStartDelay, MetaDuration activationDelay, int howManyCycles, IActivationCycleData dailyActivationCycles, Option<IActivationCycleData> initialActivationCycles) { }

	public ActivationCycle(long firstCycleStartDelay, long activationDelay, int howManyCycles, IActivationCycleData dailyActivationCycles, Option<IActivationCycleData> initialActivationCycles) { }

	public override Nullable<MetaTime> CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, ActivationState activationState, StorageState activationStorageState, F32 boostFactor, MetaTime currentTime, bool useCalendarBasedCycle) { }

	[CompilerGenerated]
	private MetaDuration get_ActivationDelay() { }

	[CompilerGenerated]
	public override IActivationCycleData get_DailyActivationCyclesData() { }

	[CompilerGenerated]
	private MetaDuration get_FirstCycleStartDelay() { }

	[CompilerGenerated]
	public override int get_HowManyCycles() { }

	[CompilerGenerated]
	private IActivationCycleData get_InitialActivationCyclesData() { }

	public override Option<IActivationCycleData> get_InitialActivationCyclesDataOption() { }

	[CompilerGenerated]
	private IActivationReEngagementSettings get_ReEngagementSettings() { }

	public override Option<IActivationReEngagementSettings> get_ReEngagementSettingsOption() { }

	public override int GetActivationAmountInCycle(CycleInfo cycleInfo) { }

	public override MetaDuration GetActivationDelay() { }

	public override IReadOnlyList<Int32> GetDailyActivationAmountInCycle() { }

	public override IReadOnlyList<MetaDuration> GetDailyDelaysBetweenCycles() { }

	public override IReadOnlyList<Int32> GetDailyHowManyAreGeneratedInCycle() { }

	public override IReadOnlyList<F64> GetDailyTimerSkipMultipliers() { }

	public override MetaDuration GetDelayBetweenCycles(CycleInfo cycleInfo) { }

	public override MetaDuration GetFirstCycleDelay() { }

	public override int GetHowManyAreGeneratedInCycle(CycleInfo cycleInfo) { }

	private Option<IActivationReEngagementSettings> GetReEngagementSettingsIfActive(CycleInfo cycleInfo) { }

	public override F64 GetTimerSkipCostMultiplier(CycleInfo cycleInfo) { }

	private static T GetValueFromLists(Option<IReadOnlyList`1<T>> initialListOption, IReadOnlyList<T> regularDailyList, CycleInfo cycleInfo) { }

	public override bool IsOutOfInitialCycles(int cycleNumber) { }

	[CompilerGenerated]
	private void set_ActivationDelay(MetaDuration value) { }

	[CompilerGenerated]
	private void set_DailyActivationCyclesData(IActivationCycleData value) { }

	[CompilerGenerated]
	private void set_FirstCycleStartDelay(MetaDuration value) { }

	[CompilerGenerated]
	private void set_HowManyCycles(int value) { }

	[CompilerGenerated]
	private void set_InitialActivationCyclesData(IActivationCycleData value) { }

	[CompilerGenerated]
	private void set_ReEngagementSettings(IActivationReEngagementSettings value) { }

	public override void SetReEngagementSettings(Option<IActivationReEngagementSettings> activationReEngagementSettings) { }

	private bool ShouldIncrementDailyCycleIndex(CycleInfo cycleInfo) { }

	public override bool TryGetActiveDuration(IActivationFeatures activationFeatures, ActivationState activationState, MetacoreTime currentTime, out MetaDuration activeDuration) { }

	[Obsolete("Use the overload with MetacoreTime instead")]
	public override bool TryGetActiveDuration(IActivationFeatures activationFeatures, ActivationState activationState, MetaTime currentTime, out MetaDuration activeDuration) { }

	public override void UpdateActivationCycleData(ActivationState activationState, IPlayer player, MetaTime timeStamp) { }

	public override void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey) { }

}

