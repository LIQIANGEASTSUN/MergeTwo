using GameCore.States.Attributes;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	[StateName("boardResourcesEvent")]
	public class EventBoardResources : BoardResources
	{
		public string EventId;
	}
}
