using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using EL.Resource;
using FAT.Merge;
using Spine.Unity;
using UnityEngine;

namespace FAT
{
	public class MBItemResHolder : MonoBehaviour
	{
		[CompilerGenerated]
		public sealed class _003C_CoLoadRes_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public string poolKey;

			public MBItemResHolder _003C_003E4__this;

			public int tid;

			public string resConfig;

			[NonSerialized]
			public ResourceAsyncTask _003Ctask_003E5__2;

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
			public _003C_CoLoadRes_003Ed__19(int _003C_003E1__state)
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

		[NonSerialized]
		public GameObject mContentPrefab;

		[NonSerialized]
		public MBResHolderBase mResHolder;

		[NonSerialized]
		public Action<GameObject> mOnLoadCallback;

		[NonSerialized]
		public int itemId;

		[NonSerialized]
		public Item mItem;

		[NonSerialized]
		public Transform itemRoot;

		[NonSerialized]
		public SkeletonGraphic mSpineGraphic;

		public MBResHolderBase ResHolder => null;

		public void LoadRes(int tid, Item item, Transform root)
		{
		}

		public void ClearRes()
		{
		}

		public void SetOnLoadAction(Action<GameObject> callback)
		{
		}

		public void SetAlpha(float a)
		{
		}

		public string _GetDisplayPrefabKey(int tid)
		{
			return null;
		}

		public void _AddDisplayPrefab(int tid)
		{
		}

		public static void SetReward(GameObject go)
		{
		}

		public static void SetBoard(GameObject go)
		{
		}

		public static void SetBorn(GameObject go)
		{
		}

		public void _TryReleaseDisplayPrefab()
		{
		}

		[IteratorStateMachine(typeof(_003C_CoLoadRes_003Ed__19))]
		public IEnumerator _CoLoadRes(string resConfig, string poolKey, int tid)
		{
			return null;
		}
	}
}
