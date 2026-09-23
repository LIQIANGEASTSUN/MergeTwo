using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration.Capabilities
{
	public class VisualCapability
	{
		public AssetReferenceT<Sprite> Sprite { get; }

		public VisualCapability(AssetReferenceT<Sprite> sprite)
		{
		}
	}
}
