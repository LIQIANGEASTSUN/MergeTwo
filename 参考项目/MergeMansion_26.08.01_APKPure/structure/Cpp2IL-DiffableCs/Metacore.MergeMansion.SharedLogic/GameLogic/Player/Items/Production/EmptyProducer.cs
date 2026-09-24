namespace GameLogic.Player.Items.Production;

[MetaAllowNoSerializedMembers]
[MetaSerializableDerived(10)]
public class EmptyProducer : IItemSpawner, IItemProducer
{

	public override int SpawnQuantity
	{
		 get { } //Length: 8
	}

	public EmptyProducer() { }

	public override int get_SpawnQuantity() { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

