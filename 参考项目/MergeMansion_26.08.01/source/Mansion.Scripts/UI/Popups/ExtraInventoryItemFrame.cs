using System;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using Metacore.MergeMansion.Utility;
using UnityEngine;

namespace UI.Popups
{
	public class ExtraInventoryItemFrame : MonoBehaviour
	{
		[SerializeField]
		public GameObject locked;

		[SerializeField]
		public GameObject unlocked;

		[SerializeField]
		public InventoryItemFrame frame;

		[NonSerialized]
		public Action handleClick;

		public GameObject InfoButtonGameObject => null;

		public InventoryItemFrame Frame => null;

		public bool IsLocked { get; set; }

		public IItemDefinition GetItemDefinition(IPlayer player)
		{
			return null;
		}

		public void OnDestroy()
		{
		}

		public void InitializeLocked(Action handleClick)
		{
		}

		public void InitializeFromItem(MergeItem item, IBoardInventory inventory, MergeBoard targetBoard, Action<InventoryItemFrame, MergeBoard> moveItemToBoard, PlayerModel player, PlayerClientCache playerClientCache)
		{
		}

		public void InitializeFromItem(MergeItem item, IBoardInventory inventory, PlayerModel player, PlayerClientCache playerClientCache)
		{
		}

		public void InitializeEmpty()
		{
		}

		public void DisableInput()
		{
		}

		public void Hide()
		{
		}

		public virtual void SetLocked(bool locked)
		{
		}

		[PublicAPI]
		public virtual void LockedClicked()
		{
		}
	}
}
