using Documentation;

namespace Code.Bot.Task
{
	[TaskId("UseBoardActivators")]
	[Documentation("Use Board Activators", "Allows to use any producers if created after that items can be merged with something else on the board. Can be used in a case if you don't have items to follow a required item chain and you need to just discover a board to find something new that can help", null)]
	public class UseActivatorBoard : ActivateProducer
	{
	}
}
