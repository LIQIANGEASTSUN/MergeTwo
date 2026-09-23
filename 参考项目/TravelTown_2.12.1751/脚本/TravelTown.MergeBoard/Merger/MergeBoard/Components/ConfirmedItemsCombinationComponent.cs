using ContextualizedECS;
using Merger.Game.Views.Popups.Data;

namespace Merger.MergeBoard.Components
{
	public struct ConfirmedItemsCombinationComponent : IComponent
	{
		public MergeCheckItemType MergeCheckItemType { get; set; }
	}
}
