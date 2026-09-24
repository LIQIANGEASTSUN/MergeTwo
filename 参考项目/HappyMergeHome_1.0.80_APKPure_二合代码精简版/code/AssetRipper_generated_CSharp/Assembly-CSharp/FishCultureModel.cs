using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Activity.Base;
using DragonU3DSDK.Storage;
using UnityEngine;

public class FishCultureModel : ActivityEntityBase, I_ActivityStatus
{
	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CInitFromServerData_003Ed__29 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public string configJson;

		public FishCultureModel _003C_003E4__this;

		public string activityId;

		public string activityType;

		public ulong startTime;

		public ulong endTime;

		public ulong rewardEndTime;

		public bool manualEnd;

		public string activitySubType;

		[NonSerialized]
		public TaskAwaiter _003C_003Eu__1;

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

	public static FishCultureModel _instance;

	[NonSerialized]
	public bool _isFlyCollection;

	[NonSerialized]
	public bool _lastActivityOpenState;

	public const string preheatCoolTimeKey = "FishCulturePreheat";

	public List<FishCultureRewardConfig> FishCultureRewardConfigList => null;

	public List<FishCultureLeaderBoardRewardConfig> FishCultureLeaderBoardRewardConfigList => null;

	public List<FishCultureTaskRewardConfig> FishCultureTaskRewardConfigList => null;

	public static FishCultureModel Instance => null;

	public override string Guid => null;

	public StorageFishCulture CurStorageFishCultureWeek => null;

	public FishCultureGlobalConfig GlobalConfig => null;

	public long PreheatTime => 0L;

	public long PreEndTime => 0L;

	public List<FishCultureLeaderBoardRewardConfig> LeaderBoardRewardConfig => null;

	public List<FishCultureTaskRewardConfig> TaskRewardConfig => null;

	public List<FishCultureRewardConfig> LevelConfig => null;

	public bool IsUnlock => false;

	public bool ShowEntrance()
	{
		return false;
	}

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	public static void InitAuto()
	{
	}

	public void InitStorage()
	{
	}

	public static void InitTable<T>(Dictionary<int, T> config, List<T> tableData = null) where T : TableBase
	{
	}

	[AsyncStateMachine(typeof(_003CInitFromServerData_003Ed__29))]
	public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
	{
	}

	public override bool IsOpened(bool hasLog = false)
	{
		return false;
	}

	public bool IsPrivateOpened()
	{
		return false;
	}

	public bool IsStart()
	{
		return false;
	}

	public void MergeToProductFishCulture(TableMergeItem tableMergeItem, Vector3 srcPos)
	{
	}

	public void AddActivityScore(int count, Vector3 srcPos)
	{
	}

	public void FlyScore(int count, Vector3 scrPos, Action endCall)
	{
	}

	public void AddScore(int addCount, string reason)
	{
	}

	public int GetScore()
	{
		return 0;
	}

	public int GetTaskValue(StorageOrderItem taskItem, bool isMul)
	{
		return 0;
	}

	public void UpdateTime()
	{
	}

	public static bool CanShowMainPopup()
	{
		return false;
	}

	public static bool CanShowPreheatPopup()
	{
		return false;
	}

	public static bool CanShowPreheatPopupEachDay()
	{
		return false;
	}

	public bool TimeCheckGetReward()
	{
		return false;
	}

	public static bool CanShowStartPopup()
	{
		return false;
	}

	public static bool CanShowFinishPopup()
	{
		return false;
	}

	public override bool CanDownLoadRes()
	{
		return false;
	}

	public Transform GetCommonFlyTarget()
	{
		return null;
	}

	public bool BuyFish(FishCultureRewardConfig fishConfig)
	{
		return false;
	}

	public string GetProgressString()
	{
		return null;
	}

	public float GetProgress()
	{
		return 0f;
	}

	public FishCultureRewardConfig GetNextFish()
	{
		return null;
	}

	public bool ShowAuxItem()
	{
		return false;
	}

	public bool ShowTaskEntrance()
	{
		return false;
	}

	public I_ActivityStatus.ActivityStatus GetActivityStatus()
	{
		return default(I_ActivityStatus.ActivityStatus);
	}

	public void DebugSetLeftTime()
	{
	}

	public void DebugClear()
	{
	}

	public bool CanShowGuide()
	{
		return false;
	}

	public bool CanShowCommonEntranceGuide(GuideTriggerPosition position, GuideTargetType targetType)
	{
		return false;
	}

	public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
	{
	}

	public bool _003C_003EiFixBaseProxy_IsOpened(bool P0)
	{
		return false;
	}

	public bool _003C_003EiFixBaseProxy_CanDownLoadRes()
	{
		return false;
	}
}
