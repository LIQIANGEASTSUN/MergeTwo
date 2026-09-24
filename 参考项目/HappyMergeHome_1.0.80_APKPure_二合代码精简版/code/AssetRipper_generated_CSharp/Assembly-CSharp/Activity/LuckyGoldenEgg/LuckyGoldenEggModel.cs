using System;
using System.Collections.Generic;
using Activity.Base;
using DragonU3DSDK.Storage;
using UnityEngine;

namespace Activity.LuckyGoldenEgg
{
	public class LuckyGoldenEggModel : ActivityEntityBase, I_ActivityStatus
	{
		public static LuckyGoldenEggModel _instance;

		public bool CanBreak;

		public static GameObject _flyItemObj;

		public static string coolTimeKey;

		public static string coolTimeKey_Preheating;

		public static LuckyGoldenEggModel Instance => null;

		public override string Guid => null;

		public StorageLuckyGoldenEgg LuckyGoldenEgg => null;

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

		public override bool CanDownLoadRes()
		{
			return false;
		}

		public override void InitServerDataFinish()
		{
		}

		public int PayLevelGroup()
		{
			return 0;
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

		public void AddGoldenEgg(int count)
		{
		}

		public int GetGoldenEgg()
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

		public void BreakItem(int index, LuckyGoldenEggLevelConfig levelConfig)
		{
		}

		public Transform GetFlyTarget()
		{
			return null;
		}

		public void OpenMainPopup()
		{
		}

		public static bool CanShowUI()
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

		public void DebugSet()
		{
		}

		public void DebugSetPreTime()
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
