using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10939)]
	public class ClaimItemDiscoveryReward : PlayerAction
	{
		public int ItemId { get; set; }

		public MergeBoardId MergeBoardId { get; set; }

		public ClaimItemDiscoveryReward()
		{
		}

		public ClaimItemDiscoveryReward(int itemId, MergeBoardId mergeBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public MetaActionResult Execute(IPlayer player, bool commit)
		{
			return null;
		}
	}
}
