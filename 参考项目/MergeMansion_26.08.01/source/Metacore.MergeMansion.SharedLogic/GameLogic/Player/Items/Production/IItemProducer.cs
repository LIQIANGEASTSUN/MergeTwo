using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializable]
	public interface IItemProducer
	{
		IEnumerable<(IItemDefinition, int)> GetOdds(IMergeMansionGameConfig config);

		IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null);
	}
}
