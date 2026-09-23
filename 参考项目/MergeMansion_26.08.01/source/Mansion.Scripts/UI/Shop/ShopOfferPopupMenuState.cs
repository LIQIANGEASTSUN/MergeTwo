using System.Collections.Generic;
using Analytics;
using Animations;
using Audio;
using GameLogic.Offers;
using GameLogic.Player;
using IAP;
using Merge;
using Offers;

namespace UI.Shop
{
	public class ShopOfferPopupMenuState : IMenuState
	{
		public readonly IPurchaseManager PurchaseManager;

		public readonly bool AutomaticShow;

		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IRewardsAnimations RewardsAnimations { get; }

		public IOffersManager OffersManager { get; }

		public MergeBoardId MergeBoardId { get; }

		public PlayerModel Player => null;

		public IEnumerable<IActiveOfferGroup> OverrideOfferGroups { get; }

		public ShopOfferPopupMenuState(IPurchaseManager purchaseManager, bool automaticShow, IMenuController menuController, IAnalyticsCollector analytics, IRewardsAnimations rewardsAnimations, MergeBoardId mergeBoardId, IOffersManager offersManager, IAudioPlayer audio, IEnumerable<IActiveOfferGroup> overrideOfferGroups = null)
		{
		}
	}
}
