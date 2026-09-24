namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class EventTaskInfo : IGameConfigData<EventTaskId>, IGameConfigData, IHasGameConfigKey<EventTaskId>, IValidatable
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Converter<PlayerReward, String> <>9__100_0; //Field offset: 0x8
		public static Converter<PlayerItemRequirement, String> <>9__100_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal string <ToString>b__100_0(PlayerReward r) { }

		internal string <ToString>b__100_1(PlayerItemRequirement r) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass95_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass95_0() { }

		internal ValueTuple<IEnumerable`1<IItemDefinition>, Int32> <RequiredItems>b__0(PlayerItemRequirement req) { }

	}

	[CompilerGenerated]
	private EventTaskId <EventTaskId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<PlayerReward> <Rewards>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<PlayerItemRequirement> <Requirements>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<MetaRef`1<EventTaskInfo>> <UnlockTaskRefs>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private string <TaskTitleLocId>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private bool <IsDynamicTask>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private string <DifficultyCurve_Item1>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private string <DefaultDifficultyCurve_Item1>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private F32 <RangeMin_Item1>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private F32 <RangeMax_Item1>k__BackingField; //Field offset: 0x64
	[CompilerGenerated]
	private F32 <LeftoversWeightMultiplier_Item1>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private string <DifficultyCurve_Item2>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private string <DefaultDifficultyCurve_Item2>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private F32 <RangeMin_Item2>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private F32 <RangeMax_Item2>k__BackingField; //Field offset: 0x84
	[CompilerGenerated]
	private F32 <LeftoversWeightMultiplier_Item2>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private List<IDirectorAction> <CompleteActions>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private Nullable<Int32> <EventLevelMin>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private Nullable<Int32> <EventLevelMax>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private bool <ForceHideOnEventLevelMax>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0xAC

	[MetaMember(19, MetaMemberFlags::None (0))]
	public List<IDirectorAction> CompleteActions
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override EventTaskId ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private string DefaultDifficultyCurve_Item1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	public private string DefaultDifficultyCurve_Item2
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private string Description
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private string DifficultyCurve_Item1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	public private string DifficultyCurve_Item2
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private string DisplayName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(21, MetaMemberFlags::None (0))]
	private Nullable<Int32> EventLevelMax
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(20, MetaMemberFlags::None (0))]
	private Nullable<Int32> EventLevelMin
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private EventTaskId EventTaskId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(22, MetaMemberFlags::None (0))]
	private bool ForceHideOnEventLevelMax
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private bool IsDynamicTask
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	public private F32 LeftoversWeightMultiplier_Item1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(18, MetaMemberFlags::None (0))]
	public private F32 LeftoversWeightMultiplier_Item2
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public private F32 RangeMax_Item1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	public private F32 RangeMax_Item2
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public private F32 RangeMin_Item1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(16, MetaMemberFlags::None (0))]
	public private F32 RangeMin_Item2
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private List<PlayerItemRequirement> Requirements
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private List<PlayerReward> Rewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private string TaskTitleLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private List<MetaRef`1<EventTaskInfo>> UnlockTaskRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public IEnumerable<EventTaskInfo> UnlockTasks
	{
		 get { } //Length: 196
	}

	public EventTaskInfo(EventTaskId eventTaskId, string displayName, string description, List<PlayerReward> rewards, List<PlayerItemRequirement> requirements, List<MetaRef`1<EventTaskInfo>> unlocksTasks, string taskTitleLocId, bool isDynamicTask, string difficultyCurveItem1, string defaultDifficultyCurveItem1, F32 rangeMinItem1, F32 rangeMaxItem1, F32 leftoversWeightMultiplier_Item1, string difficultyCurveItem2, string defaultDifficultyCurveItem2, F32 rangeMinItem2, F32 rangeMaxItem2, F32 leftoversWeightMultiplier_Item2, int experimentPriority, List<IDirectorAction> completeActions = null, Nullable<Int32> eventLevelMin = null, Nullable<Int32> eventLevelMax = null, bool forceHideOnEventLevelMax = false) { }

	public EventTaskInfo() { }

	public bool CanMakeTaskAvailable(int eventLevel, bool completedAtLeastOnce) { }

	public bool CanShowAsAvailable(int eventLevel, bool completedAtLeastOnce) { }

	public void ConvertRequirements(out IEnumerable<Int32>[]& itemTypes, out Int32[] itemCounts) { }

	[CompilerGenerated]
	public List<IDirectorAction> get_CompleteActions() { }

	public override EventTaskId get_ConfigKey() { }

	[CompilerGenerated]
	public string get_DefaultDifficultyCurve_Item1() { }

	[CompilerGenerated]
	public string get_DefaultDifficultyCurve_Item2() { }

	[CompilerGenerated]
	public string get_Description() { }

	[CompilerGenerated]
	public string get_DifficultyCurve_Item1() { }

	[CompilerGenerated]
	public string get_DifficultyCurve_Item2() { }

	[CompilerGenerated]
	public string get_DisplayName() { }

	[CompilerGenerated]
	private Nullable<Int32> get_EventLevelMax() { }

	[CompilerGenerated]
	private Nullable<Int32> get_EventLevelMin() { }

	[CompilerGenerated]
	public EventTaskId get_EventTaskId() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private bool get_ForceHideOnEventLevelMax() { }

	[CompilerGenerated]
	public bool get_IsDynamicTask() { }

	[CompilerGenerated]
	public F32 get_LeftoversWeightMultiplier_Item1() { }

	[CompilerGenerated]
	public F32 get_LeftoversWeightMultiplier_Item2() { }

	[CompilerGenerated]
	public F32 get_RangeMax_Item1() { }

	[CompilerGenerated]
	public F32 get_RangeMax_Item2() { }

	[CompilerGenerated]
	public F32 get_RangeMin_Item1() { }

	[CompilerGenerated]
	public F32 get_RangeMin_Item2() { }

	[CompilerGenerated]
	public List<PlayerItemRequirement> get_Requirements() { }

	[CompilerGenerated]
	public List<PlayerReward> get_Rewards() { }

	[CompilerGenerated]
	public string get_TaskTitleLocId() { }

	[CompilerGenerated]
	public List<MetaRef`1<EventTaskInfo>> get_UnlockTaskRefs() { }

	public IEnumerable<EventTaskInfo> get_UnlockTasks() { }

	public void OnComplete(IPlayer player, bool wasCompletedBefore, bool skipCompleteActions = false) { }

	public IEnumerable<ValueTuple`2<IEnumerable`1<IItemDefinition>, Int32>> RequiredItems(IPlayer player) { }

	[CompilerGenerated]
	public void set_CompleteActions(List<IDirectorAction> value) { }

	[CompilerGenerated]
	private void set_DefaultDifficultyCurve_Item1(string value) { }

	[CompilerGenerated]
	private void set_DefaultDifficultyCurve_Item2(string value) { }

	[CompilerGenerated]
	private void set_Description(string value) { }

	[CompilerGenerated]
	private void set_DifficultyCurve_Item1(string value) { }

	[CompilerGenerated]
	private void set_DifficultyCurve_Item2(string value) { }

	[CompilerGenerated]
	private void set_DisplayName(string value) { }

	[CompilerGenerated]
	private void set_EventLevelMax(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_EventLevelMin(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_EventTaskId(EventTaskId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ForceHideOnEventLevelMax(bool value) { }

	[CompilerGenerated]
	private void set_IsDynamicTask(bool value) { }

	[CompilerGenerated]
	private void set_LeftoversWeightMultiplier_Item1(F32 value) { }

	[CompilerGenerated]
	private void set_LeftoversWeightMultiplier_Item2(F32 value) { }

	[CompilerGenerated]
	private void set_RangeMax_Item1(F32 value) { }

	[CompilerGenerated]
	private void set_RangeMax_Item2(F32 value) { }

	[CompilerGenerated]
	private void set_RangeMin_Item1(F32 value) { }

	[CompilerGenerated]
	private void set_RangeMin_Item2(F32 value) { }

	[CompilerGenerated]
	private void set_Requirements(List<PlayerItemRequirement> value) { }

	[CompilerGenerated]
	private void set_Rewards(List<PlayerReward> value) { }

	[CompilerGenerated]
	private void set_TaskTitleLocId(string value) { }

	[CompilerGenerated]
	private void set_UnlockTaskRefs(List<MetaRef`1<EventTaskInfo>> value) { }

	public virtual string ToString() { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

