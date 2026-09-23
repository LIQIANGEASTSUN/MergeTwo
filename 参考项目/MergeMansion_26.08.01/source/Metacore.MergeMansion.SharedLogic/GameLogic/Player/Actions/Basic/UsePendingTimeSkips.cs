using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11098)]
	public class UsePendingTimeSkips : PlayerAction
	{
		public const string AUTOACTIVATED_BOOSTER_NAME = "AutoActivatedBooster_SkipTime";

		public MergeBoardId MergeBoardId { get; set; }

		public UsePendingTimeSkips()
		{
		}

		public UsePendingTimeSkips(MergeBoardId mergeBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
