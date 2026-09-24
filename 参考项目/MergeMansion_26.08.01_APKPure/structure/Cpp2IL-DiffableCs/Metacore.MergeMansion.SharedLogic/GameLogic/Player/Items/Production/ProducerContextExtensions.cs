namespace GameLogic.Player.Items.Production;

[Extension]
public static class ProducerContextExtensions
{

	[Extension]
	public static IBoard GetMergeBoard(Option<ProducerContext> producerContextOption) { }

	[Extension]
	public static ValueTuple<IBoard, IMergeItem> GetMergeBoardAndRelatedItem(Option<ProducerContext> producerContextOption) { }

	[Extension]
	public static IMergeItem GetRelatedItem(Option<ProducerContext> producerContextOption) { }

}

