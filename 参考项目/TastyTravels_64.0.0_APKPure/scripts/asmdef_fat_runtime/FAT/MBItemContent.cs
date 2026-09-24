using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using FAT.Merge;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class MBItemContent : MonoBehaviour
	{
		public enum ResType
		{
			None = 0,
			Icon = 1,
			Prefab = 2
		}

		[CompilerGenerated]
		public sealed class _003CCoDelayShowPopTip_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public float delay;

			public Vector2Int coord;

			public MBItemContent _003C_003E4__this;

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
			public _003CCoDelayShowPopTip_003Ed__26(int _003C_003E1__state)
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

		[SerializeField]
		public UIImageRes iconRes;

		[SerializeField]
		public UIImageRes coverRes;

		[SerializeField]
		public UIImageRes sweepMaskIcon;

		[SerializeField]
		public Image coverImg;

		[SerializeField]
		public MBItemResHolder holder;

		[SerializeField]
		public TextMeshProUGUI textUnlockLevel;

		[SerializeField]
		public Image bottom;

		public static readonly float alpha;

		[NonSerialized]
		public MBItemView mView;

		[NonSerialized]
		public int itemId;

		[NonSerialized]
		public ResType resType;

		[NonSerialized]
		public Coroutine delayShowPopTipCo;

		[NonSerialized]
		public UIGridCell overallCover;

		public MBItemResHolder Holder => null;

		public bool isInBox { get; set; }

		public bool hasNewTip { get; set; }

		public float CurAlpha { get; set; }

		public void SetData(MBItemView view)
		{
		}

		public void ClearData()
		{
		}

		[IteratorStateMachine(typeof(_003CCoDelayShowPopTip_003Ed__26))]
		public IEnumerator CoDelayShowPopTip(float delay, Vector2Int coord)
		{
			return null;
		}

		public void StopDelayShowPopTip()
		{
		}

		public void ResolveNewItemTip(float popTipDelay = 0f)
		{
		}

		public void _RefreshRes(Item item)
		{
		}

		public void _ClearCoverState()
		{
		}

		public void _TrySetLockCoverRes(Item item)
		{
		}

		public void _TrySetUnlockLevel(Item item)
		{
		}

		public void _SetMainContent(string iconStr, string prefabStr)
		{
		}

		public void TrySetSweepMaskIcon()
		{
		}

		public void SetBornFromRewardList()
		{
		}

		public void SetResAction(Action<GameObject> cb)
		{
		}

		public void ApplyFilter(bool selected)
		{
		}

		public void RemoveFilter()
		{
		}

		public void TweenSetAlpha(float a)
		{
		}

		public void _SetAlpha(float a)
		{
		}
	}
}
