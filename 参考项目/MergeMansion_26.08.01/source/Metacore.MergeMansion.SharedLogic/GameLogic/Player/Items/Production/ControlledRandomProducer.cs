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
	[MetaSerializableDerived(4)]
	public class ControlledRandomProducer : IItemSpawner, IItemProducer
	{
		[CompilerGenerated]
		public sealed class _003CGetSpawnItems_003Ed__21 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ControlledRandomProducer _003C_003E4__this;

			[NonSerialized]
			public IGenerationContext context;

			public IGenerationContext _003C_003E3__context;

			[NonSerialized]
			public int _003Ccount_003E5__2;

			[NonSerialized]
			public int _003Ci_003E5__3;

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
			public _003CGetSpawnItems_003Ed__21(int _003C_003E1__state)
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
		public List<ItemOdds> GenerationOdds { get; set; }

		public int SpawnQuantity => 0;

		public ControlledRandomProducer()
		{
		}

		public ControlledRandomProducer(RollHistoryType rollType, int itemId, List<(int, int)> oddsList)
		{
		}

		public IEnumerable<(IItemDefinition, int)> GetOdds(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IItemDefinition GetOddsItemDefinition(IMergeMansionGameConfig config, int itemId)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public List<(int, int)> AllowedItems(IEnumerable<(int, int)> originalItems, IEnumerable<IItemDefinition> allowedItems)
		{
			return null;
		}

		public F64 TimeSkipPriceGems(IGenerationContext context)
		{
			return default(F64);
		}

		[IteratorStateMachine(typeof(_003CGetSpawnItems_003Ed__21))]
		public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption)
		{
			return null;
		}

		[Conditional("UNITY_EDITOR")]
		[Conditional("DO_EXTRA_CHECKS")]
		public void ValidateOdds(List<(int, int)> oddsList)
		{
		}
	}
}
