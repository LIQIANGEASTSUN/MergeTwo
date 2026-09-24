using System.Collections.Generic;
using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace Code.GameLogic.Player.Board
{
	[MetaSerializable]
	public class CustomMergeBoardsState : ICustomMergeBoardsState, IWritableCustomMergeBoardsState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public SortedDictionary<MergeBoardId, MergeBoard> MergeBoards { get; set; }

		IReadOnlyDictionary<MergeBoardId, MergeBoard> ICustomMergeBoardsState.MergeBoards => null;
	}
}
