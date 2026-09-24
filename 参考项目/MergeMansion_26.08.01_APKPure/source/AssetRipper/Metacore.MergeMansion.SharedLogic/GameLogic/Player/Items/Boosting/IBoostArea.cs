using System;
using System.Collections.Generic;
using GameLogic.Player.Board;

namespace GameLogic.Player.Items.Boosting
{
	public interface IBoostArea
	{
		List<Coordinate> GetAllBoostedCoordinates(Coordinate boosterCoordinate, Func<Coordinate, bool> validBoostTargetChecker);
	}
}
