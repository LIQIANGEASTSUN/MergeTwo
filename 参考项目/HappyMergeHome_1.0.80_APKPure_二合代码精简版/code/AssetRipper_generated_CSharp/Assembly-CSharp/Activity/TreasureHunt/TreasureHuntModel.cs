using System;
using System.Collections.Generic;
using DragonU3DSDK.Storage;
using UnityEngine;

namespace Activity.TreasureHunt
{
	public class TreasureHuntModel : ActivityEntityBase
	{
		public static TreasureHuntModel _instance;

		public static readonly string coolTimeKey;

		[NonSerialized]
		public TreasureHuntActivityConfig _treasureHuntActivityConfig;

		public bool CanBreak;

		public static GameObject _flyItemObj;

		public static TreasureHuntModel Instance => null;

		public override string Guid => null;

		public bool OpenFun => false;

		public StorageTreasureHunt TreasureHunt => null;

		public TreasureHuntActivityConfig TreasureHuntActivityConfig => null;

		public static GameObject FlyItemObj => null;

		public TreasureHuntLevelConfig GetTreasureHuntLevelConfig()
		{
			return null;
		}

		public TreasureHuntStoreConfig GetTreasureHuntStoreConfig(int shopId)
		{
			return null;
		}

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

		public override bool CanDownLoadRes()
		{
			return false;
		}

		public override void InitServerDataFinish()
		{
		}

		public bool IsOpen()
		{
			return false;
		}

		public void Start()
		{
		}

		public bool IsStart()
		{
			return false;
		}

		public bool IsPreheating()
		{
			return false;
		}

		public virtual string GetActivityPreheatLeftTimeString()
		{
			return null;
		}

		public ulong GetActivityPreheatLeftTime()
		{
			return 0uL;
		}

		public void AddHammer(int count)
		{
		}

		public int GetHammer()
		{
			return 0;
		}

		public float GetCostProgress()
		{
			return 0f;
		}

		public int GetCastEnergy()
		{
			return 0;
		}

		public void TryProductHammer(int index, int id, MergeBoard board, int doubleEnergyTimes)
		{
		}

		public static void FlyHammer(Vector2 srcPos, Transform starTransform, float time, bool showEffect, Action action = null)
		{
		}

		public void PurchaseSuccess(TableShop cfg)
		{
		}

		public void PopReward(List<ResData> listResData)
		{
		}

		public bool IsBreak(int index)
		{
			return false;
		}

		public void BreakItem(int index, TreasureHuntLevelConfig levelConfig)
		{
		}

		public Transform GetFlyTarget()
		{
			return null;
		}

		public void OpenMainPopup()
		{
		}

		public bool CanShowUI()
		{
			return false;
		}

		public void ClearStorage()
		{
		}

		public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
		{
		}

		public void _003C_003EiFixBaseProxy_UpdateActivityState()
		{
		}

		public bool _003C_003EiFixBaseProxy_CanDownLoadRes()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_InitServerDataFinish()
		{
		}
	}
}
