using GameLogic.Config.Shop.Items;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11143)]
	public class ReportShopOpening : PlayerAction
	{
		public string ImpressionId { get; set; }

		public MetaTime Time { get; set; }

		public string OpeningSource { get; set; }

		public string BoardId { get; set; }

		public string MenuTag { get; set; }

		public string RedDotStatus { get; set; }

		public ReportShopOpening()
		{
		}

		public ReportShopOpening(string impressionId, MetaTime time, string openingSource)
		{
		}

		public ReportShopOpening(string impressionId, MetaTime time, string openingSource, MergeBoardId currentBoardBoardIdentifier, string menuControllerOpenMenuTag, RedDotStatus redDotStatus)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
