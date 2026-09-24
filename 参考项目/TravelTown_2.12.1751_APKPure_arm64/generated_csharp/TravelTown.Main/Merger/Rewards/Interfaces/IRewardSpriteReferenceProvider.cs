using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Merger.Rewards.Interfaces
{
	public interface IRewardSpriteReferenceProvider
	{
		string[] SpriteReferenceRewardTypes { get; }

		AssetReferenceT<Sprite> GetRewardSpriteReference(string rewardType, string uniqueId);
	}
}
