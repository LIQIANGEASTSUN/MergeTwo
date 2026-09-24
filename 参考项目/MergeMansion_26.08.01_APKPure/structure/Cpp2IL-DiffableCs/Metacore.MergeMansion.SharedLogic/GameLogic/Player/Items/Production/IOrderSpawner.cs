namespace GameLogic.Player.Items.Production;

public interface IOrderSpawner : IOrderProducer
{

	public IEnumerable<OrderRequirementsId> GetSpawnOrder() { }

}

