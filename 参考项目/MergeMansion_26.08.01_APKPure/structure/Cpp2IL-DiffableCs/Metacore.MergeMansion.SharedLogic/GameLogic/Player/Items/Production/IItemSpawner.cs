namespace GameLogic.Player.Items.Production;

public interface IItemSpawner : IItemProducer
{

	public int SpawnQuantity
	{
		 get { } //Length: 0
	}

	public int get_SpawnQuantity() { }

	public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	public F64 TimeSkipPriceGems(IGenerationContext context) { }

}

