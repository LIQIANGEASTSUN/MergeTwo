using System;
using MergeEngine.Model;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class ResourceIconMapping
	{
		public PlayerResourceEnum Resource;

		public AssetReferenceAtlasedSprite Icon;
	}
}
