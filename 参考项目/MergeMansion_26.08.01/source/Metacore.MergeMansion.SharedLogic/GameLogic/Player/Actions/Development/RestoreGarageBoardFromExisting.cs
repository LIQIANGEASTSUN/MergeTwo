using GameLogic.Player.Board;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20008)]
	[DevelopmentOnlyAction]
	public class RestoreGarageBoardFromExisting : PlayerAction
	{
		public MetaSerialized<MergeBoard> GarageMergeBoardMetaplay { get; set; }

		public RestoreGarageBoardFromExisting()
		{
		}

		public RestoreGarageBoardFromExisting(MetaSerialized<MergeBoard> board)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
