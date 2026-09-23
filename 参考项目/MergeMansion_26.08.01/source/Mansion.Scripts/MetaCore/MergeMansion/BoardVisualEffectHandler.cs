using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Merge;
using Metacore.MergeMansion.Common.Rollbacks;
using UI;
using UnityEngine;

namespace Metacore.MergeMansion
{
	public class BoardVisualEffectHandler
	{
		[Serializable]
		[ForceExplicitEnumValues]
		public enum BoardVisualEffectType
		{
			OnFire = 0
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CAddEffectAsync_003Ed__11 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BoardVisualEffectHandler _003C_003E4__this;

			public BoardVisualEffectType visualEffectType;

			[NonSerialized]
			public UniTask<Metacore.MergeMansion.Common.Options.Unity.UnityOption<BoardVisualEffectConfig>>.Awaiter _003C_003Eu__1;

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
		public struct _003CInitialize_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public BoardVisualEffectHandler _003C_003E4__this;

			[NonSerialized]
			public UniTask<Metacore.MergeMansion.Common.Options.Unity.UnityOption<BoardVisualEffectConfig>[]>.Awaiter _003C_003Eu__1;

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
		public BoardVisualEffectConfigLibrary _configLibrary;

		[NonSerialized]
		public IBoardController _boardController;

		[NonSerialized]
		public Transform _boardForegroundEffectContainer;

		[NonSerialized]
		public Transform _boardBackgroundEffectContainer;

		[NonSerialized]
		public ISafeRollback _rollback;

		[NonSerialized]
		public Dictionary<BoardVisualEffectType, List<GameObject>> _activeEffects;

		public BoardVisualEffectHandler(BoardVisualEffectConfigLibrary configLibrary, IBoardController boardController, Transform boardBackgroundEffectContainer, Transform boardForegroundEffectContainer, ISafeRollback rollback)
		{
		}

		public void Cleanup()
		{
		}

		public void OnBoardTransition(MenuStatus status)
		{
		}

		[AsyncStateMachine(typeof(_003CInitialize_003Ed__10))]
		public void Initialize()
		{
		}

		[AsyncStateMachine(typeof(_003CAddEffectAsync_003Ed__11))]
		public UniTask AddEffectAsync(BoardVisualEffectType visualEffectType)
		{
			return default(UniTask);
		}

		public void InstantiateEffect(BoardVisualEffectType visualEffectType, GameObject effect, Transform parent)
		{
		}

		public void RemoveEffect(BoardVisualEffectType visualEffectType)
		{
		}

		public void RemoveAllEffects()
		{
		}
	}
}
