using System;
using Analytics;
using Animations;
using Audio;
using Code.GameLogic.GameEvents;
using Code.GameLogic.IAP;
using Common;
using GameEvents;
using GameLogic;
using GameLogic.Config;
using GameLogic.Config.Shop;
using GameLogic.Config.Shop.Items;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Shop;
using IAP;
using Merge;
using Metaplay.Core.Offers;
using Navigation;
using Offers;
using Pool;
using UI.Offers;
using UI.Popups.Shop;
using UI.Rewards;

namespace UI.Shop
{
	public class ShopPopupViewModel : IMenuState, IDisposable
	{
		public readonly IPurchaseManager PurchaseManager;

		public readonly ShopMenuContentBlock FocusCurrencies;

		[NonSerialized]
		public bool purchaseProcessActive;

		public static readonly ShopLayoutId coinsLayout;

		public static readonly ShopLayoutId gemsLayout;

		public static readonly ShopLayoutId garageLayout;

		public static readonly ShopLayoutId legacyEvents;

		public static readonly ShopLayoutId seasonalEvents;

		public static readonly ShopLayoutId leaderboardEvents;

		public PlayerModel Player => null;

		public IMenuController MenuController { get; }

		public INavigationController NavigationController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IRewardsAnimations RewardsAnimations { get; }

		public IActionsExecutor Executor { get; }

		public IScheduler Scheduler { get; }

		public ILoadingIndicator LoadingIndicator { get; }

		public IOfferPopupsLibrary OfferPopupsLibrary { get; }

		public IPoolsManager PoolsManager { get; }

		public MergeBoardId MergeBoardId { get; }

		public bool OpenedFromTitleBar { get; }

		public IOffersManager OffersManager { get; }

		public bool ForceOpenCoinsAndGems { get; }

		public IRewardVisuals OfferRewardVisuals { get; }

		public IRewardVisuals RewardVisuals { get; }

		public IRewardVisuals ShopRewardVisuals { get; }

		public IActiveOfferGroup OverrideOfferGroup { get; }

		public bool ForceGarageBoardShop { get; }

		public bool ForceOpenAnyBoardShop { get; }

		public string OpenSource { get; }

		public RedDotStatus RedDotStatus { get; }

		public ProgressionEventManager ProgressionEventManager { get; }

		public string ShowMethod { get; }

		public IOfferUiServices UiServices => null;

		public IBoardEventModel CurrentBoardEvent => null;

		public MergeBoard CurrentBoard => null;

		public bool IsCurrencyShop => false;

		public ShopLayout RequestedLayout => null;

		public ShopPopupViewModel(IPurchaseManager purchaseManager, ShopMenuContentBlock focusCurrencies, IMenuController menuController, INavigationController navigationController, IAnalyticsCollector analytics, IRewardsAnimations rewardsAnimations, MergeBoardId mergeBoardId, bool openedFromTitleBar, IOffersManager offersManager, bool forceOpenCoinsAndGems, bool forceGarageBoardShop, IAudioPlayer audio, IActionsExecutor executor, IScheduler scheduler, ILoadingIndicator loadingIndicator, IOfferPopupsLibrary offerPopupsLibrary, IPoolsManager poolsManager, IRewardVisuals offerRewardVisuals, IRewardVisuals shopRewardVisuals, bool forceForceOpenAnyBoardShop, string openSource, RedDotStatus redDotWasOn, string showMethod, ProgressionEventManager progressionEventManager, IActiveOfferGroup overrideOfferGroup = null)
		{
		}

		public void OnShow()
		{
		}

		public void OnHide(HideMenuReason reason)
		{
		}

		public void RegisterCallbacks()
		{
		}

		public void DeregisterCallbacks()
		{
		}

		public void OnPurchaseProcessStarted(InAppProductInfo inAppProductInfo, OfferPlacementId offerPlacementId)
		{
		}

		public void PurchaseHasBeenCompleted(PurchaseResult purchaseResult)
		{
		}

		public void OnDisplay(Guid impressionId)
		{
		}

		public void PurchaseItem(IPurchaseContext<IShopItemInfo> purchaseContext, Guid impressionId, OfferPlacementId placementId, CurrencySink currencySink)
		{
		}

		public void PurchaseItem(IShopItemInfo itemInfo, int slotId, Guid impressionId, OfferPlacementId placementId, CurrencySink currencySink, Action onComplete, Action<PurchaseResult> onFailure)
		{
		}

		public void PurchaseFlashOffer(IOfferShopItem offerShopItem, Guid impressionId, CurrencySink currencySink, Action onComplete, Action<PurchaseResult> onFailure)
		{
		}

		public void PurchaseOffer(IPurchaseContext<IActiveOffer> context, Action onSuccess, Guid impressionId)
		{
		}

		public bool ReactOnCheckResult(CheckBeforePurchase checkResult, IShopItem shopItemData, CurrencySink currencySink)
		{
			return false;
		}

		public bool ReactOnCheckResult(CheckBeforePurchase checkResult, Currencies currency, long price, CurrencySink currencySink)
		{
			return false;
		}

		public void PurchaseFinished(PurchaseResult purchaseResult)
		{
		}

		public void Dispose()
		{
		}

		public static ShopLayoutId GetShopLayoutIdForMergeBoardId(MergeBoardId mergeBoardId, IMergeMansionGameConfig gameConfig)
		{
			return null;
		}
	}
}
