using Merger.MergeBoard.Components;
using Merger.MergeBoard.Logic.State.Updaters.Base;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoard.Logic.State.Updaters
{
	public class DynamicItemConfigComponentStateUpdater : ComponentStateUpdaterBase<DynamicItemConfigComponent, ItemPayloadBase>, IBoardItemComponentStateUpdater
	{
		public override void UpdateFromState(ref DynamicItemConfigComponent component, ItemPayloadBase itemState)
		{
		}
	}
}
