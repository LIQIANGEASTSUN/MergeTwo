using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21319)]
	[DevelopmentOnlyAction]
	public class AddCustomMergeBoardDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public AddCustomMergeBoardDebug()
		{
		}

		public AddCustomMergeBoardDebug(MergeBoardId mergeBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
