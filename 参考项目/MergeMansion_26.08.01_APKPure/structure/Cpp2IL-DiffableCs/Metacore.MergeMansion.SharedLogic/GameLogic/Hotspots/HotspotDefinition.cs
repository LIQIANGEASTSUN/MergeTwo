namespace GameLogic.Hotspots;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {12, 25, 30, 37})]
[MetaSerializable]
public class HotspotDefinition : IGameConfigData<HotspotId>, IGameConfigData, IHasGameConfigKey<HotspotId>, IValidatable, IHotspotDefinition, IHasRequirements
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<MetaRef`1<LocationTravelInfo>, LocationTravelInfo> <>9__186_0; //Field offset: 0x8
		public static Func<HotspotId, HotspotDef> <>9__206_0; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal HotspotDef <.ctor>b__206_0(HotspotId parent) { }

		internal LocationTravelInfo <get_FirstLocationTravelInfo>b__186_0(MetaRef<LocationTravelInfo> o) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass146_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass146_0() { }

		internal IHotspotDefinition <UnlockingParents>b__0(HotspotDef o) { }

	}

	[CompilerGenerated]
	private HotspotId <Id>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private HotspotType <Type>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private MetaRef<AreaInfo> <AreaRef>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<PlayerRequirement> <RequirementsList>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<HotspotDef> <UnlockingParentRefs>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<PlayerReward> <Rewards>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<IDirectorAction> <CompletionActions>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<IDirectorAction> <FinalizationActions>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<IDirectorAction> <AppearActions>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private MetaRef<MapSpotInfo> <MapSpotRef>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<PlayerRequirement> <UnlockRequirementsList>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private bool <IsIndependentTask>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private int <AppearActionMax>k__BackingField; //Field offset: 0x6C
	[CompilerGenerated]
	private int <CompleteActionMax>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private HotspotDef <CompleteFocusHotspotRef>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private List<MetaRef`1<MapCharacterEventDefinition>> <AppearMapCharactersEventsRefs>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private List<MetaRef`1<MapCharacterEventDefinition>> <CompleteMapCharactersEventsRefs>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private MetaDuration <BonusTimerDuration>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private List<PlayerReward> <BonusRewards>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private string <CompleteVFXId>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private MetaRef<CardStackInfo> <CardStackRef>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private string <DescriptionLocalizationId>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private MetaRef<AreaInfo> <AreaInfoOverride>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private CustomHotspotTableId <CustomHotspotTableId>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private int <SoloMilestoneHotspotValue>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private MultistepGroupId <MultistepGroupId>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private int <BoultonLeaguePoints>k__BackingField; //Field offset: 0xD8
	[CompilerGenerated]
	private bool <DelayDebrisAnimation>k__BackingField; //Field offset: 0xDC
	[CompilerGenerated]
	private int <Difficulty>k__BackingField; //Field offset: 0xE0
	[CompilerGenerated]
	private List<PlayerReward> <DifficultyRewards>k__BackingField; //Field offset: 0xE8
	[CompilerGenerated]
	private MetaRef<CustomHotspotTablesInfo> <CustomHotspotTableInfoRef>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private int <Order>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private List<String> <Tags>k__BackingField; //Field offset: 0x100
	[CompilerGenerated]
	private List<MetaRef`1<LocationTravelInfo>> <LocationTravelInfosRefs>k__BackingField; //Field offset: 0x108
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x110

	[MetaMember(15, MetaMemberFlags::None (0))]
	public private override int AppearActionMax
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private override List<IDirectorAction> AppearActions
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override MapCharacterType AppearMapCharacter
	{
		 get { } //Length: 716
	}

	[IgnoreDataMember]
	public override IEnumerable<MapCharacterEventDefinition> AppearMapCharactersEvents
	{
		 get { } //Length: 72
	}

	[MetaMember(18, MetaMemberFlags::None (0))]
	public private override List<MetaRef`1<MapCharacterEventDefinition>> AppearMapCharactersEventsRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(26, MetaMemberFlags::None (0))]
	private MetaRef<AreaInfo> AreaInfoOverride
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private MetaRef<AreaInfo> AreaRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override bool BelongsToMultistepGroup
	{
		 get { } //Length: 164
	}

	[MetaMember(21, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
	public private override List<PlayerReward> BonusRewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(20, MetaMemberFlags::None (0))]
	public private override MetaDuration BonusTimerDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(31, MetaMemberFlags::None (0))]
	public override int BoultonLeaguePoints
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override CardStackInfo CardStackInfo
	{
		 get { } //Length: 88
	}

	[MetaMember(23, MetaMemberFlags::None (0))]
	private MetaRef<CardStackInfo> CardStackRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(16, MetaMemberFlags::None (0))]
	public private override int CompleteActionMax
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	public private override HotspotDef CompleteFocusHotspotRef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override MapCharacterType CompleteMapCharacter
	{
		 get { } //Length: 720
	}

	[IgnoreDataMember]
	public override IEnumerable<MapCharacterEventDefinition> CompleteMapCharactersEvents
	{
		 get { } //Length: 72
	}

	[MetaMember(19, MetaMemberFlags::None (0))]
	public private override List<MetaRef`1<MapCharacterEventDefinition>> CompleteMapCharactersEventsRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(22, MetaMemberFlags::None (0))]
	public private override string CompleteVFXId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private override List<IDirectorAction> CompletionActions
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override HotspotId ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(27, MetaMemberFlags::None (0))]
	private CustomHotspotTableId CustomHotspotTableId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(35, MetaMemberFlags::None (0))]
	private MetaRef<CustomHotspotTablesInfo> CustomHotspotTableInfoRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(32, MetaMemberFlags::None (0))]
	public override bool DelayDebrisAnimation
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(24, MetaMemberFlags::None (0))]
	public private override string DescriptionLocalizationId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override string DescriptionLocId
	{
		 get { } //Length: 172
	}

	[MetaMember(33, MetaMemberFlags::None (0))]
	public private override int Difficulty
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(34, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
	public private override List<PlayerReward> DifficultyRewards
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

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private override List<IDirectorAction> FinalizationActions
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override LocationTravelInfo FirstLocationTravelInfo
	{
		 get { } //Length: 312
	}

	[IgnoreDataMember]
	public override bool HasVisualCompleteActions
	{
		 get { } //Length: 592
	}

	[IgnoreDataMember]
	public override CustomHotspotTableId HotspotTableId
	{
		 get { } //Length: 8
	}

	[IgnoreDataMember]
	public override CustomHotspotTablesInfo HotspotTableInfo
	{
		 get { } //Length: 88
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override HotspotId Id
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override bool IsAreaUnlockHotspot
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public override bool IsCardStackTask
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public override bool IsCharacterTask
	{
		 get { } //Length: 24
	}

	[IgnoreDataMember]
	public override bool IsDifficultTask
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public override bool IsEventHotspot
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public override bool IsIllustrationChildTask
	{
		 get { } //Length: 164
	}

	[IgnoreDataMember]
	public override bool IsIllustrationParentTask
	{
		 get { } //Length: 16
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	public private override bool IsIndependentTask
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override bool IsLocationTravelHotspot
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public override bool IsMergeGoalHotspot
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public override bool IsOpenUIHotspot
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public override bool IsRepeatableTask
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public override bool IsValidInAreaCompletion
	{
		 get { } //Length: 156
	}

	[IgnoreDataMember]
	public override IEnumerable<LocationTravelInfo> LocationTravelInfos
	{
		 get { } //Length: 72
	}

	[MetaMember(39, MetaMemberFlags::None (0))]
	private List<MetaRef`1<LocationTravelInfo>> LocationTravelInfosRefs
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override MapSpotInfo MapSpot
	{
		 get { } //Length: 88
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	private MetaRef<MapSpotInfo> MapSpotRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(29, MetaMemberFlags::None (0))]
	public private override MultistepGroupId MultistepGroupId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(36, MetaMemberFlags::None (0))]
	public private override int Order
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IEnumerable<PlayerRequirement> Requirements
	{
		 get { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	public private override List<PlayerRequirement> RequirementsList
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
	public private override List<PlayerReward> Rewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(28, MetaMemberFlags::None (0))]
	public override int SoloMilestoneHotspotValue
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(38, MetaMemberFlags::None (0))]
	public override List<String> Tags
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override HotspotType Type
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override List<HotspotDef> UnlockingParentRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override List<PlayerRequirement> UnlockRequirements
	{
		 get { } //Length: 8
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	public private override List<PlayerRequirement> UnlockRequirementsList
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public HotspotDefinition(HotspotId id, HotspotType type, MergeBoardId mergeBoardId, List<PlayerRequirement> requirements, IEnumerable<HotspotId> unlockingParents, List<PlayerReward> rewards, List<IDirectorAction> completionActions, List<IDirectorAction> finalizationActions, List<IDirectorAction> appearActions, MapSpotId mapSpot, List<PlayerRequirement> unlockRequirements, bool isIndependentTask, int appearActionMax, List<MetaRef`1<MapCharacterEventDefinition>> appearMapCharactersEvents, int completeActionMax, HotspotId completeFocusHotspotId, List<MetaRef`1<MapCharacterEventDefinition>> completeMapCharactersEvents, List<PlayerReward> bonusRewards, MetaDuration bonusTimerDuration, string completeVFXId, string descriptionLocalizationId, Option<List`1<LocationTravelId>> locationTravelIds, AreaId areaInfoOverride, int soloMilestoneHotspotValue, CustomHotspotTableId customHotspotTableId, MultistepGroupId multistepGroupId, int boultonLeaguePoints, bool delayDebrisAnimation, int difficulty, List<PlayerReward> difficultyRewards, int order, List<String> tags, int experimentPriority) { }

	public HotspotDefinition() { }

	public override IAreaInfo Area(IMergeMansionGameConfig config) { }

	public override IAreaInfo Area(IPlayer player) { }

	public override IHotspotDefinition CompleteFocusHotspot(IPlayer player) { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

	private static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override int get_AppearActionMax() { }

	[CompilerGenerated]
	public override List<IDirectorAction> get_AppearActions() { }

	public override MapCharacterType get_AppearMapCharacter() { }

	public override IEnumerable<MapCharacterEventDefinition> get_AppearMapCharactersEvents() { }

	[CompilerGenerated]
	public override List<MetaRef`1<MapCharacterEventDefinition>> get_AppearMapCharactersEventsRefs() { }

	[CompilerGenerated]
	private MetaRef<AreaInfo> get_AreaInfoOverride() { }

	[CompilerGenerated]
	private MetaRef<AreaInfo> get_AreaRef() { }

	public override bool get_BelongsToMultistepGroup() { }

	[CompilerGenerated]
	public override List<PlayerReward> get_BonusRewards() { }

	[CompilerGenerated]
	public override MetaDuration get_BonusTimerDuration() { }

	[CompilerGenerated]
	public override int get_BoultonLeaguePoints() { }

	public override CardStackInfo get_CardStackInfo() { }

	[CompilerGenerated]
	private MetaRef<CardStackInfo> get_CardStackRef() { }

	[CompilerGenerated]
	public override int get_CompleteActionMax() { }

	[CompilerGenerated]
	public override HotspotDef get_CompleteFocusHotspotRef() { }

	public override MapCharacterType get_CompleteMapCharacter() { }

	public override IEnumerable<MapCharacterEventDefinition> get_CompleteMapCharactersEvents() { }

	[CompilerGenerated]
	public override List<MetaRef`1<MapCharacterEventDefinition>> get_CompleteMapCharactersEventsRefs() { }

	[CompilerGenerated]
	public override string get_CompleteVFXId() { }

	[CompilerGenerated]
	public override List<IDirectorAction> get_CompletionActions() { }

	public override HotspotId get_ConfigKey() { }

	[CompilerGenerated]
	private CustomHotspotTableId get_CustomHotspotTableId() { }

	[CompilerGenerated]
	private MetaRef<CustomHotspotTablesInfo> get_CustomHotspotTableInfoRef() { }

	[CompilerGenerated]
	public override bool get_DelayDebrisAnimation() { }

	[CompilerGenerated]
	public override string get_DescriptionLocalizationId() { }

	public override string get_DescriptionLocId() { }

	[CompilerGenerated]
	public override int get_Difficulty() { }

	[CompilerGenerated]
	public override List<PlayerReward> get_DifficultyRewards() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public override List<IDirectorAction> get_FinalizationActions() { }

	public override LocationTravelInfo get_FirstLocationTravelInfo() { }

	public override bool get_HasVisualCompleteActions() { }

	public override CustomHotspotTableId get_HotspotTableId() { }

	public override CustomHotspotTablesInfo get_HotspotTableInfo() { }

	[CompilerGenerated]
	public override HotspotId get_Id() { }

	public override bool get_IsAreaUnlockHotspot() { }

	public override bool get_IsCardStackTask() { }

	public override bool get_IsCharacterTask() { }

	public override bool get_IsDifficultTask() { }

	public override bool get_IsEventHotspot() { }

	public override bool get_IsIllustrationChildTask() { }

	public override bool get_IsIllustrationParentTask() { }

	[CompilerGenerated]
	public override bool get_IsIndependentTask() { }

	public override bool get_IsLocationTravelHotspot() { }

	public override bool get_IsMergeGoalHotspot() { }

	public override bool get_IsOpenUIHotspot() { }

	public override bool get_IsRepeatableTask() { }

	public override bool get_IsValidInAreaCompletion() { }

	public override IEnumerable<LocationTravelInfo> get_LocationTravelInfos() { }

	[CompilerGenerated]
	private List<MetaRef`1<LocationTravelInfo>> get_LocationTravelInfosRefs() { }

	public override MapSpotInfo get_MapSpot() { }

	[CompilerGenerated]
	private MetaRef<MapSpotInfo> get_MapSpotRef() { }

	[CompilerGenerated]
	public override MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	public override MultistepGroupId get_MultistepGroupId() { }

	[CompilerGenerated]
	public override int get_Order() { }

	public override IEnumerable<PlayerRequirement> get_Requirements() { }

	[CompilerGenerated]
	public override List<PlayerRequirement> get_RequirementsList() { }

	[CompilerGenerated]
	public override List<PlayerReward> get_Rewards() { }

	[CompilerGenerated]
	public override int get_SoloMilestoneHotspotValue() { }

	[CompilerGenerated]
	public override List<String> get_Tags() { }

	[CompilerGenerated]
	public override HotspotType get_Type() { }

	[CompilerGenerated]
	public override List<HotspotDef> get_UnlockingParentRefs() { }

	public override List<PlayerRequirement> get_UnlockRequirements() { }

	[CompilerGenerated]
	public override List<PlayerRequirement> get_UnlockRequirementsList() { }

	public override IEnumerable<HotspotDefinition> GetOpensAfterCompletion(IMergeMansionGameConfig config) { }

	public override bool HasTag(string tag) { }

	public override bool HasUnlockingParent(HotspotId parentId) { }

	public override IAreaInfo MapSpotArea(IMergeMansionGameConfig config) { }

	public override IAreaInfo MapSpotArea(IPlayer player) { }

	[CompilerGenerated]
	private void set_AppearActionMax(int value) { }

	[CompilerGenerated]
	private void set_AppearActions(List<IDirectorAction> value) { }

	[CompilerGenerated]
	private void set_AppearMapCharactersEventsRefs(List<MetaRef`1<MapCharacterEventDefinition>> value) { }

	[CompilerGenerated]
	private void set_AreaInfoOverride(MetaRef<AreaInfo> value) { }

	[CompilerGenerated]
	private void set_AreaRef(MetaRef<AreaInfo> value) { }

	[CompilerGenerated]
	private void set_BonusRewards(List<PlayerReward> value) { }

	[CompilerGenerated]
	private void set_BonusTimerDuration(MetaDuration value) { }

	[CompilerGenerated]
	public void set_BoultonLeaguePoints(int value) { }

	[CompilerGenerated]
	private void set_CardStackRef(MetaRef<CardStackInfo> value) { }

	[CompilerGenerated]
	private void set_CompleteActionMax(int value) { }

	[CompilerGenerated]
	private void set_CompleteFocusHotspotRef(HotspotDef value) { }

	[CompilerGenerated]
	private void set_CompleteMapCharactersEventsRefs(List<MetaRef`1<MapCharacterEventDefinition>> value) { }

	[CompilerGenerated]
	private void set_CompleteVFXId(string value) { }

	[CompilerGenerated]
	private void set_CompletionActions(List<IDirectorAction> value) { }

	[CompilerGenerated]
	private void set_CustomHotspotTableId(CustomHotspotTableId value) { }

	[CompilerGenerated]
	private void set_CustomHotspotTableInfoRef(MetaRef<CustomHotspotTablesInfo> value) { }

	[CompilerGenerated]
	public void set_DelayDebrisAnimation(bool value) { }

	[CompilerGenerated]
	private void set_DescriptionLocalizationId(string value) { }

	[CompilerGenerated]
	private void set_Difficulty(int value) { }

	[CompilerGenerated]
	private void set_DifficultyRewards(List<PlayerReward> value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_FinalizationActions(List<IDirectorAction> value) { }

	[CompilerGenerated]
	private void set_Id(HotspotId value) { }

	[CompilerGenerated]
	private void set_IsIndependentTask(bool value) { }

	[CompilerGenerated]
	private void set_LocationTravelInfosRefs(List<MetaRef`1<LocationTravelInfo>> value) { }

	[CompilerGenerated]
	private void set_MapSpotRef(MetaRef<MapSpotInfo> value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_MultistepGroupId(MultistepGroupId value) { }

	[CompilerGenerated]
	private void set_Order(int value) { }

	[CompilerGenerated]
	private void set_RequirementsList(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_Rewards(List<PlayerReward> value) { }

	[CompilerGenerated]
	public void set_SoloMilestoneHotspotValue(int value) { }

	[CompilerGenerated]
	public void set_Tags(List<String> value) { }

	[CompilerGenerated]
	private void set_Type(HotspotType value) { }

	[CompilerGenerated]
	private void set_UnlockingParentRefs(List<HotspotDef> value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementsList(List<PlayerRequirement> value) { }

	public override bool TryGetAppearMapCharacterEvent(out MapCharacterEventDefinition mapCharacterEventDefinition) { }

	public override IEnumerable<IHotspotDefinition> UnlockingParents(IMergeMansionGameConfig config) { }

	public override IEnumerable<IHotspotDefinition> UnlockingParents(IPlayer player) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

