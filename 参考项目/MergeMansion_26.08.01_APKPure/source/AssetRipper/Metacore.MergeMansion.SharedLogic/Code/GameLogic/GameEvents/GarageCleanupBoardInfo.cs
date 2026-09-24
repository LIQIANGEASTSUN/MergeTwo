using System.Collections.Generic;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class GarageCleanupBoardInfo
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public GarageCleanupBoardId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<GarageCleanupBoardRowId> Rows { get; set; }

		public GarageCleanupBoardInfo()
		{
		}

		public GarageCleanupBoardInfo(GarageCleanupBoardId boardId, List<GarageCleanupBoardRowId> rows)
		{
		}
	}
}
