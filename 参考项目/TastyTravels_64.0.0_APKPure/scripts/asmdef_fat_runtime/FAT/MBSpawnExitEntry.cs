using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using FAT.Merge;
using IFix.Core;
using Spine.Unity;
using TMPro;
using UnityEngine;

namespace FAT
{
	public class MBSpawnExitEntry : MonoBehaviour
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CFailExit_003Ed__24 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public MBSpawnExitEntry _003C_003E4__this;

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
		public struct _003CPlaySpawnExitAnim_003Ed__26 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public MBSpawnExitEntry _003C_003E4__this;

			[NonSerialized]
			public CancellationToken _003CcancellationToken_003E5__2;

			[NonSerialized]
			public List<RewardCommitData> _003Crewards_003E5__3;

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
		public struct _003CPlaySpineOpenAnim_003Ed__20 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public MBSpawnExitEntry _003C_003E4__this;

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

		public SkeletonGraphic skeletonGraphic;

		public SkeletonGraphic skeletonGraphic2;

		public TextMeshProUGUI cd;

		public Animator startBtnAnim;

		public Animator giftAnim;

		public UIImageRes spawnerImage;

		public GameObject effect;

		[NonSerialized]
		public SpawnerExitClass _spawnerExit;

		[NonSerialized]
		public bool duringShowAnim;

		[NonSerialized]
		public bool needOpenAnim;

		[NonSerialized]
		public List<Item> _putItemSuccess;

		[NonSerialized]
		public List<Item> _putItemFailed;

		public int SpawnerExitId => 0;

		public void Start()
		{
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void Setup(SpawnerExitClass spawnerExit)
		{
		}

		public void SetImage()
		{
		}

		public void _OnSecondPass()
		{
		}

		[AsyncStateMachine(typeof(_003CPlaySpineOpenAnim_003Ed__20))]
		public UniTask PlaySpineOpenAnim()
		{
			return default(UniTask);
		}

		public void PlaySpineCloseAnim()
		{
		}

		public void OnClick()
		{
		}

		[IDTag(1)]
		public void FailExit(int id)
		{
		}

		[AsyncStateMachine(typeof(_003CFailExit_003Ed__24))]
		[IDTag(0)]
		public UniTask FailExit()
		{
			return default(UniTask);
		}

		public void ConfitmExit(int id)
		{
		}

		[AsyncStateMachine(typeof(_003CPlaySpawnExitAnim_003Ed__26))]
		public UniTask PlaySpawnExitAnim()
		{
			return default(UniTask);
		}

		public int ResolveItemDifficulty(List<Item> items)
		{
			return 0;
		}

		public RewardCommitData ResolveCoinReward(int totalDiff)
		{
			return null;
		}

		public (List<RewardCommitData>, int) ResolveStageReward(int totalDiff)
		{
			return default((List<RewardCommitData>, int));
		}

		public bool DisposeItems()
		{
			return false;
		}

		public void FlyPutItem()
		{
		}
	}
}
