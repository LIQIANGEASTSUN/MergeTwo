using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Framework.Core.Services.Backend.Data.Payload;
using Framework.Core.Services.ServerTime;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public sealed class TimeLimitedActivationSystem : BaseItemSystem<TimeLimitedActivationComponent>
	{
		[CompilerGenerated]
		public sealed class _003COnWillProcessComponents_003Ed__11 : IEnumerable<TimeLimitedActivationComponent>, IEnumerable, IEnumerator<TimeLimitedActivationComponent>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public TimeLimitedActivationComponent _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public ReadOnlyCollection<TimeLimitedActivationComponent> components;

			public ReadOnlyCollection<TimeLimitedActivationComponent> _003C_003E3__components;

			[NonSerialized]
			public IEnumerator<TimeLimitedActivationComponent> _003C_003E7__wrap1;

			TimeLimitedActivationComponent IEnumerator<TimeLimitedActivationComponent>.Current
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
			public _003COnWillProcessComponents_003Ed__11(int _003C_003E1__state)
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
			IEnumerator<TimeLimitedActivationComponent> IEnumerable<TimeLimitedActivationComponent>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardInteractionSystem _boardInteractionSystem;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		public override SystemPriorities Priority => default(SystemPriorities);

		public long CurrentServerTimeMS => 0L;

		[IteratorStateMachine(typeof(_003COnWillProcessComponents_003Ed__11))]
		public override IEnumerable<TimeLimitedActivationComponent> OnWillProcessComponents(ReadOnlyCollection<TimeLimitedActivationComponent> components)
		{
			return null;
		}

		public override void ProcessComponent(TimeLimitedActivationComponent component)
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public static ExtraData CreateExtraDataWithTimerItemData(int timeLeft, bool isTimerActivated, string creationReason, string triggerReason, string removeReason)
		{
			return null;
		}

		public bool IsLocked(ComponentBase component)
		{
			return false;
		}
	}
}
