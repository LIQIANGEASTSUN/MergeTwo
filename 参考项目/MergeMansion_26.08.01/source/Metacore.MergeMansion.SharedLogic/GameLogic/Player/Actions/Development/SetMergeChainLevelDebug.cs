using GameLogic.MergeChains;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21140)]
	[DevelopmentOnlyAction]
	public class SetMergeChainLevelDebug : PlayerAction
	{
		public MergeChainId MergeChainId { get; set; }

		public int Level { get; set; }

		public SetMergeChainLevelDebug()
		{
		}

		public SetMergeChainLevelDebug(MergeChainId mergeChainId, int level)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
