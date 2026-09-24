using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Config;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using EL.Resource;
using UnityEngine;

namespace FAT
{
	public class MBBoardLvArea : MBBoardCloud
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass18_0
		{
			public ResourceAsyncTask task;

			public bool _003C_LoadCoverPrefab_003Eb__0()
			{
				return false;
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003C_CoInitOnPreOpen_003Ed__16 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public MBBoardLvArea _003C_003E4__this;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003C_LoadCoverPrefab_003Ed__18 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public AssetConfig res;

			public CancellationToken cancellationToken;

			[NonSerialized]
			public _003C_003Ec__DisplayClass18_0 _003C_003E8__1;

			public MBLvAreaHolder parent;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[SerializeField]
		public GameObject _holder;

		[SerializeField]
		public GameObject trail;

		[SerializeField]
		public float trailDuration;

		[SerializeField]
		public float trailRecycleDelay;

		[SerializeField]
		public AnimationCurve trailEase;

		[NonSerialized]
		public string trailPoolKey;

		[NonSerialized]
		public Dictionary<int, MBLvAreaHolder> mCellDict;

		[NonSerialized]
		public List<UniTask> mLoadingTasks;

		[NonSerialized]
		public CancellationTokenSource mLoadingCts;

		[NonSerialized]
		public Action _onExecuteComplete;

		public override GameObject GetCloudViewPrefab()
		{
			return null;
		}

		public override void SetPoolKeyItem()
		{
		}

		public override void _OnSetUp()
		{
		}

		public override void _PrepareGrid()
		{
		}

		public override void _ReleaseGrid()
		{
		}

		public void Execute(Action onComplete = null)
		{
		}

		[AsyncStateMachine(typeof(_003C_CoInitOnPreOpen_003Ed__16))]
		public UniTask _CoInitOnPreOpen()
		{
			return default(UniTask);
		}

		public void _PrepareGrids(CancellationToken cancellationToken = default(CancellationToken))
		{
		}

		[AsyncStateMachine(typeof(_003C_LoadCoverPrefab_003Ed__18))]
		public UniTask _LoadCoverPrefab(AssetConfig res, MBLvAreaHolder parent, CancellationToken cancellationToken = default(CancellationToken))
		{
			return default(UniTask);
		}

		public void _CheckAndPlayUnlockAnimations()
		{
		}

		public void OnExecuteComplete()
		{
		}

		public void _PlayUnlockWithTrail(MBLvAreaHolder holder, Action onComplete)
		{
		}

		public void _PrepareTrailPool()
		{
		}

		public void _ReleaseHolder(int confId)
		{
		}

		public bool TryGetHolder(int id, out MBLvAreaHolder holder)
		{
			holder = null;
			return false;
		}

		public void _003C_003EiFixBaseProxy__OnSetUp()
		{
		}
	}
}
