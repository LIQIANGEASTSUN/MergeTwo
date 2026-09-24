using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using DragonU3DSDK.Storage;
using UnityEngine;

namespace Activity.ComboPlay.Model
{
	public class ComboPlayModel : ActivityEntityBase
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CAddScore_003Ed__33 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public ComboPlayModel _003C_003E4__this;

			public int index;

			public MergeBoard board;

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
		public struct _003CFlyCurrency_003Ed__43 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public int id;

			public ComboPlayModel _003C_003E4__this;

			public int type;

			public int count;

			public Vector3 scrPos;

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

		public static ComboPlayModel _instance;

		[NonSerialized]
		public List<ComboPlayStage> _curGroupList;

		[NonSerialized]
		public ComboPlayStage _curStageConfig;

		[NonSerialized]
		public bool _lastDoubleState;

		public static GameObject _flyItemObj;

		[NonSerialized]
		public bool _isFlyCollection;

		[NonSerialized]
		public int _flyId;

		public static ComboPlayModel Instance => null;

		public override string Guid => null;

		public StorageComboPlay Storage => null;

		public List<ComboPlayStage> CurGroupList => null;

		public ComboPlayStage CurStageConfig => null;

		public static GameObject FlyItemObj => null;

		[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
		public static void InitAuto()
		{
		}

		public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
		{
		}

		public void DebugReset()
		{
		}

		public void InitCheckReward()
		{
		}

		public string GetProgressStr()
		{
			return null;
		}

		public float GetProgress()
		{
			return 0f;
		}

		public float GetDoubleProgress()
		{
			return 0f;
		}

		public int GetCurStageNeedScore()
		{
			return 0;
		}

		public override void InitServerDataFinish()
		{
		}

		public bool IsJoin()
		{
			return false;
		}

		public bool IsDoubleProductTime()
		{
			return false;
		}

		public virtual string GetEndTimeString()
		{
			return null;
		}

		public virtual string GetJoinEndTimeString()
		{
			return null;
		}

		public bool IsTimeEnd()
		{
			return false;
		}

		public override bool CanDownLoadRes()
		{
			return false;
		}

		public bool CanShowMerge()
		{
			return false;
		}

		public bool CanShowJoin()
		{
			return false;
		}

		public void InitCurStageConfig()
		{
		}

		public void UpdateJoinTime()
		{
		}

		[AsyncStateMachine(typeof(_003CAddScore_003Ed__33))]
		public void AddScore(int index, MergeBoard board)
		{
		}

		public void AddScoreDebug(int addScore)
		{
		}

		public void CalculateComplete()
		{
		}

		public void TryProduct(int index, int id, MergeBoard board)
		{
		}

		public void FlyCollection(int count, Vector3 scrPos)
		{
		}

		[AsyncStateMachine(typeof(_003CFlyCurrency_003Ed__43))]
		public Task FlyCurrency(int id, int type, int count, Vector3 scrPos)
		{
			return null;
		}

		public ComboPlayStage GetNextConfig(ComboPlayStage config)
		{
			return null;
		}

		public List<int> GetCurRoundAward()
		{
			return null;
		}

		public bool IsCanShowActivity()
		{
			return false;
		}

		public bool CanShowJoinEnd()
		{
			return false;
		}

		public override void SetTempEndTime(int timer = 10)
		{
		}

		public void SetTemJoinEndTime(int timer = 10)
		{
		}

		public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
		{
		}

		public void _003C_003EiFixBaseProxy_InitServerDataFinish()
		{
		}

		public bool _003C_003EiFixBaseProxy_CanDownLoadRes()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_SetTempEndTime(int P0)
		{
		}
	}
}
