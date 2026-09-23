using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializableDerived(4)]
	public class ExclusiveTargetSinkStateFactory : ISinkStateFactory
	{
		[CompilerGenerated]
		public sealed class _003CGetAcceptedItems_003Ed__7 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public int _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ExclusiveTargetSinkStateFactory _003C_003E4__this;

			[NonSerialized]
			public int _003Ci_003E5__2;

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
			public _003CGetAcceptedItems_003Ed__7(int _003C_003E1__state)
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

		[CompilerGenerated]
		public sealed class _003CGetSinkProducts_003Ed__8 : IEnumerable<(IItemDefinition, int)>, IEnumerable, IEnumerator<(IItemDefinition, int)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (IItemDefinition, int) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ExclusiveTargetSinkStateFactory _003C_003E4__this;

			[NonSerialized]
			public IMergeMansionGameConfig config;

			public IMergeMansionGameConfig _003C_003E3__config;

			[NonSerialized]
			public int _003Ci_003E5__2;

			(IItemDefinition, int) IEnumerator<(IItemDefinition, int)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((IItemDefinition, int));
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
			public _003CGetSinkProducts_003Ed__8(int _003C_003E1__state)
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

			[DebuggerHidden]
			IEnumerator<(IItemDefinition, int)> IEnumerable<(IItemDefinition, int)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[MetaMember(1, MetaMemberFlags.None)]
		public List<ExclusiveTargetSinkBranch> Branches { get; set; }

		public ExclusiveTargetSinkStateFactory()
		{
		}

		public ExclusiveTargetSinkStateFactory(List<(int itemId, int target)> scores, List<int> rewardItemIds)
		{
		}

		public ISinkState Create()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetAcceptedItems_003Ed__7))]
		public IEnumerable<int> GetAcceptedItems(IMergeMansionGameConfig config)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetSinkProducts_003Ed__8))]
		public IEnumerable<(IItemDefinition, int)> GetSinkProducts(IMergeMansionGameConfig config)
		{
			return null;
		}
	}
}
