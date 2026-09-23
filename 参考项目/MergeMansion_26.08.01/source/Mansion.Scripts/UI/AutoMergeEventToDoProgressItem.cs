using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Analytics;
using CustomUI.TodoTasks;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Config.Types;
using GameLogic.Player;
using GameLogic.Player.MergeTasks;
using JetBrains.Annotations;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Client;
using TMPro;
using UnityEngine;

namespace UI
{
	public class AutoMergeEventToDoProgressItem : ToDoTaskItem
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CPoll_003Ed__25 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public AutoMergeEventToDoProgressItem _003C_003E4__this;

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

		public const int PollIntervalMilliseconds = 1000;

		[SerializeField]
		public int firstElementTopPadding;

		[SerializeField]
		public TextMeshProUGUI eventNameText;

		[SerializeField]
		public TimerControl eventTimer;

		[SerializeField]
		public ToggleSlider autoMergeToggle;

		[NonSerialized]
		public AutoMergeFeatureTask task;

		[NonSerialized]
		public IPlayer playerModel;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public IAnalyticsCollector analyticsCollector;

		[NonSerialized]
		public Action notifyChange;

		[NonSerialized]
		public IPlayerClientContext playerContext;

		[NonSerialized]
		public MetacoreTime? _lastKnownAvailableUntil;

		[NonSerialized]
		public Option<CancellationTokenSource> _pollCtsOption;

		public override MergeTask Task => null;

		public override int FirstElementTopPadding => 0;

		public Transform AutoMergeToggleTransform => null;

		public bool IsToggleEnabled => false;

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void Init(AutoMergeFeatureTask autoMergeFeatureTask, IPlayerClientContext playerContext, IPlayer playerModel, IMenuController menuController, Action notifyChange, IAnalyticsCollector analyticsCollector)
		{
		}

		public void StartPoll()
		{
		}

		[AsyncStateMachine(typeof(_003CPoll_003Ed__25))]
		public UniTask Poll(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void ForceEnableToggle()
		{
		}

		[PublicAPI]
		public void OnAutoMergeToggleChanged()
		{
		}

		[PublicAPI]
		public void OnInfoButtonClicked()
		{
		}
	}
}
