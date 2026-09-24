using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Merger.MergeBoard.View.Layout
{
	public class FreeformMergeBoardLayout : MergeBoardLayout
	{
		[CompilerGenerated]
		public sealed class _003CGetAllEmptyPositions_003Ed__7 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public int _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<int> occupiedPositions;

			public IEnumerable<int> _003C_003E3__occupiedPositions;

			public FreeformMergeBoardLayout _003C_003E4__this;

			[NonSerialized]
			public HashSet<int> _003CoccupiedSet_003E5__2;

			[NonSerialized]
			public Dictionary<int, RectTransform>.KeyCollection.Enumerator _003C_003E7__wrap2;

			int IEnumerator<int>.Current
			{
				[DebuggerHidden]
				get
				{
					return 0;
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
			public _003CGetAllEmptyPositions_003Ed__7(int _003C_003E1__state)
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
			IEnumerator<int> IEnumerable<int>.GetEnumerator()
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
		public sealed class _003CGetHorizontalVerticalTouchingTiles_003Ed__17 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public int _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public FreeformMergeBoardLayout _003C_003E4__this;

			[NonSerialized]
			public int position;

			public int _003C_003E3__position;

			[NonSerialized]
			public float maxDistance;

			public float _003C_003E3__maxDistance;

			[NonSerialized]
			public Rect _003CreferenceBounds_003E5__2;

			[NonSerialized]
			public Vector2 _003CreferenceCenter_003E5__3;

			[NonSerialized]
			public Dictionary<int, RectTransform>.KeyCollection.Enumerator _003C_003E7__wrap3;

			int IEnumerator<int>.Current
			{
				[DebuggerHidden]
				get
				{
					return 0;
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
			public _003CGetHorizontalVerticalTouchingTiles_003Ed__17(int _003C_003E1__state)
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
			IEnumerator<int> IEnumerable<int>.GetEnumerator()
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
		public sealed class _003CGetTouchingTiles_003Ed__16 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public int _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public FreeformMergeBoardLayout _003C_003E4__this;

			[NonSerialized]
			public int position;

			public int _003C_003E3__position;

			[NonSerialized]
			public float maxDistance;

			public float _003C_003E3__maxDistance;

			[NonSerialized]
			public Rect _003CexpandedBounds_003E5__2;

			[NonSerialized]
			public Dictionary<int, RectTransform>.KeyCollection.Enumerator _003C_003E7__wrap2;

			int IEnumerator<int>.Current
			{
				[DebuggerHidden]
				get
				{
					return 0;
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
			public _003CGetTouchingTiles_003Ed__16(int _003C_003E1__state)
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
			IEnumerator<int> IEnumerable<int>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[SerializeField]
		[Tooltip("List of tile rect transforms for the freeform layout")]
		public List<RectTransform> _tileRectTransforms;

		[Tooltip("Max distance for neighbors calculation")]
		[SerializeField]
		public float _maxDistanceFromNeighbors;

		public override int GetPositionsCount => 0;

		public void OnValidate()
		{
		}

		public override bool TryGetEmptyPosition(IEnumerable<int> occupiedPositions, out int position)
		{
			position = default(int);
			return false;
		}

		public override bool TryGetClosestEmptyPosition(IEnumerable<int> occupiedPositions, int refPosition, out int position)
		{
			position = default(int);
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetAllEmptyPositions_003Ed__7))]
		public override IEnumerable<int> GetAllEmptyPositions(IEnumerable<int> occupiedPositions)
		{
			return null;
		}

		public override IEnumerable<int> GetAdjacentPositions(int position)
		{
			return null;
		}

		public override IEnumerable<int> GetHorizontalVerticalAdjacentPositions(int position)
		{
			return null;
		}

		public override float GetMaxDistanceFromNeighbors()
		{
			return 0f;
		}

		public void ShowAdjacentPositions(int position)
		{
		}

		public override void PrepareBoard(IEnumerable<int> configuredTiles = null)
		{
		}

		public void SetIndexText(Transform tile, int index, bool isActive)
		{
		}

		public bool IsValidPosition(int position)
		{
			return false;
		}

		public RectTransform GetTile(int position)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetTouchingTiles_003Ed__16))]
		public IEnumerable<int> GetTouchingTiles(int position, float maxDistance)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetHorizontalVerticalTouchingTiles_003Ed__17))]
		public IEnumerable<int> GetHorizontalVerticalTouchingTiles(int position, float maxDistance)
		{
			return null;
		}

		public Rect GetTileBounds(RectTransform tile)
		{
			return default(Rect);
		}
	}
}
