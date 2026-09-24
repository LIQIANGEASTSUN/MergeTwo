using System;
using System.Collections.Generic;
using Activity.Base;
using DragonU3DSDK.Storage;
using UnityEngine;

namespace Activity.GardenTreasure.Model
{
	public class GardenTreasureModel : ActivityEntityBase
	{
		public static GardenTreasureModel _instance;

		public static GameObject _flyItemObj;

		public static string coolTimeKey;

		public static GardenTreasureModel Instance => null;

		public override string Guid => null;

		public StorageGardenTreasure GardenTreasure => null;

		public static GameObject FlyItemObj => null;

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

		public override void InitServerDataFinish()
		{
		}

		public void CleanUserData()
		{
		}

		public int PayLevelGroup()
		{
			return 0;
		}

		public string GetEndTimeString()
		{
			return null;
		}

		public bool IsPreheatEnd()
		{
			return false;
		}

		public string GetPreheatEndTimeString()
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

		public override bool IsOpened(bool hasLog = false)
		{
			return false;
		}

		public bool IsRandomLevel()
		{
			return false;
		}

		public GardenTreasureLevelConfig GetCurrentLevelConfig()
		{
			return null;
		}

		public GardenTreasureLevelRewardConfig GetCurrentLevelRewardConfig()
		{
			return null;
		}

		public GardenTreasureLevelRewardConfig GetRandomLevelRewardConfig()
		{
			return null;
		}

		public GardenTreasureLevelRewardConfig GetNormalLevelRewardConfig(int level)
		{
			return null;
		}

		public float GetNormalProgress()
		{
			return 0f;
		}

		public int GetNormalIndex()
		{
			return 0;
		}

		public float GetRandomProgress()
		{
			return 0f;
		}

		public float GetProgress()
		{
			return 0f;
		}

		public void PurchaseSuccess(TableShop tableShop)
		{
		}

		public void PopReward(List<ResData> listResData)
		{
		}

		public float GetCostProgress()
		{
			return 0f;
		}

		public void TryProductShovel(int index, int id, MergeBoard board, int doubleEnergyTimes)
		{
		}

		public static void FlyShovel(Vector2 srcPos, Vector2 startPos, float time, bool showEffect, Action action = null)
		{
		}

		public void RecordEnterLevelCount()
		{
		}

		public int GetEnterCurrentLevelCount()
		{
			return 0;
		}

		public int GetTotalEnterLevelCount()
		{
			return 0;
		}

		public void RecordConsume(int resourcesId)
		{
		}

		public int GetRecordConsume(int resourcesId)
		{
			return 0;
		}

		public int GetCurrentLevelId()
		{
			return 0;
		}

		public bool CanShowUI()
		{
			return false;
		}

		public I_ActivityStatus.ActivityStatus GetActivityStatus()
		{
			return default(I_ActivityStatus.ActivityStatus);
		}

		public void SetActivityStatus(I_ActivityStatus.ActivityStatus status)
		{
		}

		public void SetPreGardenEndTime()
		{
		}

		public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
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

		public bool _003C_003EiFixBaseProxy_IsOpened(bool P0)
		{
			return false;
		}
	}
}
