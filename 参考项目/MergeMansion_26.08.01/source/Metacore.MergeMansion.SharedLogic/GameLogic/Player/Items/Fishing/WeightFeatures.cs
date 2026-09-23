using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Fishing
{
	[MetaSerializable]
	public class WeightFeatures : IWeightFeatures
	{
		public static readonly WeightFeatures NoWeightFeatures;

		[IgnoreDataMember]
		IReadOnlyList<IWeightStarRewardData> IWeightFeatures.StarRewards => null;

		[IgnoreDataMember]
		IReadOnlyList<PlayerReward> IWeightFeatures.WorldRecordRewards => null;

		[IgnoreDataMember]
		IReadOnlyDictionary<WeightCategory, SplashType> IWeightFeatures.SplashTypesByWeightCategory => null;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool HasWeight { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 MinWeight { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public F32 MaxWeight { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int FramesItem { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public F32 WorldRecordWeightThreshold { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public StoryDefinitionId WorldRecordWeightDialogue { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> WorldRecordRewards { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public MetaDictionary<WeightCategory, SplashType> SplashTypesByWeightCategory { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public FishRarity FishRarity { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public List<WeightStarRewardData> StarRewards { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public LuckyType LuckyType { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public SubjectType SubjectType { get; set; }

		public WeightFeatures()
		{
		}

		public WeightFeatures(bool hasWeight, F32 minWeight, F32 maxWeight, int framesItem, F32 worldRecordWeightThreshold, StoryDefinitionId worldRecordWeightDialogue, IEnumerable<PlayerReward> worldRecordRewards, MetaDictionary<WeightCategory, SplashType> splashTypesByWeightCategory, FishRarity fishRarity, List<WeightStarRewardData> starRewards, LuckyType luckyType, SubjectType subjectType)
		{
		}

		public static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
