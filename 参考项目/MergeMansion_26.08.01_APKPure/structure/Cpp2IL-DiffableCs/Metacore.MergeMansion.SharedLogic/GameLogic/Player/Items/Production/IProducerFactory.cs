namespace GameLogic.Player.Items.Production;

public interface IProducerFactory
{

	public IItemSpawner Create(RollHistoryType rollType, string producerType, int markerString, InitialSequenceType initialSequenceType, string initialSequence, IEnumerable<ValueTuple`2<Int32, Int32>> pairs) { }

	public IOrderSpawner CreateOrderProducer(RollHistoryType rollType, string producerType, int markerString, IEnumerable<ValueTuple`2<OrderRequirementsId, Int32>> pairs) { }

}

