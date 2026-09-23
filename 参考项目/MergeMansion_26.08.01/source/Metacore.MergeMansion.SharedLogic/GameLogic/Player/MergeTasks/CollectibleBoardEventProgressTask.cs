using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.GameEvents;
using Code.GameLogic.Player.MergeTasks;
using Metaplay.Core;

namespace GameLogic.Player.MergeTasks
{
	public class CollectibleBoardEventProgressTask : MergeTask
	{
		[CompilerGenerated]
		public sealed class _003CGetEventTasks_003Ed__14 : IEnumerable<EventTaskInfo>, IEnumerable, IEnumerator<EventTaskInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public EventTaskInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public CollectibleBoardEventProgressTask _003C_003E4__this;

			[NonSerialized]
			public List<EventTaskId>.Enumerator _003C_003E7__wrap1;

			EventTaskInfo IEnumerator<EventTaskInfo>.Current
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
			public _003CGetEventTasks_003Ed__14(int _003C_003E1__state)
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
			IEnumerator<EventTaskInfo> IEnumerable<EventTaskInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public CollectibleBoardEventModel EventModel { get; }

		public MetaTime? EndAt { get; }

		public PlayerModel PlayerModel { get; }

		public IEnumerable<EventTaskInfo> Tasks => null;

		public override TaskCategory Category => default(TaskCategory);

		public CollectibleBoardEventProgressTask(CollectibleBoardEventModel eventModel, PlayerModel playerModel)
			: base(null)
		{
		}

		[IteratorStateMachine(typeof(_003CGetEventTasks_003Ed__14))]
		public IEnumerable<EventTaskInfo> GetEventTasks()
		{
			return null;
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
