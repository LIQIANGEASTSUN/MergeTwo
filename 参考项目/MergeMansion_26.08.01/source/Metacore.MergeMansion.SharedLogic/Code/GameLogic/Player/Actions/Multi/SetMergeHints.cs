using GameLogic.Player;
using GameLogic.Player.Actions;
using Metaplay.Core.Model;

namespace Code.GameLogic.Player.Actions.Multi
{
	[ModelAction(10999)]
	public class SetMergeHints : PlayerAction
	{
		public bool State { get; set; }

		public SetMergeHints()
		{
		}

		public SetMergeHints(bool state)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
