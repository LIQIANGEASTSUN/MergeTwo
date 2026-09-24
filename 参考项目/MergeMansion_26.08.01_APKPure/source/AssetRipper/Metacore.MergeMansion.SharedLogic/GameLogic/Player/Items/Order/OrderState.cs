using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using GameLogic.Config;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Items.Sink;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Order
{
	public abstract class OrderState : IOrderState, ISinkState, IItemProducer
	{
		[CompilerGenerated]
		public sealed class _003CGetOdds_003Ed__31 : IEnumerable<(IItemDefinition, int)>, IEnumerable, IEnumerator<(IItemDefinition, int)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (IItemDefinition, int) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public OrderState _003C_003E4__this;

			[NonSerialized]
			public List<OrderStateReward>.Enumerator _003C_003E7__wrap1;

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
			public _003CGetOdds_003Ed__31(int _003C_003E1__state)
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

		[CompilerGenerated]
		public sealed class _003CProduce_003Ed__32 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public OrderState _003C_003E4__this;

			[NonSerialized]
			public int quantity;

			public int _003C_003E3__quantity;

			[NonSerialized]
			public int _003Ccount_003E5__2;

			[NonSerialized]
			public List<OrderStateReward>.Enumerator _003C_003E7__wrap2;

			IItemDefinition IEnumerator<IItemDefinition>.Current
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
			public _003CProduce_003Ed__32(int _003C_003E1__state)
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
			IEnumerator<IItemDefinition> IEnumerable<IItemDefinition>.GetEnumerator()
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
		public sealed class _003Cget_CompletionItems_003Ed__18 : IEnumerable<OrderStateReward>, IEnumerable, IEnumerator<OrderStateReward>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public OrderStateReward _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public OrderState _003C_003E4__this;

			[NonSerialized]
			public List<OrderStateReward>.Enumerator _003C_003E7__wrap1;

			OrderStateReward IEnumerator<OrderStateReward>.Current
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
			public _003Cget_CompletionItems_003Ed__18(int _003C_003E1__state)
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
			IEnumerator<OrderStateReward> IEnumerable<OrderStateReward>.GetEnumerator()
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
		public MetaDictionary<int, (int required, int progress)> TakeInScores { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<OrderStateReward> RewardItems { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string ActivationType { get; set; }

		public IEnumerable<OrderStateReward> CompletionItems
		{
			[IteratorStateMachine(typeof(_003Cget_CompletionItems_003Ed__18))]
			get
			{
				return null;
			}
		}

		[IgnoreDataMember]
		public int ClaimableRewardsCount => 0;

		[IgnoreDataMember]
		public int ItemsPerActivation => 0;

		public OrderState()
		{
		}

		public OrderState(MetaDictionary<int, int> takeIn, List<int> rewardItems, List<int> rewardAmounts, string activationType, IGenerationContext context)
		{
		}

		public abstract SinkType GetSinkType();

		public abstract bool IsCompleted();

		public void GetProgressEntries(ref List<SinkProgressEntry> outList)
		{
		}

		public IItemDefinition GetCompletionItem(IPlayer player, MergeItem mergeItem, MergeBoard mergeBoard)
		{
			return null;
		}

		public bool IsActivable()
		{
			return false;
		}

		public bool IsSpawnable()
		{
			return false;
		}

		public void IncrementClaimedRewardsCount()
		{
		}

		public bool DoesTakeIn(IPlayer player, int itemId)
		{
			return false;
		}

		public abstract (int, int) GetProgress();

		public bool IncreaseProgress(IPlayer player, int inputItem)
		{
			return false;
		}

		public bool OrderCompleted()
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetOdds_003Ed__31))]
		public IEnumerable<(IItemDefinition, int)> GetOdds(IMergeMansionGameConfig config)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CProduce_003Ed__32))]
		public IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}
	}
}
