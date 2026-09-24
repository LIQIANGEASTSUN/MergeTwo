using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Game.Logic;
using GameLogic.Config;
using GameLogic.Player.Items.Activation;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializableDerived(11)]
	public class PrefixProducer : IItemSpawner, IItemProducer
	{
		[CompilerGenerated]
		public sealed class _003CGetSpawnItems_003Ed__26 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public PrefixProducer _003C_003E4__this;

			[NonSerialized]
			public IGenerationContext context;

			public IGenerationContext _003C_003E3__context;

			[NonSerialized]
			public Option<ProducerContext> producerContextOption;

			public Option<ProducerContext> _003C_003E3__producerContextOption;

			[NonSerialized]
			public IEnumerator<IItemDefinition> _003C_003E7__wrap1;

			[NonSerialized]
			public List<ItemDef>.Enumerator _003C_003E7__wrap2;

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
			public _003CGetSpawnItems_003Ed__26(int _003C_003E1__state)
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

			public void _003C_003Em__Finally2()
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
		public string Marker { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemListRef")]
		public List<ItemDef> Items { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public IItemSpawner BaseProducer { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public InitialSequenceType InitialSequenceType { get; set; }

		public int SpawnQuantity => 0;

		public PrefixProducer()
		{
		}

		public PrefixProducer(InitialSequenceType initialSequenceType, string marker, IEnumerable<int> items, IItemSpawner baseProducer)
		{
		}

		public PrefixProducer(InitialSequenceType initialSequenceType, string marker, IEnumerable<ItemDef> items, IItemSpawner baseProducer)
		{
		}

		public bool UseBaseProducer(IGenerationContext context, Option<ProducerContext> producerContextOption)
		{
			return false;
		}

		public int GetCurrentSpawnIndex(SpawnFactoryState spawnFactoryState, Option<ProducerContext> producerContextOption, IMergeMansionGameConfig config)
		{
			return 0;
		}

		public IEnumerable<(IItemDefinition, int)> GetOdds(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public F64 TimeSkipPriceGems(IGenerationContext context)
		{
			return default(F64);
		}

		[IteratorStateMachine(typeof(_003CGetSpawnItems_003Ed__26))]
		public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption)
		{
			return null;
		}

		public void GetUniquePredefinedItems(IMergeMansionGameConfig config, ref List<IItemDefinition> outList)
		{
		}

		public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
