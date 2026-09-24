using System;
using System.Collections.Generic;
using GameLogic.Player.Board;

namespace GameLogic.Player.Items.Boosting
{
	public class Clockwise3x3BoostArea : IBoostArea
	{
		public List<Coordinate> GetAllBoostedCoordinates(Coordinate boosterCoordinate, Func<Coordinate, bool> validBoostTargetChecker)
		{
			return null;
		}
	}
}
