using System;
using GameLogic.Config.Shop;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using TMPro;
using UI.Buttons;
using UI.Offers;
using UI.Popups.Shop;
using UI.Utilities;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Indicators
{
	public class ItemInfoPopupItem : PooledSpineUGUIMergeItem, IAnimatesRewards
	{
		public enum VisibleState
		{
			Unknown = 0,
			Required = 1,
			Discovered = 2,
			MergeChainLevelLocked = 3
		}

		[SerializeField]
		public TextMeshProUGUI label;

		[SerializeField]
		public TextMeshProUGUI titleLabel;

		[SerializeField]
		public Image undiscovered;

		[SerializeField]
		public Image mergeChainLevelLocked;

		[SerializeField]
		public Image highlight;

		[SerializeField]
		public Image nextSeparator;

		[SerializeField]
		public Image artifactVisual;

		[SerializeField]
		public TweenedButton button;

		[SerializeField]
		public LeaderboardEventScoreUp leaderboardEventScoreUp;

		[SerializeField]
		public Image mergegoalBackground;

		[SerializeField]
		public Image mergegoalIndicator;

		[SerializeField]
		public CurrencyButton buyButton;

		[SerializeField]
		public GameObject shopButton;

		[SerializeField]
		public GameObject flashSaleButton;

		[SerializeField]
		public CurrencyButton flashSalePurchaseButton;

		[NonSerialized]
		public Action callback;

		[NonSerialized]
		public Action shopButtonCallback;

		[NonSerialized]
		public ItemEffectHandler itemEffectHandler;

		[NonSerialized]
		public IOfferUiServices uiServices;

		[NonSerialized]
		public IShopItemInfo shopItemInfo;

		[NonSerialized]
		public IPlayer player;

		public TweenedButton Button => null;

		public bool IsUndiscovered => false;

		public bool Active
		{
			set
			{
			}
		}

		public virtual void SetIndicator(IItemDefinition type, string text, VisibleState state, bool isSelectedItem, bool showNextSeparator, ItemInfoPopupItemFlags flags = ItemInfoPopupItemFlags.ActivableShowsTapHint, IOfferUiServices offerUIServices = null, bool hasUnlockedActivationSpawnItems = false, IShopItemInfo shopItem = null, Action purchaseClickedCallback = null, IMergeGoalItemQuery mergeGoalItemQuery = null)
		{
		}

		public void SetIndicator(IItemDefinition type, string title, string text, VisibleState state, bool isSelectedItem, bool showNextSeparator, IOfferUiServices offerUIServices, bool hasUnlockedActivationSpawnItems = false)
		{
		}

		public void OnDisable()
		{
		}

		public void UpdateShopButtonStatus(IPlayer player, IShopItemInfo shopItemInfo, Action purchaseClickedCallback)
		{
		}

		public void SetupFlashSalePurchaseButton((Currencies currency, long price) priceInfo, IPlayer player, IShopItemEntry shopItem, IShopItemInfo shopItemInfo, Action purchaseClickedCallback)
		{
		}

		public void SetFlashSaleButtonActive(bool isActive)
		{
		}

		public Action FlashSalePurchaseCompleted(Action callback)
		{
			return null;
		}

		public void UpdateBuyButtonStatus(IPlayer player, IShopItemInfo shopItemInfo, Action purchaseClickedCallback)
		{
		}

		public void UpdateItemEffectHandler(VisibleState state, IItemDefinition itemDefinition, ItemInfoPopupItemFlags flags, bool hasUnlockedActivationSpawnItems = false)
		{
		}

		public void SetupTapHintItemEffectHandler()
		{
		}

		public void DisposeItemEffectHandler()
		{
		}

		public void UpdateLeaderboardEventScoreUp(IItemDefinition item, bool visualiseItem)
		{
		}

		public void OnButtonClicked()
		{
		}

		public virtual void SetCallback(Action action)
		{
		}

		public static void SetTapHintFrozenState(ItemEffectHandler itemEffectHandler)
		{
		}

		public void AnimateRewards(Action onCompletion = null)
		{
		}

		public void UpdateShopButton(IItemDefinition itemDefinition, Action action)
		{
		}

		[PublicAPI]
		public void OnShopButtonClicked()
		{
		}
	}
}
