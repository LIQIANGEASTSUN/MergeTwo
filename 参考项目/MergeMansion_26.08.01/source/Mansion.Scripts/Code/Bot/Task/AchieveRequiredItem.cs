using Documentation;

namespace Code.Bot.Task
{
	[TaskId("AchieveItem")]
	[Documentation("AchieveItem", "[Expensive] Allows to use merge, produce, sink and any other tasks to achieve current Required Item. It's easy to use, but difficult to control, so use it only if you don't need to control the flow", null)]
	public class AchieveRequiredItem : BotTask
	{
	}
}
