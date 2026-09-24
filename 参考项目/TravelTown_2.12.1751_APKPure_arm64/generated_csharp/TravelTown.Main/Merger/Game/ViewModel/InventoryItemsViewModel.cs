using System;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.Model;
using Merger.VirtualPurchases.Services;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.Game.ViewModel
{
	public class InventoryItemsViewModel : GameBaseViewModel
	{
		[Inject]
		[NonSerialized]
		public IInventoryModel _inventoryModel;

		[Inject]
		[NonSerialized]
		public IVirtualPurchasesService _virtualPurchasesService;

		public int NumSlots => 0;

		public int NextSlotPrice => 0;

		public int MaxSlots => 0;

		public PlayerResourceEnum SlotPurchaseResource => default(PlayerResourceEnum);

		public InventorySystem _inventorySystem => null;

		public BoardSystem _boardSystem => null;

		public void TryRemoveItem(int slotIndex)
		{
		}

		public IMergeItem GetItem(int slotIndex)
		{
			return null;
		}

		public string GetItemUUID(int slotIndex)
		{
			return null;
		}

		public IPromise TryBuyInventorySlot()
		{
			return null;
		}

		public AssetReferenceT<Sprite> GetItemAsset(int slotIndex, InventorySlotType type)
		{
			return null;
		}
	}
}
