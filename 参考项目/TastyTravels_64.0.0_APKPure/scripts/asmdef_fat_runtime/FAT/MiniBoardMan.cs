using System.Collections.Generic;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class MiniBoardMan : IGameModule, IUserDataHolder
	{
		public MiniBoardActivityHandler ActivityHandler;

		public static bool _isEnterFromMain;

		public bool IsUnlock => false;

		public bool IsValid => false;

		public MiniBoardActivity CurActivity { get; set; }

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public void DebugResetMiniBoard()
		{
		}

		public EventMiniBoardDetail GetCurDetailConfig()
		{
			return null;
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

		public void EnterMiniBoard()
		{
		}

		public void ExitMiniBoard(MiniBoardActivity act)
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

		public void SetCurActivity(MiniBoardActivity activity)
		{
		}

		public void InitMiniBoardData(bool isNew)
		{
		}

		public void ClearMiniBoardData()
		{
		}

		public bool CollectAllBoardReward(List<RewardCommitData> rewards)
		{
			return false;
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

		public int _GetCurDropConfId()
		{
			return 0;
		}

		public void _SendStartRewardToBoard()
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
	}
}
