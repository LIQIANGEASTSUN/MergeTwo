using GameLogic.Player.Board;

namespace GameLogic.Player.Items.Production
{
	public readonly struct ProducerContext
	{
		public readonly IBoard MergeBoard;

		public readonly IMergeItem RelatedItem;

		public ProducerContext(IMergeItem relatedItem, IBoard mergeBoard)
		{
			MergeBoard = null;
			RelatedItem = null;
		}
	}
}
