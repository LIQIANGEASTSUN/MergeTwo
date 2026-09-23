using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Capabilities;
using Merger.Game.ItemInfoData;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration
{
	public interface IItem : IUniqueStringKeyAsset
	{
		string ItemName { get; }

		string BundleAssetUrl { get; }

		AssetReferenceT<Sprite> Sprite { get; }

		BoardQueueOrderCapability BoardQueueOrder { get; }

		IItemInfoData ItemInfoData { get; set; }

		bool AutoOpenTooltip { get; set; }
	}
}
