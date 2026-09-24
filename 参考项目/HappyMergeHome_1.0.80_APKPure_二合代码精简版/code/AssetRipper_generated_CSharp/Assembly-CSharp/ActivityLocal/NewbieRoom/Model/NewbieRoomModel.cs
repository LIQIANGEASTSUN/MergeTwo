using System;
using System.Collections.Generic;
using DragonU3DSDK.Storage;
using UnityEngine;

namespace ActivityLocal.NewbieRoom.Model
{
	public class NewbieRoomModel : Manager<NewbieRoomModel>
	{
		public const int BOARD_WIDTH = 4;

		public const int BOARD_HEIGHT = 4;

		public const int LINE_ID = 22206;

		[NonSerialized]
		public Dictionary<int, TableMergeItem> _mergeItemDictionary;

		public int UnSetItemsCount;

		public TableMergeLine MergeLineConfig => null;

		public Dictionary<int, TableMergeItem> MergeItemDictionary => null;

		public StorageList<int> UnSetItems => null;

		public StorageNewbieRoom StorageNewbieRoom => null;

		public NewbieRoomNode GetCurrentNewbieRoomNode()
		{
			return null;
		}

		public List<NewbieRoomTask> GetNewbieRoomTaskConfigList()
		{
			return null;
		}

		public List<NewbieRoomConfig> GetNewbieRoomConfigList()
		{
			return null;
		}

		public List<NewbieRoomReawrd> GetNewbieRoomRewardConfigList()
		{
			return null;
		}

		public NewbieRoomReawrd GetNewbieRoomRewardConfig(int id)
		{
			return null;
		}

		public NewbieRoomConfig GetNewbieRoomConfig()
		{
			return null;
		}

		public NewbieRoomNode GetNewbieRoomNode(int id)
		{
			return null;
		}

		public TableMergeItem GetMergeItemConfig(int level)
		{
			return null;
		}

		public bool IsOpenedHomeEntry()
		{
			return false;
		}

		public bool IsOpened()
		{
			return false;
		}

		public void InitFirstRoom()
		{
		}

		public bool IsOwnNode(int nodeId)
		{
			return false;
		}

		public long GetLeftTime()
		{
			return 0L;
		}

		public string GetLeftTimeString()
		{
			return null;
		}

		public void AddKnifeCount(int count)
		{
		}

		public int GetKnifeCount()
		{
			return 0;
		}

		public void BuyNode(NewbieRoomNode _config)
		{
		}

		public void SetOpeningBox(int nodeId)
		{
		}

		public int GetOpeningBox()
		{
			return 0;
		}

		public bool IsBoxClaimed(int id)
		{
			return false;
		}

		public NewbieRoomReawrd GetCanClaim()
		{
			return null;
		}

		public bool IsCanClaim(int id)
		{
			return false;
		}

		public void ClaimBox(int id, Action action)
		{
		}

		public void AddBoxReward(int id)
		{
		}

		public float GetSliderValue()
		{
			return 0f;
		}

		public bool IsShowStart()
		{
			return false;
		}

		public void RecordShowStart()
		{
		}

		public void OnProduct(int index, int id, MergeBoard board, int doubleEnergyTimes)
		{
		}

		public void FlyKnife(int count, Vector3 scrPos)
		{
		}

		public NewbieRoomTask GetCurrentTaskConfig()
		{
			return null;
		}

		public void AddExp(int count)
		{
		}

		public int GetExp()
		{
			return 0;
		}

		public bool IsFinishAllNode()
		{
			return false;
		}
	}
}
