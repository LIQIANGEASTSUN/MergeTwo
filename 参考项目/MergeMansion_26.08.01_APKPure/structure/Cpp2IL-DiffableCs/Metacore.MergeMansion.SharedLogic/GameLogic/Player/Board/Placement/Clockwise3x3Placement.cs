namespace GameLogic.Player.Board.Placement;

[MetaSerializableDerived(1)]
public class Clockwise3x3Placement : IPlacement
{

	public Clockwise3x3Placement() { }

	public override bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

	public override IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

}

