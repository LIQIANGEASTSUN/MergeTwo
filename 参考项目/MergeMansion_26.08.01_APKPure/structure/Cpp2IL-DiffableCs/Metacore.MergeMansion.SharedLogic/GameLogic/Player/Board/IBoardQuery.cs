namespace GameLogic.Player.Board;

public interface IBoardQuery
{

	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"width", "height"})]
	public ValueTuple<Int32, Int32> BoardDimensions
	{
		 get { } //Length: 0
	}

	public ValueTuple<Int32, Int32> get_BoardDimensions() { }

	public bool IsEmpty(Coordinate coordinate) { }

	public bool IsValid(Coordinate coordinate) { }

}

