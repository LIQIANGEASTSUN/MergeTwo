namespace GameLogic.Player.Board
{
	public interface IBoardQuery
	{
		(int width, int height) BoardDimensions { get; }

		bool IsValid(Coordinate coordinate);

		bool IsEmpty(Coordinate coordinate);
	}
}
