using System;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Utility;
using UI.Tooltips;
using UnityEngine;

namespace UI.Popups
{
	public class RentableInventoryItemFrame : ExtraInventoryItemFrame
	{
		[SerializeField]
		public RectTransform rect;

		[SerializeField]
		public GameObject cornerLock;

		[SerializeField]
		public GameObject bigLock;

		[SerializeField]
		public TooltippedObject tooltippedObject;

		public bool IsPurchaseSlot { get; set; }

		public void InitializeFromItem(PlayerModel player, PlayerClientCache playerClientCache, MergeItem item, IBoardInventory inventory, MergeBoard targetBoard, bool isLocked, bool isPurchaseSlot, Action<InventoryItemFrame, MergeBoard> moveItemToBoard)
		{
		}

		public void InitializeEmpty(bool isLocked, bool isPurchaseSlot, Action handleClick)
		{
		}

		public void SetAsLast()
		{
		}

		public override void SetLocked(bool locked)
		{
		}
	}
}
