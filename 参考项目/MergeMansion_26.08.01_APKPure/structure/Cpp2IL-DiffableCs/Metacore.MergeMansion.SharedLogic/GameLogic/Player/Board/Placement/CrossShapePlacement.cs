namespace GameLogic.Player.Board.Placement;

[MetaSerializableDerived(5)]
public class CrossShapePlacement : IPlacement
{

	public CrossShapePlacement() { }

	public override bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

	public override IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

}

