using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializableDerived(12)]
	[MetaAllowNoSerializedMembers]
	public class GarageCleanupEventProducer : IItemSpawner, IItemProducer
	{
		[CompilerGenerated]
		public sealed class _003CGetSpawnItems_003Ed__5 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
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

			[NonSerialized]
			public GarageCleanupEventModel _003CeventModel_003E5__2;

			[NonSerialized]
			public GarageCleanupBoardInfo _003CboardInfo_003E5__3;

			[NonSerialized]
			public int _003Ci_003E5__4;

			[NonSerialized]
			public GarageCleanupBoardRowInfo _003CrowInfo_003E5__5;

			[NonSerialized]
			public GarageCleanupEventBoardRowModel _003CrowModel_003E5__6;

			[NonSerialized]
			public int _003Cj_003E5__7;

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
			public _003CGetSpawnItems_003Ed__5(int _003C_003E1__state)
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

		public int SpawnQuantity => 0;

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

		[IteratorStateMachine(typeof(_003CGetSpawnItems_003Ed__5))]
		public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption)
		{
			return null;
		}
	}
}
