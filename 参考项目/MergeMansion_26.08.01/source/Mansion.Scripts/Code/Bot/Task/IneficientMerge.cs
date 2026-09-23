using Documentation;

namespace Code.Bot.Task
{
	[TaskId("InefficientMerge")]
	[Documentation("Ineficient Merge task", "Allows to merge items, but doesn't chose the best items to merge, ignore visibility and number of unvisible items close to this one", null)]
	public class IneficientMerge : BotTask
	{
	}
}
