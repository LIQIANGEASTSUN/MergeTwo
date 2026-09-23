using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Sink;
using Merge;
using UI;
using UI.Indicators;
using UnityEngine;

public class ItemEffectUISinkItemTooltipDisplay : MonoBehaviour, IItemEffectUIObject
{
	[CompilerGenerated]
	public sealed class _003CShowRoutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public SinkType sinkType;

		public ItemEffectUISinkItemTooltipDisplay _003C_003E4__this;

		public List<SinkProgressEntry> entries;

		public MergeItem mergeItem;

		public BoardItemHandler itemHandler;

		[NonSerialized]
		public float _003CdurationPerEntry_003E5__2;

		[NonSerialized]
		public SpineInfoItemIndicator _003CsharedIndicator_003E5__3;

		[NonSerialized]
		public int _003Ci_003E5__4;

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
		public _003CShowRoutine_003Ed__18(int _003C_003E1__state)
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

	public const bool ShowExclusiveSinkEntriesAsSlideshow = true;

	[NonSerialized]
	public PlayerModel player;

	[NonSerialized]
	public IMenuController menuController;

	[SerializeField]
	public SpineInfoItemIndicator[] sinkItems;

	[NonSerialized]
	public Coroutine showRoutine;

	[NonSerialized]
	public float duration;

	public bool Initialised { get; set; }

	public BoardItemHandler BoardItemHandler { get; set; }

	public void Initialise()
	{
	}

	public void SetLevel(int level)
	{
	}

	public void SetMergeItem(MergeItem mergeItem, BoardItemHandler itemHandler, object context)
	{
	}

	public void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
	{
	}

	[IteratorStateMachine(typeof(_003CShowRoutine_003Ed__18))]
	public IEnumerator ShowRoutine(MergeItem mergeItem, BoardItemHandler itemHandler, List<SinkProgressEntry> entries, SinkType sinkType)
	{
		return null;
	}

	public void DisableAllSinkItems()
	{
	}

	public void SetMinLevel(int level)
	{
	}

	public void SetPreviewValue(float value)
	{
	}

	public void SetValue(float value)
	{
	}
}
