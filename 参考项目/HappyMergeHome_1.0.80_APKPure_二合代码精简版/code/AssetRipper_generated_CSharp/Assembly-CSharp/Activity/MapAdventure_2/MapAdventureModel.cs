using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Activity.MapAdventure_2.UI;
using DragonU3DSDK.Storage;
using IFix.Core;
using Order.UI;
using UnityEngine;

namespace Activity.MapAdventure_2
{
	public class MapAdventureModel : ActivityEntityBase
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass130_0
		{
			public MapAdventureModel _003C_003E4__this;

			public TableMergeItem itemConfig;

			public void _003COnNewItem_003Eb__0()
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003COnNewItem_003Ed__130 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public MapAdventureModel _003C_003E4__this;

			public int id;

			public RefreshItemSource source;

			[NonSerialized]
			public _003C_003Ec__DisplayClass130_0 _003C_003E8__1;

			[NonSerialized]
			public bool _003CisNewUnlockLevel_003E5__2;

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

		public static MapAdventureModel _instance;

		[NonSerialized]
		public bool _loopCreateStorage;

		[NonSerialized]
		public bool _lastActivityOpenState;

		[NonSerialized]
		public bool _pendingShowEndPopup;

		[NonSerialized]
		public StatusType _lastSceneName;

		public const string BattlePassPopupCoolTimeKey = "MapAdventureTwoBattlePassPopupDaily";

		[NonSerialized]
		public int _redPointNum;

		public const MergeBoardEnum BoardId = MergeBoardEnum.MapAdventureTwo;

		[NonSerialized]
		public Dictionary<int, TableMergeItem> _mergeItemDictionary;

		public const int StartShownFlag = 1;

		public const string TaskPopupCoolTimeKey = "MapAdventureTwoTaskPopupDaily";

		public const string PackagePopupCoolTimeKey = "MapAdventureTwoPackagePopupDaily";

		public int UnSetItemsCount;

		public const int OneAndOneGiftType = 1;

		public const int FourGiftType = 2;

		public const string NewPackagePopupCoolTimeKey = "MapAdventureTwoNewPackagePopupDaily";

		public static MapAdventureModel Instance => null;

		public bool IsUnlock => false;

		public override string Guid => null;

		public static StorageDictionary<string, StorageMapAdventureOne> StorageMapAdventureOne => null;

		public StatusType LastSceneName
		{
			get
			{
				return default(StatusType);
			}
			set
			{
			}
		}

		public StorageMapAdventureOne CurStorageMapAdventureOne => null;

		public StorageSummerWatermelonFifteenBattlePass StorageBattlePass => null;

		public List<MapAdventureTwoBattlePass> BattlePassConfig => null;

		public int CurScoreRatio => 0;

		public static UIPopupThemeParkMapActivityMainController MainView => null;

		public string StartUIPath => null;

		public string MainUIPath => null;

		public string NewLevelUIPath => null;

		public static bool IsInOwnParkMapScene => false;

		public StorageList<int> UnSetItems => null;

		public StorageList<int> UnSetRewards => null;

		public StorageDictionary<int, int> UnCollectRewards => null;

		public bool ShowIllustratedRedPoint { get; set; }

		public MapAdventureTwoMergeConfig MergeConfig => null;

		public Dictionary<int, TableMergeItem> MergeItemDictionary => null;

		public List<MapAdventureTwoPackageRewardConfig> PackageConfig => null;

		public StorageMapAdventureOneMerge StorageMerge => null;

		public StorageSummerWatermelonNewGfit StorageNewGift => null;

		public MapAdventureTwoPackageRewardConfig FourPackageConfig => null;

		[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
		public static void InitAuto()
		{
		}

		public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
		{
		}

		public override void UpdateActivityState()
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

		public bool CreateStorage()
		{
			return false;
		}

		public bool IsCanCreateHomeEntry()
		{
			return false;
		}

		public void OpenActivityLoadingWithProgress(string spineAnimationName)
		{
		}

		public void OpenActivityLoadingWithoutProgress(string spineAnimationName)
		{
		}

		public void UpdateActivityLoadingProgress(float progress)
		{
		}

		public void CloseActivityLoadingUI(bool destroy = true)
		{
		}

		public override void InitServerDataFinish()
		{
		}

		public void EndActivity()
		{
		}

		public void StartActivity()
		{
		}

		public void TryReturnFromParkMapSceneAndShowEndPopup()
		{
		}

		public static void CloseThemeParkMapPopups()
		{
		}

		public static bool IsActivityStorageEnd(StorageMapAdventureOne storage)
		{
			return false;
		}

		public static void CompletedStorageActivity(StorageMapAdventureOne storage)
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

		[IDTag(0)]
		public void RemoveUnCollectRewards(List<ResData> datas)
		{
		}

		public bool CanShowUnCollectRewardsUI()
		{
			return false;
		}

		public void UpdateTime()
		{
		}

		public void Reset()
		{
		}

		public bool IsMergeLineItem(int itemId)
		{
			return false;
		}

		public void AddEnergy(int score, string reason)
		{
		}

		public bool IsGetReward(int id, bool isNormal)
		{
			return false;
		}

		public bool IsAdsGetReward(int id)
		{
			return false;
		}

		public StorageSummerWatermelonFifteenBattlePassReward GetStorageReward(int id)
		{
			return null;
		}

		public bool IsUnLock(int itemId)
		{
			return false;
		}

		public void AddUnlockItem(int id)
		{
		}

		public void GetReward(int id, bool isNormal)
		{
		}

		public void SetAdsReward(int id)
		{
		}

		public bool IsPurchase()
		{
			return false;
		}

		public string GetBpPrice()
		{
			return null;
		}

		public int GetBPShopId()
		{
			return 0;
		}

		public MapAdventureTwoBattlePass GetBattlePassConfig(int index)
		{
			return null;
		}

		public int GetBattlePassConfigCount()
		{
			return 0;
		}

		public MapAdventureTwoBattlePass GetFrontRewardConfig(int score = -1)
		{
			return null;
		}

		public int GetCurrentScore()
		{
			return 0;
		}

		public MapAdventureTwoBattlePass GetRewardConfig(int score, out bool isEnd)
		{
			isEnd = default(bool);
			return null;
		}

		public MapAdventureTwoBattlePass GetNowRewardConfig()
		{
			return null;
		}

		public void UpdateBattlePassRedPoint()
		{
		}

		public int GetBattlePassRedPointNum()
		{
			return 0;
		}

		public void AddBattlePassConfig(StorageMapAdventureOne storage)
		{
		}

		public bool CanShowBattlePass()
		{
			return false;
		}

		public void OpenBattlePass()
		{
		}

		public bool CanShowParkMapBattlePassPopup()
		{
			return false;
		}

		public static List<ResData> GetEndBattlePassReward(StorageMapAdventureOne record)
		{
			return null;
		}

		public void BattlePassPurchaseSuccess(TableShop shopConfig)
		{
		}

		public void DebugUnlockAllBattlePass()
		{
		}

		public void DebugRefreshBattlePass()
		{
		}

		public TableMergeItem GetMergeItemConfig(int level)
		{
			return null;
		}

		public void OpenMainPopup()
		{
		}

		public bool CanShowGuide()
		{
			return false;
		}

		public bool TryShowEntranceGuideInHome()
		{
			return false;
		}

		public bool TryShowEntranceGuideInGame()
		{
			return false;
		}

		public bool TryShowParkMapGuide()
		{
			return false;
		}

		public bool CanShowParkMapStartPopup()
		{
			return false;
		}

		public void ClearBoard()
		{
		}

		public bool CanShowParkMapTaskPopup()
		{
			return false;
		}

		public bool CanShowParkMapOneAndOnePopup()
		{
			return false;
		}

		public bool ShouldShowEntryRedPoint()
		{
			return false;
		}

		public void OpenNewLevelPopup(TableMergeItem itemConfig, TaskCompletionSource<bool> callbackTask)
		{
		}

		public new ulong GetActivityLeftTime()
		{
			return 0uL;
		}

		public new string GetActivityLeftTimeString()
		{
			return null;
		}

		public int GetBigBoardUnlockLevel()
		{
			return 0;
		}

		public void InitMainStorageData(StorageMapAdventureOne storage)
		{
		}

		public List<int> GetRewardsOnMerge(TableMergeItem mergeNewConfig)
		{
			return null;
		}

		public void AddUnCollectRewards(int rewardId)
		{
		}

		[IDTag(1)]
		public void RemoveUnCollectRewards(int rewardId)
		{
		}

		public void OnUseItem(int id)
		{
		}

		[AsyncStateMachine(typeof(_003COnNewItem_003Ed__130))]
		public void OnNewItem(int id, RefreshItemSource source)
		{
		}

		public Task GetFirstTimeReward(TableMergeItem itemConfig)
		{
			return null;
		}

		public bool CanDeleteItem(int id)
		{
			return false;
		}

		public int CanMoveUp()
		{
			return 0;
		}

		public List<int> GetResolvedUnlockItemIds()
		{
			return null;
		}

		public bool IsUnLockBoard()
		{
			return false;
		}

		public void TryTransferItems()
		{
		}

		public int GetShowBgNum()
		{
			return 0;
		}

		public void ResetIllustrated()
		{
		}

		[IDTag(1)]
		public void AddIllustrated()
		{
		}

		public void RemoveIllustrated(bool isMainLine)
		{
		}

		[IDTag(0)]
		public void AddIllustrated(bool isMainLine)
		{
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

		public void DebugSetOneAndOneRefreshTime()
		{
		}

		public void DebugSetMapAdventureTwoExplore()
		{
		}

		public void DebugResetTaskState()
		{
		}

		public void DebugCompleteAllTaskUnClaimed()
		{
		}

		public void MapAdventureTwoRestMergeItem()
		{
		}

		public void AddMergeRewardsToUnSetItems(List<int> rewardIds, List<int> rewardNums)
		{
		}

		public static bool IsFinalRewardTaskType(int achieveType)
		{
			return false;
		}

		public string GetIllustratedProgress()
		{
			return null;
		}

		public int GetLineId(bool isMainLine)
		{
			return 0;
		}

		public (int, int) GetUnlockMergeItemRewardNum(int id)
		{
			return default((int, int));
		}

		public (int, int) GetLineUnlockProgress(bool isMainLine)
		{
			return default((int, int));
		}

		public (int, int) GetOrderRewardCardId(StorageOrderItem storageOrderItem)
		{
			return default((int, int));
		}

		public void TryProductEnergy(StorageOrderItem orderItem, BaseOrderArea orderArea)
		{
		}

		public MapAdventureTwoPackageRewardConfig GetCurrentPackage()
		{
			return null;
		}

		public int GetShopId()
		{
			return 0;
		}

		public List<MapAdventureTwoPackageReward> GetCurrentPackageRewards(MapAdventureTwoPackageRewardConfig packageConfig)
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

		public bool IsPackageOpened(MapAdventureTwoPackageRewardConfig config)
		{
			return false;
		}

		public ulong GetPackageLeftTime(MapAdventureTwoPackageRewardConfig curPackage)
		{
			return 0uL;
		}

		public void RefreshNexTime(ulong endTime)
		{
		}

		public string GetPackageLeftTimeText(MapAdventureTwoPackageRewardConfig curPackage)
		{
			return null;
		}

		public void OpenGiftPopup(MapAdventureTwoPackageRewardConfig curPackage)
		{
		}

		public void GiftBagSendOneGetReward(int index)
		{
		}

		public void PurchasePackageSuccess(TableShop shopConfig)
		{
		}

		public List<MapAdventureTwoPackageFourReward> GetCurrentNewPackageRewards()
		{
			return null;
		}

		public ulong GetNewPackageLeftTime()
		{
			return 0uL;
		}

		public string GetNewPackageLeftTimeText()
		{
			return null;
		}

		public bool CanShowNewPackageGift()
		{
			return false;
		}

		public int GetNewPackageGiftNum(int id)
		{
			return 0;
		}

		public void AddNewPackageGiftNum(int id)
		{
		}

		public int AddAdsNum()
		{
			return 0;
		}

		public void ResetAdsNum()
		{
		}

		public void AddNewGiftsRewards(MapAdventureTwoPackageFourReward giftReward)
		{
		}

		public void RefreshNewGift(ulong endTime)
		{
		}

		public void OpenNewGiftPopup()
		{
		}

		public bool CanShowParkMapNewGiftPopup()
		{
			return false;
		}

		public void DebugResetNewGift()
		{
		}

		public void DebugSetNewGiftRefreshTime()
		{
		}

		public bool IsMapAdventureItemId(int itemId)
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
		{
		}

		public void _003C_003EiFixBaseProxy_UpdateActivityState()
		{
		}

		public bool _003C_003EiFixBaseProxy_IsOpened(bool P0)
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_InitServerDataFinish()
		{
		}
	}
}
