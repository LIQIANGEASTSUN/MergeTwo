using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using GameLogic.Player.Board;
using TMPro;
using UI;
using UI.Popups;
using UI.States;
using UI.Tabs;
using UI.Tooltips;
using UnityEngine;
using UnityEngine.UI;

public class InventoryPopup : PopupBase<InventoryPopupMenuState>, ITabs
{
	[Serializable]
	public struct BoardInventoryData
	{
		public InventorySlotsView SlotsView;

		public TabButton TabButton;

		public Transform TabButtonCenter;
	}

	[Serializable]
	public struct References
	{
		public GameObject popup;

		public Image blueOverlay;

		public TextMeshProUGUI headerLabel;

		public BoardInventoryData defaultInventoryData;

		public BoardInventoryData producerInventoryData;

		public RedDotIndicator producerInventoryRedDotIndicator;

		public RectTransform inventoriesContainer;

		public TextMeshProUGUI descriptionText;

		public ScrollRect scrollRect;

		public Transform extraInventoryParent;

		public ExtraInventoryContainer extraInventoryPrefab;

		public RentableInventoryContainer rentableInventoryContainer;

		public CanvasGroup extraInventoryCanvasGroup;

		public TextMeshProUGUI sortButtonText;
	}

	[CompilerGenerated]
	public sealed class _003CScrollToBottom_003Ed__42 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public InventoryPopup _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CScrollToBottom_003Ed__42(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[SerializeField]
	public References refs;

	[NonSerialized]
	public ExtraInventoryContainer extraInventoryInstance;

	[NonSerialized]
	public InventoryItemFrame buyNewSlot;

	[Header("Tween options")]
	[SerializeField]
	public float itemFlyTweenDuration;

	[SerializeField]
	public Ease itemFlyTweenEase;

	[NonSerialized]
	public TooltippedObject producerInventoryLockedTooltip;

	public override string MenuTag => null;

	public override GameObject Popup => null;

	public override Image BlueOverlay => null;

	public override ScrollRect ScrollRect => null;

	public override InventoryPopupMenuState MenuState { get; set; }

	public Transform ProducerInventoryButtonCenter => null;

	public override string SubSection => null;

	public override bool NeedsBlockingLayer()
	{
		return false;
	}

	public override bool DoesSupportHardwareBackButton()
	{
		return false;
	}

	public override void PopulateContent()
	{
	}

	public void RefreshSortButton()
	{
	}

	public void SetupBoardInventories(bool withAnimation)
	{
	}

	public void SetTab(int tabIndex)
	{
	}

	public void ToggleSortMode()
	{
	}

	public static int GetInventoryTypeFlagForTabIndex(int tabIndex)
	{
		return 0;
	}

	public void TabButtonClicked(int inventoryTypeFlag, bool forceRefresh)
	{
	}

	public override void DisposeContent(DisposeContentReason reason)
	{
	}

	public void OnRentableInventoryExpired()
	{
	}

	public void TryPutItemIntoBoard(InventoryItemFrame itemFrame, MergeBoard board)
	{
	}

	public void DestroyExtraInventory()
	{
	}

	public void DestroyRentableInventory()
	{
	}

	public void SetupProgressionEventExtraInventoryContainer()
	{
	}

	public void SetupRentableInventory()
	{
	}

	public void ForceLayoutRebuild()
	{
	}

	public void OnRentableInventoryBatchBought()
	{
	}

	[IteratorStateMachine(typeof(_003CScrollToBottom_003Ed__42))]
	public IEnumerator ScrollToBottom()
	{
		return null;
	}

	public void SetExtraInventoryAlpha(float alpha)
	{
	}

	public void DisplacePopupByExtraInventory(bool displace)
	{
	}

	public void PlayProducerInventoryUnlockAnimation()
	{
	}

	public void RefreshProducerInventoryIndicator(bool showIndicator)
	{
	}

	public override void CloseMenuButton()
	{
	}
}
