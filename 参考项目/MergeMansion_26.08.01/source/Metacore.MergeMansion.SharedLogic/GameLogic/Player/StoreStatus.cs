using System.Collections.Generic;
using Code.GameLogic.FlashSales;
using Code.GameLogic.IAP;
using GameLogic.Config.Types;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;

namespace GameLogic.Player
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[]
	{
		1, 2, 4, 5, 6, 7, 8, 10, 11, 12,
		13, 14, 17, 18, 19, 21, 22, 23, 26, 27,
		33
	})]
	public sealed class StoreStatus
	{
		[MetaSerializable]
		public class PurchaseHistory
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public long AllTimeTotal { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public List<PurchaseRecord> RecentRecords { get; set; }
		}

		[MetaSerializable]
		public class PurchaseRecord
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public MetaTime LastPurchase { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public long Quantity { get; set; }
		}

		[MetaSerializable]
		[MetaBlockedMembers(new int[] { 3 })]
		public class FlashSale
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public MetaDictionary<ShopItemId, int> ItemsAndAmounts { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public int BoughtRefreshes { get; set; }
		}

		public const int PurchaseHistoryLength = 30;

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaDictionary<int, int> currentFlashSaleItemsAndAmounts_deprecated;

		[MetaMember(9, MetaMemberFlags.None)]
		public List<int> CurrentShopItems_deprecated { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public long SeenShopOfferSet { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public long LastShopOfferSet { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public MetaDictionary<int, PurchaseHistory> RecordedPurchases_deprecated { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		public MetaTime? GarageShopLastOpened_DEPRECATED { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		public MetaDictionary<MergeBoardId, MetaTime> ShopLastOpenedTimes { get; set; }

		[MetaMember(28, MetaMemberFlags.None)]
		public MetaDictionary<string, int> OfferPopupTriggersActivatedTotal { get; set; }

		[MetaMember(29, MetaMemberFlags.None)]
		public int BoughtFlashSaleRefreshes_deprecated { get; set; }

		[MetaMember(30, MetaMemberFlags.None)]
		public MetaDictionary<OfferPlacementId, FlashSale> CurrentFlashSales { get; set; }

		[MetaMember(31, MetaMemberFlags.None)]
		public List<ShopItemId> CurrentShopItems { get; set; }

		[MetaMember(32, MetaMemberFlags.None)]
		public MetaDictionary<ShopItemId, PurchaseHistory> RecordedPurchases { get; set; }

		[MetaMember(34, MetaMemberFlags.None)]
		public MetaDictionary<ShopItemId, (int count, int chance)> FlashSaleSMETokensAttachments { get; set; }

		[MetaMember(35, MetaMemberFlags.None)]
		public MetaDictionary<MetaOfferGroupId, MetaTime> OfferPopupTriggersActivatedTimestamps { get; set; }

		[MetaMember(36, MetaMemberFlags.None)]
		public int OfferPopupTriggersActivatedSinceReset { get; set; }

		public Dictionary<string, int> OfferPopupTriggersActivatedThisSession { get; set; }

		public int GetSoloMilestoneTokenAttachmentChance(ShopItemId shopItemId)
		{
			return 0;
		}

		public IEnumerable<ShopItemId> GetCurrentFlashSaleItems(OfferPlacementId placementId)
		{
			return null;
		}

		public int GetBoughtFlashSaleRefreshes(OfferPlacementId placementId)
		{
			return 0;
		}

		public int GetCurrentFlashSaleBoughtAmount(ShopItemId shopItemId, OfferPlacementId placementId)
		{
			return 0;
		}

		public void CurrentFlashSaleBought(ShopItemId shopItemId, OfferPlacementId placementId)
		{
		}

		public void ResetFlashSaleBoughtAmount(OfferPlacementId placementId)
		{
		}

		public void ResetFlashSale(IEnumerable<FlashSaleDefinition> rolledOffers, OfferPlacementId placementId)
		{
		}

		public void SetFlashSales(IEnumerable<ShopItemId> shopItems, OfferPlacementId placementId)
		{
		}

		public void RemoveFlashSale(OfferPlacementId placementId)
		{
		}

		public void SetCurrentShopItems(IEnumerable<ShopItemId> items)
		{
		}

		public void SetShopOfferLastSeen()
		{
		}

		public bool ShouldShowShopOfferNotification()
		{
			return false;
		}

		public long TrackedItemPurchaseCount(ShopItemId shopItemId)
		{
			return 0L;
		}

		public IEnumerable<PurchaseRecord> TrackedItemPurchases(ShopItemId shopItemId)
		{
			return null;
		}

		public void TrackedItemRecordPurchase(ShopItemId shopItemId, MetacoreTime timestamp, long quantity = 1L)
		{
		}

		public void TrackedItemRecordPurchase(PurchaseHistory record, MetacoreTime timestamp, long quantity = 1L)
		{
		}

		public void TrackedItemErasePurchases(ShopItemId itemType)
		{
		}

		public IEnumerable<PurchaseRecord> PurchaseHistoryFor(ShopItemId shopItemId)
		{
			return null;
		}

		public int GetOfferPopupTriggerActivatedTotal(OfferPopupTriggerId triggerId, MetaOfferGroupId offerGroupId)
		{
			return 0;
		}

		public int GetOfferPopupTriggersActivatedThisSessionTotal()
		{
			return 0;
		}

		public MetaTime? GetOfferPopupTriggerTimestamp(MetaOfferGroupId offerGroupId)
		{
			return null;
		}

		public void ResetOfferPopupTriggersSinceReset()
		{
		}

		public bool HasHitOfferPopupLimit(IPlayer player)
		{
			return false;
		}

		public int GetOfferPopupTriggerActivatedThisSession(OfferPopupTriggerId triggerId, MetaOfferGroupId offerGroupId)
		{
			return 0;
		}

		public void SetOfferPopupTriggerTotalActivationCount(OfferPopupTriggerId triggerId, MetaOfferGroupId offerGroupId, int value)
		{
		}

		public void SetOfferPopupTriggerTimestamp(MetaOfferGroupId offerGroupId, MetacoreTime timestamp)
		{
		}

		public void SetOfferPopupTriggerThisSessionActivationCount(OfferPopupTriggerId triggerId, MetaOfferGroupId offerGroupId, int value)
		{
		}

		public string GetOfferPopupTriggerActivationId(OfferPopupTriggerId triggerId, MetaOfferGroupId offerGroupId)
		{
			return null;
		}

		public void SetShopLastOpened(MergeBoardId mergeBoardId, MetacoreTime time)
		{
		}

		public bool TryGetShopLastOpened(MergeBoardId mergeBoardId, out MetaTime shopLastOpened)
		{
			shopLastOpened = default(MetaTime);
			return false;
		}

		public void AddFlashSaleResetBuyCount(OfferPlacementId placementId)
		{
		}

		public void ResetFlashSaleAttachmentPlacements(OfferPlacementId placementId)
		{
		}
	}
}
