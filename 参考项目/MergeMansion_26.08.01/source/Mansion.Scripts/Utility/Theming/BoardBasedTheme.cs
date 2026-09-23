using System;
using Merge;
using UI.Shop;
using UnityEngine;

namespace Utility.Theming
{
	public class BoardBasedTheme : IShopTheme
	{
		[NonSerialized]
		public readonly MergeBoardId mergeBoardId;

		[NonSerialized]
		public readonly ThemingUtility themingUtility;

		public GameObject HeaderPrefab => null;

		public ShopCategoryTitle TitlePrefab => null;

		public BoardBasedTheme(MergeBoardId mergeBoardId, ThemingUtility themingUtility)
		{
		}
	}
}
