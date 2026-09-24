using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30069)]
	public class TryToRunActionsFromPocket : PlayerAction
	{
		public int ItemId { get; set; }

		public bool LogEnabled { get; set; }

		public TryToRunActionsFromPocket()
		{
		}

		public TryToRunActionsFromPocket(int itemId, bool logEnabled = false)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
