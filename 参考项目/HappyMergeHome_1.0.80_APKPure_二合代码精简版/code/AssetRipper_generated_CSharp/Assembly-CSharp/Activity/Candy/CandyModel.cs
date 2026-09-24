using System;
using System.Collections.Generic;
using DragonU3DSDK.Storage;
using UnityEngine;

namespace Activity.Candy
{
	public class CandyModel : ActivityEntityBase
	{
		public enum ColorEnum
		{
			Blue = 1,
			Purple = 2,
			Red = 3,
			Yellow = 4
		}

		public static CandyModel _instance;

		public static GameObject _flyItemObj;

		[NonSerialized]
		public int _createPrice;

		[NonSerialized]
		public int _consumeNum;

		[NonSerialized]
		public List<CandyRandomGroupConfig> _candyRandomGroupConfigList;

		public const string _coolTimeKey = "candyCoolTime";

		public static CandyModel Instance => null;

		public override string Guid => null;

		public static GameObject FlyItemObj => null;

		public StorageCandy CandyData => null;

		[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
		public static void InitAuto()
		{
		}

		public new bool IsOpened(bool hasLog = false)
		{
			return false;
		}

		public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
		{
		}

		public void InitCandyRandomGroupConfigList()
		{
		}

		public void RandomGroupId()
		{
		}

		public override void InitServerDataFinish()
		{
		}

		public void AddScore(int score, string reason)
		{
		}

		public bool UseScore()
		{
			return false;
		}

		public int GetCreatePrice()
		{
			return 0;
		}

		public int GetConsumeNum()
		{
			return 0;
		}

		public void AddEnergy(int index, int id, MergeBoard board, int doubleEnergyTimes)
		{
		}

		public void FlyCandy(Vector2 srcPos, Vector2 startPos, float time, bool showEffect, Action action = null)
		{
		}

		public int GetScore()
		{
			return 0;
		}

		public void OpenMainPopup()
		{
		}

		public int GetCurrentRound()
		{
			return 0;
		}

		public int GetCardReward(int id)
		{
			return 0;
		}

		public int GetCandyNum(int id)
		{
			return 0;
		}

		public float GetCostProgress()
		{
			return 0f;
		}

		public string GetCostProgressString()
		{
			return null;
		}

		public (List<int>, List<int>) LuckyDraw()
		{
			return default((List<int>, List<int>));
		}

		public bool CheckCardReward()
		{
			return false;
		}

		public void CheckEnd()
		{
		}

		public CandyRandomGroupConfig GetCurrentRandomGroup()
		{
			return null;
		}

		public int GetTotalCardRewardNum(int id)
		{
			return 0;
		}

		public int GetTotalCardRewardId(int id)
		{
			return 0;
		}

		public CandyRewadId GetRewardId(int id)
		{
			return null;
		}

		public bool CanShowCommonEntranceGuide(GuideTriggerPosition position, GuideTargetType targetType)
		{
			return false;
		}

		public bool CanShowPopupEachDay()
		{
			return false;
		}

		public void DebugClear()
		{
		}

		public void DebugSetGroupId(int id)
		{
		}

		public void DebugSetCandyTime()
		{
		}

		public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
		{
		}

		public void _003C_003EiFixBaseProxy_InitServerDataFinish()
		{
		}
	}
}
