using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class BoxedItemInteractionAmountChanged
	{
		public Entity Entity { get; set; }

		public int MergeItemsLeft { get; set; }

		public string InteractionItemId { get; set; }

		public string InteractionResourceType { get; set; }

		public string ConsumerItemId { get; set; }

		public int ConsumerPositionIndex { get; set; }

		public string InteractionReason { get; set; }
	}
}
