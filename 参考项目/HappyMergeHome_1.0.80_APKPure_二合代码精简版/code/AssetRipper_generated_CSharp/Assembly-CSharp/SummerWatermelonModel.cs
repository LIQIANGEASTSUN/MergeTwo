using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using DragonU3DSDK.Storage;
using IFix.Core;
using UnityEngine;

public class SummerWatermelonModel : ActivityEntityBase
{
	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass84_0
	{
		public List<ResData> rewardsList;

		public TaskCompletionSource<bool> taskRewardCollect;

		public void _003COnNewItem_003Eb__0()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003COnNewItem_003Ed__84 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public int id;

		public SummerWatermelonModel _003C_003E4__this;

		public RefreshItemSource source;

		[NonSerialized]
		public _003C_003Ec__DisplayClass84_0 _003C_003E8__1;

		[NonSerialized]
		public TableMergeItem _003CitemConfig_003E5__2;

		[NonSerialized]
		public TaskAwaiter _003C_003Eu__1;

		[NonSerialized]
		public TaskAwaiter<bool> _003C_003Eu__2;

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

	public static bool InGuideChain;

	public const int BOARD_WIDTH = 5;

	public const int BOARD_HEIGHT = 5;

	public static SummerWatermelonModel _instance;

	[NonSerialized]
	public Dictionary<int, SummerWatermelonProductConfig> _summerWatermelonProductConfig;

	[NonSerialized]
	public Dictionary<int, SummerWatermelonFirstTimeRewardConfig> _summerWatermelonFirstTimeRewardConfig;

	[NonSerialized]
	public Dictionary<int, SummerWatermelonMergeRewardConfig> _summerWatermelonMergeRewardConfig;

	[NonSerialized]
	public Dictionary<int, TableMergeItem> _mergeItemDictionary;

	public int UnSetItemsCount;

	public const ulong Offset = 0uL;

	[NonSerialized]
	public bool _isInit;

	public static GameObject _flyItemObj;

	[NonSerialized]
	public bool _lastActivityOpenState;

	public static string packageCoolTimeKey;

	public List<SummerWatermelonPackageConfig> PackageConfig => null;

	public List<SummerWatermelonProductAttenuationConfig> ProductAttenuationConfig => null;

	public static SummerWatermelonModel Instance => null;

	public override string Guid => null;

	public StorageSummerWatermelon StorageSummerWatermelon => null;

	public SummerWatermelonConfig SummerWatermelonConfig => null;

	public Dictionary<int, SummerWatermelonProductConfig> SummerWatermelonProductConfig => null;

	public Dictionary<int, SummerWatermelonFirstTimeRewardConfig> SummerWatermelonFirstTimeRewardConfig => null;

	public Dictionary<int, SummerWatermelonMergeRewardConfig> SummerWatermelonMergeRewardConfig => null;

	public TableMergeLine MergeLineConfig => null;

	public Dictionary<int, TableMergeItem> MergeItemDictionary => null;

	public StorageList<int> UnSetItems => null;

	public StorageList<int> UnSetRewards => null;

	public StorageDictionary<int, int> UnCollectRewards => null;

	public bool IsStart => false;

	public int CurDay => 0;

	public ulong CurTime => 0uL;

	public static GameObject FlyItemObj => null;

	public static UIPopupSummerWatermelonMainController MainView => null;

	public virtual string MainUIPath => null;

	public virtual string StartUIPath => null;

	public virtual string NewLevelUIPath => null;

	public virtual string PackageUIPath => null;

	public float GetProductAttenuationConfig(int dayProductCount)
	{
		return 0f;
	}

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	public static void InitAuto()
	{
	}

	public TableMergeItem GetMergeItemConfig(int level)
	{
		return null;
	}

	public new bool IsOpened(bool hasLog = false)
	{
		return false;
	}

	public void TryProductWaterMellon(int index, int id, MergeBoard board, int doubleEnergyTimes)
	{
	}

	public static void FlyWatermelon(int itemId, Vector2 srcPos, Transform starTransform, float time, bool showEffect, Action action = null)
	{
	}

	public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
	{
	}

	public long GetLastActivityEndTime()
	{
		return 0L;
	}

	public void ClearAllData()
	{
	}

	public override void InitServerDataFinish()
	{
	}

	public void OpenMainPopup()
	{
	}

	public static bool CanShowStartView()
	{
		return false;
	}

	public void OpenNewLevelPopup(TableMergeItem itemConfig, TaskCompletionSource<bool> callbackTask)
	{
	}

	public void UpdateTime()
	{
	}

	public void EndActivity()
	{
	}

	public void StartActivity()
	{
	}

	public static bool IsActivityStorageEnd(StorageSummerWatermelon storage)
	{
		return false;
	}

	public static void CompletedStorageActivity(StorageSummerWatermelon storage)
	{
	}

	public static void CleanUnCollectRewards()
	{
	}

	public void RemoveUselessStorage()
	{
	}

	public static List<ResData> GetAllUnCollectRewards()
	{
		return null;
	}

	[IDTag(1)]
	public void RemoveUnCollectRewards(List<ResData> datas)
	{
	}

	public bool CanShowUnCollectRewardsUI()
	{
		return false;
	}

	public List<int> GetRewardsOnMerge(TableMergeItem mergeNewConfig)
	{
		return null;
	}

	public void AddUnCollectRewards(int rewardId)
	{
	}

	[IDTag(0)]
	public void RemoveUnCollectRewards(int rewardId)
	{
	}

	public void OnUseItem(int id)
	{
	}

	[AsyncStateMachine(typeof(_003COnNewItem_003Ed__84))]
	public void OnNewItem(int id, RefreshItemSource source)
	{
	}

	public override bool CanDownLoadRes()
	{
		return false;
	}

	public SummerWatermelonPackageConfig GetCurrentPackage()
	{
		return null;
	}

	public void DebugSetGiftTime()
	{
	}

	public bool IsPackageOpened(SummerWatermelonPackageConfig config)
	{
		return false;
	}

	public ulong GetPackageLeftTime(SummerWatermelonPackageConfig curPackage)
	{
		return 0uL;
	}

	public string GetPackageLeftTimeText(SummerWatermelonPackageConfig curPackage)
	{
		return null;
	}

	public bool IsSummerWatermelonItemId(int itemId)
	{
		return false;
	}

	public void PurchasePackageSuccess(TableShop shopConfig)
	{
	}

	public bool ContinuePopupUI()
	{
		return false;
	}

	public static bool CanShowPackagePopupEachDay()
	{
		return false;
	}

	public UIPopupSummerWatermelonGiftController OpenGiftPopup(SummerWatermelonPackageConfig curPackage)
	{
		return null;
	}

	public string GetPackageAuxItemAssetPath()
	{
		return null;
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
}
