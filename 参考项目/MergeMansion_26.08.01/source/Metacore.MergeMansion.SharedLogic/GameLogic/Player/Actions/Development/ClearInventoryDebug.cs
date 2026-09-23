using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21110)]
	[DevelopmentOnlyAction]
	public class ClearInventoryDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public ClearInventoryDebug()
		{
		}

		public ClearInventoryDebug(MergeBoardId mergeBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
