//Type is in global namespace

public class BubbleItem : BaseItem
{
	[Inject]
	private IItemPooler _itemPooler; //Field offset: 0xD8
	[SerializeField]
	private BubbleComponent BubbleComponent; //Field offset: 0xE0

	public BubbleItem() { }

	public virtual bool CanMergeWith(BaseItem otherItem) { }

	public virtual void Init(BoardSlotData boardSlotData) { }

	public virtual void OnEndItemDrag() { }

	public virtual void OnStartItemDrag() { }

	protected virtual void SetVisual() { }

}

