namespace GameLogic.Player.Items.Activation;

[Extension]
public static class ActivationFeaturesExtensions
{

	[Extension]
	public static IItemDefinition GetActivationItem(IActivationFeatures activationFeatures, IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null) { }

}

