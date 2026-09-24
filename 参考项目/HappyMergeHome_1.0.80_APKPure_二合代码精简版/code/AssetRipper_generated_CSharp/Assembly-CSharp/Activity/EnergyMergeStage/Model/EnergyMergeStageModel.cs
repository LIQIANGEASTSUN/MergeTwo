using System;
using System.Collections.Generic;
using DragonU3DSDK.Storage;
using UnityEngine;

namespace Activity.EnergyMergeStage.Model
{
	public class EnergyMergeStageModel : ActivityEntityBase
	{
		public const int TOTAL_PERSON_COUNT = 57;

		public const int MaxRoundCount = 4;

		public const int NodesPerRound = 7;

		public static EnergyMergeStageModel _instance;

		[NonSerialized]
		public EnergyMSRoundReward _currentRoundReward;

		[NonSerialized]
		public List<EnergyMSReward> _currentGroupRewards;

		[NonSerialized]
		public EnergyMSReward _currentReward;

		[NonSerialized]
		public readonly List<int> _seatNums;

		[NonSerialized]
		public readonly string _coolTimeKey;

		[NonSerialized]
		public bool _playMainIntroAfterRoundPopupJoin;

		[NonSerialized]
		public bool _isFlyCollection;

		public static EnergyMergeStageModel Instance => null;

		public override string Guid => null;

		public EnergyMSReward CurrentReward => null;

		public EnergyMSReward CurrentEnergyRaceReward => null;

		public List<EnergyMSReward> CurrentGroupRewards => null;

		public EnergyMSRoundReward CurrentRoundRewards => null;

		public List<EnergyMSReward> CurrentGroupEnergyRaceRewards => null;

		public List<int> SeatNums => null;

		public StorageEnergyMergeStage Data => null;

		public StorageEnergyMergeStage EnergyRaceData => null;

		public int GetSeatNumForLevel(int levelIndex)
		{
			return 0;
		}

		[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
		public static void InitAuto()
		{
		}

		public static void OnEnergyMergeApplicationQuitting()
		{
		}

		public void TryAbortEnergyMergeOnboardingOnQuit()
		{
		}

		public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
		{
		}

		public override void InitServerDataFinish()
		{
		}

		public void InitGroup()
		{
		}

		public void InitRoundAward()
		{
		}

		public EnergyMSRoundReward TryGetRoundRewardConfigForZeroBasedRound(int zeroBasedRoundIndex)
		{
			return null;
		}

		public void InitAwardList()
		{
		}

		public bool IsOpened()
		{
			return false;
		}

		public bool ShouldPlayRoundFirstEnterIntro()
		{
			return false;
		}

		public void MarkRoundFirstEnterIntroPlayed()
		{
		}

		public void RequestMainIntroAfterRoundPopupJoin()
		{
		}

		public bool IsJoinRacing()
		{
			return false;
		}

		public bool IsShowReward()
		{
			return false;
		}

		public bool CanShowRedPoint()
		{
			return false;
		}

		public bool IsShowEnd()
		{
			return false;
		}

		public bool CanShowEnd()
		{
			return false;
		}

		public float GetCurrentLevelProgress()
		{
			return 0f;
		}

		public string GetCurrentLevel()
		{
			return null;
		}

		public int GetSelfScore()
		{
			return 0;
		}

		public string GetProgress()
		{
			return null;
		}

		public (int, int) GetProgressNum()
		{
			return default((int, int));
		}

		public (int, int) GetProgressCompleteNum()
		{
			return default((int, int));
		}

		public int GetCurrentIndex()
		{
			return 0;
		}

		public StorageEnergyRaceLevel GetEnergyRaceLevel(int index)
		{
			return null;
		}

		public void SetSeatsData(int level, int seatId, int iconId)
		{
		}

		public void SetStaticSeatsData(int level, int seatId, int iconId)
		{
		}

		public void RemoveSeatsData(int level, int seatId)
		{
		}

		public void CreateSeatData(int level)
		{
		}

		public EnergyMSReward GetCurrentRaceReward(int id)
		{
			return null;
		}

		public EnergyMSReward GetNextCurrentRaceReward(int id)
		{
			return null;
		}

		public bool IsLastNodeOfCurrentRound()
		{
			return false;
		}

		public void ApplyAwaitManualNextRoundAfterRoundRewards()
		{
		}

		public int GetFristRewardId()
		{
			return 0;
		}

		public void JoinOrInitRacing(bool isJoin)
		{
		}

		public void InitRacingPlayer(bool isCreateNew, int count)
		{
		}

		public void CalRobotScoreChange(long beginTime, int targetScore, StorageEnergyRacePlayer robot)
		{
		}

		public void CheckRobotScoreUpdate()
		{
		}

		public void CalRacingEnd()
		{
		}

		public void CalRacingDone()
		{
		}

		public void SortRank()
		{
		}

		public int GetRandomTaskScore(StorageOrderItem orderItem)
		{
			return 0;
		}

		public void AddRandomTaskScore(int seat, int coin, Vector3 scrPos)
		{
		}

		public void AddMergeScore(int mergeId, Vector3 scrPos, string from)
		{
		}

		public void AddNextScore(int score)
		{
		}

		public void TryFlushNextAddScoreAfterJoin()
		{
		}

		public void AddScore(int score, Vector3 scrPos, bool isFly = true)
		{
		}

		public void FlyScore(int count, Vector3 scrPos, Action callBack)
		{
		}

		public void SendRewarRoundBI()
		{
		}

		public void SendEnergyMergeStageStartBi()
		{
		}

		public void SendEnergyMergeStageResultBi(bool challengeSuccess)
		{
		}

		public bool CanShowJoinRacing()
		{
			return false;
		}

		public void RecordOpenJoinRacing()
		{
		}

		public bool TimeCheckRacingEnding()
		{
			return false;
		}

		public void TryOpenMain(bool isWin = false)
		{
		}

		public void DebugReset()
		{
		}

		public void AddScoreDebug(int collection)
		{
		}

		public void DebugSetRobotScore()
		{
		}

		public void DebugSetRobotScoreTwo()
		{
		}

		public void DebugResetStartCoolTime()
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
