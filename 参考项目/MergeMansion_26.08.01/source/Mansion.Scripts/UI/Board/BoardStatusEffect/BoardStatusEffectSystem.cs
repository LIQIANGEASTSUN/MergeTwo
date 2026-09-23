using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Config.Types;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.SystemGroups;

namespace UI.Board.BoardStatusEffect
{
	public class BoardStatusEffectSystem : ITickSystem
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CAddEffectAsync_003Ed__22 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BoardStatusEffectSystem _003C_003E4__this;

			public BoardStatusEffectType effectType;

			public MetacoreTime effectStartTime;

			public MetacoreTime effectEndTime;

			[NonSerialized]
			public UniTask<Metacore.MergeMansion.Common.Options.Unity.UnityOption<BoardStatusEffectConfig>>.Awaiter _003C_003Eu__1;

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
		public struct _003CAddOrUpdateEffectAsync_003Ed__21 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BoardStatusEffectSystem _003C_003E4__this;

			public BoardStatusEffectType effectType;

			public MetacoreTime effectStartTime;

			public MetacoreTime effectEndTime;

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
		public struct _003CInitialize_003Ed__19 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public BoardStatusEffectSystem _003C_003E4__this;

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
		public struct _003CLoadConfig_003Ed__20 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BoardStatusEffectSystem _003C_003E4__this;

			public BoardStatusEffectType effectType;

			public CancellationToken cancellationToken;

			[NonSerialized]
			public UniTask<Metacore.MergeMansion.Common.Options.Unity.UnityOption<BoardStatusEffectConfig>>.Awaiter _003C_003Eu__1;

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

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public BoardStatusEffectConfigLibrary _configLibrary;

		[NonSerialized]
		public BoardStatusEffectContainer _boardEffectContainer;

		[NonSerialized]
		public BoardStatusEffectContainer _mansionUIEffectContainer;

		[NonSerialized]
		public IBoardController _boardController;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public Dictionary<BoardStatusEffectType, BoardStatusActiveEffect> _activeEffects;

		[NonSerialized]
		public BoardStatusEffectType[] _allEffectTypes;

		[NonSerialized]
		public CancellationTokenSource _cts;

		[NonSerialized]
		public readonly ISafeRollback _rollback;

		public static BoardStatusEffectSystem Instance => null;

		public event Action<BoardStatusEffectType> OnStatusEffectConfigLoaded
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public BoardStatusEffectSystem(PlayerModel playerModel, BoardStatusEffectConfigLibrary configLibrary, IBoardController boardController, IMenuController menuController, BoardStatusEffectContainer boardEffectContainer, BoardStatusEffectContainer mansionUIEffectContainer, ISafeRollback rollback)
		{
		}

		public void OnMenuVisibilityChanged(bool isVisible)
		{
		}

		public void Cleanup()
		{
		}

		public void Tick()
		{
		}

		[AsyncStateMachine(typeof(_003CInitialize_003Ed__19))]
		public void Initialize()
		{
		}

		[AsyncStateMachine(typeof(_003CLoadConfig_003Ed__20))]
		public UniTask LoadConfig(BoardStatusEffectType effectType, CancellationToken cancellationToken)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CAddOrUpdateEffectAsync_003Ed__21))]
		public UniTask AddOrUpdateEffectAsync(BoardStatusEffectType effectType, MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CAddEffectAsync_003Ed__22))]
		public UniTask AddEffectAsync(BoardStatusEffectType effectType, MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
			return default(UniTask);
		}

		public void AddOrUpdateEffectIfLoaded(BoardStatusEffectType effectType, MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
		}

		public void AddEffectIfLoaded(BoardStatusEffectType effectType, MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
		}

		public bool IsEffectConfigLoaded(BoardStatusEffectType effectType)
		{
			return false;
		}

		public void AddEffectInternal(BoardStatusEffectType effectType, MetacoreTime effectStartTime, MetacoreTime effectEndTime, BoardStatusEffectConfig effectConfig)
		{
		}

		public void RemoveEffect(BoardStatusEffectType effectType)
		{
		}

		public void UpdateEffectTimes(BoardStatusEffectType effectType, MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
		}

		public void OnBoardTransition(MenuStatus status)
		{
		}

		public void RefreshContainersVisibility()
		{
		}

		public void ShowSlideOutAnimationsOnBoard()
		{
		}
	}
}
