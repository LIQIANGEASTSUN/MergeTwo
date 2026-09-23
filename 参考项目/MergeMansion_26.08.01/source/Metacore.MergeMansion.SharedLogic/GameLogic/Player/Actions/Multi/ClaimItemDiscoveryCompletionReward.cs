using GameLogic.MergeChains;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10940)]
	public class ClaimItemDiscoveryCompletionReward : PlayerAction
	{
		public MergeChainId MergeChainId { get; set; }

		public MergeBoardId MergeBoardId { get; set; }

		public ClaimItemDiscoveryCompletionReward()
		{
		}

		public ClaimItemDiscoveryCompletionReward(MergeChainId mergeChainId, MergeBoardId mergeBoardId)
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
