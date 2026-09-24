namespace GameLogic.Player.Board.Placement;

[MetaSerializable]
public interface IPlacement
{

	public bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

	public IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

}

