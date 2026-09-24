namespace GameLogic.Player.Items.Production;

[IsReadOnly]
public struct ProducerContext
{
	public readonly IBoard MergeBoard; //Field offset: 0x0
	public readonly IMergeItem RelatedItem; //Field offset: 0x8

	public ProducerContext(IMergeItem relatedItem, IBoard mergeBoard) { }

}

