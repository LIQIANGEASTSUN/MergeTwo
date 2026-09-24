using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Metaplay.Core.Model;

namespace GameLogic.Player.Board.Placement
{
	[MetaSerializableDerived(3)]
	public class SpiralPlacement : IPlacement
	{
		[CompilerGenerated]
		public sealed class _003CProducePlacements_003Ed__1 : IEnumerable<Coordinate>, IEnumerable, IEnumerator<Coordinate>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public Coordinate _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IBoardQuery boardQuery;

			public IBoardQuery _003C_003E3__boardQuery;

			[NonSerialized]
			public Coordinate originalCoordinate;

			public Coordinate _003C_003E3__originalCoordinate;

			[NonSerialized]
			public int _003CtheoreticalLimit_003E5__2;

			[NonSerialized]
			public int _003Ci_003E5__3;

			[NonSerialized]
			public int _003CendIndex_003E5__4;

			[NonSerialized]
			public int _003Cindex_003E5__5;

			Coordinate IEnumerator<Coordinate>.Current
			{
				[DebuggerHidden]
				get
				{
					return default(Coordinate);
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
			public _003CProducePlacements_003Ed__1(int _003C_003E1__state)
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
			IEnumerator<Coordinate> IEnumerable<Coordinate>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static (int, int) FindSpiralCoordinate(int zeroBasedIndex)
		{
			return default((int, int));
		}

		[IteratorStateMachine(typeof(_003CProducePlacements_003Ed__1))]
		public IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery)
		{
			return null;
		}

		public bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery)
		{
			return false;
		}
	}
}
