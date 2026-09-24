namespace GameLogic.Player.Items.ProgressionEvent;

public interface IProgressionEventItemSpawner
{

	public IItemDefinition ShouldSpawn(IItemDefinition mergeFromItem, IItemDefinition mergeToItem, MetacoreTime currentTime) { }

}

