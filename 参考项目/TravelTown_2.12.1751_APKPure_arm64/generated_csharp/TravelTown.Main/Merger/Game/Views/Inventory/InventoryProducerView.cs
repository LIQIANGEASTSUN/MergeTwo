using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Signal.Inventory;
using MergeEngine.Signal.Items;
using Merger.Game.ViewModel;
using UnityEngine;

namespace Merger.Game.Views.Inventory
{
	public class InventoryProducerView : BaseInventoryTabContentView<InventoryProducerViewModel>
	{
		[SerializeField]
		public GameObject _inventoryProducerPrefab;

		[SerializeField]
		public int _lockedSlotsCount;

		[NonSerialized]
		public List<InventoryProducerSlotView> _slots;

		public override int ItemsCount => 0;

		public override void Awake()
		{
		}

		public override void OnDestroy()
		{
		}

		public void OnEnable()
		{
		}

		public void ShowInventory()
		{
		}

		public void DecorateSlotWithUnlockText(InventoryProducerSlotView producerSlotView, int i)
		{
		}

		public void ClearInventory()
		{
		}

		public void InfoRequested(IMergeItem mergeItem)
		{
		}

		public void TryRemoveItem(int slotIndex)
		{
		}

		public void ItemRetrievedFromInventory(ItemRemovedFromInventorySignal signal)
		{
		}

		public void FailedToRemoveItemFromInventorySignalFired(FailedToRemoveItemFromInventorySignal signal)
		{
		}
	}
}
