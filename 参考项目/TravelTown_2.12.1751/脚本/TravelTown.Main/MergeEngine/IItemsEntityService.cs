using MergeEngine.ECS;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace MergeEngine
{
	public interface IItemsEntityService
	{
		void TryLoadSharedItemComponents(Entity entity, ItemPayloadBase item);
	}
}
