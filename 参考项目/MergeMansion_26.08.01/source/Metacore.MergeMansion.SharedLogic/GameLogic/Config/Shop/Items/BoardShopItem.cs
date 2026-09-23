using Code.GameLogic.GameEvents;
using GameLogic.Config.Shop.PriceCurves;
using GameLogic.Config.Shop.PurchaseLimiters;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Shop;
using Merge;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Config.Shop.Items
{
	[MetaSerializableDerived(2)]
	[MetaBlockedMembers(new int[] { 1 })]
	public class BoardShopItem : IShopItem
	{
		[MetaMember(6, MetaMemberFlags.None)]
		public ShopItemId ShopItemId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixRef")]
		public ItemDef ItemDef { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public IPriceCurve PriceCurve { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public IPurchaseLimiter PurchaseLimiter { get; set; }

		public bool IsPurchasedWithAds { get; set; }

		public BoardShopItem()
		{
		}

		public BoardShopItem(ShopItemId shopItemId, int item, MergeBoardId mergeBoardId, IPriceCurve priceCurve, IPurchaseLimiter purchaseLimiter)
		{
		}

		public CheckBeforePurchase CallBeforePurchase(PlayerModel player)
		{
			return default(CheckBeforePurchase);
		}

		public void CallAfterPurchase(IPlayer player, AnalyticsContext sourceContext)
		{
		}

		public int GetAmountsLeft(IPlayer player)
		{
			return 0;
		}

		public (Currencies, long) GetPrice(IPlayer player)
		{
			return default((Currencies, long));
		}

		public ((Currencies, long), ProgressionEventPerkContext) GetPriceAndPerkContext(IPlayer player)
		{
			return default(((Currencies, long), ProgressionEventPerkContext));
		}

		public (EnergyType, int, int) GetBonusEnergy(IPlayer player)
		{
			return default((EnergyType, int, int));
		}

		public IItemDefinition PurchasedItem(IPlayer player)
		{
			return null;
		}

		public string PurchasedItemTypeForAnalytics(IPlayer player)
		{
			return null;
		}

		public bool CanBePurchased(IPlayer player)
		{
			return false;
		}

		public IPurchaseLimiter GetPurchaseLimiter()
		{
			return null;
		}

		public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
