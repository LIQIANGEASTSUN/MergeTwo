namespace Code.GameLogic.GameEvents;

public class EventTaskConfigSourceItem : IConfigItemSource<EventTaskInfo, EventTaskId>, IGameConfigSourceItem<EventTaskId, EventTaskInfo>, IHasGameConfigKey<EventTaskId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private EventTaskId <EventTaskId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <TaskTitleLocId>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<String> <RewardType>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<String> <RewardId>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<String> <RewardAux0>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<String> <RewardAux1>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<Int32> <RewardAmount>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<String> <RequirementType>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private List<String> <RequirementId>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private List<String> <RequirementAmount>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private List<String> <RequirementAux0>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private List<MetaRef`1<EventTaskInfo>> <UnlocksTasks>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private List<String> <CompleteAction>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private Nullable<Int32> <EventLevelMin>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private Nullable<Int32> <EventLevelMax>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private bool <ForceHideOnEventLevelMax>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private bool <IsDynamicTask>k__BackingField; //Field offset: 0xA1
	[CompilerGenerated]
	private string <DifficultyCurve_Item1>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private string <DefaultDifficultyCurve_Item1>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private F32 <RangeMin_Item1>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private F32 <RangeMax_Item1>k__BackingField; //Field offset: 0xBC
	[CompilerGenerated]
	private F32 <LeftoversWeightMultiplier_Item1>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private string <DifficultyCurve_Item2>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private string <DefaultDifficultyCurve_Item2>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private F32 <RangeMin_Item2>k__BackingField; //Field offset: 0xD8
	[CompilerGenerated]
	private F32 <RangeMax_Item2>k__BackingField; //Field offset: 0xDC
	[CompilerGenerated]
	private F32 <LeftoversWeightMultiplier_Item2>k__BackingField; //Field offset: 0xE0

	private List<String> CompleteAction
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override EventTaskId ConfigKey
	{
		 get { } //Length: 8
	}

	private string DefaultDifficultyCurve_Item1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string DefaultDifficultyCurve_Item2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string Description
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string DifficultyCurve_Item1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string DifficultyCurve_Item2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string DisplayName
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<Int32> EventLevelMax
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<Int32> EventLevelMin
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private EventTaskId EventTaskId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private bool ForceHideOnEventLevelMax
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool IsDynamicTask
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private F32 LeftoversWeightMultiplier_Item1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private F32 LeftoversWeightMultiplier_Item2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private F32 RangeMax_Item1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private F32 RangeMax_Item2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private F32 RangeMin_Item1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private F32 RangeMin_Item2
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int32> RewardAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RewardAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RewardAux1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RewardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RewardType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string TaskTitleLocId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<EventTaskInfo>> UnlocksTasks
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public EventTaskConfigSourceItem() { }

	[CompilerGenerated]
	private List<String> get_CompleteAction() { }

	public override EventTaskId get_ConfigKey() { }

	[CompilerGenerated]
	private string get_DefaultDifficultyCurve_Item1() { }

	[CompilerGenerated]
	private string get_DefaultDifficultyCurve_Item2() { }

	[CompilerGenerated]
	private string get_Description() { }

	[CompilerGenerated]
	private string get_DifficultyCurve_Item1() { }

	[CompilerGenerated]
	private string get_DifficultyCurve_Item2() { }

	[CompilerGenerated]
	private string get_DisplayName() { }

	[CompilerGenerated]
	private Nullable<Int32> get_EventLevelMax() { }

	[CompilerGenerated]
	private Nullable<Int32> get_EventLevelMin() { }

	[CompilerGenerated]
	private EventTaskId get_EventTaskId() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private bool get_ForceHideOnEventLevelMax() { }

	[CompilerGenerated]
	private bool get_IsDynamicTask() { }

	[CompilerGenerated]
	private F32 get_LeftoversWeightMultiplier_Item1() { }

	[CompilerGenerated]
	private F32 get_LeftoversWeightMultiplier_Item2() { }

	[CompilerGenerated]
	private F32 get_RangeMax_Item1() { }

	[CompilerGenerated]
	private F32 get_RangeMax_Item2() { }

	[CompilerGenerated]
	private F32 get_RangeMin_Item1() { }

	[CompilerGenerated]
	private F32 get_RangeMin_Item2() { }

	[CompilerGenerated]
	private List<String> get_RequirementAmount() { }

	[CompilerGenerated]
	private List<String> get_RequirementAux0() { }

	[CompilerGenerated]
	private List<String> get_RequirementId() { }

	[CompilerGenerated]
	private List<String> get_RequirementType() { }

	[CompilerGenerated]
	private List<Int32> get_RewardAmount() { }

	[CompilerGenerated]
	private List<String> get_RewardAux0() { }

	[CompilerGenerated]
	private List<String> get_RewardAux1() { }

	[CompilerGenerated]
	private List<String> get_RewardId() { }

	[CompilerGenerated]
	private List<String> get_RewardType() { }

	[CompilerGenerated]
	private string get_TaskTitleLocId() { }

	[CompilerGenerated]
	private List<MetaRef`1<EventTaskInfo>> get_UnlocksTasks() { }

	[CompilerGenerated]
	private void set_CompleteAction(List<String> value) { }

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
	public void set_ExperimentPriority(int value) { }

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
	private void set_RequirementAmount(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementId(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementType(List<String> value) { }

	[CompilerGenerated]
	private void set_RewardAmount(List<Int32> value) { }

	[CompilerGenerated]
	private void set_RewardAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_RewardAux1(List<String> value) { }

	[CompilerGenerated]
	private void set_RewardId(List<String> value) { }

	[CompilerGenerated]
	private void set_RewardType(List<String> value) { }

	[CompilerGenerated]
	private void set_TaskTitleLocId(string value) { }

	[CompilerGenerated]
	private void set_UnlocksTasks(List<MetaRef`1<EventTaskInfo>> value) { }

	public override EventTaskInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

