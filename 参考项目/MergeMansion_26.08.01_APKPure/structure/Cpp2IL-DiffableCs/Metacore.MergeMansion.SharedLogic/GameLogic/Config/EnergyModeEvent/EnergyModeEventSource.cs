namespace GameLogic.Config.EnergyModeEvent;

public class EnergyModeEventSource : IConfigItemSource<EnergyModeEventInfo, EnergyModeEventId>, IGameConfigSourceItem<EnergyModeEventId, EnergyModeEventInfo>, IHasGameConfigKey<EnergyModeEventId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private EnergyModeEventId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<MetaRef`1<PlayerSegmentInfo>> <Segments>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private MetaScheduleBase <Schedule>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private string <NameLocId>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private bool <IsTransient>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private EnergyModeEnableType <EnergyModeEnableType>k__BackingField; //Field offset: 0x54
	[CompilerGenerated]
	private List<MetaRef`1<EnergyModeInfo>> <EnergyModes>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private string <PrefabsOverride>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private string <StartPopupDescLocId>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private string <EndPopupDescLocId>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private string <TaskDescLocId>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private string <InfoPopupDescLocId>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private string <UnlockRequirementType>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private string <UnlockRequirementId>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private string <UnlockRequirementAmount>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private string <UnlockRequirementAux0>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private string <ContextCategory>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private string <ContextSubCategory>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private EventGroupId <GroupId>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0xC0

	public override EnergyModeEventId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private string ContextCategory
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string ContextSubCategory
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

	private string DisplayName
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string EndPopupDescLocId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private EnergyModeEnableType EnergyModeEnableType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<EnergyModeInfo>> EnergyModes
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

	private EventGroupId GroupId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string InfoPopupDescLocId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool IsEnabled
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool IsTransient
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string NameLocId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string PrefabsOverride
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int Priority
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MetaScheduleBase Schedule
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<PlayerSegmentInfo>> Segments
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string StartPopupDescLocId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string TaskDescLocId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string UnlockRequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string UnlockRequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string UnlockRequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string UnlockRequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public EnergyModeEventSource() { }

	[CompilerGenerated]
	public override EnergyModeEventId get_ConfigKey() { }

	[CompilerGenerated]
	private string get_ContextCategory() { }

	[CompilerGenerated]
	private string get_ContextSubCategory() { }

	[CompilerGenerated]
	private string get_Description() { }

	[CompilerGenerated]
	private string get_DisplayName() { }

	[CompilerGenerated]
	private string get_EndPopupDescLocId() { }

	[CompilerGenerated]
	private EnergyModeEnableType get_EnergyModeEnableType() { }

	[CompilerGenerated]
	private List<MetaRef`1<EnergyModeInfo>> get_EnergyModes() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private EventGroupId get_GroupId() { }

	[CompilerGenerated]
	private string get_InfoPopupDescLocId() { }

	[CompilerGenerated]
	private bool get_IsEnabled() { }

	[CompilerGenerated]
	private bool get_IsTransient() { }

	[CompilerGenerated]
	private string get_NameLocId() { }

	[CompilerGenerated]
	private string get_PrefabsOverride() { }

	[CompilerGenerated]
	private int get_Priority() { }

	[CompilerGenerated]
	private MetaScheduleBase get_Schedule() { }

	[CompilerGenerated]
	private List<MetaRef`1<PlayerSegmentInfo>> get_Segments() { }

	[CompilerGenerated]
	private string get_StartPopupDescLocId() { }

	[CompilerGenerated]
	private string get_TaskDescLocId() { }

	[CompilerGenerated]
	private string get_UnlockRequirementAmount() { }

	[CompilerGenerated]
	private string get_UnlockRequirementAux0() { }

	[CompilerGenerated]
	private string get_UnlockRequirementId() { }

	[CompilerGenerated]
	private string get_UnlockRequirementType() { }

	[CompilerGenerated]
	public void set_ConfigKey(EnergyModeEventId value) { }

	[CompilerGenerated]
	private void set_ContextCategory(string value) { }

	[CompilerGenerated]
	private void set_ContextSubCategory(string value) { }

	[CompilerGenerated]
	private void set_Description(string value) { }

	[CompilerGenerated]
	private void set_DisplayName(string value) { }

	[CompilerGenerated]
	private void set_EndPopupDescLocId(string value) { }

	[CompilerGenerated]
	private void set_EnergyModeEnableType(EnergyModeEnableType value) { }

	[CompilerGenerated]
	private void set_EnergyModes(List<MetaRef`1<EnergyModeInfo>> value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_GroupId(EventGroupId value) { }

	[CompilerGenerated]
	private void set_InfoPopupDescLocId(string value) { }

	[CompilerGenerated]
	private void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	private void set_IsTransient(bool value) { }

	[CompilerGenerated]
	private void set_NameLocId(string value) { }

	[CompilerGenerated]
	private void set_PrefabsOverride(string value) { }

	[CompilerGenerated]
	private void set_Priority(int value) { }

	[CompilerGenerated]
	private void set_Schedule(MetaScheduleBase value) { }

	[CompilerGenerated]
	private void set_Segments(List<MetaRef`1<PlayerSegmentInfo>> value) { }

	[CompilerGenerated]
	private void set_StartPopupDescLocId(string value) { }

	[CompilerGenerated]
	private void set_TaskDescLocId(string value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementAmount(string value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementAux0(string value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementId(string value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementType(string value) { }

	public override EnergyModeEventInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

