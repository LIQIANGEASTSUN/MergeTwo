using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11198)]
	public class FinishCollectibleBoardEventBoard : PlayerAction
	{
		public CollectibleBoardEventId EventId { get; set; }

		public FinishCollectibleBoardEventBoard()
		{
		}

		public FinishCollectibleBoardEventBoard(CollectibleBoardEventId eventId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
