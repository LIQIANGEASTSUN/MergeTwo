namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class DigEventBoards : IGameConfigData<DigEventBoardId>, IGameConfigData, IHasGameConfigKey<DigEventBoardId>, IValidatable
{
	[CompilerGenerated]
	private DigEventBoardId <BoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <BoardWidth>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <BoardHeight>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private int <CellSize>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<DigEventItemId> <Treasures>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private PlayerReward <BoardReward>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private F32 <CompensationChance>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x3C

	[MetaMember(3, MetaMemberFlags::None (0))]
	public int BoardHeight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public DigEventBoardId BoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerReward")]
	private PlayerReward BoardReward
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int BoardWidth
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public int CellSize
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private F32 CompensationChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override DigEventBoardId ConfigKey
	{
		 get { } //Length: 8
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

	[MetaMember(5, MetaMemberFlags::None (0))]
	public List<DigEventItemId> Treasures
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public DigEventBoards(DigEventBoardId configKey, int boardWidth, int boardHeight, int cellSize, List<DigEventItemId> boardItems, PlayerReward boardReward, F32 compensationChance, int experimentPriority) { }

	public DigEventBoards() { }

	private static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public int get_BoardHeight() { }

	[CompilerGenerated]
	public DigEventBoardId get_BoardId() { }

	[CompilerGenerated]
	private PlayerReward get_BoardReward() { }

	[CompilerGenerated]
	public int get_BoardWidth() { }

	[CompilerGenerated]
	public int get_CellSize() { }

	[CompilerGenerated]
	public F32 get_CompensationChance() { }

	public override DigEventBoardId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public List<DigEventItemId> get_Treasures() { }

	public IPlayerReward GetBoardReward(IPlayer player) { }

	[CompilerGenerated]
	public void set_BoardHeight(int value) { }

	[CompilerGenerated]
	public void set_BoardId(DigEventBoardId value) { }

	[CompilerGenerated]
	private void set_BoardReward(PlayerReward value) { }

	[CompilerGenerated]
	public void set_BoardWidth(int value) { }

	[CompilerGenerated]
	public void set_CellSize(int value) { }

	[CompilerGenerated]
	private void set_CompensationChance(F32 value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_Treasures(List<DigEventItemId> value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

