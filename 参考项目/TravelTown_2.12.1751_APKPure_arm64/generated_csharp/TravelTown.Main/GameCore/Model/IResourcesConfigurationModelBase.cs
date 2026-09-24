using Merger.Rewards.Interfaces;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace GameCore.Model
{
	public interface IResourcesConfigurationModelBase
	{
		AssetReferenceT<Sprite> GetResourceIcon(IRewardType rewardType);

		string GetResourceName(IRewardType resource);

		string GetResourceSpriteTag(IRewardType resource);
	}
}
