using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DragonU3DSDK.Storage;
using UnityEngine;

namespace Activity.ComboCriticalHit
{
	public class ComboCriticalHitModel : ActivityEntityBase
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CAddScore_003Ed__30 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public ComboCriticalHitModel _003C_003E4__this;

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

		public static ComboCriticalHitModel _instance;

		[NonSerialized]
		public List<ComboCriticalHitStage> _curGroupList;

		[NonSerialized]
		public bool _lastDoubleState;

		public string CriticalHitMark;

		public static GameObject _flyItemObj;

		[NonSerialized]
		public bool _isFlyCollection;

		[NonSerialized]
		public int _flyId;

		[NonSerialized]
		public List<ComboCriticalHitStage> _normalRewardList;

		[NonSerialized]
		public ComboCriticalHitStage _endReward;

		public static ComboCriticalHitModel Instance => null;

		public override string Guid => null;

		public StorageComboCriticalHit Storage => null;

		public List<ComboCriticalHitStage> CurGroupList => null;

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

		public ulong GetJoinEndTime()
		{
			return 0uL;
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

		public bool CanShowJoinEnd()
		{
			return false;
		}

		public void InitCurStageConfig()
		{
		}

		public void UpdateJoinTime()
		{
		}

		[AsyncStateMachine(typeof(_003CAddScore_003Ed__30))]
		public void AddScore(int index, MergeBoard board)
		{
		}

		public void AddScoreDebug(int addScore)
		{
		}

		public void TryProduct(int index, int id, MergeBoard board)
		{
		}

		public void TryProductCriticalHit(int index, int id, MergeBoard board)
		{
		}

		public void FlyCollection(int count, Vector3 scrPos)
		{
		}

		public override void SetTempEndTime(int timer = 10)
		{
		}

		public int GetNextScore()
		{
			return 0;
		}

		public bool CanShowGetReward()
		{
			return false;
		}

		public int GetAnimStage()
		{
			return 0;
		}

		public void SetAnimState(int state)
		{
		}

		public List<ComboCriticalHitStage> GetNormalReward()
		{
			return null;
		}

		public ComboCriticalHitStage GetEndReward()
		{
			return null;
		}

		public void SetGetRewardId(int id)
		{
		}

		public bool IsGetReward(int id)
		{
			return false;
		}

		public int GetRewardIndex()
		{
			return 0;
		}

		public bool CanPopReward()
		{
			return false;
		}

		public bool IsCanGetReward()
		{
			return false;
		}

		public int GetTotalScore()
		{
			return 0;
		}

		public int GetMoveCount()
		{
			return 0;
		}

		public bool IsCompleteAll()
		{
			return false;
		}

		public void SetCompleteAll(bool complete)
		{
		}

		public bool IsEndActivity()
		{
			return false;
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
