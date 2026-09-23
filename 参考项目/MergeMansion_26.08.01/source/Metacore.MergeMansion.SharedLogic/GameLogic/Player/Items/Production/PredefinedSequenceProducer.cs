using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Config;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializableDerived(13)]
	public class PredefinedSequenceProducer : IItemSpawner, IItemProducer
	{
		[CompilerGenerated]
		public sealed class _003CProduce_003Ed__18 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public int quantity;

			public int _003C_003E3__quantity;

			public PredefinedSequenceProducer _003C_003E4__this;

			[NonSerialized]
			public Option<ProducerContext> producerContextOption;

			public Option<ProducerContext> _003C_003E3__producerContextOption;

			[NonSerialized]
			public IGenerationContext context;

			public IGenerationContext _003C_003E3__context;

			[NonSerialized]
			public IEnumerable<IItemDefinition> allowedItems;

			public IEnumerable<IItemDefinition> _003C_003E3__allowedItems;

			[NonSerialized]
			public ulong _003CitemIndex_003E5__2;

			[NonSerialized]
			public ulong _003CaccumulatedIndex_003E5__3;

			[NonSerialized]
			public int _003CaccumulatedQuantity_003E5__4;

			[NonSerialized]
			public List<ItemOdds>.Enumerator _003C_003E7__wrap4;

			[NonSerialized]
			public ItemOdds _003Codds_003E5__6;

			[NonSerialized]
			public int _003Cweight_003E5__7;

			[NonSerialized]
			public int _003Ci_003E5__8;

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
			public _003CProduce_003Ed__18(int _003C_003E1__state)
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

		[MetaMember(1, MetaMemberFlags.None)]
		public List<ItemOdds> OddsList { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public ulong TotalCount { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemListRef")]
		public List<ItemDef> UniqueItems { get; set; }

		public int SpawnQuantity => 0;

		public IEnumerable<(IItemDefinition, int)> GetOdds(IMergeMansionGameConfig config)
		{
			return null;
		}

		public F64 TimeSkipPriceGems(IGenerationContext context)
		{
			return default(F64);
		}

		public PredefinedSequenceProducer()
		{
		}

		public PredefinedSequenceProducer(IEnumerable<(int, int)> oddsList)
		{
		}

		[IteratorStateMachine(typeof(_003CProduce_003Ed__18))]
		public IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption)
		{
			return null;
		}

		public ulong GetItemIndexForProduce(Option<ProducerContext> producerContextOption, IMergeMansionGameConfig config)
		{
			return 0uL;
		}

		public IEnumerable<(IItemDefinition, int)> GetTotalSequence(IMergeMansionGameConfig config)
		{
			return null;
		}

		public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
