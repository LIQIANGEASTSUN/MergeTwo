using GameLogic.Player.Modes;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11099)]
	public class SetPlayerModeActive : PlayerAction
	{
		public PlayerModeId Mode { get; set; }

		public bool Active { get; set; }

		public MergeBoardId BoardId { get; set; }

		public SetPlayerModeActive()
		{
		}

		public SetPlayerModeActive(PlayerModeId mode, bool active, MergeBoardId boardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
