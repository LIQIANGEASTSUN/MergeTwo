using Documentation;

namespace Code.Bot.Task
{
	[TaskId("HandleBubble")]
	[Documentation("Handle Bubble", "Allows to Pop or Buy an item inside a bubble, depends on currency consumption settings (BubbleDiamonds curve and BubbleItemPurchaseProbability list)", null)]
	public class HandleBubble : BotTask
	{
	}
}
