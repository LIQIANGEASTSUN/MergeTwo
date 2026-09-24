using System;
using System.Collections.Generic;
using DG.Tweening;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityOrderLike : ActivityLike, IBoardEntry, IActivityOrderHandler, ISpawnEffectWithTrail, ISpawnEffect, IActivitySlider
	{
		public class OrderLikeRaceBot : IBotProfileHolder
		{
			public int Id;

			public int Uid;

			public double Score;

			public long LastUpdate;

			public double LeftScore;

			public BotProfile Profile;

			public bool Finished => false;

			public BotProfile GetProfile()
			{
				return default(BotProfile);
			}

			public void SetProfile(BotProfile p)
			{
			}

			public bool UpdateOnline(long curTime)
			{
				return false;
			}

			public void UpdateOffline(long offlineTime)
			{
			}
		}

		[NonSerialized]
		public int _roundCount;

		[NonSerialized]
		public Dictionary<int, int> _orderTippedDict;

		[NonSerialized]
		public int _claimedTokenCount;

		[NonSerialized]
		public int _orderNum;

		[NonSerialized]
		public bool _hasPop;

		[NonSerialized]
		public bool _hasPopupAdded;

		[NonSerialized]
		public int _flyingToken;

		[NonSerialized]
		public bool _pendingRoundStartPopup;

		[NonSerialized]
		public ScreenPopup _pendingRoundStartPopupTarget;

		[NonSerialized]
		public PopupType _pendingRoundStartPopupState;

		[NonSerialized]
		public bool _roundStartMainBoardOpenListenerAdded;

		[NonSerialized]
		public Dictionary<int, (int tokenNum, int maxTimes)> _curRoundTokenDict;

		[NonSerialized]
		public EventOrderLike _conf;

		[NonSerialized]
		public EventOrderLikeDetail _confDetail;

		[NonSerialized]
		public int _raceWindowIndex;

		[NonSerialized]
		public int _raceRoundIndex;

		[NonSerialized]
		public bool _raceRoundFinished;

		[NonSerialized]
		public long _raceRoundStartTS;

		[NonSerialized]
		public bool _raceWaitChestRewardClaim;

		[NonSerialized]
		public int _finishedRoundId;

		[NonSerialized]
		public List<OrderLikeRaceBot> _raceBots;

		[NonSerialized]
		public int _raceFinishedByBots;

		[NonSerialized]
		public int _raceLastUpdateTime;

		[NonSerialized]
		public int _raceBotAvatar1;

		[NonSerialized]
		public int _raceBotAvatar2;

		public const int ArchiveVersionKey = 100;

		public const int BotCountKey = 101;

		public const int BotStrideKey = 102;

		public const int ArchiveVersion = 1;

		public const int CurrentBotStride = 6;

		public const int BotDataStart = 110;

		[NonSerialized]
		public readonly List<BotProfile> botProfilePool;

		[NonSerialized]
		public List<RewardCommitData> _rankRewards;

		[NonSerialized]
		public bool _raceWindowActive;

		[NonSerialized]
		public long _raceWindowEndTS;

		[NonSerialized]
		public int _uiPrevPlayerToken;

		[NonSerialized]
		public int _uiPrevBot1Display;

		[NonSerialized]
		public int _uiPrevBot2Display;

		public int DisplayToken => 0;

		public int CurToken => 0;

		public int MaxToken => 0;

		public bool ReadyToClaim => false;

		public int TokenId => 0;

		public bool IsCorner => false;

		public bool Win => false;

		public int RaceToken => 0;

		public IReadOnlyList<RewardCommitData> RankRewards => null;

		public IReadOnlyList<OrderLikeRaceBot> RaceBots => null;

		public VisualPopup RoundStartRes { get; }

		public VisualRes HelpRes { get; }

		public VisualPopup MainRes { get; }

		public VisualRes VisualTip { get; }

		public string corner_entry_res_key => null;

		public string buff_entry_res_key => null;

		public string trail_res_key => null;

		public bool TryGetRaceRoundData(out int lifeSecs, out IList<int> rewardIds, out IList<int> robotIds)
		{
			lifeSecs = default(int);
			rewardIds = null;
			robotIds = null;
			return false;
		}

		public int GetRaceRoundToken()
		{
			return 0;
		}

		public int GetRaceRoundLifeTimeSeconds()
		{
			return 0;
		}

		public int GetRaceRoundCountdown()
		{
			return 0;
		}

		public void GetPreviousScores(out int playerToken, out int bot1Display, out int bot2Display)
		{
			playerToken = default(int);
			bot1Display = default(int);
			bot2Display = default(int);
		}

		public void SetPreviousScores(int playerToken, int bot1Display, int bot2Display)
		{
		}

		public int GetRaceBotAvatarIndex(int botIndex)
		{
			return 0;
		}

		public void _RandomizeRaceBotAvatars()
		{
		}

		public ActivityOrderLike(ActivityLite lite_)
		{
		}

		string IBoardEntry.BoardEntryAsset()
		{
			return null;
		}

		public void ResolveFlyingToken(int amount)
		{
		}

		public bool CanPopupOnMainBoard()
		{
			return false;
		}

		public void ClearRankRewards()
		{
		}

		public bool TryClaimReward(IList<(RewardCommitData, float)> rewards)
		{
			return false;
		}

		public void MoveToNextRound()
		{
		}

		public int GetTippedTokens()
		{
			return 0;
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void AfterLoad(ActivityInstance data_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void Open()
		{
		}

		public void OpenRoundStart()
		{
		}

		public void TryOpenRaceMainOrRoundStart()
		{
		}

		public void SetupNormalThemeAndPopup()
		{
		}

		public void OpenHelp()
		{
		}

		public void MarkPopupDone()
		{
		}

		public override void SetupFresh()
		{
		}

		public void AddToken(int id, int count, int orderId)
		{
		}

		public void TrackRoundStart()
		{
		}

		public void TrackMilestone(int orderId)
		{
		}

		public void TrackReward(string rewardStr, int difficulty)
		{
		}

		public void InitConf()
		{
		}

		public override void WhenActive(bool new_)
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public void TryQueueRoundStartPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public void OnMergeBoardMainOpenForRoundStartPopup()
		{
		}

		public void RemoveRoundStartMainBoardOpenListener()
		{
		}

		public void RefreshRoundConf()
		{
		}

		public bool TryGetScoreTipText(int prevToken, int curToken, out string tipText)
		{
			tipText = null;
			return false;
		}

		public static string GetExtraRewardMiniThemeRes(int eventId, int paramId)
		{
			return null;
		}

		bool IActivityOrderHandler.IsValidForBoard(int boardId)
		{
			return false;
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		void ISpawnEffectWithTrail.AddTrail(MBItemView view, Tween tween)
		{
		}

		public string SliderPrefabAsset()
		{
			return null;
		}

		public void _OnSecondRace()
		{
		}

		public void UpdateRaceWindow()
		{
		}

		public int _FindRaceWindowIndexAtTS(long ts)
		{
			return 0;
		}

		public bool IsInRaceRound()
		{
			return false;
		}

		public void TryStartRaceRound()
		{
		}

		public void TryCheckRaceFinishByBots()
		{
		}

		public void TryCheckRacePlayerFinish()
		{
		}

		public void MoveRaceToNextRoundOrEnd()
		{
		}

		public void _AddOfflineRaceScore()
		{
		}

		public override void WhenReset()
		{
		}

		public override void WhenEnd()
		{
		}

		public static void DebugAddRaceRobotScore(int which)
		{
		}

		public void _DebugAddRaceRobotScoreInternal(int which)
		{
		}

		public void _003C_003EiFixBaseProxy_AfterLoad(ActivityInstance P0)
		{
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenActive(bool P0)
		{
		}

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}
	}
}
