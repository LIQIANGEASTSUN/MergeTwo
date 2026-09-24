using System;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using Merger.Game.Views.Popups.Data;

namespace Merger.Game.Signal
{
	public class VerifyBoardMergeSignal
	{
		public MergeCheckItemType MergeCheckType { get; }

		public PositionComponent FirstItem { get; }

		public PositionComponent SecondItem { get; }

		public IItem CheckInitiatingItem { get; }

		public IItem MergeItem { get; }

		public IItem ResultItem { get; }

		public Action<BoardItemPosition, BoardItemPosition> ConfirmMergeAction { get; }

		public Action DeclineMergeAction { get; }

		public VerifyBoardMergeSignal(MergeCheckItemType mergeCheckType, PositionComponent firstItem, PositionComponent secondItem, IItem checkInitiatingItem, IItem mergeItem, IItem resultItem, Action<BoardItemPosition, BoardItemPosition> confirmMergeAction, Action declineMergeAction = null)
		{
		}
	}
}
