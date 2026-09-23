using System;
using Framework.Localisation;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using MergeEngine.Model;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration
{
	[Serializable]
	public class ResourceDefinition
	{
		public PlayerResourceEnum Resource;

		[LocalisationIdentifier]
		public string Name;

		public AssetReferenceAtlasedSprite Icon;

		[SerializeField]
		public MergeGraphItemWeakReference _graph;

		public IMergeGraphItem Graph => null;
	}
}
