using Merge;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30036)]
	public class PurchaseForceResetFlashSale : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public OfferPlacementId PlacementId { get; set; }

		public PurchaseForceResetFlashSale()
		{
		}

		public PurchaseForceResetFlashSale(MergeBoardId mergeBoardId, OfferPlacementId placementId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
