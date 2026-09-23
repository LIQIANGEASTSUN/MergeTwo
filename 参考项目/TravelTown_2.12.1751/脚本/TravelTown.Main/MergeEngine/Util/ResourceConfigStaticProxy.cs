using System;
using Merger.Rewards.Interfaces;
using PlatformSupport.Collections.ObjectModel;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Util
{
	public static class ResourceConfigStaticProxy
	{
		public static ObservableDictionary<IRewardType, AssetReferenceT<Sprite>> ResourceIcons;

		public static Func<IRewardType, AssetReferenceT<Sprite>> GetResourceIcon;

		public static Func<IRewardType, string> GetResourceName;
	}
}
