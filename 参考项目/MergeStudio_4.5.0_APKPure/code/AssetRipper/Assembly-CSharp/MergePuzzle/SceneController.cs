using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Paxie;
using Paxie.MergeStudio.GameCore.Gameplay;
using Paxie.MergeStudio.Master.Popup;
using Paxie.MergeStudio.Master.ScreenNavigator;

namespace MergePuzzle
{
	public class SceneController : BaseSubscriber, IEventReceiver<EntityUpdateEvent.SaveBoard>, IEventReceiverBase, IEventReceiver<EntityUpdateEvent.InventoryUpdated>, IEventReceiver<BoardEvent.SellItemTrial>, IEventReceiver<BoardEvent.RevertMove>, IEventReceiver<BoardEvent.BoardItemPositionUpdateStart>, IEventReceiver<BoardEvent.RemoveItemViaSellComplete>, IEventReceiver<BoardEvent.BoardItemRemoveFinished>, IEventReceiver<BoardEvent.BubbleDestroyed>, IEventReceiver<BoardEvent.JellyDestroyed>
	{
		public enum State
		{
			NON_INITIALIZED = 0,
			GAMEPLAY_ACTIVE = 1,
			GAMEPLAY_PAUSED = 2,
			TUTORIAL = 3
		}

		[CompilerGenerated]
		public sealed class _003CProcessBackDelayed_003Ed__66 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public SceneController _003C_003E4__this;

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
			public _003CProcessBackDelayed_003Ed__66(int _003C_003E1__state)
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

		[NonSerialized]
		public CameraController _cameraController;

		[NonSerialized]
		public MetaContextService _metaContextService;

		[NonSerialized]
		public GameplayContextService _GameplayContextService;

		[NonSerialized]
		public BoardController _boardController;

		[NonSerialized]
		public GameplayNonScaledCanvasView _gameplayNonScaledCanvasView;

		[NonSerialized]
		public MetaOverlayCanvasController _metaOverlayCanvasController;

		[NonSerialized]
		public DefaultPopupScreenController _defaultPopupScreenController;

		[NonSerialized]
		public HeightScaledPopupScreenController _heightScaledPopupScreenController;

		[NonSerialized]
		public MasterPopupService _masterPopupService;

		[NonSerialized]
		public PopupScreenParent _popupScreen;

		[NonSerialized]
		public ScreenNavigator _screenNavigator;

		[NonSerialized]
		public GameplayScaledCanvasView _gameplayScaledCanvasView;

		public static SceneController _instance;

		public State _gameState;

		public GameplayContextService GameplayContextService => null;

		public GameplayScaledCanvasView GameplayScaledCanvasView => null;

		public GameplayNonScaledCanvasView GameplayNonScaledCanvasView => null;

		public PopupScreenParent PopupScreenParent => null;

		public ScreenNavigator ScreenNavigator => null;

		public BoardController BoardController => null;

		public CameraController CameraController => null;

		public MetaContextService MetaContextService => null;

		public MetaOverlayCanvasController MetaOverlayCanvasController => null;

		public DefaultPopupScreenController DefaultPopupScreenController => null;

		public HeightScaledPopupScreenController HeightScaledPopupScreenController => null;

		public MasterPopupService MasterPopupService => null;

		public State GameStatus => default(State);

		public static SceneController Instance
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public override void Awake()
		{
		}

		public override void OnDestroy()
		{
		}

		public override void UpdateTick()
		{
		}

		public bool SeasonPassAvailableForBoard()
		{
			return false;
		}

		public bool GetSeasonPassBadgeStatus(BoardData boardData, BoardTaskItem boardTaskItem)
		{
			return false;
		}

		public void CheckBackClick()
		{
		}

		public override void UpdatePlayingTick(float elapsedTime)
		{
		}

		public override void UpdatePausedTick(float elapsedTime)
		{
		}

		public override void UpdateTutorialTick(float elapsedTime)
		{
		}

		public void OnEvent(EntityUpdateEvent.SaveBoard e)
		{
		}

		public void OnEvent(EntityUpdateEvent.InventoryUpdated e)
		{
		}

		public override void OnEvent(CanvasEvent.TutorialScreenStatusChange e)
		{
		}

		public override void OnEvent(CanvasEvent.GameplayStatusUpdate e)
		{
		}

		public void OnEvent(BoardEvent.SellItemTrial e)
		{
		}

		public void OnEvent(BoardEvent.RevertMove e)
		{
		}

		public void OnEvent(BoardEvent.BoardItemPositionUpdateStart e)
		{
		}

		public void OnEvent(BoardEvent.RemoveItemViaSellComplete e)
		{
		}

		public void OnEvent(BoardEvent.BoardItemRemoveFinished e)
		{
		}

		public void OnEvent(BoardEvent.BubbleDestroyed e)
		{
		}

		public void OnEvent(BoardEvent.JellyDestroyed e)
		{
		}

		public void SendBoardItemStatusChange()
		{
		}

		public void ProcessBackClick()
		{
		}

		[IteratorStateMachine(typeof(_003CProcessBackDelayed_003Ed__66))]
		public IEnumerator ProcessBackDelayed()
		{
			return null;
		}

		public virtual MetaContextService GetMainMenuController()
		{
			return null;
		}

		public GameplayContextService GetGameplayContextService()
		{
			return null;
		}

		public BoardController GetBoardController()
		{
			return null;
		}

		public virtual CameraController GetCameraController()
		{
			return null;
		}

		public GameplayNonScaledCanvasView GetNonScaledCanvasController()
		{
			return null;
		}

		public MetaOverlayCanvasController GetMetaOverlayCanvasController()
		{
			return null;
		}

		public DefaultPopupScreenController GetDefaultPopupScreenController()
		{
			return null;
		}

		public HeightScaledPopupScreenController GetHeightScaledPopupScreenController()
		{
			return null;
		}

		public MasterPopupService GetMasterPopupController()
		{
			return null;
		}

		public PopupScreenParent GetPopupScreenParent()
		{
			return null;
		}

		public ScreenNavigator GetScreenNavigator()
		{
			return null;
		}

		public GameplayScaledCanvasView GetGameplayCanvasView()
		{
			return null;
		}
	}
}
