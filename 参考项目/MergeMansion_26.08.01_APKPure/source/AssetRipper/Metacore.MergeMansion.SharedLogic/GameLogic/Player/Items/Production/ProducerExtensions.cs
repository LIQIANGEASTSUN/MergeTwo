using System;
using System.Collections.Generic;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Production
{
	public static class ProducerExtensions
	{
		public static IItemDefinition Produce(this IItemProducer producer, IGenerationContext context, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public static F64 Average(this ICollection<ItemOdds> itemOdds, Func<IItemOdds, F64> view)
		{
			return default(F64);
		}
	}
}
