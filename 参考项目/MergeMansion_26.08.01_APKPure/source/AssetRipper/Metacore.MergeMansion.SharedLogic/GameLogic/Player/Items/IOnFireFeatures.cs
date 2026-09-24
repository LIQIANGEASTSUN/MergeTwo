using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using GameLogic.Random;

namespace GameLogic.Player.Items
{
	public interface IOnFireFeatures
	{
		bool SupportsOnFire { get; }

		IItemDefinition GetActivationItem(IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null);

		bool IsInInitialSequence(IPlayer generationContext, ProducerContext producerContext);

		IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, ProducerContext producerContext);

		int GetItemsPerActivation(IMergeItem mergeItem, IPlayer player);
	}
}
