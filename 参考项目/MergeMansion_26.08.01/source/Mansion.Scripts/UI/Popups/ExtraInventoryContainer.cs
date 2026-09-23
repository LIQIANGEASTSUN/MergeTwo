using System;
using System.Collections.Generic;
using Animations.Flying;
using Audio;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Board;
using JetBrains.Annotations;
using Metacore.MergeMansion.Utility;
using Navigation;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class ExtraInventoryContainer : MonoBehaviour
	{
		[SerializeField]
		public ExtraInventoryTimer timer;

		[SerializeField]
		public GameObject noPassDescriptionContainer;

		[SerializeField]
		public GameObject infoButton;

		[SerializeField]
		public TextMeshProUGUI noPassDescriptionText;

		[SerializeField]
		public GameObject itemsContainer;

		[SerializeField]
		public ProgressionEventInventoryItemFrame itemFramePrefab;

		[SerializeField]
		public Transform itemFrameContainer;

		[SerializeField]
		public ExtraInventoryFlyItemsToPocketSequence flyItemsToPocketSequence;

		[SerializeField]
		public GameObject passExpiredContainer;

		[SerializeField]
		public Image keyIconImage;

		[NonSerialized]
		public readonly List<ExtraInventoryItemFrame> instantiatedItemFrames;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public ProgressionEventModel eventModel;

		[NonSerialized]
		public PlayerClientContext playerContext;

		[NonSerialized]
		public INavigationController navigationController;

		[NonSerialized]
		public IFlightControl flightControl;

		[NonSerialized]
		public IAudioPlayer Audio;

		[NonSerialized]
		public IPlayer player;

		[NonSerialized]
		public Action _requestRebuild;

		public void InitializeLocked(IMenuController menuController, ProgressionEventModel eventModel, int count, IAudioPlayer audioPlayer, Action requestRebuild)
		{
		}

		public void InitializeFromInventory(IMenuController menuController, PlayerModel playerModel, PlayerClientCache playerClientCache, PlayerClientContext playerContext, ProgressionEventModel eventModel, IBoardInventory inventory, MergeBoard targetBoard, Action<InventoryItemFrame, MergeBoard> moveItemToBoard, INavigationController navigationController, IFlightControl flightControl, IAudioPlayer audioPlayer, Action requestRebuild)
		{
		}

		public void InitializeExpiredInventoryView(PlayerModel playerModel, PlayerClientCache playerClientCache, ProgressionEventModel timerEventModel, IBoardInventory inventory, MergeBoard targetBoard)
		{
		}

		public void TearDown()
		{
		}

		public void InitializeGeneric(IMenuController menuController, ProgressionEventModel eventModel, PlayerClientContext playerContext, INavigationController navigationController, IFlightControl flightControl, IAudioPlayer audioPlayer, IPlayer player, Action requestRebuild)
		{
		}

		public void InstantiateItemFramesLocked(int count)
		{
		}

		public void InstantiateItemFramesFromInventory(PlayerModel playerModel, PlayerClientCache playerClientCache, IBoardInventory inventory, MergeBoard targetBoard, IMergeMansionGameConfig gameConfig, Action<InventoryItemFrame, MergeBoard> moveItemToBoard)
		{
		}

		public ProgressionEventInventoryItemFrame InstantiateItemFrame()
		{
			return null;
		}

		public void DestroyInstantiatedItemFrames()
		{
		}

		public void OnTimeout()
		{
		}

		public void DisableItemFrameInputs()
		{
		}

		public void OnFlyItemsToPocketComplete()
		{
		}

		public void OpenPurchasePassPopup()
		{
		}

		[PublicAPI]
		public void InfoButtonClicked()
		{
		}
	}
}
