using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11045)]
	public class IncrementBoardEventEnterMergeBoardCount : PlayerAction
	{
		public string EventId { get; set; }

		public IncrementBoardEventEnterMergeBoardCount()
		{
		}

		public IncrementBoardEventEnterMergeBoardCount(string eventId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
