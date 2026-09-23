using Analytics;
using Animations;
using Audio;
using GameLogic;
using GameLogic.Config;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Items;
using IAP;
using Metacore.MergeMansion.Utility;
using Offers;
using Pool;
using UI.Offers;
using UI.Rewards;

namespace UI.States
{
	public class ItemInfoPopupMenuState : IMenuState
	{
		public readonly IMergeChainDefinition MergeChain;

		public readonly IItemDefinition Item;

		public readonly IMergeItem MergeItem;

		public readonly int SelectedLevel;

		public bool OpenedFromShop;

		public bool ForceShowOdds;

		public readonly ItemInfoPopupFlags Flags;

		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IActionsExecutor Executor { get; }

		public IOffersManager OffersManager { get; }

		public IMergeMansionGameConfig Config => null;

		public IPoolsManager PoolsManager { get; }

		public IRewardsAnimations RewardsAnimations { get; }

		public PlayerModel Player { get; }

		public IOfferPopupsLibrary OfferPopupsLibrary { get; }

		public IRewardVisuals RewardVisuals { get; }

		public IPurchaseManager PurchaseManager { get; }

		public ILoadingIndicator LoadingIndicator { get; }

		public GameConfigClientCache GameConfigClientCache { get; }

		public IMergeGoalItemQuery MergeGoalItemQuery { get; }

		public IOfferUiServices UiServices => null;

		public ItemInfoPopupMenuState(IMergeChainDefinition mergeChain, IItemDefinition item, IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, IActionsExecutor executor, IOffersManager offersManager, IPoolsManager poolsManager, IRewardsAnimations rewardsAnimations, PlayerModel player, IOfferPopupsLibrary offerPopupsLibrary, IRewardVisuals rewardVisuals, IPurchaseManager purchaseManager, ILoadingIndicator loadingIndicator, GameConfigClientCache gameConfigClientCache, ItemInfoPopupFlags flags, IMergeGoalItemQuery mergeGoalItemQuery = null)
		{
		}

		public ItemInfoPopupMenuState(IMergeChainDefinition mergeChain, IItemDefinition item, IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, bool openedFromShop, bool forceShowOdds, PlayerModel player, GameConfigClientCache gameConfigClientCache, IMergeGoalItemQuery mergeGoalItemQuery = null)
		{
		}

		public ItemInfoPopupMenuState(IMergeItem mergeItem, IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, PlayerModel player, GameConfigClientCache gameConfigClientCache, IMergeGoalItemQuery mergeGoalItemQuery = null)
		{
		}
	}
}
