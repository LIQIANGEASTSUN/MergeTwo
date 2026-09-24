using GameCore.States.Attributes;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	[StateName("boardFreeVouchersEvent")]
	public class EventBoardFreeVouchers : BoardFreeVouchers
	{
		public string eventId;
	}
}
