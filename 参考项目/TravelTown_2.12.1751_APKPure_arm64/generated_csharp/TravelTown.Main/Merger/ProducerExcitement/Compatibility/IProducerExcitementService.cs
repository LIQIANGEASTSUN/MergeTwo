using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;

namespace Merger.ProducerExcitement.Compatibility
{
	public interface IProducerExcitementService
	{
		bool TryDropExcitementItem(PositionComponent producerPosition, out BoardItemPosition excitementPosition, out ProducerExcitementSpawnData spawnData);

		void ApplyVisuals(VisualComponent visualComponent, BoardItemPosition entityPosition);
	}
}
