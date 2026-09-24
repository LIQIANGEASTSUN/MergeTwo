namespace GameLogic.Player.Items;

public interface IOnFireFeatures
{

	public bool SupportsOnFire
	{
		 get { } //Length: 0
	}

	public bool get_SupportsOnFire() { }

	public IItemDefinition GetActivationItem(IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null) { }

	public IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, ProducerContext producerContext) { }

	public int GetItemsPerActivation(IMergeItem mergeItem, IPlayer player) { }

	public bool IsInInitialSequence(IPlayer generationContext, ProducerContext producerContext) { }

}

