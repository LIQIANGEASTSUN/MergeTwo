namespace GameLogic.Player.Board;

[DefaultMember("Item")]
public interface IBoard : IBoardQuery
{

	public MetacoreTime BoardCreationTime
	{
		 get { } //Length: 0
	}

	public MergeBoardId BoardIdentifier
	{
		 get { } //Length: 0
	}

	public BoardBubbleState BubbleState
	{
		 get { } //Length: 0
	}

	public IEnumerable<Coordinate> Coordinates
	{
		 get { } //Length: 0
	}

	public MergeItem Item
	{
		 get { } //Length: 0
	}

	public IEnumerable<MergeItem> MergeItems
	{
		 get { } //Length: 0
	}

	public List<MergeItem> MergeItemsNonAlloc
	{
		 get { } //Length: 0
	}

	public IEnumerable<MergeBoardAct> EnqueueAutoSellItemsFromBoard(MergeBoardId mergeBoardId, IPlayer player, Predicate<MergeItem> matcher, MetacoreTime sellTimestamp) { }

	public MetacoreTime get_BoardCreationTime() { }

	public MergeBoardId get_BoardIdentifier() { }

	public BoardBubbleState get_BubbleState() { }

	public IEnumerable<Coordinate> get_Coordinates() { }

	public MergeItem get_Item(Coordinate coord) { }

	public IEnumerable<MergeItem> get_MergeItems() { }

	public List<MergeItem> get_MergeItemsNonAlloc() { }

	public bool IsOnFireActive(IPlayer player, MetacoreTime timestamp) { }

	public bool MatchesActionRequirements(IPlayer player, BoardActionType actionType) { }

	public IEnumerable<MergeBoardAct> ReplaceItems(IPlayer player, MetacoreTime replacementTimestamp, Predicate<MergeItem> matcher, IGenerationContext generationContext, IItemDefinition replacementItem) { }

	public void UpdateListOfBoostedCoordinatesAndApplyBoosts(MetacoreTime timestamp, IPlayer player) { }

}

