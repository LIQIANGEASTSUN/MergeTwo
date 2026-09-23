using GameLogic.Player.Board;
using Metacore.MergeMansion.Common.Options;

namespace GameLogic.Player.Items.Production
{
	public static class ProducerContextExtensions
	{
		public static (IBoard, IMergeItem) GetMergeBoardAndRelatedItem(this Option<ProducerContext> producerContextOption)
		{
			return default((IBoard, IMergeItem));
		}

		public static IBoard GetMergeBoard(this Option<ProducerContext> producerContextOption)
		{
			return null;
		}

		public static IMergeItem GetRelatedItem(this Option<ProducerContext> producerContextOption)
		{
			return null;
		}
	}
}
