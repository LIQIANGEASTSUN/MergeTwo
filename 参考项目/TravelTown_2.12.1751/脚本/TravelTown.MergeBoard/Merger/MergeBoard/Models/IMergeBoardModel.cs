using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;

namespace Merger.MergeBoard.Models
{
	public interface IMergeBoardModel
	{
		IEntitiesHolder BoardState { get; }

		IEnumerable<Entity> Entities { get; }

		bool IsInitialized { get; set; }

		long LastBoardTimeSyncTimestamp { get; set; }
	}
}
