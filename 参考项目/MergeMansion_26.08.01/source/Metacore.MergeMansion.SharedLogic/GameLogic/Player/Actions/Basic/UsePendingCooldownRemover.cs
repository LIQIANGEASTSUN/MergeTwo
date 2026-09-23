using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11103)]
	public class UsePendingCooldownRemover : PlayerAction
	{
		public const string BOOSTER_NAME = "AutoActivatedBooster_CooldownRemover";

		public MergeBoardId MergeBoardId { get; set; }

		public UsePendingCooldownRemover()
		{
		}

		public UsePendingCooldownRemover(MergeBoardId mergeBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
