using System.Collections.Generic;
using GameCore.Model;
using MergeEngine.Configuration;
using MergeEngine.Service.GenericTokens.Data;
using Merger.Rewards.Interfaces;
using PlatformSupport.Collections.ObjectModel;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Model
{
	public interface IResourcesConfigurationModel : IResourcesConfigurationModelBase
	{
		int FreeEnergyRefillCount { get; }

		ResourceConfig ResourceConfig { get; }

		ObservableDictionary<IRewardType, AssetReferenceT<Sprite>> ResourceIcons { get; }

		IMergeGraphItem GetResourceGraph(string resource);

		void AddResourceIconOverride(IRewardType rewardType, AssetReferenceT<Sprite> iconSprite);

		void RemoveResourceIconOverride(IRewardType rewardType);

		List<IRewardType> AllGenericTokenIds();

		bool IsGenericToken(IRewardType uniqueId);

		GenericTokenConfig GetGenericTokenConfig(IRewardType uniqueId);

		void SetupSpriteAssetsForTokens();
	}
}
