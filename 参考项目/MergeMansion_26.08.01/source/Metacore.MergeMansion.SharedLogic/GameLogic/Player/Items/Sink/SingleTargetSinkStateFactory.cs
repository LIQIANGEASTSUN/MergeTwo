using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializableDerived(2)]
	public class SingleTargetSinkStateFactory : ISinkStateFactory
	{
		[CompilerGenerated]
		public sealed class _003CGetAcceptedItems_003Ed__16 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public int _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public SingleTargetSinkStateFactory _003C_003E4__this;

			[NonSerialized]
			public MetaDictionary<int, int>.Enumerator _003C_003E7__wrap1;

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
			public _003CGetAcceptedItems_003Ed__16(int _003C_003E1__state)
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
		public sealed class _003CGetSinkProducts_003Ed__14 : IEnumerable<(IItemDefinition, int)>, IEnumerable, IEnumerator<(IItemDefinition, int)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (IItemDefinition, int) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public SingleTargetSinkStateFactory _003C_003E4__this;

			[NonSerialized]
			public IMergeMansionGameConfig config;

			public IMergeMansionGameConfig _003C_003E3__config;

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
			public _003CGetSinkProducts_003Ed__14(int _003C_003E1__state)
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
		public MetaDictionary<int, int> Scores { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ScoreTarget { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef RewardDef { get; set; }

		public SingleTargetSinkStateFactory()
		{
		}

		public SingleTargetSinkStateFactory(List<(int itemId, int target)> scores, int scoreTarget, int rewardId)
		{
		}

		[IteratorStateMachine(typeof(_003CGetSinkProducts_003Ed__14))]
		public IEnumerable<(IItemDefinition, int)> GetSinkProducts(IMergeMansionGameConfig config)
		{
			return null;
		}

		public ISinkState Create()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetAcceptedItems_003Ed__16))]
		public IEnumerable<int> GetAcceptedItems(IMergeMansionGameConfig config)
		{
			return null;
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
