using System;
using MergeEngine.Configuration;
using MergeEngine.Data;

namespace Merger.Game.Views.Popups.Data
{
	public sealed class MergeCheckPopupPayload
	{
		public MergeCheckItemType MergeCheckType { get; }

		public BoardItemPosition FirstItem { get; }

		public BoardItemPosition SecondItem { get; }

		public IItem CheckInitiatingItem { get; }

		public IItem MergeItem { get; }

		public IItem FirstResultItem { get; }

		public IItem SecondResultItem { get; }

		public Action<BoardItemPosition, BoardItemPosition> YesAction { get; }

		public Action NoAction { get; }

		public MergeCheckPopupPayload(MergeCheckItemType mergeCheckType, BoardItemPosition firstItem, BoardItemPosition secondItem, Action<BoardItemPosition, BoardItemPosition> successAction, IItem checkInitiatingItem, IItem mergeItem, IItem firstResultItem, IItem secondResultItem = null, Action failAction = null)
		{
		}
	}
}
