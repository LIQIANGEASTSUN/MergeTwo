using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.IAP;
using GameLogic.Config.Shop.Items;
using GameLogic.Config.Shop.PriceCurves;
using GameLogic.Config.Shop.PurchaseLimiters;
using GameLogic.Player;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Player;

namespace GameLogic.Config.Shop
{
	public class ShopItemInfoSource : IConfigItemSource<ShopItemInfo, ShopItemId>, IGameConfigSourceItem<ShopItemId, ShopItemInfo>, IHasGameConfigKey<ShopItemId>
	{
		public int ExperimentPriority { get; set; }

		public ShopItemId ShopItemId { get; set; }

		public ShopCategoryId ShopCategory { get; set; }

		public string Type { get; set; }

		public MetaRef<InAppProductInfo> InAppProduct { get; set; }

		public string Item { get; set; }

		public long Quantity { get; set; }

		public MergeBoardId BoardId { get; set; }

		public string PurchaseLimitType { get; set; }

		public int MaxPurchases { get; set; }

		public string PriceCurveType { get; set; }

		public Currencies PriceCurveCurrency { get; set; }

		public F64 PriceCurveMax { get; set; }

		public F64 PriceCurveBase { get; set; }

		public F64 PriceCurveIncrement { get; set; }

		public List<string> RequirementType { get; set; }

		public List<string> RequirementId { get; set; }

		public List<string> RequirementAmount { get; set; }

		public List<string> RequirementAux0 { get; set; }

		public int PurchaseLimitTimeAmount { get; set; }

		public string PurchaseLimitAux0 { get; set; }

		public List<MetaRef<PlayerSegmentInfoBase>> Segments { get; set; }

		public bool IsUnderMore { get; set; }

		public bool ForWebshop { get; set; }

		public bool Disabled { get; set; }

		public ShopItemId ConfigKey => null;

		public ShopItemInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public IShopItem ConstructItem()
		{
			return null;
		}

		public IPriceCurve ConstructPriceCurve(IPurchaseLimiter purchaseLimiter)
		{
			return null;
		}

		public IPurchaseLimiter ConstructPurchaseLimiter(EnergyType energyType)
		{
			return null;
		}
	}
}
