namespace Code.GameLogic.GameEvents;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {12, 16})]
[MetaSerializable]
public class BoardInfo : IGameConfigData<MergeBoardId>, IGameConfigData, IHasGameConfigKey<MergeBoardId>
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<ValueTuple`2<Int32, ItemVisibility>> <>9__86_0; //Field offset: 0x8
		public static Func<ValueTuple`2<Int32, ItemVisibility>, Boolean> <>9__86_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal bool <.ctor>b__86_0(ValueTuple<Int32, ItemVisibility> tuple) { }

		internal bool <.ctor>b__86_1(ValueTuple<Int32, ItemVisibility> tuple) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass84_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass84_0() { }

		internal ValueTuple<ItemDefinition, ItemVisibility> <BoardTuples>b__0(BoardCell cell) { }

	}

	[CompilerGenerated]
	private MergeBoardId <BoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<BoardCell> <BoardLayout>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <Width>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <Height>k__BackingField; //Field offset: 0x34
	[CompilerGenerated]
	private ICost <ItemSellCost>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private ConfigPrefabId <BoardPrefabId>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private MetaRef<BubblesSetup> <BubbleSetup>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private string <BoardToggleSfxOverride>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private string <BoardMusicOverride>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private EnergyType <EnergyType>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private int <CobwebClearPoints>k__BackingField; //Field offset: 0x64
	[CompilerGenerated]
	private BoardActionRequirements <ActionRequirements>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private int <MaxEnergyConsumptionMultiplier>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private MergeBoardDisplay <Display>k__BackingField; //Field offset: 0x74
	[CompilerGenerated]
	private MergeBoardUIStyle <UIStyle>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private F32 <Scale>k__BackingField; //Field offset: 0x7C
	[CompilerGenerated]
	private int <Offset>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x84

	[MetaMember(15, MetaMemberFlags::None (0))]
	public BoardActionRequirements ActionRequirements
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MergeBoardId BoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private List<BoardCell> BoardLayout
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public string BoardMusicOverride
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private ConfigPrefabId BoardPrefabId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public string BoardToggleSfxOverride
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public IBubbleLogic BubbleLogic
	{
		 get { } //Length: 92
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	private MetaRef<BubblesSetup> BubbleSetup
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	public int CobwebClearPoints
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override MergeBoardId ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private string Description
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(18, MetaMemberFlags::None (0))]
	public MergeBoardDisplay Display
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private string DisplayName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	public EnergyType EnergyType
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

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private int Height
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private ICost ItemSellCost
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	public int MaxEnergyConsumptionMultiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(21, MetaMemberFlags::None (0))]
	public int Offset
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(20, MetaMemberFlags::None (0))]
	public F32 Scale
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(19, MetaMemberFlags::None (0))]
	public MergeBoardUIStyle UIStyle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private int Width
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BoardInfo(MergeBoardId boardId, string displayName, string description, List<ValueTuple`2<Int32, ItemVisibility>> boardLayout, ICost itemSellCost, ConfigPrefabId boardPrefabId, MetaRef<BubblesSetup> bubblesSetup, string boardToggleSfxOverride, string boardMusicOverride, string disableAutospawns, string disableSelling, string energyType, string cobwebClearPoints, int width, int height, int maxEnergyConsumptionMultiplier, string display, string uiStyle, string scale, string offset, int experimentPriority) { }

	public BoardInfo() { }

	public IEnumerable<ValueTuple`2<ItemDefinition, ItemVisibility>> BoardTuples(IMergeMansionGameConfig config) { }

	private BoardActionRequirements ConstructActionRequirements(string disableAutospawns, string disableSelling) { }

	[CompilerGenerated]
	public BoardActionRequirements get_ActionRequirements() { }

	[CompilerGenerated]
	public MergeBoardId get_BoardId() { }

	[CompilerGenerated]
	public List<BoardCell> get_BoardLayout() { }

	[CompilerGenerated]
	public string get_BoardMusicOverride() { }

	[CompilerGenerated]
	public ConfigPrefabId get_BoardPrefabId() { }

	[CompilerGenerated]
	public string get_BoardToggleSfxOverride() { }

	public IBubbleLogic get_BubbleLogic() { }

	[CompilerGenerated]
	private MetaRef<BubblesSetup> get_BubbleSetup() { }

	[CompilerGenerated]
	public int get_CobwebClearPoints() { }

	public override MergeBoardId get_ConfigKey() { }

	[CompilerGenerated]
	public string get_Description() { }

	[CompilerGenerated]
	public MergeBoardDisplay get_Display() { }

	[CompilerGenerated]
	public string get_DisplayName() { }

	[CompilerGenerated]
	public EnergyType get_EnergyType() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public int get_Height() { }

	[CompilerGenerated]
	public ICost get_ItemSellCost() { }

	[CompilerGenerated]
	public int get_MaxEnergyConsumptionMultiplier() { }

	[CompilerGenerated]
	public int get_Offset() { }

	[CompilerGenerated]
	public F32 get_Scale() { }

	[CompilerGenerated]
	public MergeBoardUIStyle get_UIStyle() { }

	[CompilerGenerated]
	public int get_Width() { }

	private List<PlayerRequirement> ParseActionRequirements(string disable) { }

	private static TEnum ParseEnum(string valueStr) { }

	[CompilerGenerated]
	public void set_ActionRequirements(BoardActionRequirements value) { }

	[CompilerGenerated]
	private void set_BoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_BoardLayout(List<BoardCell> value) { }

	[CompilerGenerated]
	public void set_BoardMusicOverride(string value) { }

	[CompilerGenerated]
	private void set_BoardPrefabId(ConfigPrefabId value) { }

	[CompilerGenerated]
	public void set_BoardToggleSfxOverride(string value) { }

	[CompilerGenerated]
	private void set_BubbleSetup(MetaRef<BubblesSetup> value) { }

	[CompilerGenerated]
	public void set_CobwebClearPoints(int value) { }

	[CompilerGenerated]
	private void set_Description(string value) { }

	[CompilerGenerated]
	public void set_Display(MergeBoardDisplay value) { }

	[CompilerGenerated]
	private void set_DisplayName(string value) { }

	[CompilerGenerated]
	public void set_EnergyType(EnergyType value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Height(int value) { }

	[CompilerGenerated]
	private void set_ItemSellCost(ICost value) { }

	[CompilerGenerated]
	public void set_MaxEnergyConsumptionMultiplier(int value) { }

	[CompilerGenerated]
	public void set_Offset(int value) { }

	[CompilerGenerated]
	public void set_Scale(F32 value) { }

	[CompilerGenerated]
	public void set_UIStyle(MergeBoardUIStyle value) { }

	[CompilerGenerated]
	private void set_Width(int value) { }

}

