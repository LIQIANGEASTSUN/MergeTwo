using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Util;

namespace MergeEngine.ECS.Components.Board
{
	public class BoardComponent : ComponentBase<BoardCapability>
	{
		public BoardItemPosition? DropItemGuess;

		public bool Initializing;

		[NonSerialized]
		public TwoDArray<PositionComponent> _boardArray;

		public Dictionary<BoardItemPosition, Dictionary<BoardItemPosition, int>> BoardDistanceLookup;

		public int Cols { get; }

		public int Rows { get; }

		public bool IsFull => false;

		public ReadOnlyCollection<BoardItemPosition> EmptyPositions => null;

		public BoardComponent(BoardCapability capability, Entity entity)
			: base((BoardCapability)default(_00210), (Entity)null)
		{
		}

		public PositionComponent GetItem(BoardItemPosition position)
		{
			return null;
		}

		public bool SetItem(BoardItemPosition position, PositionComponent item)
		{
			return false;
		}

		public List<BoardItemPosition> GetAdjacentPositions(BoardItemPosition position, bool includeDiagonal)
		{
			return null;
		}
	}
}
