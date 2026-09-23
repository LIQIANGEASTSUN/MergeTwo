using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using GameLogic;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.UI.GarageCleanupEvent;
using Navigation;
using UI;
using UI.GameEvents;
using UnityEngine;
using UnityEngine.UI;

namespace Metacore.MergeMansion
{
	public class BoardViewEventHandler : MonoBehaviour
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CPerformAnimation_003Ed__83<T> : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BoardViewEventHandler _003C_003E4__this;

			public CancellationToken token;

			public Func<T, CancellationToken, UniTask> innerAnimation;

			public T param;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CPerformEndingAnimation_003Ed__85 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public IBoardEventCard card;

			public BoardViewEventHandler _003C_003E4__this;

			public CancellationToken token;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CPerformSortingAnimation_003Ed__84 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BoardViewEventHandler _003C_003E4__this;

			public CancellationToken token;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		public const int VISIBLE_CARDS_IN_DEFAULT_STATE = 2;

		public const string TRIGGER_OPEN_GARAGE = "open_garage";

		public const string TRIGGER_PRIORITY_CHANGE = "priority_change";

		[Header("Self References")]
		[SerializeField]
		public RectTransform _transform;

		[Header("Layout Configuration")]
		[SerializeField]
		public float _paddingLeft;

		[SerializeField]
		public float _spacing;

		[SerializeField]
		public float _paddingRight;

		[SerializeField]
		public float _extraPaddingInDefaultState;

		[Header("Animation Configuration")]
		[SerializeField]
		public int _delayBeforeSorting;

		[SerializeField]
		public int _delayBeforeClosing;

		[SerializeField]
		public float _orderingSpeed;

		[SerializeField]
		public float _movingSpeed;

		[SerializeField]
		public float _sortScaleChange;

		[SerializeField]
		public float _disappearScale;

		[SerializeField]
		public float _disappearAlpha;

		[SerializeField]
		public float _disappearFirstPhaseTime;

		[SerializeField]
		public float _disappearMovementAmount;

		[SerializeField]
		public float _disappearSecondPhaseTime;

		[SerializeField]
		public AnimationCurve _ease;

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public BoardViewEventHandlerContext _context;

		[NonSerialized]
		public INavigationController _navigationController;

		[NonSerialized]
		public IActionsExecutor _actionsExecutor;

		[NonSerialized]
		public ScrollRect _tasksScrollRect;

		[NonSerialized]
		public RectTransform _resourcesPosition;

		[NonSerialized]
		public readonly List<IBoardEventCard> _sortedCards;

		[NonSerialized]
		public readonly Dictionary<IPrioritizedEvent, IBoardEventCard> _cardMap;

		[NonSerialized]
		public readonly HashSet<IBoardEventCard> _prioritizedCards;

		[NonSerialized]
		public readonly List<IBoardEventCard> _updateAfterEveryBoardAct;

		[NonSerialized]
		public float _lastScrollPosition;

		[NonSerialized]
		public Sequence _tweenSequence;

		[NonSerialized]
		public bool _requiresBoardActUpdate;

		[NonSerialized]
		public int _animationCounter;

		public bool IsVisible => false;

		public bool HasEvent => false;

		public IBoardEventCard GetFirstCard => null;

		public void Initialize(PlayerModel playerModel, IMenuController menuController, BoardViewEventHandlerContext context, INavigationController navigationController, ScrollRect tasksScrollRect, RectTransform resourcesPosition, IActionsExecutor actionsExecutor)
		{
		}

		public void Show(bool showForEventBoards = false)
		{
		}

		public void Hide()
		{
		}

		public Option<IBoardEventCard> GetCard(IPrioritizedEvent identifier)
		{
			return default(Option<IBoardEventCard>);
		}

		public void ScrollToCard(IBoardEventCard card, out float duration)
		{
			duration = default(float);
		}

		public Option<T> GetTarget<T>(SpawnTargetContext type) where T : IBoardEventCard
		{
			return default(Option<T>);
		}

		public void SetDefaultPosition()
		{
		}

		public void OnDestroy()
		{
		}

		public void Poll()
		{
		}

		public void OnBoardActs()
		{
		}

		public void OnBoardAct()
		{
		}

		public void UpdateCardsAfterBoardAct()
		{
		}

		public void OnMenuVisibilityChange(bool isMenuOpen)
		{
		}

		public void TryLoadEvent(IPrioritizedEvent info)
		{
		}

		public void TryRemoveEvent(IPrioritizedEvent info, bool animate = true)
		{
		}

		public void OnEventsChanged<T>(IReadOnlyCollection<T> addedEvents, IReadOnlyCollection<T> removedEvents) where T : IPrioritizedEvent
		{
		}

		public void RegisterEventListeners()
		{
		}

		public void UnregisterEventListeners()
		{
		}

		public void OnCbeEventAdded(CollectibleBoardEventPrefabs prefabLibrary, CollectibleBoardEventInfo eventInfo)
		{
		}

		public void OnCbeEventRemoved(CollectibleBoardEventInfo eventInfo)
		{
		}

		public void OnLbeEventAdded(LeaderboardEventPrefabs prefabLibrary, LeaderboardEventInfo eventInfo)
		{
		}

		public void OnLbeEventRemoved(LeaderboardEventInfo eventInfo)
		{
		}

		public void OnGcEventLoaded(GarageCleanupEventPrefabs prefabs, GarageCleanupEventInfo info)
		{
		}

		public void OnGcEventRemoved(GarageCleanupEventInfo info)
		{
		}

		public void OnBLEVisibleEventsChanged()
		{
		}

		public void ResetComponent()
		{
		}

		public float GetSize()
		{
			return 0f;
		}

		public void UpdateCardPositions()
		{
		}

		public void SetComponentSize(float size)
		{
		}

		public void UpdateComponent()
		{
		}

		public float GetDefaultPosition()
		{
			return 0f;
		}

		public void SetLastPositionWithTween()
		{
		}

		public void SetScrolledPositionWithTween()
		{
		}

		public void SetToPositionWithTween(float targetPosition, out float duration)
		{
			duration = default(float);
		}

		public float GetCardPositionByPriority(int cardPriorityOrder)
		{
			return 0f;
		}

		public float GetCardPositionByOrder(int order)
		{
			return 0f;
		}

		public void SortCards()
		{
		}

		public void UpdateCards()
		{
		}

		public bool UpdateCardsForPrioritySorting(IEnumerable<IBoardEventCard> cardCollection)
		{
			return false;
		}

		public float PerformPrioritySorting()
		{
			return 0f;
		}

		public float AnimateCardSorting()
		{
			return 0f;
		}

		public Vector3 GetTokenFlyPosition(IBoardEventCard card)
		{
			return default(Vector3);
		}

		public void UpdateCardForPriorityChanges(IBoardEventCard card)
		{
		}

		[AsyncStateMachine(typeof(_003CPerformAnimation_003Ed__83<>))]
		public UniTask PerformAnimation<T>(Func<T, CancellationToken, UniTask> innerAnimation, T param, CancellationToken token)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CPerformSortingAnimation_003Ed__84))]
		public UniTask PerformSortingAnimation(object mock, CancellationToken token)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CPerformEndingAnimation_003Ed__85))]
		public UniTask PerformEndingAnimation(IBoardEventCard card, CancellationToken token)
		{
			return default(UniTask);
		}

		public void SendPriorityChangeAnalytics(string trigger)
		{
		}
	}
}
