using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Code.GameLogic.Config;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Navigation;
using UI;
using UnityEngine;

namespace Metacore.MergeMansion
{
	public abstract class BoardEventCard<T> : MonoBehaviour, IBoardEventCard where T : MetaActivableState
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CPollRequirements_003Ed__19 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken cancellationToken;

			public IHasRequirement requirements;

			public BoardEventCard<T> _003C_003E4__this;

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
		public struct _003CPollStart_003Ed__18 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BoardEventCard<T> _003C_003E4__this;

			public CancellationToken cancellationToken;

			[NonSerialized]
			public IMetaActivableInfo _003CcastedInfo_003E5__2;

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
		public struct _003CTimerRotation_003Ed__20 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken cancellationToken;

			public BoardEventCard<T> _003C_003E4__this;

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

		public const int TimerRotationDelay = 3000;

		[Header("Common References")]
		[SerializeField]
		public BoardEventCardCommonReferences _commonReferences;

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public T _eventModel;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public INavigationController _navigationController;

		[NonSerialized]
		public IActionsExecutor _actionsExecutor;

		[NonSerialized]
		public BoardViewEventHandler _eventHandler;

		[NonSerialized]
		public MetaTime? _endingSoonActivationTime;

		[NonSerialized]
		public bool _endingSoonActive;

		public virtual bool IsVisibleOnTheSideBoards => false;

		public bool IsActive => false;

		public bool IsStartingSoon => false;

		public RectTransform RectTransform => null;

		public CanvasGroup CanvasGroup => null;

		public BoardEventCardState CurrentState { get; set; }

		public int StaticPriority { get; set; }

		public IPrioritizedEvent EventInfo { get; set; }

		public virtual bool UpdateAfterEveryBoardAct => false;

		public bool IsCardVisible => false;

		public void Initialize(PlayerModel playerModel, Option<T> eventModel, IPrioritizedEvent prioritizedEvent, IMenuController menu, IBoardEventCardProvider<T> cardProvider, BoardViewEventHandler eventHandler, INavigationController navigationController, IActionsExecutor actionsExecutor)
		{
		}

		public void HideElements()
		{
		}

		[AsyncStateMachine(typeof(BoardEventCard<>._003CPollStart_003Ed__18))]
		public UniTask PollStart(CancellationToken cancellationToken)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(BoardEventCard<>._003CPollRequirements_003Ed__19))]
		public UniTask PollRequirements(IHasRequirement requirements, CancellationToken cancellationToken)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(BoardEventCard<>._003CTimerRotation_003Ed__20))]
		public UniTask TimerRotation(CancellationToken cancellationToken)
		{
			return default(UniTask);
		}

		public void OnEnable()
		{
		}

		public virtual void InnerInitialize()
		{
		}

		public abstract void OnTap();

		public abstract BoardEventCardState InnerUpdateState();

		public void SetRedDotIndicatorValue(bool value)
		{
		}

		public void SetCallToActionButton(Action onClick)
		{
		}

		public bool UpdateState()
		{
			return false;
		}

		public virtual void Dispose()
		{
		}

		public void OnTapBase()
		{
		}

		public BoardEventCard()
		{
		}
	}
}
