using System;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public struct GarageCleanupBoardRowId : IEquatable<GarageCleanupBoardRowId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public GarageCleanupBoardId BoardId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Row { get; set; }

		public GarageCleanupBoardRowId(GarageCleanupBoardId boardId, int row)
		{
			BoardId = null;
			Row = 0;
		}

		public bool Equals(GarageCleanupBoardRowId other)
		{
			return false;
		}

		public override string ToString()
		{
			return null;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
