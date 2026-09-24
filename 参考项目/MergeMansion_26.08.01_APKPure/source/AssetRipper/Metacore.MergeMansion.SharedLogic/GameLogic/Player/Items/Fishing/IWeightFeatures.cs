using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Fishing
{
	public interface IWeightFeatures
	{
		bool HasWeight { get; }

		F32 MinWeight { get; }

		F32 MaxWeight { get; }

		int FramesItem { get; }

		F32 WorldRecordWeightThreshold { get; }

		StoryDefinitionId WorldRecordWeightDialogue { get; }

		IReadOnlyList<PlayerReward> WorldRecordRewards { get; }

		IReadOnlyDictionary<WeightCategory, SplashType> SplashTypesByWeightCategory { get; }

		FishRarity FishRarity { get; }

		IReadOnlyList<IWeightStarRewardData> StarRewards { get; }

		LuckyType LuckyType { get; }

		SubjectType SubjectType { get; }
	}
}
