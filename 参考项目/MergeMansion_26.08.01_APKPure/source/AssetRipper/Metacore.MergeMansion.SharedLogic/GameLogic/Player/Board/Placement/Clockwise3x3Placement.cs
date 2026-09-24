using System.Collections.Generic;
using Metaplay.Core.Model;

namespace GameLogic.Player.Board.Placement
{
	[MetaSerializableDerived(1)]
	public class Clockwise3x3Placement : IPlacement
	{
		public bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery)
		{
			return false;
		}

		public IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery)
		{
			return null;
		}
	}
}
