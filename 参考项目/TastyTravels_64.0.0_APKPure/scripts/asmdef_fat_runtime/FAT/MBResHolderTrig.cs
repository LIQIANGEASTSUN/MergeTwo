using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBResHolderTrig : MBResHolderBase
	{
		[CompilerGenerated]
		public sealed class _003C_CoFlyRewardList_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBResHolderTrig _003C_003E4__this;

			public List<RewardCommitData> rewardList;

			public Vector3 pos;

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
			public _003C_CoFlyRewardList_003Ed__15(int _003C_003E1__state)
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

		[CompilerGenerated]
		public sealed class _003C_CoPlaySound_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBResHolderTrig _003C_003E4__this;

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
			public _003C_CoPlaySound_003Ed__17(int _003C_003E1__state)
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

		public float SpawnDelayTime;

		public float ClickDelayTime;

		public float DieDelayTime;

		[SerializeField]
		public List<UIImageRes> coverIconList;

		[SerializeField]
		public List<GameObject> progressList;

		[SerializeField]
		public List<GameObject> fillList;

		[NonSerialized]
		public Item _curItem;

		[NonSerialized]
		public Coroutine _rewardCo;

		[NonSerialized]
		public Coroutine _soundCo;

		public override void OnInit(Item item)
		{
		}

		public override void OnClear()
		{
		}

		public void OnTrigAutoSourceSucc()
		{
		}

		public void _Refresh(bool isFirst = false)
		{
		}

		public void _InitShowInfo()
		{
		}

		public void DelayFlyRewardList(List<RewardCommitData> rewardList, Vector3 pos)
		{
		}

		[IteratorStateMachine(typeof(_003C_CoFlyRewardList_003Ed__15))]
		public IEnumerator _CoFlyRewardList(List<RewardCommitData> rewardList, Vector3 pos)
		{
			return null;
		}

		public void _ClearRewardCo()
		{
		}

		[IteratorStateMachine(typeof(_003C_CoPlaySound_003Ed__17))]
		public IEnumerator _CoPlaySound()
		{
			return null;
		}

		public void _ClearSoundCo()
		{
		}

		public void _003C_003EiFixBaseProxy_OnInit(Item P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnClear()
		{
		}
	}
}
