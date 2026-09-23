using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20101)]
	[DevelopmentOnlyAction]
	public class ClearPocketDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public ClearPocketDebug()
		{
		}

		public ClearPocketDebug(MergeBoardId mergeBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
