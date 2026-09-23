using System;
using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using GameCore.Model;
using MergeEngine.Configuration;
using MergeEngine.Service.GenericTokens.Data;
using Merger.Rewards.Interfaces;
using PlatformSupport.Collections.ObjectModel;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Model
{
	public class ResourcesConfigurationModel : ModelBase, IResourcesConfigurationModel, IResourcesConfigurationModelBase
	{
		[NonSerialized]
		public ResourceConfig _resourceConfig;

		[NonSerialized]
		public readonly Dictionary<string, TMP_SpriteAsset> _genericTokenSpriteAssets;

		[NonSerialized]
		public readonly Dictionary<IRewardType, GenericTokenConfig> _genericTokenConfigs;

		[NonSerialized]
		public readonly ObservableDictionary<IRewardType, AssetReferenceT<Sprite>> _iconsOverride;

		public ResourceConfig ResourceConfig => null;

		public ObservableDictionary<IRewardType, AssetReferenceT<Sprite>> ResourceIcons => null;

		public int FreeEnergyRefillCount => 0;

		public override void InitializeModel()
		{
		}

		public override void DisposeModel()
		{
		}

		public void ResourceConfigLoaded(ResourceConfig resourceConfig)
		{
		}

		public void AddResourceIconOverride(IRewardType resource, AssetReferenceT<Sprite> iconSprite)
		{
		}

		public void RemoveResourceIconOverride(IRewardType resource)
		{
		}

		public string GetResourceSpriteTag(IRewardType rewardType)
		{
			return null;
		}

		public AssetReferenceT<Sprite> GetResourceIcon(IRewardType rewardType)
		{
			return null;
		}

		public string GetResourceName(IRewardType rewardType)
		{
			return null;
		}

		public IMergeGraphItem GetResourceGraph(string resource)
		{
			return null;
		}

		public List<IRewardType> AllGenericTokenIds()
		{
			return null;
		}

		public bool IsGenericToken(IRewardType rewardType)
		{
			return false;
		}

		public GenericTokenConfig GetGenericTokenConfig(IRewardType rewardType)
		{
			return null;
		}

		public void SetupSpriteAssetsForTokens()
		{
		}

		public void SetupGenericTokens(BalanceConfigResponse configGenericTokens)
		{
		}

		public void LoadTokenSpriteAsset(GenericTokenConfig token)
		{
		}

		public AssetReferenceT<Sprite> GetGenericTokenIcon(IRewardType rewardType)
		{
			return null;
		}

		public void ClearGenericTokenSprites()
		{
		}

		public string GetGenericTokenLocalisationId(IRewardType rewardType)
		{
			return null;
		}
	}
}
