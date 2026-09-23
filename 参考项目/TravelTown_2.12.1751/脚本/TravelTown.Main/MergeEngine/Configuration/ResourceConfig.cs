using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using Merger.Rewards.Interfaces;
using Sirenix.OdinInspector;
using Tools.Attributes;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration
{
	[Serializable]
	[CreateAssetMenu(fileName = "ResourceConfig.asset", menuName = "Game/Resource Config")]
	public class ResourceConfig : SerializedScriptableObject
	{
		[NonEmpty]
		public List<ResourceDefinition> ResourceDefinitions;

		public int FreeEnergyRefillCount;

		public List<ResourceReplenishment> Replenishments;

		[NonSerialized]
		public Dictionary<string, ResourceDefinition> _resourceDefinitionsDictionary;

		public ResourceDefinition GetDefinition(string resource)
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

		public string GetResourceSpriteTag(IRewardType rewardType)
		{
			return null;
		}

		public IMergeGraphItem GetResourceGraph(string resource)
		{
			return null;
		}

		public bool IsResourceDefinitionsNotValid(List<ResourceDefinition> resources)
		{
			return false;
		}
	}
}
