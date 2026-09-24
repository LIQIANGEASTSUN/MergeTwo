namespace Code.GameLogic.GameEvents;

public class DigEventBoardsSource : IConfigItemSource<DigEventBoards, DigEventBoardId>, IGameConfigSourceItem<DigEventBoardId, DigEventBoards>, IHasGameConfigKey<DigEventBoardId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private DigEventBoardId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <BoardWidth>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <BoardHeight>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private int <CellSize>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<DigEventItemId> <BoardItems>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <RewardType>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private string <RewardId>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private string <RewardAux0>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private string <RewardAux1>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private int <RewardAmount>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private F32 <CompensationChance>k__BackingField; //Field offset: 0x5C

	private int BoardHeight
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<DigEventItemId> BoardItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int BoardWidth
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int CellSize
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private F32 CompensationChance
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override DigEventBoardId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private int RewardAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RewardAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RewardAux1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RewardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RewardType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public DigEventBoardsSource() { }

	private PlayerReward CreateReward(GameConfigBuildLog buildLog) { }

	[CompilerGenerated]
	private int get_BoardHeight() { }

	[CompilerGenerated]
	private List<DigEventItemId> get_BoardItems() { }

	[CompilerGenerated]
	private int get_BoardWidth() { }

	[CompilerGenerated]
	private int get_CellSize() { }

	[CompilerGenerated]
	private F32 get_CompensationChance() { }

	[CompilerGenerated]
	public override DigEventBoardId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private int get_RewardAmount() { }

	[CompilerGenerated]
	private string get_RewardAux0() { }

	[CompilerGenerated]
	private string get_RewardAux1() { }

	[CompilerGenerated]
	private string get_RewardId() { }

	[CompilerGenerated]
	private string get_RewardType() { }

	[CompilerGenerated]
	private void set_BoardHeight(int value) { }

	[CompilerGenerated]
	private void set_BoardItems(List<DigEventItemId> value) { }

	[CompilerGenerated]
	private void set_BoardWidth(int value) { }

	[CompilerGenerated]
	private void set_CellSize(int value) { }

	[CompilerGenerated]
	private void set_CompensationChance(F32 value) { }

	[CompilerGenerated]
	public void set_ConfigKey(DigEventBoardId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_RewardAmount(int value) { }

	[CompilerGenerated]
	private void set_RewardAux0(string value) { }

	[CompilerGenerated]
	private void set_RewardAux1(string value) { }

	[CompilerGenerated]
	private void set_RewardId(string value) { }

	[CompilerGenerated]
	private void set_RewardType(string value) { }

	public override DigEventBoards ToConfigData(GameConfigBuildLog buildLog) { }

}

