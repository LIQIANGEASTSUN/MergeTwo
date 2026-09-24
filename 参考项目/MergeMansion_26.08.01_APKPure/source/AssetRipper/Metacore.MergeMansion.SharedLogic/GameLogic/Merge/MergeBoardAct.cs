using GameLogic.Config.Types;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Metaplay.Core;

namespace GameLogic.Merge
{
	public readonly struct MergeBoardAct
	{
		public enum ItemActSource
		{
			Unknown = 0,
			FromPocket = 1,
			FromMerge = 2,
			FromSpawner = 3,
			FromChest = 4,
			FromDecay = 5,
			FromInventory = 6,
			FromBubblePurchase = 7,
			FromTimePassage = 8
		}

		public readonly BoardStepResult BoardStepResult;

		public readonly Coordinate FromCoordinate;

		public readonly Coordinate ToCoordinate;

		public readonly IItemDefinition Item;

		public readonly MetacoreTime Timestamp;

		public readonly ItemActSource ActSource;

		public readonly IMergeItem ResultItem;

		public readonly IMergeItem SourceItem;

		public readonly IItemDefinition ItemToPocket;

		public readonly object AnalyticsData;

		public MergeBoardAct(Coordinate coordinate)
		{
			BoardStepResult = default(BoardStepResult);
			FromCoordinate = default(Coordinate);
			ToCoordinate = default(Coordinate);
			Item = null;
			Timestamp = default(MetacoreTime);
			ActSource = default(ItemActSource);
			ResultItem = null;
			SourceItem = null;
			ItemToPocket = null;
			AnalyticsData = null;
		}

		public MergeBoardAct(BoardStepResult result, Coordinate from, Coordinate to, MetacoreTime timestamp, MergeItem resultItem = null, ItemActSource itemActSource = ItemActSource.Unknown)
		{
			BoardStepResult = default(BoardStepResult);
			FromCoordinate = default(Coordinate);
			ToCoordinate = default(Coordinate);
			Item = null;
			Timestamp = default(MetacoreTime);
			ActSource = default(ItemActSource);
			ResultItem = null;
			SourceItem = null;
			ItemToPocket = null;
			AnalyticsData = null;
		}

		public MergeBoardAct(BoardStepResult result, Coordinate from, Coordinate to, MetacoreTime timestamp, IItemDefinition item = null, ItemActSource itemActSource = ItemActSource.Unknown, object analyticsData = null)
		{
			BoardStepResult = default(BoardStepResult);
			FromCoordinate = default(Coordinate);
			ToCoordinate = default(Coordinate);
			Item = null;
			Timestamp = default(MetacoreTime);
			ActSource = default(ItemActSource);
			ResultItem = null;
			SourceItem = null;
			ItemToPocket = null;
			AnalyticsData = null;
		}

		public MergeBoardAct(BoardStepResult result, Coordinate from, Coordinate to, MetacoreTime timestamp, MergeItem resultItem = null, MergeItem sourceItem = null, ItemActSource itemActSource = ItemActSource.Unknown)
		{
			BoardStepResult = default(BoardStepResult);
			FromCoordinate = default(Coordinate);
			ToCoordinate = default(Coordinate);
			Item = null;
			Timestamp = default(MetacoreTime);
			ActSource = default(ItemActSource);
			ResultItem = null;
			SourceItem = null;
			ItemToPocket = null;
			AnalyticsData = null;
		}

		public MergeBoardAct(BoardStepResult result, Coordinate from, IItemDefinition itemToPocket, MetaTime timestamp, MergeItem resultItem = null, ItemActSource itemActSource = ItemActSource.Unknown)
		{
			BoardStepResult = default(BoardStepResult);
			FromCoordinate = default(Coordinate);
			ToCoordinate = default(Coordinate);
			Item = null;
			Timestamp = default(MetacoreTime);
			ActSource = default(ItemActSource);
			ResultItem = null;
			SourceItem = null;
			ItemToPocket = null;
			AnalyticsData = null;
		}

		public MergeBoardAct(BoardStepResult result, Coordinate coordinate, MetaTime timestamp, ItemActSource itemActSource)
		{
			BoardStepResult = default(BoardStepResult);
			FromCoordinate = default(Coordinate);
			ToCoordinate = default(Coordinate);
			Item = null;
			Timestamp = default(MetacoreTime);
			ActSource = default(ItemActSource);
			ResultItem = null;
			SourceItem = null;
			ItemToPocket = null;
			AnalyticsData = null;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
