using System.Collections.Generic;
using System.Diagnostics;
using GameLogic.Config;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializableDerived(2)]
	public class RandomProducer : IItemSpawner, IItemProducer
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public List<ItemOdds> OddsList { get; set; }

		public int SpawnQuantity => 0;

		public RandomProducer()
		{
		}

		public RandomProducer(List<(int, int)> oddsList)
		{
		}

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

		[Conditional("UNITY_EDITOR")]
		[Conditional("DO_EXTRA_CHECKS")]
		public static void ValidateOdds(List<(int, int)> oddsList)
		{
		}
	}
}
