using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21203)]
	[DevelopmentOnlyAction]
	public class SetMergeBoardHasEndedDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public bool HasEnded { get; set; }

		public SetMergeBoardHasEndedDebug()
		{
		}

		public SetMergeBoardHasEndedDebug(MergeBoardId mergeBoardId, bool hasEnded)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
