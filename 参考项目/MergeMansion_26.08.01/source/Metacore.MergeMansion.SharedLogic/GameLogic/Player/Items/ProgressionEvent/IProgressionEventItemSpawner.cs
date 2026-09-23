using GameLogic.Config.Types;

namespace GameLogic.Player.Items.ProgressionEvent
{
	public interface IProgressionEventItemSpawner
	{
		IItemDefinition ShouldSpawn(IItemDefinition mergeFromItem, IItemDefinition mergeToItem, MetacoreTime currentTime);
	}
}
