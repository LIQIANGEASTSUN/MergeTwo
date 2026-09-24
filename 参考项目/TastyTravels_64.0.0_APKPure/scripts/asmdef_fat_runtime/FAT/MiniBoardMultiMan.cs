using System;
using System.Collections.Generic;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class MiniBoardMultiMan : IGameModule, IUserDataHolder
	{
		public MiniBoardMultiActivityHandler ActivityHandler;

		public static bool _isEnterFromMain;

		[NonSerialized]
		public int _curRoundIndex;

		[NonSerialized]
		public List<int> _allItemIdList;

		public bool IsUnlock => false;

		public bool IsValid => false;

		public MiniBoardMultiActivity CurActivity { get; set; }

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public void DebugResetMiniBoard()
		{
		}

		public EventMiniBoardMultiGroup GetCurGroupConfig()
		{
			return null;
		}

		public EventMiniBoardMultiInfo GetCurInfoConfig()
		{
			return null;
		}

		public EventMiniBoardMultiInfo GetTargetIndexInfoConfig(int targetIndex)
		{
			return null;
		}

		public bool CheckHasNextBoard()
		{
			return false;
		}

		public bool CheckIsLastBoard()
		{
			return false;
		}

		public bool IsItemUnlock(int itemId)
		{
			return false;
		}

		public bool CheckIsShowRedPoint(out int rpNum)
		{
			rpNum = default(int);
			return false;
		}

		public int GetCurRoundIndex()
		{
			return 0;
		}

		public void EnterMiniBoard()
		{
		}

		public void ExitMiniBoard(MiniBoardMultiActivity act, bool ignoreFromMain = false)
		{
		}

		public bool CheckCanEnterNextRound()
		{
			return false;
		}

		public void TryOpenUIEnterNextRoundTips()
		{
		}

		public bool TryEnterNextRound(out Dictionary<int, int> bonusItemIdDict, out Dictionary<int, int> inheritItemIdDict, out Dictionary<int, int> giftBoxItemIdDict)
		{
			bonusItemIdDict = null;
			inheritItemIdDict = null;
			giftBoxItemIdDict = null;
			return false;
		}

		public void SendRewardToCurBoard(Dictionary<int, int> bonusItemIdDict, Dictionary<int, int> inheritItemIdDict, Dictionary<int, int> giftBoxItemIdDict)
		{
		}

		public int GetCurUnlockItemMaxLevel()
		{
			return 0;
		}

		public int GetCurUnlockItemMaxLevelEntry()
		{
			return 0;
		}

		public bool CheckIsMiniBoardItem(int itemId)
		{
			return false;
		}

		public bool CheckIsBelongMiniBoard(int itemId)
		{
			return false;
		}

		public void OnNewItemUnlock()
		{
		}

		public void OnNewItemShow(Item itemData)
		{
		}

		public bool CheckMiniBoardOpen()
		{
			return false;
		}

		public bool CheckMiniBoardUIOpen()
		{
			return false;
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		public void SetCurActivity(MiniBoardMultiActivity activity)
		{
		}

		public void InitMiniBoardData(bool isNew)
		{
		}

		public void _InitMiniBoardDataByIndex(int index)
		{
		}

		public void _InitCurRoundIndex(int index)
		{
		}

		public void ClearMiniBoardData(bool isEnd = true)
		{
		}

		public bool CollectAllBoardReward(List<RewardCommitData> rewards)
		{
			return false;
		}

		public static void Collect(Dictionary<int, int> map, int id, int count, int maxCount = -1)
		{
		}

		public static string ConvertDictToString(Dictionary<int, int> dict)
		{
			return null;
		}

		public void _TryCollectReward(Item item, Dictionary<int, int> itemIdMap, Dictionary<int, int> rewardMap)
		{
		}

		public void _InitWorld(int boardId, bool isFirstOpen)
		{
		}

		public void _RefreshSpawnHandlerInfo()
		{
		}

		public void _RefreshAllItemIdList()
		{
		}

		public int _GetCurDropConfId()
		{
			return 0;
		}

		public void _SendStartRewardToBoard()
		{
		}

		public void _ClaimBonusItem(Dictionary<int, int> bonusItemIdDict)
		{
		}

		public void _EnsureClaimRewardCommit(MergeWorld.BonusClaimRewardData rewardData)
		{
		}

		public void _CollectInheritItem(Dictionary<int, int> inheritItemIdDict)
		{
		}

		public void _CollectGiftBoxItem(Dictionary<int, int> giftBoxItemIdDict)
		{
		}

		public void _SendInheritRewardToBoard(Dictionary<int, int> inheritItemIdDict, Dictionary<int, int> giftBoxItemIdDict)
		{
		}

		public void Reset()
		{
		}

		public void LoadConfig()
		{
		}

		public void Startup()
		{
		}

		public void _RefreshOutputInfo()
		{
		}
	}
}
