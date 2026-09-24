//Type is in global namespace

public abstract class ConsumableItem : BaseItem
{
	[Inject]
	protected IItemPooler _itemPooler; //Field offset: 0xD8
	[Inject]
	protected IGameManager GameManager; //Field offset: 0xE0
	[Inject]
	private IBoardController _boardController; //Field offset: 0xE8
	[Inject]
	protected SignalBus SignalBus; //Field offset: 0xF0

	protected ConsumableItem() { }

	protected override void Collect() { }

	public virtual void OnItemPlacedToBoard(bool willPlayParticle = false) { }

	public virtual void OnTapped() { }

}

