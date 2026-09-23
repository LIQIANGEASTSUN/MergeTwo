using Documentation;

namespace Code.Bot.Task.Initialization
{
	[TaskId("InitBoardController")]
	[Documentation("Init Board Controller", "Butler's Init Task - inject BoardController dependency for butler. Must always be a part of initialization", null)]
	public class InitBoardController : BotTask
	{
	}
}
