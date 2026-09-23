using System.Collections.Generic;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Order;

namespace GameLogic.Player.Items.Production
{
	public interface IProducerFactory
	{
		IItemSpawner Create(RollHistoryType rollType, string producerType, int markerString, InitialSequenceType initialSequenceType, string initialSequence, IEnumerable<(int, int)> pairs);

		IOrderSpawner CreateOrderProducer(RollHistoryType rollType, string producerType, int markerString, IEnumerable<(OrderRequirementsId, int)> pairs);
	}
}
