using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Rewards;
using Metaplay.Core;
using TMPro;
using UnityEngine;

namespace UI.Shop
{
	public class ShopOfferItemPack : MonoBehaviour
	{
		public const string PackRemainingPurchasesLocId = "ShopOffers_ItemPack_RemainingPurchases";

		public const string PackTimeLeftLocId = "ShopOffers_ItemPack_TimeLeft";

		[SerializeField]
		public CurrencyButton buyButton;

		[SerializeField]
		public TextMeshProUGUI itemPackName;

		[SerializeField]
		public TextMeshProUGUI itemPackTimerText;

		[SerializeField]
		public TextMeshProUGUI packsLeftText;

		[SerializeField]
		public GameObject[] itemRoot;

		[SerializeField]
		public ShopEntryIcon shopEntryIconPrefab;

		[SerializeField]
		public ShopEntryMergeBoardItem shopEntryMergeBoardItemPrefab;

		[SerializeField]
		public RedDotIndicator redDotIndicator;

		[SerializeField]
		public SaleIndicator saleIndicator;

		[NonSerialized]
		public MetaTime? endStamp;

		[NonSerialized]
		public readonly List<(IPlayerReward value, Transform item)> rewardsToAnimate;

		[NonSerialized]
		public IActiveOffer offer;

		public PlayerModel Player => null;

		public IEnumerable<(Vector3 transform, IPlayerReward reward)> ItemPositions => null;

		public event Action PurchaseButtonPressed
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

		public event Action<int> ItemInfoButtonPressed
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

		public void Show(string price, IActiveOffer activeOffer, IActiveOfferGroup offerGroup, bool showRedDot)
		{
		}

		public void UpdateTimer()
		{
		}

		public MonoBehaviour GetPrefab(PlayerReward reward)
		{
			return null;
		}

		public void OnButtonPress()
		{
		}
	}
}
