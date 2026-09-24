using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using DragonU3DSDK.Storage;
using IFix.Core;
using UnityEngine;

public class CatSwimmingModel : ActivityEntityBase
{
	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CAddActivityScore_003Ed__50 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public int count;

		public CatSwimmingModel _003C_003E4__this;

		public Vector3 srcPos;

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
	public struct _003CAddScore_003Ed__35 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public CatSwimmingModel _003C_003E4__this;

		public int score;

		public List<TaskCompletionSource<bool>> addValueTask;

		[NonSerialized]
		public TaskAwaiter<bool> _003C_003Eu__1;

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

	public static CatSwimmingModel _instance;

	[NonSerialized]
	public int _lastCurLevel;

	[NonSerialized]
	public int _lastTotalLevel;

	[NonSerialized]
	public int _curLevel;

	[NonSerialized]
	public int _totalLevel;

	[NonSerialized]
	public bool LoopCreateStorage;

	[NonSerialized]
	public List<TaskCompletionSource<bool>> AddScoreAsyncLock;

	[NonSerialized]
	public bool AddScoreInAsync;

	[NonSerialized]
	public Dictionary<int, CatSwimmingProductConfig> _CatSwimmingProductConfig;

	[NonSerialized]
	public bool _isFlyCollection;

	[NonSerialized]
	public bool _lastActivityOpenState;

	public Dictionary<int, CatSwimmingConfig> CatSwimmingDictionary;

	public int MaxLevel;

	public int MinLevel;

	public int MaxScore;

	public static CatSwimmingModel Instance => null;

	public override string Guid => null;

	public int CurScore
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int TotalScore
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int CurLevel => 0;

	public int TotalLevel => 0;

	public Dictionary<int, CatSwimmingProductConfig> CatSwimmingProductConfig => null;

	public List<CatSwimmingConfig> CatSwimmingList => null;

	public List<CatSwimmingProductConfig> CatSwimmingProductList => null;

	public CatSwimmingGlobalConfig GlobalConfig => null;

	public List<CatSwimmingLeaderBoardRewardConfig> LeaderBoardRewardConfig => null;

	public static StorageDictionary<string, StorageCatSwimming> StorageCatSwimming => null;

	public StorageCatSwimming CurStorageCatSwimmingWeek => null;

	public bool ShowEntrance()
	{
		return false;
	}

	public List<int> GetUnCollectLevels()
	{
		return null;
	}

	public static bool IsCatSwimmingStorageEnd(StorageCatSwimming storageCatSwimming)
	{
		return false;
	}

	public List<ResData> GetUnCollectRewards()
	{
		return null;
	}

	public List<ResData> GetCurrentUnCollectRewards()
	{
		return null;
	}

	public void CleanUnCollectRewardsList()
	{
	}

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	public static void InitAuto()
	{
	}

	public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
	{
	}

	public override void SetTempEndTime(int timer = 10)
	{
	}

	public bool IsPrivateOpened()
	{
		return false;
	}

	public override void UpdateActivityState()
	{
	}

	public override void InitServerDataFinish()
	{
	}

	public new bool IsOpened(bool hasLog = false)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CAddScore_003Ed__35))]
	public void AddScore(int score, List<TaskCompletionSource<bool>> addValueTask)
	{
	}

	public bool IsMaxLevel()
	{
		return false;
	}

	public void RemoveAllCatSwimmingBanana()
	{
	}

	public bool CanManualActivity()
	{
		return false;
	}

	public int GetUpperScore(int score, int level)
	{
		return 0;
	}

	public void CompletedActivity()
	{
	}

	public bool IsComplete()
	{
		return false;
	}

	public void EndActivity()
	{
	}

	public void StartActivity()
	{
	}

	public void MergeToProductCatSwimming(TableMergeItem tableMergeItem, Vector3 srcPos)
	{
	}

	public void AddRandomTaskScore(int seat, int coin, Vector3 scrPos)
	{
	}

	public int GetRandomTaskScore(StorageOrderItem storageOrderItem)
	{
		return 0;
	}

	[AsyncStateMachine(typeof(_003CAddActivityScore_003Ed__50))]
	[IDTag(1)]
	public void AddActivityScore(int count, Vector3 srcPos)
	{
	}

	[IDTag(0)]
	public void AddActivityScore(int count)
	{
	}

	public void FlyScore(int count, Vector3 scrPos, Action endCall)
	{
	}

	public bool CanShowStartView()
	{
		return false;
	}

	public void ShowStartView()
	{
	}

	public bool CanShowPreStartView()
	{
		return false;
	}

	public void ShowPreStartView()
	{
	}

	public void UpdateTime()
	{
	}

	public bool IsCanClearBananas()
	{
		return false;
	}

	public bool IsActivityEnd()
	{
		return false;
	}

	public override bool CanDownLoadRes()
	{
		return false;
	}

	public void CleanUselessStorage()
	{
	}

	public bool CanShowTip()
	{
		return false;
	}

	public void InitConfig()
	{
	}

	public int GetMaxLevel()
	{
		return 0;
	}

	public int GetMaxScore()
	{
		return 0;
	}

	public int GetLevelByScore(int score)
	{
		return 0;
	}

	public int GetLevelBaseScore(int level)
	{
		return 0;
	}

	public int GetLevelStageScore(int level)
	{
		return 0;
	}

	public List<ResData> GetLevelRewards(int level)
	{
		return null;
	}

	public int GetLevelRewardsShowId(int level)
	{
		return 0;
	}

	public bool CreateStorage()
	{
		return false;
	}

	public static StorageCatSwimming GetFirstWeekCanGetReward()
	{
		return null;
	}

	public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
	{
	}

	public void _003C_003EiFixBaseProxy_SetTempEndTime(int P0)
	{
	}

	public void _003C_003EiFixBaseProxy_UpdateActivityState()
	{
	}

	public void _003C_003EiFixBaseProxy_InitServerDataFinish()
	{
	}

	public bool _003C_003EiFixBaseProxy_CanDownLoadRes()
	{
		return false;
	}
}
