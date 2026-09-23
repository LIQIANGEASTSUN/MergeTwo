using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Merge;
using UnityEngine;

namespace Utility
{
	public static class BoardControllerUtilities
	{
		[CompilerGenerated]
		public sealed class _003CGetBoardItemIds_003Ed__2 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public int _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IBoardController boardController;

			public IBoardController _003C_003E3__boardController;

			[NonSerialized]
			public List<GameLogic.Player.Items.MergeItem>.Enumerator _003C_003E7__wrap1;

			int IEnumerator<int>.Current
			{
				[DebuggerHidden]
				get
				{
					return 0;
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
			public _003CGetBoardItemIds_003Ed__2(int _003C_003E1__state)
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

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<int> IEnumerable<int>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CWaitUntilBoardHidden_003Ed__1 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public IBoardController boardController;

			public CancellationToken cancellation;

			public bool requireMetaplayPlayerContext;

			public Action onHidden;

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

		public static void HideBoardIfVisible(IBoardController boardController, MonoBehaviour runner, Action onHidden, bool ignoreScriptedEvents = false)
		{
		}

		[AsyncStateMachine(typeof(_003CWaitUntilBoardHidden_003Ed__1))]
		public static UniTask WaitUntilBoardHidden(IBoardController boardController, Action onHidden, CancellationToken cancellation, bool requireMetaplayPlayerContext = true)
		{
			return default(UniTask);
		}

		[IteratorStateMachine(typeof(_003CGetBoardItemIds_003Ed__2))]
		public static IEnumerable<int> GetBoardItemIds(IBoardController boardController)
		{
			return null;
		}
	}
}
