using Code.GameLogic.GameEvents;
using GameLogic.Player.Items;
using Merge;
using Metacore.MergeMansion.Common.Options;

namespace GameLogic.Player.Board
{
	public interface ISharedBoardController
	{
		MergeBoard CurrentBoard { get; }

		Option<BoardInfo> CurrentBoardInfoOption { get; }

		MergeItem SelectedItem { get; }

		bool BoardActive(MergeBoardId boardId);
	}
}
