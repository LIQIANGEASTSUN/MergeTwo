using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using GameLogic.Random;

namespace GameLogic.Player.Items.Activation
{
	public static class ActivationFeaturesExtensions
	{
		public static IItemDefinition GetActivationItem(this IActivationFeatures activationFeatures, IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}
	}
}
