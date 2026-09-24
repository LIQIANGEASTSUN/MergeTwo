using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using strange.extensions.promise.api;

namespace Merger.Game.Signal
{
	public class SkipBoardItemCooldownSignal
	{
		public IPromise SkipCooldownPromise;

		public SelectedBoardItem SelectedBoardItem { get; }

		public ResourceMultiple Price { get; }

		public SkipBoardItemCooldownSignal(SelectedBoardItem selectedBoardItem, ResourceMultiple price, IPromise skipCooldownPromise = null)
		{
		}
	}
}
