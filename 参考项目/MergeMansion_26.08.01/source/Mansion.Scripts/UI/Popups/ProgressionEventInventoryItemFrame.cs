using System;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Utility;
using UnityEngine;

namespace UI.Popups
{
	public class ProgressionEventInventoryItemFrame : ExtraInventoryItemFrame
	{
		[SerializeField]
		public GameObject track1Locked;

		public void InitializeLocked(Action handleClick, ProgressionEventTrack track)
		{
		}

		public new void InitializeFromItem(MergeItem item, IBoardInventory inventory, MergeBoard targetBoard, Action<InventoryItemFrame, MergeBoard> moveItemToBoard, PlayerModel player, PlayerClientCache playerClientCache)
		{
		}

		public new void InitializeEmpty()
		{
		}

		public void SetLocked(ProgressionEventTrack track)
		{
		}

		public void SetUnlocked()
		{
		}
	}
}
