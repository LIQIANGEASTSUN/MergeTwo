namespace GameLogic.Player.Items.Boosting;

public interface IBoostArea
{

	public List<Coordinate> GetAllBoostedCoordinates(Coordinate boosterCoordinate, Func<Coordinate, Boolean> validBoostTargetChecker) { }

}

