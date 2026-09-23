using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Newtonsoft.Json;
using Sirenix.OdinInspector;
using Tools.Attributes;
using UnityEngine;

namespace MergeEngine.Configuration
{
	[BakedConfiguration("Assets/Configuration/LocalMergeItemsConfig.asset", "Assets/Scripts/MergeEngine/Configuration/Baked/BakedLocalMergeItemsConfig.cs")]
	[CreateAssetMenu(fileName = "LocalMergeItemsConfig", menuName = "Game/Local Merge Items Config")]
	public sealed class LocalMergeItemsConfig : SerializedScriptableObject
	{
		[ConstructorParameter(1)]
		[JsonProperty("localItemNames")]
		[SerializeField]
		public List<string> _localItemNames;

		[SerializeField]
		public string _prefix;

		[NonSerialized]
		public HashSet<string> _localItemNamesHashSet;

		public HashSet<string> LocalItemNamesHashSet => null;

		public LocalMergeItemsConfig(List<string> localItemNames)
		{
		}

		public void OnEnable()
		{
		}

		public bool IsLocalItem(string itemName)
		{
			return false;
		}

		public ReadOnlyCollection<string> GetLocalItemNames()
		{
			return null;
		}

		public void ValidatePrefixes()
		{
		}

		public string MakeTextureName(string texName)
		{
			return null;
		}
	}
}
