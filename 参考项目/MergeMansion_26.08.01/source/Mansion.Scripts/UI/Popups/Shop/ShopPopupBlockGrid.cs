using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using GameLogic.Config.Shop;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Items;
using Metaplay.Core.Offers;
using Pool;
using UI.Shop;
using UnityEngine;

namespace UI.Popups.Shop
{
	public class ShopPopupBlockGrid : MonoBehaviour
	{
		[SerializeField]
		public RectTransform gridBlock;

		[SerializeField]
		public ShopEntryIcon iconPrefab;

		[SerializeField]
		public ShopEntryMergeBoardItem boardItemPrefab;

		[SerializeField]
		public float spineBasedComponentLocalScale;

		[NonSerialized]
		public readonly List<(ShopItemId id, ShopEntryMergeBoardItem entry)> entryMergeBoardItems;

		[NonSerialized]
		public readonly List<(ShopItemId id, ShopEntryMergeBoardItem entry)> entryLeaderboardEventMergeBoardItems;

		[NonSerialized]
		public readonly List<(ShopItemId id, ShopEntryEnergyItem entry)> entryEnergyItems;

		[NonSerialized]
		public readonly List<(ShopItemId id, ShopEntryIcon entry)> entryIcons;

		[NonSerialized]
		public readonly List<(ShopItemId id, ShopEntryDiamondItem entry)> entryDiamondItems;

		[NonSerialized]
		public readonly List<(ShopItemId id, ShopEntryRewardContainerItem entry)> entryRewardContainerItems;

		public static GameObjectPoolManager PoolManager => null;

		public event Action<IPurchaseContext<IShopItemInfo>> EntryClicked
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

		public event Action<IPurchaseContext<IActiveOffer>> OfferEntryClicked
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

		public event Action<ItemDefinition> InfoRequested
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

		public void Initialize(IPlayer player, IMenuController menuController, IEnumerable<IShopItemEntry> shopItems, List<IActiveOffer> activeOffers, IUiServices uiServices, OfferPlacementId offerPlacementId)
		{
		}

		public void AddTransformToGridBlock(Transform targetTransform)
		{
		}

		public void TearDown()
		{
		}

		public void CreateIcon(IPlayer player, IMenuController menuController, IShopItemEntry itemEntry, IUiServices uiServices, OfferPlacementId offerPlacementId, int slotId, bool isShopDiscountBadgeEnabled, bool isRealMoneyDiscountBadgeEnabled)
		{
		}

		public void CreateIcon(IPlayer player, IActiveOffer itemEntry, IUiServices uiServices, bool isShopDiscountBadgeEnabled)
		{
		}

		public ShopEntryMergeBoardItem GetEntryMergeBoardItem(IPlayer player, IShopItemInfo shopItemInfo)
		{
			return null;
		}

		public ShopEntryMergeBoardItem GetEntryMergeBoardItem(ShopItemId shopItemId)
		{
			return null;
		}

		public static void ReturnEntryMergeBoardItem(ShopEntryMergeBoardItem entryMergeBoardItem)
		{
		}

		public ShopEntryMergeBoardItem GetEntryLeaderboardEventMergeBoardItem(ShopItemId shopItemId)
		{
			return null;
		}

		public static void ReturnEntryLeaderboardEventMergeBoardItem(ShopEntryMergeBoardItem entryLeaderboardEventMergeBoardItem)
		{
		}

		public ShopEntryEnergyItem GetEntryEnergyItem(ShopItemId shopItemId)
		{
			return null;
		}

		public static void ReturnEntryEnergyItem(ShopEntryEnergyItem entryEnergyItem)
		{
		}

		public ShopEntryIcon GetEntryIcon(ShopItemId shopItemId)
		{
			return null;
		}

		public static void ReturnEntryDiamondItem(ShopEntryDiamondItem diamondItem)
		{
		}

		public ShopEntryDiamondItem GetEntryDiamondItem(ShopItemId shopItemId)
		{
			return null;
		}

		public static void ReturnEntryIcon(ShopEntryIcon entryIcon)
		{
		}

		public ShopEntryRewardContainerItem GetEntryRewardContainerItem(ShopItemId shopItemId)
		{
			return null;
		}

		public static void ReturnEntryRewardContainerItem(ShopEntryRewardContainerItem entryMergeBoardItem)
		{
		}

		public ComponentType GetFromPool<ComponentType>(string poolTag, ShopItemId shopItemId, List<(ShopItemId, ComponentType)> list) where ComponentType : Component
		{
			return null;
		}

		public static void ReturnToPool<ComponentType>(string poolTag, ComponentType component, Action tearDown) where ComponentType : Component
		{
		}

		public MonoBehaviour TESTLOOM_GetEntry(ShopItemId shopItemId)
		{
			return null;
		}
	}
}
