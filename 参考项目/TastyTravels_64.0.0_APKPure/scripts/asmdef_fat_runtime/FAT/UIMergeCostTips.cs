using System;
using FAT.Merge;
using IFix.Core;
using UnityEngine;

namespace FAT
{
	public class UIMergeCostTips : UIBase, INavBack
	{
		[SerializeField]
		public Transform panelRoot;

		[SerializeField]
		public UIOutsideCheckDown outsideCheckDown;

		[NonSerialized]
		public bool _hasListened;

		[NonSerialized]
		public UIMergeCostTipsData _uiData;

		[NonSerialized]
		public Vector3 _panelDefaultScale;

		[NonSerialized]
		public MBTapCostItems _tapCostItems;

		public MBTapCostItems TapCostItems => null;

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

		public override void OnParse(params object[] items)
		{
		}

		public override void OnPreOpen()
		{
		}

		public override void OnPostClose()
		{
		}

		public void OnNavBack()
		{
		}

		public void AddDragMsgListener()
		{
		}

		public void RemoveDragMsgListener()
		{
		}

		public void OnDragItem(Vector2 pos, Item item)
		{
		}

		public void Refresh(bool reCount = true)
		{
		}

		public void ResetPosition()
		{
		}

		public void PlayShowEffect()
		{
		}

		public void PlayHideEffect()
		{
		}

		public void RecycleUIData()
		{
		}

		public void OnOutsideClose()
		{
		}

		[IDTag(1)]
		public static void ShowTips(Item selectedItem)
		{
		}

		[IDTag(0)]
		public static void ShowTips(UIMergeCostTipsData data)
		{
		}

		public static bool TryShowTips(Item selectedItem)
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnParse(object[] P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPreOpen()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostClose()
		{
		}
	}
}
