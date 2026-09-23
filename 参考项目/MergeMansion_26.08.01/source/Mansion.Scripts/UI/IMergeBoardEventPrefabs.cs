using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI
{
	public interface IMergeBoardEventPrefabs
	{
		AssetReferenceT<GameObject> MergeBoardBackground { get; }
	}
}
