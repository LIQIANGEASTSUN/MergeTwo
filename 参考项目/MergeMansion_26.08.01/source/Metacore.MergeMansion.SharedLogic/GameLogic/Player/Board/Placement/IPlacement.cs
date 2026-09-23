using System.Collections.Generic;
using Metaplay.Core.Model;

namespace GameLogic.Player.Board.Placement
{
	[MetaSerializable]
	public interface IPlacement
	{
		IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery);

		bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery);
	}
}
