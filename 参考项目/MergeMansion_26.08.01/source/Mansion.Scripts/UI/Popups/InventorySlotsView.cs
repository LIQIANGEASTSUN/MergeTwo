using System;
using System.Collections.Generic;
using Audio;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Utility;
using UnityEngine;

namespace UI.Popups
{
	public class InventorySlotsView : MonoBehaviour
	{
		[SerializeField]
		public InventoryItemFrame itemFramePrefab;

		[SerializeField]
		public Transform itemContainer;

		[NonSerialized]
		public readonly List<InventoryItemFrame> instantiatedItems;

		[NonSerialized]
		public readonly List<InventoryItemFrame> instantiatedEmptySlots;

		[NonSerialized]
		public readonly List<InventoryItemFrame> teasedProdInventorySlots;

		[NonSerialized]
		public readonly List<InventoryItemFrame> unlockableProdInventorySlots;

		[NonSerialized]
		public readonly List<ProducerInventorySlotConfig> newlySeenProdInventorySlots;

		[NonSerialized]
		public InventoryItemFrame instantiatedBuyNewSlot;

		[NonSerialized]
		public PlayerModel player;

		[NonSerialized]
		public PlayerClientCache _playerClientCache;

		[NonSerialized]
		public IBoardInventory inventory;

		[NonSerialized]
		public int inventoryTypeFlag;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public IAudioPlayer audioPlayer;

		[NonSerialized]
		public PlayerClientContext playerContext;

		[NonSerialized]
		public MergeBoard board;

		[NonSerialized]
		public Action<InventoryItemFrame, MergeBoard> moveItemToBoard;

		public void Initialize(PlayerModel player, PlayerClientCache playerClientCache, IBoardInventory inventory, int inventoryTypeFlag, IMenuController menuController, IAudioPlayer audioPlayer, PlayerClientContext playerContext, MergeBoard board, Action<InventoryItemFrame, MergeBoard> moveItemToBoard, bool withAnimation)
		{
		}

		public void TearDown()
		{
		}

		public static void TearDownInstantiatedItemFrames(List<InventoryItemFrame> itemFrames)
		{
		}

		public void DestroyBuyNewSlotIfExists()
		{
		}

		public void SetupItems(bool withAnimation)
		{
		}

		public void SetupLimitedSlots(bool withAnimation)
		{
		}

		public void SetupEmptySlots(bool withAnimation)
		{
		}

		public void SetupBuyNewSlot(bool withAnimation)
		{
		}

		public void SetupTeasedSlots(bool withAnimation)
		{
		}

		public void AddItem(MergeItem item, bool withAnimation)
		{
		}

		public void AddEmptySlot(bool withAnimation, bool withParticles)
		{
		}

		public void AddBuyNewSlot(bool withAnimation)
		{
		}

		public void ProcessBuySlot()
		{
		}

		public void ProcessUnlockSlot(ProducerInventorySlotConfig producerInventorySlot, InventoryItemFrame itemFrame)
		{
		}

		public void UpdateSlotPrice()
		{
		}

		public (Currencies, long) GetSlotPrice()
		{
			return default((Currencies, long));
		}

		public bool TryRefreshSeenProducerInventorySlots()
		{
			return false;
		}
	}
}
