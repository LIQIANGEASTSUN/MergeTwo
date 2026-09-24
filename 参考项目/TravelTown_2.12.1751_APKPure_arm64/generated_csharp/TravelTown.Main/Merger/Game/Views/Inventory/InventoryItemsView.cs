using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Signal.Inventory;
using MergeEngine.Signal.Items;
using Merger.Game.ViewModel;
using Merger.Game.Views.Components;
using Merger.Game.Views.Data;
using UnityEngine;

namespace Merger.Game.Views.Inventory
{
	public class InventoryItemsView : BaseInventoryTabContentView<InventoryItemsViewModel>
	{
		[SerializeField]
		public GameObject _inventoryItemPrefab;

		[SerializeField]
		public GameObject _buySlotPrefab;

		[NonSerialized]
		public List<InventoryItemSlotView> _slots;

		[NonSerialized]
		public IInventoryViewRefresher _inventoryViewRefresher;

		[NonSerialized]
		public BuyInventorySlotView _buySlotView;

		public override int ItemsCount => 0;

		public override void Awake()
		{
		}

		public override void OnDestroy()
		{
		}

		public void ShowInventory()
		{
		}

		public void UpdateBuySlot()
		{
		}

		public void RepopulateInventory()
		{
		}

		public void ClearInventory()
		{
		}

		public void BuyInventorySlotButtonClicked()
		{
		}

		public void InfoRequested(IMergeItem mergeItem, string itemUUID)
		{
		}

		public void TryRemoveItem(int slotIndex)
		{
		}

		public void InventoryStateUpdated(InventoryStateUpdatedSignal signal)
		{
		}

		public void ItemRetrievedFromInventory(ItemRemovedFromInventorySignal signal)
		{
		}

		public void FailedToRemoveItemFromInventorySignalFired(FailedToRemoveItemFromInventorySignal signal)
		{
		}

		public void ShowFloatingTextOnInventorySlot(int slotIndex, FloatingTextType floatingTextType)
		{
		}
	}
}
