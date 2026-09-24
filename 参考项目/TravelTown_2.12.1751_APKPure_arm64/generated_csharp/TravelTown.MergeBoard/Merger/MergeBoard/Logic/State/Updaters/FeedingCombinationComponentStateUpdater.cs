using Merger.MergeBoard.Components;
using Merger.MergeBoard.Logic.State.Updaters.Base;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoard.Logic.State.Updaters
{
	public class FeedingCombinationComponentStateUpdater : ComponentStateUpdaterBase<FeedingCombinationComponent, ItemPayloadBase>, IBoardItemComponentStateUpdater
	{
		public override void UpdateFromState(ref FeedingCombinationComponent component, ItemPayloadBase itemState)
		{
		}
	}
}
