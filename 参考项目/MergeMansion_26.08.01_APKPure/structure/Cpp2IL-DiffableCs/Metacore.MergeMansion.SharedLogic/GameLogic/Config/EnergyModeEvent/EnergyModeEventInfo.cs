namespace GameLogic.Config.EnergyModeEvent;

[MetaActivableConfigData("EnergyModeEvent", False, True)]
[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {4})]
[MetaSerializable]
public class EnergyModeEventInfo : IMetaActivableConfigData<EnergyModeEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<EnergyModeEventId>, IHasGameConfigKey<EnergyModeEventId>, IMetaActivableInfo<EnergyModeEventId>, IEventSharedInfo, IValidatable, IHasRequirement
{
	[CompilerGenerated]
	private EnergyModeEventId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private MetaActivableParams <ActivableParams>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private PlayerRequirement <UnlockRequirement>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <NameLocId>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private EventCategoryInfo <CategoryInfo>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private EnergyModeEnableType <EnergyModeEnableType>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<MetaRef`1<EnergyModeInfo>> <EnergyModeRefs>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private string <PrefabsOverride>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private EventGroupId <GroupId>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private string <StartPopupDescLocId>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private string <EndPopupDescLocId>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private string <TaskDescLocId>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private string <InfoPopupDescLocId>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x98

	public override EnergyModeEventId ActivableId
	{
		 get { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override MetaActivableParams ActivableParams
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private override EventCategoryInfo CategoryInfo
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 12
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override EnergyModeEventId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override string Description
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override string DisplayName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override string DisplayShortInfo
	{
		 get { } //Length: 8
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	public private string EndPopupDescLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private EnergyModeEnableType EnergyModeEnableType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public List<MetaRef`1<EnergyModeInfo>> EnergyModeRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
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

	private override PlayerRequirement GameLogic.Player.Requirements.IHasRequirement.Requirement
	{
		private get { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	private EventGroupId GroupId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override Option<EventGroupId> GroupIdOption
	{
		 get { } //Length: 92
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	public private string InfoPopupDescLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private string NameLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	private string PrefabsOverride
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	public private override int Priority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override string SharedEventId
	{
		 get { } //Length: 24
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	public private string StartPopupDescLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(16, MetaMemberFlags::None (0))]
	public private string TaskDescLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
	public private PlayerRequirement UnlockRequirement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public EnergyModeEventInfo(EnergyModeEventId configKey, string displayName, string description, MetaActivableParams activableParams, PlayerRequirement unlockRequirement, string nameLocId, EventCategoryInfo categoryInfo, EnergyModeEnableType energyModeEnableType, List<MetaRef`1<EnergyModeInfo>> energyModeRefs, string prefabsOverride, EventGroupId groupId, int priority, string startPopupDescLocId, string endPopupDescLocId, string taskDescLocId, string infoPopupDescLocId, int experimentPriority) { }

	public EnergyModeEventInfo() { }

	private static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams) { }

	private override PlayerRequirement GameLogic.Player.Requirements.IHasRequirement.get_Requirement() { }

	public override EnergyModeEventId get_ActivableId() { }

	[CompilerGenerated]
	public override MetaActivableParams get_ActivableParams() { }

	[CompilerGenerated]
	public override EventCategoryInfo get_CategoryInfo() { }

	[CompilerGenerated]
	public override EnergyModeEventId get_ConfigKey() { }

	[CompilerGenerated]
	public override string get_Description() { }

	[CompilerGenerated]
	public override string get_DisplayName() { }

	public override string get_DisplayShortInfo() { }

	[CompilerGenerated]
	public string get_EndPopupDescLocId() { }

	[CompilerGenerated]
	public EnergyModeEnableType get_EnergyModeEnableType() { }

	[CompilerGenerated]
	public List<MetaRef`1<EnergyModeInfo>> get_EnergyModeRefs() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private EventGroupId get_GroupId() { }

	public override Option<EventGroupId> get_GroupIdOption() { }

	[CompilerGenerated]
	public string get_InfoPopupDescLocId() { }

	[CompilerGenerated]
	public string get_NameLocId() { }

	[CompilerGenerated]
	private string get_PrefabsOverride() { }

	[CompilerGenerated]
	public override int get_Priority() { }

	public override string get_SharedEventId() { }

	[CompilerGenerated]
	public string get_StartPopupDescLocId() { }

	[CompilerGenerated]
	public string get_TaskDescLocId() { }

	[CompilerGenerated]
	public PlayerRequirement get_UnlockRequirement() { }

	public string GetEventPrefabsId() { }

	public EnergyModeInfo GetInitialEnergyMode() { }

	public bool IsEndingSoon(PlayerModel player) { }

	[CompilerGenerated]
	private void set_ActivableParams(MetaActivableParams value) { }

	[CompilerGenerated]
	private void set_CategoryInfo(EventCategoryInfo value) { }

	[CompilerGenerated]
	private void set_ConfigKey(EnergyModeEventId value) { }

	[CompilerGenerated]
	private void set_Description(string value) { }

	[CompilerGenerated]
	private void set_DisplayName(string value) { }

	[CompilerGenerated]
	private void set_EndPopupDescLocId(string value) { }

	[CompilerGenerated]
	private void set_EnergyModeEnableType(EnergyModeEnableType value) { }

	[CompilerGenerated]
	public void set_EnergyModeRefs(List<MetaRef`1<EnergyModeInfo>> value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_GroupId(EventGroupId value) { }

	[CompilerGenerated]
	private void set_InfoPopupDescLocId(string value) { }

	[CompilerGenerated]
	private void set_NameLocId(string value) { }

	[CompilerGenerated]
	private void set_PrefabsOverride(string value) { }

	[CompilerGenerated]
	private void set_Priority(int value) { }

	[CompilerGenerated]
	private void set_StartPopupDescLocId(string value) { }

	[CompilerGenerated]
	private void set_TaskDescLocId(string value) { }

	[CompilerGenerated]
	private void set_UnlockRequirement(PlayerRequirement value) { }

	public bool SupportsEnergyMode(PlayerModeId modeId) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

