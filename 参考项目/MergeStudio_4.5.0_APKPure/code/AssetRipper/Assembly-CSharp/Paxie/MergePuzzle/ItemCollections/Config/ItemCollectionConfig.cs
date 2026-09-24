using System.Collections.Generic;
using DG.Tweening;
using MergePuzzle;
using UnityEngine;

namespace Paxie.MergePuzzle.ItemCollections.Config
{
	[CreateAssetMenu(fileName = "MetaData", menuName = "Scriptable/Meta/ItemCollectionData", order = 1)]
	public class ItemCollectionConfig : FeatureConfigBase
	{
		[Header("Auto Scroll")]
		public float AutoScrollInitialWait;

		public float AutoScrollTabChangeDelay;

		public float AutoScrollSpeed;

		[Tooltip("Pixel speed per second for absolute position scrolling (used in popup)")]
		public float AutoScrollPixelSpeed;

		public Ease AutoScrollEase;

		public float AutoScrollDelayAfterCollect;

		[Header("Tab Sprites")]
		public List<Sprite> ItemCollectionTabSprites;

		[Header("Item IDs")]
		public List<BoardItemCollectionData> ItemCollectionTabList;

		[Header("Exception Items")]
		public List<ItemInfo> AlwaysDiscoveryItems;
	}
}
