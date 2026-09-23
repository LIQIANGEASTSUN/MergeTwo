using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30132)]
	public class AutoMergeSetUserToggleAction : PlayerAction
	{
		public bool Enabled { get; set; }

		public AutoMergeSetUserToggleAction()
		{
		}

		public AutoMergeSetUserToggleAction(bool enabled)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
