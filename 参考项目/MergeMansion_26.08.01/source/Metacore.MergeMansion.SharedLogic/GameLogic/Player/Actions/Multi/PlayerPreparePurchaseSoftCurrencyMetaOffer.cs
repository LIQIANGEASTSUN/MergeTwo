using Code.GameLogic.IAP;
using GameLogic.Player.Requirements;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(1203)]
	public class PlayerPreparePurchaseSoftCurrencyMetaOffer : PlayerAction
	{
		public MergeMansionOfferGroupInfo OfferGroupInfo { get; set; }

		public MergeMansionOfferInfo OfferInfo { get; set; }

		public MergeBoardId MergeBoardId { get; set; }

		public string ImpressionId { get; set; }

		public string OverrideContext { get; set; }

		public PlayerPreparePurchaseSoftCurrencyMetaOffer()
		{
		}

		public PlayerPreparePurchaseSoftCurrencyMetaOffer(MergeMansionOfferGroupInfo offerGroupInfo, MergeMansionOfferInfo offerInfo, MergeBoardId boardId, string impressionId, Option<string> overrideContext)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public void TrySendFreeDROStreakClaimAnalytics(PlayerModel player)
		{
		}

		public bool IsDelayedRewardOffer(IPlayer player)
		{
			return false;
		}

		public Option<PlayerLocalDaysSinceOfferPurchaseRequirement> GetDelayedDayRequirement(IPlayer player, MergeMansionOfferInfo offerInfo)
		{
			return default(Option<PlayerLocalDaysSinceOfferPurchaseRequirement>);
		}
	}
}
