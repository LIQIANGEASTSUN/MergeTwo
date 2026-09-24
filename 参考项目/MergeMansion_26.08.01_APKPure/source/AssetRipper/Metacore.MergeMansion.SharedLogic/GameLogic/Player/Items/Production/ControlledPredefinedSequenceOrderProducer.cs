using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using GameLogic.Player.Items.Order;
using GameLogic.Random;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializableDerived(16)]
	public class ControlledPredefinedSequenceOrderProducer : IOrderSpawner, IOrderProducer
	{
		[CompilerGenerated]
		public sealed class _003CGetSpawnOrder_003Ed__20 : IEnumerable<OrderRequirementsId>, IEnumerable, IEnumerator<OrderRequirementsId>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public OrderRequirementsId _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ControlledPredefinedSequenceOrderProducer _003C_003E4__this;

			[NonSerialized]
			public List<(OrderRequirementsId orderRequirements, int weight)>.Enumerator _003C_003E7__wrap1;

			OrderRequirementsId IEnumerator<OrderRequirementsId>.Current
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
			public _003CGetSpawnOrder_003Ed__20(int _003C_003E1__state)
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
			IEnumerator<OrderRequirementsId> IEnumerable<OrderRequirementsId>.GetEnumerator()
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
		public RollHistoryType RollType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ItemType { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<(OrderRequirementsId orderRequirements, int weight)> GenerationOdds { get; set; }

		[IgnoreDataMember]
		public int OrderCount => 0;

		public ControlledPredefinedSequenceOrderProducer()
		{
		}

		public ControlledPredefinedSequenceOrderProducer(RollHistoryType rollType, int itemType, IEnumerable<(OrderRequirementsId, int)> pairs)
		{
		}

		public void ResetOrder(IGenerationContext context)
		{
		}

		public OrderRequirements Produce(int orderIndex, IGenerationContext context)
		{
			return null;
		}

		public void AdvanceSequenceIndex(IGenerationContext context)
		{
		}

		public int GetTotalWeight()
		{
			return 0;
		}

		[IteratorStateMachine(typeof(_003CGetSpawnOrder_003Ed__20))]
		public IEnumerable<OrderRequirementsId> GetSpawnOrder()
		{
			return null;
		}
	}
}
