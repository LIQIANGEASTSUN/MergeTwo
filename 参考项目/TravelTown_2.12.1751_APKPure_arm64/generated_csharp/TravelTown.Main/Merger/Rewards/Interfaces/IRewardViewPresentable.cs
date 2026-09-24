using Merger.Rewards.Enums;
using Merger.Rewards.Interfaces.Datas;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Merger.Rewards.Interfaces
{
	public interface IRewardViewPresentable : IRewardData
	{
		RewardViewPresentationType PresentationType { get; }

		AssetReferenceT<Sprite> SpriteReference { get; }
	}
}
