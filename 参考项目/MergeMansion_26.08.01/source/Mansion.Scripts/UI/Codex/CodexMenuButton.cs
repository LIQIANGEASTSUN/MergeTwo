using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.MergeChains;
using Metacore.MergeMansion.Common.Options;
using UnityEngine;

namespace UI.Codex
{
	public class CodexMenuButton : MonoBehaviour
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CPollRoutineAsync_003Ed__8 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public CodexMenuButton _003C_003E4__this;

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

		[SerializeField]
		public GameObject container;

		[SerializeField]
		public RedDotIndicator redDotIndicator;

		[NonSerialized]
		public IEnumerable<MergeChainDefinition> allMergeChains;

		[NonSerialized]
		public Option<CancellationTokenSource> _pollCts;

		public void Awake()
		{
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void SetRedDotEnabled(bool enabled)
		{
		}

		[AsyncStateMachine(typeof(_003CPollRoutineAsync_003Ed__8))]
		public UniTask PollRoutineAsync(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void CheckCodexStatus()
		{
		}

		public void SetContainerActive(bool active)
		{
		}

		public void CheckRedDotStatus()
		{
		}
	}
}
