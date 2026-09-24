using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializableDerived(10)]
	[MetaAllowNoSerializedMembers]
	public class EmptyProducer : IItemSpawner, IItemProducer
	{
		public int SpawnQuantity => 0;

		public IEnumerable<(IItemDefinition, int)> GetOdds(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public F64 TimeSkipPriceGems(IGenerationContext context)
		{
			return default(F64);
		}

		public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption)
		{
			return null;
		}
	}
}
