namespace GameLogic.Player.Items.Bubble;

public interface IBubbleSpawner
{

	public IItemDefinition ShouldSpawn(IItemDefinition itemDefinition, MetacoreTime currentTime) { }

}

