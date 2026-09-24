namespace GameLogic.Player.Board.Placement;

[MetaSerializableDerived(2)]
public class ClockwiseLarger3x3Placement : IPlacement
{

	public ClockwiseLarger3x3Placement() { }

	public override bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

	public override IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

}

