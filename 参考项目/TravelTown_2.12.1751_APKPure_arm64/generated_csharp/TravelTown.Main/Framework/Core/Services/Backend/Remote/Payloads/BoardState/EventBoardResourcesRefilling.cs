using GameCore.States.Attributes;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	[StateName("boardRefillingEvent")]
	public class EventBoardResourcesRefilling : BoardResourcesRefilling
	{
		public string EventId;
	}
}
