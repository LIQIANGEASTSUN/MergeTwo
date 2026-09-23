using MergeEngine.Configuration.Shop;

namespace MergeEngine.Model
{
	public static class PlayerResourceEnumExtensions
	{
		public static readonly PlayerResourceEnum[] ActiveTools;

		public static bool IsTool(this PlayerResourceEnum resource)
		{
			return false;
		}

		public static string ConvertToString(this PlayerResourceEnum resource)
		{
			return null;
		}

		public static bool IsEnergy(this PlayerResourceEnum resource)
		{
			return false;
		}

		public static ShopCategoryItemType GetShopCategoryType(this PlayerResourceEnum resource)
		{
			return default(ShopCategoryItemType);
		}

		public static string GetSpriteName(this PlayerResourceEnum resource)
		{
			return null;
		}

		public static bool IsBoardEventResource(this PlayerResourceEnum resource)
		{
			return false;
		}
	}
}
