namespace GameLogic.Player.Board
{
	public interface IFreeSpaceChecker
	{
		bool HasFreeSpace(Coordinate coordinate, SpawnStyle spawnStyle);
	}
}
