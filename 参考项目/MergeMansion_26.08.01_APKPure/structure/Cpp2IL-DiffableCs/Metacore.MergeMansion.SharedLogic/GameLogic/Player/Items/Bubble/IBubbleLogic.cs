namespace GameLogic.Player.Items.Bubble;

[MetaSerializable]
public interface IBubbleLogic
{

	public void RegisterExpiration(IBoard currentBoard, MetacoreTime spawnTime) { }

	public void RegisterSpawn(IBoard currentBoard, MetacoreTime spawnTime) { }

	public IItemDefinition ShouldSpawn(IPlayer player, IBoard currentBoard, IItemDefinition mergedItem, MetacoreTime mergeTimestamp) { }

}

