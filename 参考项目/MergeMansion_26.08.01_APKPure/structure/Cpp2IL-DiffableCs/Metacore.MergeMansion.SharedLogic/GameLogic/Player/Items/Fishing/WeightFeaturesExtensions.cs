namespace GameLogic.Player.Items.Fishing;

[Extension]
public static class WeightFeaturesExtensions
{

	[Extension]
	public static F32 GenerateRandomWeightGivenWeightCategory(IWeightFeatures weightFeatures, IFishingSettings fishingSettings, WeightCategory weightCategory, RandomPCG random, IItemDefinition rodItem) { }

	[Extension]
	public static F32 GenerateWeightGivenWeightCategory(IWeightFeatures weightFeatures, IFishingSettings fishingSettings, WeightCategory weightCategory, F32 sizePercentageOffset, IItemDefinition rodItem) { }

	private static ValueTuple<F32, F32> GetMinAndMaxSizePercentagesForWeightCategory(IFishingSettings fishingSettings, WeightCategory weightCategory, IItemDefinition rodItem) { }

	[Extension]
	public static WeightCategory GetWeightCategoryGivenWeight(IWeightFeatures weightFeatures, IFishingSettings fishingSettings, F32 weight, IItemDefinition rodItem) { }

	[Extension]
	public static F32 GetWeightGivenPercentage(IWeightFeatures weightFeatures, int percentage) { }

	[Extension]
	public static bool TryGetStarReward(IWeightFeatures weightFeatures, int starIndex, out IWeightStarRewardData starReward) { }

}

