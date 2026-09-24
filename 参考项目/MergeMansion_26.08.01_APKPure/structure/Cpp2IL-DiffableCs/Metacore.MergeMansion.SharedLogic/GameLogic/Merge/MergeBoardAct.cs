namespace GameLogic.Merge;

[IsReadOnly]
public struct MergeBoardAct
{
	internal enum ItemActSource : int
	{
		Unknown = 0,
		FromPocket = 1,
		FromMerge = 2,
		FromSpawner = 3,
		FromChest = 4,
		FromDecay = 5,
		FromInventory = 6,
		FromBubblePurchase = 7,
		FromTimePassage = 8,
	}

	public readonly BoardStepResult BoardStepResult; //Field offset: 0x0
	public readonly Coordinate FromCoordinate; //Field offset: 0x4
	public readonly Coordinate ToCoordinate; //Field offset: 0xC
	public readonly IItemDefinition Item; //Field offset: 0x18
	public readonly MetacoreTime Timestamp; //Field offset: 0x20
	public readonly ItemActSource ActSource; //Field offset: 0x28
	public readonly IMergeItem ResultItem; //Field offset: 0x30
	public readonly IMergeItem SourceItem; //Field offset: 0x38
	public readonly IItemDefinition ItemToPocket; //Field offset: 0x40
	public readonly object AnalyticsData; //Field offset: 0x48

	public MergeBoardAct(Coordinate coordinate) { }

	public MergeBoardAct(BoardStepResult result, Coordinate from, Coordinate to, MetacoreTime timestamp, MergeItem resultItem = null, ItemActSource itemActSource = 0) { }

	public MergeBoardAct(BoardStepResult result, Coordinate from, Coordinate to, MetacoreTime timestamp, IItemDefinition item = null, ItemActSource itemActSource = 0, object analyticsData = null) { }

	public MergeBoardAct(BoardStepResult result, Coordinate from, Coordinate to, MetacoreTime timestamp, MergeItem resultItem = null, MergeItem sourceItem = null, ItemActSource itemActSource = 0) { }

	public MergeBoardAct(BoardStepResult result, Coordinate from, IItemDefinition itemToPocket, MetaTime timestamp, MergeItem resultItem = null, ItemActSource itemActSource = 0) { }

	public MergeBoardAct(BoardStepResult result, Coordinate coordinate, MetaTime timestamp, ItemActSource itemActSource) { }

	public virtual string ToString() { }

}

