namespace GameLogic.Player.Items.ProgressionEvent;

public class PlayerBasedProgressionEventItemSpawner : IProgressionEventItemSpawner
{
	private readonly PlayerModel player; //Field offset: 0x10

	public PlayerBasedProgressionEventItemSpawner(PlayerModel player) { }

	private bool IsDisallowedItem(IItemDefinition item, ProgressionEventInfo progressionEvent) { }

	public override IItemDefinition ShouldSpawn(IItemDefinition mergeFromItem, IItemDefinition mergeToItem, MetacoreTime currentTime) { }

}

