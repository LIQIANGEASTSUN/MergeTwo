using GameLogic.Config.Types;

namespace GameLogic.Player.Items.Bubble
{
	public interface IBubbleSpawner
	{
		IItemDefinition ShouldSpawn(IItemDefinition itemDefinition, MetacoreTime currentTime);
	}
}
