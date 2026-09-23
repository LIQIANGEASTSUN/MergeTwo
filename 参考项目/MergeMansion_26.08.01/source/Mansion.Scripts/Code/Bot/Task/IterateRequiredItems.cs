using Documentation;

namespace Code.Bot.Task
{
	[TaskId("IterateItems")]
	[Documentation("IterateItems", "Iterates all missed items from the required list and call SubTasks for each of them", null)]
	public class IterateRequiredItems : BotTask
	{
	}
}
