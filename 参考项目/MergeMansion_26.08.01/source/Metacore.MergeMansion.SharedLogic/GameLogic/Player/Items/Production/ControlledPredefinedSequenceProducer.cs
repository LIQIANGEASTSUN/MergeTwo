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

namespace GameLogic.Player.Items.Production
{
	[MetaSerializableDerived(16)]
	public class ControlledPredefinedSequenceProducer : IItemSpawner, IItemProducer
	{
		[CompilerGenerated]
		public sealed class _003CProduce_003Ed__22 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ControlledPredefinedSequenceProducer _003C_003E4__this;

			[NonSerialized]
			public IGenerationContext context;

			public IGenerationContext _003C_003E3__context;

			[NonSerialized]
			public IEnumerable<IItemDefinition> allowedItems;

			public IEnumerable<IItemDefinition> _003C_003E3__allowedItems;

			[NonSerialized]
			public int quantity;

			public int _003C_003E3__quantity;

			[NonSerialized]
			public int _003CitemsFound_003E5__2;

			[NonSerialized]
			public int _003Ctries_003E5__3;

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
			public _003CProduce_003Ed__22(int _003C_003E1__state)
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
		public RollHistoryType RollType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ItemType { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int TotalCount { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<ItemOdds> OddsList { get; set; }

		public int SpawnQuantity => 0;

		public IEnumerable<(IItemDefinition, int)> GetOdds(IMergeMansionGameConfig config)
		{
			return null;
		}

		public F64 TimeSkipPriceGems(IGenerationContext context)
		{
			return default(F64);
		}

		public ControlledPredefinedSequenceProducer()
		{
		}

		public ControlledPredefinedSequenceProducer(RollHistoryType rollType, int itemId, IEnumerable<(int, int)> oddsList)
		{
		}

		[IteratorStateMachine(typeof(_003CProduce_003Ed__22))]
		public IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption)
		{
			return null;
		}
	}
}
