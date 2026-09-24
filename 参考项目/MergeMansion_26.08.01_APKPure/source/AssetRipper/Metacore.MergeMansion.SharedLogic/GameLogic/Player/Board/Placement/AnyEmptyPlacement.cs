using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Metaplay.Core.Model;

namespace GameLogic.Player.Board.Placement
{
	[MetaSerializableDerived(4)]
	public class AnyEmptyPlacement : IPlacement
	{
		[CompilerGenerated]
		public sealed class _003CGenerateAllPossibleCoordinates_003Ed__0 : IEnumerable<Coordinate>, IEnumerable, IEnumerator<Coordinate>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public Coordinate _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public int height;

			public int _003C_003E3__height;

			[NonSerialized]
			public int width;

			public int _003C_003E3__width;

			[NonSerialized]
			public int _003Cx_003E5__2;

			[NonSerialized]
			public int _003Cy_003E5__3;

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
			public _003CGenerateAllPossibleCoordinates_003Ed__0(int _003C_003E1__state)
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

		[IteratorStateMachine(typeof(_003CGenerateAllPossibleCoordinates_003Ed__0))]
		public IEnumerable<Coordinate> GenerateAllPossibleCoordinates(int width, int height)
		{
			return null;
		}

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
