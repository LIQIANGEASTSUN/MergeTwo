using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Animations.Flying;
using Audio;
using GameLogic.Config;
using GameLogic.Inventory;
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
	public class RentableInventoryContainer : MonoBehaviour
	{
		[CompilerGenerated]
		public sealed class _003CRefreshLayoutDelayed_003Ed__47 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public RentableInventoryContainer _003C_003E4__this;

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
			public _003CRefreshLayoutDelayed_003Ed__47(int _003C_003E1__state)
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
		public RectTransform containerRect;

		[SerializeField]
		public GameObject itemsContainer;

		[SerializeField]
		public RentableInventoryItemFrame itemFramePrefab;

		[SerializeField]
		public Transform itemFrameContainer;

		[SerializeField]
		public ExtraInventoryFlyItemsToPocketSequence flyItemsToPocketSequence;

		[SerializeField]
		public TextMeshProUGUI description;

		[SerializeField]
		public Image buyButtonIcon;

		[SerializeField]
		public TextMeshProUGUI buyButtonLabel;

		[SerializeField]
		public GameObject buyButtonContainer;

		[SerializeField]
		public TimerControl timer;

		[SerializeField]
		public GameObject purchaseContainer;

		[SerializeField]
		public GameObject timerContainer;

		[NonSerialized]
		public readonly List<RentableInventoryItemFrame> instantiatedItemFrames;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public PlayerModel playerModel;

		[NonSerialized]
		public PlayerClientContext playerContext;

		[NonSerialized]
		public INavigationController navigationController;

		[NonSerialized]
		public IFlightControl flightControl;

		[NonSerialized]
		public IAudioPlayer Audio;

		[NonSerialized]
		public IBoardInventory inventory;

		[NonSerialized]
		public RentableInventorySettings settings;

		[NonSerialized]
		public Action onLayoutChangeCallback;

		[NonSerialized]
		public Action onBatchBoughtCallback;

		[NonSerialized]
		public bool isTimeoutCalled;

		public void Initialize(IMenuController menuController, PlayerModel playerModel, PlayerClientCache playerClientCache, PlayerClientContext playerContext, IBoardInventory inventory, MergeBoard targetBoard, Action<InventoryItemFrame, MergeBoard> moveItemToBoard, INavigationController navigationController, IFlightControl flightControl, IAudioPlayer audioPlayer, Action onLayoutChangeCallback, Action onBatchBoughtCallback)
		{
		}

		public void TearDown()
		{
		}

		public void StartTimer(bool forceUpdate)
		{
		}

		public void StopTimer()
		{
		}

		public bool IsInventoryExpired()
		{
			return false;
		}

		public void UpdateDynamicElements()
		{
		}

		public void InitializeGeneric(IMenuController menuController, PlayerClientContext playerContext, INavigationController navigationController, IFlightControl flightControl, IAudioPlayer audioPlayer)
		{
		}

		public void InstantiatePurchaseSlots()
		{
		}

		public void InstantiateItemFramesEmpty(int count, bool isLocked, bool isPurchaseSlot)
		{
		}

		public void InstantiateItemFramesFromInventory(PlayerModel playerModel, PlayerClientCache playerClientCache, IBoardInventory inventory, MergeBoard targetBoard, IMergeMansionGameConfig gameConfig, Action<InventoryItemFrame, MergeBoard> moveItemToBoard)
		{
		}

		public RentableInventoryItemFrame InstantiateItemFrame()
		{
			return null;
		}

		public void DestroyExpiredItemFrames()
		{
		}

		public void DestroyInstantiatedItemFrames()
		{
		}

		public void OnTimeout()
		{
		}

		public void LockItems()
		{
		}

		public void DisableItemFrameInputs()
		{
		}

		public void OnFlyItemsToPocketComplete()
		{
		}

		[PublicAPI]
		public void InfoButtonClicked()
		{
		}

		[PublicAPI]
		public void PurchaseSlotsButtonClicked()
		{
		}

		public void TryPurchaseSlots()
		{
		}

		public void UnlockItems()
		{
		}

		public void ClearPurchaseFrames()
		{
		}

		public void OpenPurchasePopup()
		{
		}

		[IteratorStateMachine(typeof(_003CRefreshLayoutDelayed_003Ed__47))]
		public IEnumerator RefreshLayoutDelayed()
		{
			return null;
		}
	}
}
