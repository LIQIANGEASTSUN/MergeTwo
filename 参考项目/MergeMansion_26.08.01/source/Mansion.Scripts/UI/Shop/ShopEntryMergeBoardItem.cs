using System;
using System.Runtime.CompilerServices;
using GameLogic.Config.Shop;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using JetBrains.Annotations;
using Merge;
using Metaplay.Core.Offers;
using Pool;
using TMPro;
using UI.Popups.Shop;
using UI.Utilities;
using UnityEngine;

namespace UI.Shop
{
	public class ShopEntryMergeBoardItem : MonoBehaviour, IRewardContainer, IAnimatesRewards
	{
		[SerializeField]
		public CurrencyButton buyButton;

		[SerializeField]
		public GameObject itemIcon;

		[SerializeField]
		public TextMeshProUGUI itemName;

		[SerializeField]
		public TextMeshProUGUI itemsLeft;

		[SerializeField]
		public GameObject infoButton;

		[SerializeField]
		public TextMeshProUGUI canNotBuyDescription;

		[SerializeField]
		public GameObject itemInfoHitArea;

		[SerializeField]
		public RedDotIndicator redDotIndicator;

		[SerializeField]
		public BubbleAuxEnergyBonusView bonusEnergyView;

		[Header("Discount Badge")]
		[SerializeField]
		public GameObject discountBadge;

		[SerializeField]
		public TextMeshProUGUI discountBadgeText;

		[Header("Task Requirement Badge")]
		[SerializeField]
		public GameObject taskRequirementBadge;

		[SerializeField]
		public TextMeshProUGUI taskRequirementCountText;

		[Header("Override value display")]
		[SerializeField]
		public GameObject overrideValueContentParent;

		[SerializeField]
		public TextMeshProUGUI overrideValueAmountText;

		[NonSerialized]
		public IPlayer playerContext;

		[NonSerialized]
		public IShopItemInfo shopItemInfo;

		[NonSerialized]
		public IActiveOffer activeOffer;

		[NonSerialized]
		public IItemDefinition itemDefinition;

		[NonSerialized]
		public IUiServices uiServices;

		[NonSerialized]
		public ObjectPoolElement item;

		[NonSerialized]
		public long resetPrice;

		[NonSerialized]
		public int resetAmount;

		[NonSerialized]
		public Currencies resetCurrencyType;

		[NonSerialized]
		public bool _isDestroyed;

		public bool HasIndicator
		{
			set
			{
			}
		}

		public Vector3 IconPosition => default(Vector3);

		public event Action<int> InfoButtonPressed
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action ButtonPressed
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void Awake()
		{
		}

		public void SetResetValues(int amount, long price, Currencies currencyType)
		{
		}

		public void ResetValues()
		{
		}

		public void Initialize(IShopItemEntry shopItemEntry, IPlayer player, IUiServices services, MergeBoardId boardId, OfferPlacementId offerPlacementId, bool discountBadgeEnabled = false)
		{
		}

		public bool ItemHasBuysLeft()
		{
			return false;
		}

		public void SetAttachment(IPlayer player)
		{
		}

		public void EnableBonusEnergyView(bool isEnabled)
		{
		}

		public void Initialize(IActiveOffer shopItemEntry, IPlayer player, IUiServices services, bool isShopDiscountBadgeEnabled)
		{
		}

		public void SetPurchaseInfo((Currencies currency, long price) info, int amountsLeft, bool isShopDiscountBadgeEnabled)
		{
		}

		public void SetDiscountBadge(bool isShopDiscountBadgeEnabled)
		{
		}

		public void SetDisabledInfo()
		{
		}

		public void TearDown()
		{
		}

		public void Show(IItemDefinition definition, bool showBuyButton = true, bool showInfoButton = true)
		{
		}

		public void ShowReward(IPlayerReward reward)
		{
		}

		public void SetPrice((Currencies, long) price)
		{
		}

		public void SetPrice(Currencies currency, long price)
		{
		}

		public void SetPrice(long price)
		{
		}

		public void SetAmount(int amount, bool useItemsLeftFormat = true)
		{
		}

		public void SetOverrideValueInfo(IItemDefinition itemDef, OverrideItemFeatures overrideItemFeatures)
		{
		}

		public void DisablePurchaseButton()
		{
		}

		[PublicAPI]
		public void OnButtonPress()
		{
		}

		public void ShowItemInfo()
		{
		}

		public void OnDestroy()
		{
		}

		public void ShowDiscount(int discount)
		{
		}

		public void SetDiscountEnabled(bool discountEnabled)
		{
		}

		public void AnimateRewards(Action onCompletion = null)
		{
		}

		public void Refresh(IPlayer player)
		{
		}

		public void UpdateTaskRequirementCheckmark()
		{
		}

		public void UpdateTutorialItem(IItemDefinition item)
		{
		}

		public void FakeBuy()
		{
		}
	}
}
