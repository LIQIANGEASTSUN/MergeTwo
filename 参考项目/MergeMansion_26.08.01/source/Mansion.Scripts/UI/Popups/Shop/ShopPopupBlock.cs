using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Common;
using GameLogic.Config.Shop;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Items;
using Metaplay.Core;
using Metaplay.Core.Offers;
using Pool;
using TMPro;
using UI.Shop;
using UnityEngine;
using Utility.Theming;

namespace UI.Popups.Shop
{
	public class ShopPopupBlock : ObjectPoolElement
	{
		[SerializeField]
		public ShopPopupBlockTitle titleBlock;

		[SerializeField]
		public ShopPopupBlockGrid gridBlock;

		[SerializeField]
		public TextMeshProUGUI errorContent;

		[SerializeField]
		public ShopPopupBlockRefresh blockRefresh;

		public ShopMenuContentBlock BlockType { get; set; }

		public OfferPlacementId OfferPlacementId { get; set; }

		public ShopPopupBlockGrid GridBlock => null;

		public MetaTime RefreshTime
		{
			set
			{
			}
		}

		public MetaTime EndTime
		{
			set
			{
			}
		}

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

		public void Initialize(ShopMenuContentBlock blockType, IPlayer player, IMenuController menuController, string blockTitleLocId, IEnumerable<IShopItemEntry> shopItems, List<IActiveOffer> offers, IShopTheme shopTheme, IUiServices uiServices, OfferPlacementId offerPlacementId)
		{
		}

		public void InitializeWithError(ShopMenuContentBlock blockType, string blockTitleLocId, string errorMessageLocId, IShopTheme shopTheme)
		{
		}

		public void InitializeGrid(IPlayer player, IMenuController menuController, IEnumerable<IShopItemEntry> shopItems, List<IActiveOffer> offers, IUiServices uiServices, OfferPlacementId offerPlacementId)
		{
		}

		public override void Decommission()
		{
		}

		public void InitializeRefreshSection(IPlayer player, IScheduler scheduler, OfferPlacementId offerPlacementId, ShopPopupBlockRefreshData data)
		{
		}

		public List<ShopEntryMergeBoardItem> GetItems()
		{
			return null;
		}
	}
}
