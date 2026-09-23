using ContextualizedECS;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoard.Logic.State.Updaters
{
	public interface IBoardItemComponentStateUpdater
	{
		void UpdateComponent(Entity entity, ItemPayloadBase itemState);
	}
}
