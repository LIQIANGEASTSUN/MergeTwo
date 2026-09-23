using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.Bot.Model;
using Documentation;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Bubble;
using UnityEngine;

namespace Code.Bot.Filter
{
	[CreateAssetMenu(fileName = "FilterBubbleEnergyBonus", menuName = "Butler/Filter/BubbleEnergyBonus")]
	[Documentation("Filter BubbleEnergyBonus", "select items with bonus energy attachment", null)]
	public class FilterBubbleEnergyBonus : FilterBase
	{
		[CompilerGenerated]
		public sealed class _003CFilter_003Ed__1 : IEnumerable<(Coordinate, MergeItem)>, IEnumerable, IEnumerator<(Coordinate, MergeItem)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (Coordinate, MergeItem) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<(Coordinate, MergeItem)> items;

			public IEnumerable<(Coordinate, MergeItem)> _003C_003E3__items;

			public FilterBubbleEnergyBonus _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<(Coordinate, MergeItem)> _003C_003E7__wrap1;

			(Coordinate, MergeItem) IEnumerator<(Coordinate, MergeItem)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((Coordinate, MergeItem));
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
			public _003CFilter_003Ed__1(int _003C_003E1__state)
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
			IEnumerator<(Coordinate, MergeItem)> IEnumerable<(Coordinate, MergeItem)>.GetEnumerator()
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
		public sealed class _003CFilter_003Ed__2 : IEnumerable<MergeItem>, IEnumerable, IEnumerator<MergeItem>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeItem _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<MergeItem> items;

			public IEnumerable<MergeItem> _003C_003E3__items;

			public FilterBubbleEnergyBonus _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<MergeItem> _003C_003E7__wrap1;

			MergeItem IEnumerator<MergeItem>.Current
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
			public _003CFilter_003Ed__2(int _003C_003E1__state)
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
			IEnumerator<MergeItem> IEnumerable<MergeItem>.GetEnumerator()
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
		public EnergyType desiredEnergyType;

		[IteratorStateMachine(typeof(_003CFilter_003Ed__1))]
		public override IEnumerable<(Coordinate, MergeItem)> Filter(RuntimeModel runtimeModel, IEnumerable<(Coordinate, MergeItem)> items)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CFilter_003Ed__2))]
		public override IEnumerable<MergeItem> Filter(RuntimeModel runtimeModel, IEnumerable<MergeItem> items)
		{
			return null;
		}

		public bool HasDesiredBonus(List<IBubbleBonus> bonuses)
		{
			return false;
		}
	}
}
