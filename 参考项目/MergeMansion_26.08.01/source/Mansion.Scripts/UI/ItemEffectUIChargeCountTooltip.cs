using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Player.Items;
using Merge;
using TMPro;
using UnityEngine;

namespace UI
{
	public class ItemEffectUIChargeCountTooltip : MonoBehaviour, IItemEffectUIObject
	{
		[CompilerGenerated]
		public sealed class _003CShowRoutine_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public ItemEffectUIChargeCountTooltip _003C_003E4__this;

			public int amount;

			object IEnumerator<object>.Current
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
			public _003CShowRoutine_003Ed__13(int _003C_003E1__state)
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
		}

		public const float Duration = 1f;

		[SerializeField]
		public TextMeshProUGUI amountText;

		[NonSerialized]
		public Coroutine showRoutine;

		public bool Initialised { get; set; }

		public BoardItemHandler BoardItemHandler { get; set; }

		public void Initialise()
		{
		}

		public void SetValue(float value)
		{
		}

		[IteratorStateMachine(typeof(_003CShowRoutine_003Ed__13))]
		public IEnumerator ShowRoutine(int amount)
		{
			return null;
		}

		public void SetLevel(int level)
		{
		}

		public void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
		{
		}

		public void SetMergeItem(MergeItem mergeItem, BoardItemHandler boardItemHandler, object context)
		{
		}

		public void SetMinLevel(int level)
		{
		}

		public void SetPreviewValue(float value)
		{
		}
	}
}
