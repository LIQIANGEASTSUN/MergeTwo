using System.Collections.Generic;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Order;

namespace GameLogic.Player.Items.Production
{
	public class ProducerFactory : IProducerFactory
	{
		public IDictionary<string, IList<int>> ItemSequences { get; }

		public ProducerFactory(IDictionary<string, IList<int>> itemSequences)
		{
		}

		public IItemSpawner Create(RollHistoryType rollType, string producerType, int markerString, InitialSequenceType initialSequenceType, string initialSequence, IEnumerable<(int, int)> pairs)
		{
			return null;
		}

		public IItemSpawner Create(RollHistoryType rollType, string producerType, int markerString, IEnumerable<(int, int)> pairs)
		{
			return null;
		}

		public IOrderSpawner CreateOrderProducer(RollHistoryType rollType, string producerType, int markerString, IEnumerable<(OrderRequirementsId, int)> pairs)
		{
			return null;
		}

		public static void ValidatePairsNotEmpty<T>(string producerType, IEnumerable<(T, int)> pairs)
		{
		}

		public static void ValidatePairsEmpty<T>(string producerType, IEnumerable<(T, int)> pairs)
		{
		}
	}
}
