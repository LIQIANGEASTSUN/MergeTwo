using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using DragonU3DSDK.Storage;
using IFix.Core;
using Order.UI;
using UnityEngine;

namespace Activity.SummerWatermelon_4
{
	public class SummerWatermelonModel : ActivityEntityBase
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003COnNewItem_003Ed__74 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public int id;

			public SummerWatermelonModel _003C_003E4__this;

			public RefreshItemSource source;

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
		public struct _003CUseMergeItem_003Ed__87 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public TableMergeItem itemConfig;

			public SummerWatermelonModel _003C_003E4__this;

			public Vector3 srcPos;

			[NonSerialized]
			public SummerWatermelonFourStageRewardConfig _003ClevelConfig_003E5__2;

			[NonSerialized]
			public bool _003ChasUpgradeResult_003E5__3;

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

		public static bool InGuideChain;

		public const int BOARD_WIDTH = 6;

		public const int BOARD_HEIGH = 8;

		public const int BOARD_HEIGHT_BIG = 36;

		public static SummerWatermelonModel _instance;

		[NonSerialized]
		public Dictionary<int, SummerWatermelonFourFirstTimeRewardConfig> _summerWatermelonFirstTimeRewardConfig;

		[NonSerialized]
		public Dictionary<int, SummerWatermelonFourMergeRewardConfig> _summerWatermelonMergeRewardConfig;

		public int UnSetItemsCount;

		public const ulong Offset = 0uL;

		[NonSerialized]
		public bool _isInit;

		public static GameObject _flyItemObj;

		[NonSerialized]
		public bool _lastActivityOpenState;

		[NonSerialized]
		public bool isMoving;

		public static string packageCoolTimeKey;

		public List<SummerWatermelonFourPackageConfig> PackageConfig => null;

		public static SummerWatermelonModel Instance => null;

		public override string Guid => null;

		public StorageSummerWatermelonFour StorageSummerWatermelon => null;

		public SummerWatermelonFourConfig SummerWatermelonConfig => null;

		public Dictionary<int, SummerWatermelonFourFirstTimeRewardConfig> SummerWatermelonFirstTimeRewardConfig => null;

		public Dictionary<int, SummerWatermelonFourMergeRewardConfig> SummerWatermelonMergeRewardConfig => null;

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

		public bool ShowIllustratedRedPoint { get; set; }

		public virtual string PackageUIPath => null;

		[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
		public static void InitAuto()
		{
		}

		public new bool IsOpened(bool hasLog = false)
		{
			return false;
		}

		public void TryProductWaterMellon(StorageOrderItem orderItem, BaseOrderArea orderArea)
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

		public bool IsStorageEmpty()
		{
			return false;
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

		public static bool IsActivityStorageEnd(StorageSummerWatermelonFour storage)
		{
			return false;
		}

		public static void CompletedStorageActivity(StorageSummerWatermelonFour storage)
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

		[AsyncStateMachine(typeof(_003COnNewItem_003Ed__74))]
		public void OnNewItem(int id, RefreshItemSource source)
		{
		}

		public Task GetFirstTimeReward(TableMergeItem itemConfig)
		{
			return null;
		}

		public override bool CanDownLoadRes()
		{
			return false;
		}

		public (int, int) GetOrderRewardCardId(StorageOrderItem storageOrderItem)
		{
			return default((int, int));
		}

		public (int, int) GetUnlockMergeItemRewardNum(int id)
		{
			return default((int, int));
		}

		public void DebugSetBuyTime()
		{
		}

		public void DebugSetEndTime()
		{
		}

		public void DebugSetStartTime()
		{
		}

		public int GetHoe()
		{
			return 0;
		}

		public void AddHoe(int count)
		{
		}

		public long GetExp()
		{
			return 0L;
		}

		public bool AddExp(int count)
		{
			return false;
		}

		public bool CheckAndUpgradeStageRewards()
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CUseMergeItem_003Ed__87))]
		public void UseMergeItem(TableMergeItem itemConfig, Vector3 srcPos)
		{
		}

		public void FlyScore(GameObject target, int count, Vector3 scrPos, Action endCall)
		{
		}

		public void FlyItemToUnSet(int id, Vector3 srcPos, Action endCall)
		{
		}

		public void ResetMoving()
		{
		}

		public void OnUseHoeFinish()
		{
		}

		public void ClearBoard(List<MergeBoard.Grid> clearList)
		{
		}

		public bool CanDeleteItem(int id)
		{
			return false;
		}

		public string GetIllustratedProgress()
		{
			return null;
		}

		public float GetIllustratedProgressValue()
		{
			return 0f;
		}

		public (int, int) GetLineUnLockProgress()
		{
			return default((int, int));
		}

		public bool IsCanClaimFinalReward()
		{
			return false;
		}

		public void ClaimFinalReward()
		{
		}

		public bool IsAllIllustratedMergeLineUnlock()
		{
			return false;
		}

		public bool IsIllustratedMergeLineUnlock(int lineId)
		{
			return false;
		}

		public bool IsCanClaimIllustratedMergeLineReward(int lineId)
		{
			return false;
		}

		public void ClaimIllustratedMergeLineReward(SummerWatermelonFourMergeLineRewardConifig config)
		{
		}

		public void ResetIllustrated()
		{
		}

		public void RemoveIllustrated()
		{
		}

		public void AddIllustrated(int id)
		{
		}

		public SummerWatermelonFourPackageConfig GetCurrentPackage()
		{
			return null;
		}

		public int GetCurIndex()
		{
			return 0;
		}

		public void AddCurIndex()
		{
		}

		public void SetCurIndex(int index)
		{
		}

		public void DebugSetGiftTime()
		{
		}

		public bool IsPackageOpened(SummerWatermelonFourPackageConfig config)
		{
			return false;
		}

		public ulong GetPackageLeftTime(SummerWatermelonFourPackageConfig curPackage)
		{
			return 0uL;
		}

		public string GetPackageLeftTimeText(SummerWatermelonFourPackageConfig curPackage)
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

		public void GiftBagSendOneGetReward(int index)
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

		public void OpenGiftPopup(SummerWatermelonFourPackageConfig curPackage)
		{
		}

		public string GetPackageAuxItemAssetPath()
		{
			return null;
		}

		public int GetLevel()
		{
			return 0;
		}

		public void SetLevel(int level)
		{
		}

		public SummerWatermelonFourStageRewardConfig GetCurrentLevelConfig()
		{
			return null;
		}

		public SummerWatermelonFourStageRewardConfig GetLevelConfig(int level)
		{
			return null;
		}

		public SummerWatermelonFourStageRewardConfig GetNextLevelConfig()
		{
			return null;
		}

		public float GetCurrentLevelProgress()
		{
			return 0f;
		}

		public string GetCurrentLevelProgressText()
		{
			return null;
		}

		public bool IsStageRewardCompleted(int stageRewardId)
		{
			return false;
		}

		public bool IsStageRewardClaimed(int stageRewardId)
		{
			return false;
		}

		public bool CanClaimStageReward(int stageRewardId)
		{
			return false;
		}

		public List<int> GetClaimableStageRewards()
		{
			return null;
		}

		public int GetMaxLevel()
		{
			return 0;
		}

		public long GetExpToNextLevel()
		{
			return 0L;
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
}
