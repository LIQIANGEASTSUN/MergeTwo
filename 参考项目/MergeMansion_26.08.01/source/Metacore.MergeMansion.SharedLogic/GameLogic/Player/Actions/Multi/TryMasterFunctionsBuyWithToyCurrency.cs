using System;
using Merge;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10912)]
	public class TryMasterFunctionsBuyWithToyCurrency : PlayerAction
	{
		public ShopItemId ShopItemId { get; set; }

		public MergeBoardId MergeBoardId { get; set; }

		public int? SlotId { get; set; }

		public string ImpressionId { get; set; }

		public OfferPlacementId PlacementId { get; set; }

		public string FlashSaleContext { get; set; }

		public TryMasterFunctionsBuyWithToyCurrency()
		{
		}

		public TryMasterFunctionsBuyWithToyCurrency(ShopItemId shopItemId, MergeBoardId mergeBoardId, int? slotId, Guid impressionId, OfferPlacementId placementId, string flashSaleContext = "None")
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
