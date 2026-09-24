using System;
using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;

namespace Merger.MergeBoard.Models
{
	public class MergeBoardModel : IMergeBoardModel
	{
		[NonSerialized]
		public readonly EntitiesManager _entitiesManager;

		public EntitiesManager EntitiesManager => null;

		public IEntitiesHolder BoardState => null;

		public IEnumerable<Entity> Entities => null;

		public bool IsInitialized { get; set; }

		public long LastBoardTimeSyncTimestamp { get; set; }
	}
}
