using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MergePuzzle
{
	public class InventoryCell : MonoBehaviour
	{
		[HideInInspector]
		public bool IsLocked;

		[HideInInspector]
		public int Index;

		[HideInInspector]
		public int UnlockGemPrice;

		public Image SlotImage;

		public Image Shelf;

		public Image ItemImage;

		public Transform BuyNewSlot;

		public TextMeshProUGUI SlotPrice;

		public Button InfoButton;

		public Button Parent;

		[SerializeField]
		public Transform CellParent;

		[SerializeField]
		public GameObject ItemParent;

		[SerializeField]
		public GameObject SpawnerParent;

		[SerializeField]
		public TextMeshProUGUI UnlockText;

		[SerializeField]
		public Image SpawnerImage;

		[NonSerialized]
		public ItemEntity _itemEntity;

		[NonSerialized]
		public BoardItemData _boardItemData;

		[NonSerialized]
		public BoardEntity _boardEntity;

		[NonSerialized]
		public EventEntity _eventEntity;

		[NonSerialized]
		public InventoryPopup _inventoryPopup;

		[NonSerialized]
		public bool _shelfActive;

		[NonSerialized]
		public bool _spawnerInventory;

		[NonSerialized]
		public int _cellIndex;

		public void OnInventoryCellClick()
		{
		}

		public bool IsLockedAndIsLast()
		{
			return false;
		}

		public void OnInventoryInfoClick()
		{
		}

		public void Initialize(BoardEntity boardEntity, ItemEntity itemEntity, BoardItemData boardItemData, EventEntity eventEntity, InventoryPopup inventoryPopup, int index)
		{
		}

		public void InitializeRegular(BoardData boardData, BoardEntity boardEntity, ItemEntity itemEntity, BoardItemData boardItemData, bool isLocked, int index, int unlockGemPrice, EventEntity eventEntity, InventoryPopup inventoryPopup)
		{
		}

		public void InitializeSpawner(BoardEntity boardEntity, ItemEntity itemEntity, BoardItemData boardItemData, ItemLinkModel link, int index, EventEntity eventEntity, InventoryPopup inventoryPopup)
		{
		}

		public InventoryEntity GetInventoryEntity()
		{
			return null;
		}

		public void UpdateUI()
		{
		}

		public void SetItemParent(bool isEnabled)
		{
		}

		public void SetSpawnerParent(bool isEnabled)
		{
		}

		public void OnDestroy()
		{
		}
	}
}
