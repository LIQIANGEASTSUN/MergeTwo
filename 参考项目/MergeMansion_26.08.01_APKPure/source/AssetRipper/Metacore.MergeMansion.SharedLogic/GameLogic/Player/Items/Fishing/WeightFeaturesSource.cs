using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Player.Items.Production;
using GameLogic.Story;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Fishing
{
	public class WeightFeaturesSource : IItemConfigPart<WeightFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public F32 MaxWeight;

		public string FramesItem;

		public F32 WorldRecordWeightThreshold;

		public StoryDefinitionId WorldRecordWeightDialogue;

		public FishRarity FishRarity;

		public SplashType SmallSizeSplash;

		public SplashType MediumSizeSplash;

		public SplashType LargeSizeSplash;

		public List<string> WorldRecordRewardType { get; set; }

		public List<string> WorldRecordRewardId { get; set; }

		public List<int> WorldRecordRewardAmount { get; set; }

		public List<string> WorldRecordRewardAux0 { get; set; }

		public List<string> WorldRecordRewardAux1 { get; set; }

		public List<F32> StarRewardWeights { get; set; }

		public List<string> StarRewardType { get; set; }

		public List<string> StarRewardId { get; set; }

		public List<int> StarRewardAmount { get; set; }

		public List<string> StarRewardAux0 { get; set; }

		public List<string> StarRewardAux1 { get; set; }

		public LuckyType LuckyType { get; set; }

		public SubjectType SubjectType { get; set; }

		public string FishWeightCategoryOddsOverrides { get; set; }

		public string FishWeightCategorySizePercentagesOverrides { get; set; }

		public string ConfigKey => null;

		public string ItemType => null;

		public WeightFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}

		public MetaDictionary<WeightCategory, SplashType> CreateSplashTypesByWeightCategory()
		{
			return null;
		}

		public List<WeightStarRewardData> CreateStarRewards(F32 minWeight)
		{
			return null;
		}
	}
}
