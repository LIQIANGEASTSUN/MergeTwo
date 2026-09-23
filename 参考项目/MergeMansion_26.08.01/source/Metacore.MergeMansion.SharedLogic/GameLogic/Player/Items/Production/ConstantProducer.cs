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
	[MetaSerializableDerived(1)]
	public class ConstantProducer : IItemSpawner, IItemProducer
	{
		[CompilerGenerated]
		public sealed class _003CGetOdds_003Ed__14 : IEnumerable<(IItemDefinition, int)>, IEnumerable, IEnumerator<(IItemDefinition, int)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (IItemDefinition, int) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ConstantProducer _003C_003E4__this;

			[NonSerialized]
			public IMergeMansionGameConfig config;

			public IMergeMansionGameConfig _003C_003E3__config;

			[NonSerialized]
			public List<ItemDef>.Enumerator _003C_003E7__wrap1;

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
			public _003CGetOdds_003Ed__14(int _003C_003E1__state)
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
		public sealed class _003CGetSpawnItems_003Ed__20 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ConstantProducer _003C_003E4__this;

			[NonSerialized]
			public IGenerationContext context;

			public IGenerationContext _003C_003E3__context;

			[NonSerialized]
			public List<ItemDef>.Enumerator _003C_003E7__wrap1;

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
			public _003CGetSpawnItems_003Ed__20(int _003C_003E1__state)
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
		public sealed class _003CProduce_003Ed__15 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IGenerationContext context;

			public IGenerationContext _003C_003E3__context;

			public ConstantProducer _003C_003E4__this;

			[NonSerialized]
			public IEnumerable<IItemDefinition> allowedItems;

			public IEnumerable<IItemDefinition> _003C_003E3__allowedItems;

			[NonSerialized]
			public int quantity;

			public int _003C_003E3__quantity;

			[NonSerialized]
			public List<IItemDefinition> _003Cproducts_003E5__2;

			[NonSerialized]
			public int _003Cremaining_003E5__3;

			[NonSerialized]
			public IEnumerator<(IItemDefinition, int)> _003C_003E7__wrap3;

			[NonSerialized]
			public IItemDefinition _003Cproduct_003E5__5;

			[NonSerialized]
			public int _003Ctaken_003E5__6;

			[NonSerialized]
			public int _003Ci_003E5__7;

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
			public _003CProduce_003Ed__15(int _003C_003E1__state)
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
		[MetaOnMemberDeserializationFailure("FixItemListRef")]
		public List<ItemDef> Products { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<int> Quantities { get; set; }

		public int SpawnQuantity => 0;

		public ConstantProducer()
		{
		}

		public ConstantProducer(int products, int spawnQuantity = 1)
		{
		}

		public ConstantProducer(IEnumerable<int> products)
		{
		}

		public ConstantProducer(IEnumerable<(int, int)> pairs)
		{
		}

		public ConstantProducer(IEnumerable<(ItemDef, int)> pairs)
		{
		}

		public IEnumerable<(IItemDefinition, int)> GetItemQuantityPairs(IMergeMansionGameConfig config)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetOdds_003Ed__14))]
		public IEnumerable<(IItemDefinition, int)> GetOdds(IMergeMansionGameConfig config)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CProduce_003Ed__15))]
		public IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}

		public List<IItemDefinition> AllowedItems(List<IItemDefinition> originalItems, List<IItemDefinition> allowedItems)
		{
			return null;
		}

		public F64 TimeSkipPriceGems(IGenerationContext context)
		{
			return default(F64);
		}

		[IteratorStateMachine(typeof(_003CGetSpawnItems_003Ed__20))]
		public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption)
		{
			return null;
		}

		public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
