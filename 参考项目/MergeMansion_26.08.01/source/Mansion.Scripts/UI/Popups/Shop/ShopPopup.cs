using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Code.GameLogic.GameEvents;
using Code.GameLogic.IAP;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic;
using GameLogic.Config.Shop;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Items;
using IAP;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Addressables;
using Metaplay.Core;
using Metaplay.Core.Offers;
using Offers;
using Pool;
using TMPro;
using UI.Offers;
using UI.Shop;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;
using Utility.Theming;

namespace UI.Popups.Shop
{
	public class ShopPopup : PopupBase<ShopPopupViewModel>
	{
		public struct OffersListContainerPageData
		{
			public List<MetaOfferId> OfferIds;

			public int Page;

			public OffersListContainerPageData(List<MetaOfferId> offerIds, int page)
			{
				OfferIds = null;
				Page = 0;
			}
		}

		[Serializable]
		public struct References
		{
			public GameObject popup;

			public Image blueOverlay;

			public ScrollRect contentScrollRect;

			public GameObject headerContainer;

			public ThemingUtility themingUtility;

			[Header("Optional")]
			[CanBeNull]
			public GameObject moreLessButtonsContainer;

			[CanBeNull]
			public GameObject moreButton;

			[CanBeNull]
			public GameObject lessButton;
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass102_0
		{
			public IDisposableAssetHandle<GameObject> offerContainerHandle;

			public void _003CAddMysteryPassCurrencyOfferSection_003Eb__0()
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CAddMysteryPassCurrencyOfferSection_003Ed__102 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public ShopPopup _003C_003E4__this;

			public ProgressionEventModel eventModel;

			public CancellationToken ct;

			[NonSerialized]
			public _003C_003Ec__DisplayClass102_0 _003C_003E8__1;

			public ShopPopupBlock popupBlock;

			public bool? underMore;

			public Currencies currencyType;

			[NonSerialized]
			public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[CompilerGenerated]
		public sealed class _003CDelayedScroll_003Ed__107 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public bool focusTop;

			public ShopPopup _003C_003E4__this;

			public RectTransform target;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CDelayedScroll_003Ed__107(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		public static readonly ProfilerMarker MARKER;

		public const string IapStoreInitializationIncomplete = "IAPShopPurchaseStartedError_StoreInitNotCompleted";

		public const string ShopTitle = "MergeGridShop_Title";

		public const string EnergyBlockTitleLocId = "MergeGridShop_EnergyTitle";

		public const string DiamondsBlockTitleLocId = "MergeGridShop_DiamondsTitle";

		public const string CoinsBlockTitleLocId = "MergeGridShop_CoinsTitle";

		public const string OffersBlockTitleLocId = "MergeGridShop_OffersTitle";

		public const string DailyItemsBlockTitleLocId = "MergeGridShop_DailyDealsTitle";

		public const string FlashSalesBlockTitleLocId = "MergeGridShop_FlashSaleTitle";

		public const string BoxesBlockTitleLocId = "MergeGridShop_BoxesTitle";

		public const string ChestsBlockTitleLocId = "MergeGridShop_ChestsTitle";

		[SerializeField]
		public References refs;

		[SerializeField]
		public bool focusContentOnContext;

		[SerializeField]
		public OffersUiOptions offersUiOptions;

		[SerializeField]
		public RectTransform blocksMountPoint;

		[SerializeField]
		public float expectedLeaderboardRankingsContentHeight;

		[SerializeField]
		public float autoScrollSpeed;

		[SerializeField]
		public GameObject legalText;

		[NonSerialized]
		public TextMeshProUGUI headerLabel;

		[NonSerialized]
		public GameObject instantiatedHeader;

		[NonSerialized]
		public bool purchaseProcessActive;

		[NonSerialized]
		public readonly List<(Component component, string poolTag)> instantiatedContent;

		[NonSerialized]
		public readonly List<(Component component, string poolTag)> instantiatedContentMore;

		[NonSerialized]
		public readonly List<GameObject> lockedDailyGemPreviews;

		[NonSerialized]
		public readonly List<Action> onMoreOpenedActions;

		[NonSerialized]
		public bool moreContentOpen;

		[NonSerialized]
		public int overlayTitleBarElements;

		public Transform closeButton;

		[NonSerialized]
		public ShopLayout activeLayout;

		[NonSerialized]
		public bool shouldShowLegalText;

		public const string linkToOpen = "https://metacoregames.com/terms";

		public static GameObjectPoolManager PoolManager => null;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override ShopPopupViewModel MenuState { get; set; }

		public IOffersManager OffersManager => null;

		public PlayerModel Player => null;

		public IActionsExecutor Executor => null;

		public IScheduler Scheduler => null;

		public IShopTheme Theme => null;

		public bool FeatureShopDiscountBadgeEnabled => false;

		public override int OverlayTitleBarElements => 0;

		public override string SubSection => null;

		public override bool NeedsBlockingLayer()
		{
			return false;
		}

		public override bool DoesSupportHardwareBackButton()
		{
			return false;
		}

		public override void NegativeActionDone()
		{
		}

		public bool NavigateBack()
		{
			return false;
		}

		public override void OnContentPopulated()
		{
		}

		public override void OnShow()
		{
		}

		public override void OnHide(HideMenuReason reason)
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

		public void OnPurchaseCompleted(PurchaseResult purchaseResult)
		{
		}

		public void FlashSalesRolled()
		{
		}

		public override void PopulateContent()
		{
		}

		public void InitMoreButtons()
		{
		}

		public void PopulateViaSections(IEnumerable<ShopSectionId> sections, bool? underMore)
		{
		}

		public void PopulateOverrideOfferGroupIfExists(bool? underMore)
		{
		}

		public void AddSection(ShopSectionId shopSectionId, bool redDotNeeded, bool? underMore)
		{
		}

		public void ApplyTheme()
		{
		}

		public string GetTitle()
		{
			return null;
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		public bool TryGetFocusTarget(ShopMenuContentBlock findBlock, out RectTransform target)
		{
			target = null;
			return false;
		}

		public void AddEnergySection(EnergyType energyType, bool? underMore, OfferPlacementId placementId, CurrencySink currencySink)
		{
		}

		public void AddDailyItemsSection(bool showRedDot, bool? underMore, OfferPlacementId placementId, CurrencySink currencySink)
		{
		}

		public void AddFlashSaleItems(bool showRedDot, bool? underMore, OfferPlacementId placementId, CurrencySink currencySink)
		{
		}

		public void AddFlashSalesSection(OfferPlacementId placement, bool? underMore, CurrencySink currencySink)
		{
		}

		public void AddFlashSalesSection(Func<ICollection<IShopItemEntry>> itemsGenerator, MetaTime expirationTime, OfferPlacementId placementId, bool? underMore, CurrencySink currencySink, Action<OfferPlacementId> refreshAction = null)
		{
		}

		public void AddBoxesSection(bool? underMore, OfferPlacementId placementId, CurrencySink currencySink)
		{
		}

		public void AddChestsSection(bool? underMore, OfferPlacementId placementId, CurrencySink currencySink)
		{
		}

		public void AddLegacyEventSection(MergeBoardId mergeBoardId, bool? underMore)
		{
		}

		public void AddDiamondsSection(bool? underMore, OfferPlacementId placementId, CurrencySink currencySink)
		{
		}

		public void AddCoinsSection(bool? underMore, OfferPlacementId placementId)
		{
		}

		public ShopPopupBlock AddIapSection(ShopMenuContentBlock blockType, string titleLocId, IEnumerable<IShopItemEntry> items, bool? underMore, OfferPlacementId placementId, CurrencySink currencySink, bool disableFocusType = false)
		{
			return null;
		}

		public ShopPopupBlock AddSection(ShopMenuContentBlock contentBlock, string blockTitle, IEnumerable<IShopItemEntry> items, bool? underMore, OfferPlacementId placementId, CurrencySink currencySink, List<IActiveOffer> offers = null, bool disableFocusType = false)
		{
			return null;
		}

		public void AddLeaderboardRankingsSection(bool? underMore)
		{
		}

		public static int GetTitleBarElementsForSection(IPlayer player, ShopMenuContentBlock contentBlock, IEnumerable<IShopItemEntry> itemEntries)
		{
			return 0;
		}

		public void ShowItemInfo(ItemDefinition itemDefinition)
		{
		}

		public void RefreshFlashDeals(OfferPlacementId placementId)
		{
		}

		public void RefreshContent()
		{
		}

		public void PopulateOffers(OfferPlacementId iapPlacement, bool? underMore)
		{
		}

		public void AddMysteryPassSection(bool? underMore)
		{
		}

		[AsyncStateMachine(typeof(_003CAddMysteryPassCurrencyOfferSection_003Ed__102))]
		public UniTask AddMysteryPassCurrencyOfferSection(ProgressionEventModel eventModel, Currencies currencyType, bool? underMore, ShopPopupBlock popupBlock, CancellationToken ct)
		{
			return default(UniTask);
		}

		public void AddOffersSection(ICollection<IActiveOfferGroup> offerGroups, bool? underMore, OfferPlacementId offerPlacementId)
		{
		}

		public void AdjustLeaderboardRankingsLayout()
		{
		}

		public void AdjustLeaderboardRankingsLayoutSize(LeaderboardEventShopRankings rankings)
		{
		}

		[PublicAPI]
		public void MoreButtonPressed()
		{
		}

		[IteratorStateMachine(typeof(_003CDelayedScroll_003Ed__107))]
		public IEnumerator DelayedScroll(RectTransform target, bool focusTop)
		{
			return null;
		}

		public void SetMoreContentVisibility(bool isVisible)
		{
		}

		public void HandleImpression(Action impressionAction, bool? underMore)
		{
		}

		public TComponentType GetFromPool<TComponentType>(string poolTag, bool? underMore) where TComponentType : Component
		{
			return null;
		}

		public void ReturnPoolObject(string poolTag, Component component)
		{
		}

		public List<OffersListContainerPageData> GetOffersListContainerPageDatas()
		{
			return null;
		}

		public void ApplyOffersListContainerPageDatas(List<OffersListContainerPageData> offersListContainerPageDatas)
		{
		}

		public static bool OfferIdsMatch(List<MetaOfferId> a, List<MetaOfferId> b)
		{
			return false;
		}

		public void OnLegalTextClicked()
		{
		}

		public void TryToOpenLink()
		{
		}

		public bool IsValidLinkToOpen()
		{
			return false;
		}
	}
}
