using GameLogic.Config.Types;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11082)]
	public class SetShopLastOpened : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public MetaTime Time { get; set; }

		public SetShopLastOpened()
		{
		}

		public SetShopLastOpened(MergeBoardId mergeBoardId, MetacoreTime time)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
