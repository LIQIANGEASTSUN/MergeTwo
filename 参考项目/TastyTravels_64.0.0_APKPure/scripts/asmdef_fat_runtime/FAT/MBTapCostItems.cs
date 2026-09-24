using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBTapCostItems : MonoBehaviour
	{
		[SerializeField]
		public Transform itemRoot;

		[SerializeField]
		public GameObject itemPrefab;

		[Header("棋子是否可点击")]
		public TapCostItemClickType itemClickType;

		[Header("棋子是否显示数量")]
		public bool itemDisplayCount;

		[Header("棋子计数数量来源")]
		public TapCostItemCountSources itemCountSources;

		[Header("Item多个时切换时间")]
		public float switchTime;

		[Header("Item出现动效类型")]
		public TapCostItemSwitchType itemShowType;

		[Header("Item出现动效时间")]
		public float itemShowDuration;

		[Header("Item出现动画曲线")]
		public AnimationCurve itemShowCurve;

		[Header("Item消失动效类型")]
		public TapCostItemSwitchType itemHideType;

		[Header("Item消失动效时间")]
		public float itemHideDuration;

		[Header("Item出现动画曲线")]
		public AnimationCurve itemHideCurve;

		[NonSerialized]
		public float _count;

		[NonSerialized]
		public int _displayIndex;

		[NonSerialized]
		public List<int> _displayItems;

		[NonSerialized]
		public Board _listenedBoard;

		public Transform ItemRoot => null;

		public void Awake()
		{
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void OnDestroy()
		{
		}

		public void Update()
		{
		}

		public void Refresh(List<int> displayItems, bool resetCount = true)
		{
		}

		public void RefreshAllItems()
		{
		}

		public void SwitchDisplayItem()
		{
		}

		public UICommonItem GetOrCreateItem(int index)
		{
			return null;
		}

		public void DoItemEffect(Transform go, bool show)
		{
		}

		public void DoDisplayItem(Transform go, bool show)
		{
		}

		public void ResetItem(Transform go)
		{
		}

		public void ClearAllItemTween()
		{
		}

		public void RefreshBoardItemCountListener()
		{
		}

		public void RemoveBoardItemCountListener()
		{
		}

		public void OnBoardItemCountMayChange(Item item)
		{
		}

		public void OnBoardItemStateMayChange(Item item, ItemStateChangeContext context)
		{
		}

		public bool TryRefreshItems(Item item)
		{
			return false;
		}

		public int GetItemDisplayCount(int itemId)
		{
			return 0;
		}
	}
}
