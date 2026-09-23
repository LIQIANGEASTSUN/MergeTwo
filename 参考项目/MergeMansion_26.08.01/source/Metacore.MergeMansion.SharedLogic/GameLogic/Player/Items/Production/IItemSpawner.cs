using System.Collections.Generic;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Production
{
	public interface IItemSpawner : IItemProducer
	{
		int SpawnQuantity { get; }

		F64 TimeSkipPriceGems(IGenerationContext context);

		IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption);
	}
}
