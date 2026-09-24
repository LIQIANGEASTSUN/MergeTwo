using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;

namespace FAT
{
	public class MBBoardFly : MonoBehaviour
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass11_0
		{
			public ActivityLike act;

			public RewardCommitData re;

			public void _003C_OnFlyCenterComplete_003Eb__0()
			{
			}

			public void _003C_OnFlyCenterComplete_003Eb__1()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003C_OnFlyCenterComplete_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public ActivityLike act;

			public RewardCommitData re;

			public MBBoardFly _003C_003E4__this;

			public Transform trans;

			[NonSerialized]
			public _003C_003Ec__DisplayClass11_0 _003C_003E8__1;

			public Vector3 from;

			[NonSerialized]
			public WaitForSeconds _003Cwait_003E5__2;

			[NonSerialized]
			public BoardFlyItem _003CboardFlyItem_003E5__3;

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
			public _003C_OnFlyCenterComplete_003Ed__11(int _003C_003E1__state)
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
		public GameObject boardFlyItem;

		[SerializeField]
		public TextMeshProUGUI num;

		[SerializeField]
		public GameObject normalEffect;

		[SerializeField]
		public GameObject scoreEffect;

		[SerializeField]
		public GameObject boardFlyRoot;

		[NonSerialized]
		public List<Transform> listFlyItem;

		[NonSerialized]
		public PoolItemType _flyItemPoolKey;

		public void Setup(PoolItemType poolKey)
		{
		}

		public void InitOnPreOpen()
		{
		}

		public void CleanupOnPostClose()
		{
		}

		public void ShowFlyCenterReward((Vector3 from, RewardCommitData re, ActivityLike act) obj)
		{
		}

		[IteratorStateMachine(typeof(_003C_OnFlyCenterComplete_003Ed__11))]
		public IEnumerator _OnFlyCenterComplete(Transform trans, RewardCommitData re, Vector3 from, ActivityLike act)
		{
			return null;
		}

		public void _FirstTimeShow()
		{
		}
	}
}
