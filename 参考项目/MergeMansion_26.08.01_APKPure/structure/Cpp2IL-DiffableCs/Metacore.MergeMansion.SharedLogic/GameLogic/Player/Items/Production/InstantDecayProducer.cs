namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(19)]
public class InstantDecayProducer : IItemSpawner, IItemProducer
{

	public override int SpawnQuantity
	{
		 get { } //Length: 8
	}

	public InstantDecayProducer() { }

	public override int get_SpawnQuantity() { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

