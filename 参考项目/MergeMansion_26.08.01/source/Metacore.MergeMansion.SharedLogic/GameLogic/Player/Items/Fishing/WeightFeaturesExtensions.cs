using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Fishing
{
	public static class WeightFeaturesExtensions
	{
		public static F32 GenerateRandomWeightGivenWeightCategory(this IWeightFeatures weightFeatures, IFishingSettings fishingSettings, WeightCategory weightCategory, RandomPCG random, IItemDefinition rodItem)
		{
			return default(F32);
		}

		public static F32 GenerateWeightGivenWeightCategory(this IWeightFeatures weightFeatures, IFishingSettings fishingSettings, WeightCategory weightCategory, F32 sizePercentageOffset, IItemDefinition rodItem)
		{
			return default(F32);
		}

		public static WeightCategory GetWeightCategoryGivenWeight(this IWeightFeatures weightFeatures, IFishingSettings fishingSettings, F32 weight, IItemDefinition rodItem)
		{
			return default(WeightCategory);
		}

		public static (F32, F32) GetMinAndMaxSizePercentagesForWeightCategory(IFishingSettings fishingSettings, WeightCategory weightCategory, IItemDefinition rodItem)
		{
			return default((F32, F32));
		}

		public static F32 GetWeightGivenPercentage(this IWeightFeatures weightFeatures, int percentage)
		{
			return default(F32);
		}

		public static bool TryGetStarReward(this IWeightFeatures weightFeatures, int starIndex, out IWeightStarRewardData starReward)
		{
			starReward = null;
			return false;
		}
	}
}
