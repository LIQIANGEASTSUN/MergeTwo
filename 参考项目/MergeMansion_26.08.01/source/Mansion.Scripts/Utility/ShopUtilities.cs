using System;
using System.Collections.Generic;
using GameLogic.Config.Shop;
using GameLogic.Player;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using UI.Popups.Shop;
using UnityEngine;

namespace Utility
{
	public static class ShopUtilities
	{
		public static IShopItemEntry GetFlashSaleInformation(PlayerModel playermodel, IItemDefinition requiredItem)
		{
			return null;
		}

		public static void OnDirectFlashSalePurchase(PlayerModel playerModel, IShopItemEntry shopItemEntry, Vector3 itemPosition, Action finalizeAction, string flashSaleContext)
		{
		}

		public static void OnFlashSalePurchaseCompleted(PlayerModel playerModel, IShopItemEntry shopItemEntry, Vector3 itemPosition, Action finalizeAction)
		{
		}

		public static void PurchaseFlowDone(Action finalizeAction)
		{
		}

		public static IEnumerable<IShopItemEntry> ConvertToShopItemEntries(IEnumerable<IShopItemInfo> shopItemInfos)
		{
			return null;
		}

		public static void OnFlashSalePurchaseFailed(MetaActionResult result, (Currencies currency, long price) price)
		{
		}

		public static void PurchaseFlashSaleOffer(PlayerModel playerModel, IShopItemInfo itemInfo, int? slotId, Guid impressionId, OfferPlacementId placementId, Action onComplete, Action<MetaActionResult> onFailure, string flashSaleContext)
		{
		}

		public static MergeBoardId GetShopMergeBoardId(IPlayer player)
		{
			return null;
		}

		public static bool IsItemChainInGarageFlashSales(IPlayer player, IItemDefinition item)
		{
			return false;
		}

		public static bool IsItemInGarageFlashSales(IPlayer player, IItemDefinition item)
		{
			return false;
		}
	}
}
