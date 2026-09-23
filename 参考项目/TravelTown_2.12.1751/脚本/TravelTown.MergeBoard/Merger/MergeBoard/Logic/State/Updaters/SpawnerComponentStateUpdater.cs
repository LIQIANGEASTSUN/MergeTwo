using Merger.MergeBoard.Components;
using Merger.MergeBoard.Logic.State.Updaters.Base;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoard.Logic.State.Updaters
{
	public class SpawnerComponentStateUpdater : ComponentStateUpdaterBase<SpawnerComponent, ItemPayloadBase>, IBoardItemComponentStateUpdater
	{
		public override void UpdateFromState(ref SpawnerComponent component, ItemPayloadBase itemState)
		{
		}
	}
}
