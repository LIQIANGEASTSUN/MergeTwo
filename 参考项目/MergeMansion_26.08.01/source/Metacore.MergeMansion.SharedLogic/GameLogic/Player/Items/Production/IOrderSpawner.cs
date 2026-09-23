using System.Collections.Generic;
using GameLogic.Player.Items.Order;

namespace GameLogic.Player.Items.Production
{
	public interface IOrderSpawner : IOrderProducer
	{
		IEnumerable<OrderRequirementsId> GetSpawnOrder();
	}
}
