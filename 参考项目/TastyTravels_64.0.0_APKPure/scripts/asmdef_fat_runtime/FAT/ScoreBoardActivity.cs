using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using EL.Resource;
using FAT.Merge;
using IFix.Core;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ScoreBoardActivity : ActivityLike, IBoardEntry, IBoardArchive, IActivityUpdate, IActivityOrderHandler, IBoardActivityHandbook, IBoardActivityRowConf, IBoardActivityOutput, IBoardMoveAdapter, IBoardExtremeAdapter, IExternalOutput, MergeWorld.IActivityHandler, IScoreSpecialBoardAdapter, IBoardBoostHost, IActivityCupChallengeTaskJump, IBoardSkinBindingSource, IBoardMainChainSource
	{
		public enum SaveKey
		{
			GroupId = 1,
			MilestoneIndex = 2,
			CycleMilestoneIndex = 3,
			TotalMilestoneCount = 4,
			CurrentScore = 5,
			TokenCount = 6,
			BoardDepth = 7,
			HelpPopped = 8,
			BoardId = 9,
			DetailId = 10,
			UnlockCloudLevel = 11,
			MilestoneFinishPending = 12,
			BoostState = 13,
			BoostMaxUnlocked = 14,
			BoostMaxShown = 15,
			MilestoneItemRewardCount = 16,
			MilestoneItemRewardBase = 1000
		}

		public class ScoreBoardTokenChangeInfo
		{
			public int TokenId;

			public int Before;

			public int After;

			public int Delta;

			public ReasonString Reason;

			public void Set(int tokenId, int before, int after, int delta, ReasonString reason)
			{
			}

			public void Clear()
			{
			}
		}

		public class ScoreBoardSpawnItemInfo
		{
			public int ItemId;

			public int Count;

			public Item Item;

			public Vector2Int Coord;

			public RewardCommitData Reward;

			public float Delay;

			public bool IsInRewardBox => false;

			public bool IsPendingReward => false;

			public void Set(int itemId, int count, Item item, RewardCommitData reward, float delay = 0f)
			{
			}
		}

		public class ScoreBoardUseTokenInfo
		{
			public int UseNum;

			public int TokenBefore;

			public int TokenAfter;

			public Vector3 FromPos;

			public readonly List<ScoreBoardSpawnItemInfo> SpawnItems;

			public void Begin(int useNum, int tokenBefore, int tokenAfter, Vector3 fromPos)
			{
			}

			public void Clear()
			{
			}
		}

		public class ScoreBoardMilestoneCompleteInfo
		{
			public int MilestoneIndex;

			public int CycleMilestoneIndex;

			public bool IsCycle;

			public int MilestoneId;

			public int MilestoneScore;

			public int FromScore;

			public int ToScore;

			public readonly List<ScoreBoardSpawnItemInfo> ItemRewards;

			public readonly List<RewardCommitData> Rewards;

			public void Set(int milestoneIndex, int cycleMilestoneIndex, bool isCycle, int milestoneId, int milestoneScore, int fromScore, int toScore)
			{
			}
		}

		public class ScoreBoardMilestoneProgressInfo
		{
			public int AddScore;

			public int SourceItemId;

			public Item SourceItem;

			public Vector2Int SourceCoord;

			public int FromMilestoneIndex;

			public int FromCycleMilestoneIndex;

			public int FromScore;

			public int ToMilestoneIndex;

			public int ToCycleMilestoneIndex;

			public int ToScore;

			public readonly List<ScoreBoardMilestoneCompleteInfo> CompletedList;

			public void Begin(int addScore, int milestoneIndex, int cycleMilestoneIndex, int currentScore, Item sourceItem)
			{
			}

			public void End(int milestoneIndex, int cycleMilestoneIndex, int currentScore)
			{
			}

			public void Clear()
			{
			}
		}

		public class ScoreBoardCloudUnlockInfo
		{
			public int BeforeLevel;

			public int AfterLevel;

			public int ItemId;

			public int UnlockType;

			public Item SourceItem;

			public Vector2Int SourceCoord;

			public void Set(int beforeLevel, int afterLevel, int itemId, int unlockType, Item sourceItem)
			{
			}

			public void Clear()
			{
			}
		}

		public class ScoreBoardHandbookUnlockInfo
		{
			public int ItemId;

			public Item Item;

			public Vector2Int Coord;

			public void Set(Item item)
			{
			}

			public void Clear()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003CCoDelayMilestoneItemReward_003Ed__216 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public List<(RewardCommitData reward, float delay)> rewardList;

			public Vector3 origin;

			[NonSerialized]
			public int _003Ci_003E5__2;

			[NonSerialized]
			public RewardCommitData _003Creward_003E5__3;

			[NonSerialized]
			public float _003Cdelay_003E5__4;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CCoDelayMilestoneItemReward_003Ed__216(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003CCoPlaySound_003Ed__215 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public float delay;

			public string soundName;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CCoPlaySound_003Ed__215(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__370 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ScoreBoardActivity _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<(string, AssetTag)> _003C_003E7__wrap1;

			(string, AssetTag) IEnumerator<(string, AssetTag)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((string, AssetTag));
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CResEnumerate_003Ed__370(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			public void _003C_003Em__Finally1()
			{
			}

			public void _003C_003Em__Finally2()
			{
			}

			public void _003C_003Em__Finally3()
			{
			}

			public void _003C_003Em__Finally4()
			{
			}

			public void _003C_003Em__Finally5()
			{
			}

			public void _003C_003Em__Finally6()
			{
			}

			public void _003C_003Em__Finally7()
			{
			}

			public void _003C_003Em__Finally8()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<(string, AssetTag)> IEnumerable<(string, AssetTag)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[NonSerialized]
		public BoardMoveHandler _boardMoveHandler;

		[NonSerialized]
		public BoardExtremeHandler _boardExtremeHandler;

		[NonSerialized]
		public int _cycleStartRowId;

		[NonSerialized]
		public readonly List<int> _handbookItemIdList;

		[NonSerialized]
		public readonly List<int> _milestoneItemIdList;

		[NonSerialized]
		public readonly List<int> _rowConfIdList;

		[NonSerialized]
		public readonly Dictionary<int, string> _rowConfStrDict;

		[NonSerialized]
		public readonly Dictionary<int, (int itemId, int type)> _cloudItemIdDict;

		[NonSerialized]
		public readonly Dictionary<int, ScoreSpecialBoardItemData> _mergeScoreDict;

		[NonSerialized]
		public int _groupId;

		[NonSerialized]
		public int _milestoneIndex;

		[NonSerialized]
		public int _cycleMilestoneIndex;

		[NonSerialized]
		public int _totalMilestoneCount;

		[NonSerialized]
		public int _currentScore;

		[NonSerialized]
		public int _tokenCount;

		[NonSerialized]
		public int _boardDepth;

		[NonSerialized]
		public bool _helpPopped;

		[NonSerialized]
		public int _boardId;

		[NonSerialized]
		public int _detailId;

		[NonSerialized]
		public int _unlockCloudLevel;

		[NonSerialized]
		public bool _milestoneFinishPending;

		[NonSerialized]
		public bool _configReady;

		[NonSerialized]
		public int _tokenId;

		[NonSerialized]
		public int _mergeScoreTokenId;

		[NonSerialized]
		public int _currentScoreNeed;

		[NonSerialized]
		public bool _supportEnergyOutput;

		[NonSerialized]
		public bool _supportOrderOutput;

		[NonSerialized]
		public bool _finishPendingEndAfterLoad;

		[NonSerialized]
		public bool _startPopupQueued;

		[NonSerialized]
		public MergeWorld _world;

		[NonSerialized]
		public MergeWorldTracer _worldTracer;

		[NonSerialized]
		public ScoreSpecialBoardEntity _scoreSpecialBoardEntity;

		public const int DebugRuntimeLogLimit = 20000;

		[NonSerialized]
		public readonly List<string> _debugRuntimeLogList;

		[NonSerialized]
		public ActivityBoardHandbookAgent _handbookAgent;

		[NonSerialized]
		public readonly List<RewardCommitData> _milestoneRewardList;

		[NonSerialized]
		public readonly List<int> _milestoneItemRewardList;

		[NonSerialized]
		public bool _milestoneFinishUIPending;

		public static readonly float MilestoneItemRewardFlyDelay;

		public static readonly float MilestoneItemRewardFlyInterval;

		public const int MaxPendingMilestoneItemRewardCount = 50;

		public const string MilestoneItemRewardTrailPrefab = "fat_guide:fx_common_trail.prefab";

		[NonSerialized]
		public readonly List<RewardCommitData> _endRewardList;

		[NonSerialized]
		public int _tokenChangeVersion;

		[NonSerialized]
		public int _useTokenVersion;

		[NonSerialized]
		public int _milestoneProgressVersion;

		[NonSerialized]
		public int _milestoneCompleteVersion;

		[NonSerialized]
		public int _cloudUnlockVersion;

		[NonSerialized]
		public int _handbookUnlockVersion;

		[NonSerialized]
		public readonly ScoreBoardTokenChangeInfo _lastTokenChange;

		[NonSerialized]
		public readonly ScoreBoardUseTokenInfo _lastUseToken;

		[NonSerialized]
		public readonly ScoreBoardMilestoneProgressInfo _lastMilestoneProgress;

		[NonSerialized]
		public readonly ScoreBoardCloudUnlockInfo _lastCloudUnlock;

		[NonSerialized]
		public readonly ScoreBoardHandbookUnlockInfo _lastHandbookUnlock;

		[NonSerialized]
		public readonly Queue<ScoreBoardMilestoneCompleteInfo> _pendingMilestoneCompleteQueue;

		public const int MaxUseTokenNumPerCall = 100000;

		[NonSerialized]
		public ScoreBoardItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public List<(int itemId, int num, int weight)> _cachedOutputsOne;

		[NonSerialized]
		public int _cachedDropMilestoneIndex;

		[NonSerialized]
		public BoardTokenBoostController _tokenBoost;

		public const string MergeScoreFlyPrefab = "event_scoreboard_default:UIFlyMergeScoreRoot_scoreboard_default.prefab";

		public const int CannotOpenLimitTime = 2;

		public long LeftTime => 0L;

		public int GroupId => 0;

		public int BoardId => 0;

		public int BoardDepth => 0;

		public int UnlockCloudLevel => 0;

		public bool HelpPopped => false;

		public MergeWorld World => null;

		public int TokenId => 0;

		public int MergeScoreTokenId => 0;

		public int TokenCount => 0;

		public bool CanUseToken => false;

		public int MilestoneIndex => 0;

		public int CycleMilestoneIndex => 0;

		public int TotalMilestoneCount => 0;

		public IReadOnlyList<int> MilestoneItemIdList => null;

		public int UnlockMilestoneLevel => 0;

		public int CurrentScore => 0;

		public int CurrentScoreNeed => 0;

		public bool IsCycleMilestone => false;

		public bool IsMilestoneFinishPending => false;

		public ScoreMilestone CurrentMilestoneConf => null;

		public ActivityBoardHandbookAgent HandbookAgent => null;

		public bool HasHandbook => false;

		public int HandbookClaimableRewardCount => 0;

		public ScoreBoardCloudUnlockInfo LastCloudUnlockInfo => null;

		public ScoreBoardHandbookUnlockInfo LastHandbookUnlockInfo => null;

		FeatureEntry IBoardArchive.Feature => default(FeatureEntry);

		public EventScoreBoard ConfEvent { get; set; }

		public ScoreBoardGroup ConfGroup { get; set; }

		public ScoreBoardDetail ConfDetail { get; set; }

		public int BoardSkinId => 0;

		public int MainCategoryId => 0;

		public override bool Valid => false;

		public string DebugRuntimeLogText => null;

		bool IScoreSpecialBoardAdapter.IsScoreSpecialBoardValid => false;

		public BoardActivityOutputType OutputType { get; set; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		int IBoardBoostHost.TokenNum => 0;

		public BoardTokenBoostController TokenBoost => null;

		public bool HasTokenBoost => false;

		public bool CanShowTokenBoost => false;

		public int CurrentTokenBoostRate => 0;

		public int CurrentTokenBoostLevelAdd => 0;

		public int CurrentTokenBoostState => 0;

		public int MaxUnlockedTokenBoostState => 0;

		public bool HasUnshownTokenBoostUnlock => false;

		public override ActivityVisual Visual => null;

		public VisualRes VisualMain { get; }

		public VisualRes VisualMilestone { get; }

		public VisualRes VisualHandbook { get; }

		public VisualRes VisualLoading { get; }

		public override VisualRes GuideRes { get; }

		public VisualRes VisualTokenTip { get; }

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		public int GetActiveBoardId()
		{
			return 0;
		}

		public bool IsMergeScoreToken(int tokenId)
		{
			return false;
		}

		[IDTag(0)]
		public bool TryUseToken(int num)
		{
			return false;
		}

		[IDTag(1)]
		public bool TryUseToken(Vector3 fromPos, int count = 1)
		{
			return false;
		}

		public ScoreMilestone GetMilestoneConf(int index)
		{
			return null;
		}

		public ScoreMilestone GetCycleMilestoneConf(int index)
		{
			return null;
		}

		public List<RewardCommitData> PullMilestoneRewardList()
		{
			return null;
		}

		[IDTag(1)]
		public List<ScoreBoardSpawnItemInfo> PullMilestoneItemRewardList()
		{
			return null;
		}

		[IDTag(0)]
		public List<ScoreBoardSpawnItemInfo> PullMilestoneItemRewardList(Vector3 origin)
		{
			return null;
		}

		public bool IsReadyToMove()
		{
			return false;
		}

		public void StartMoveUpBoard()
		{
		}

		public void CheckBoardExtremeCase()
		{
		}

		public bool TryGetCloudUnlockRequirement(int level, out int itemId, out int unlockType)
		{
			itemId = default(int);
			unlockType = default(int);
			return false;
		}

		void IBoardArchive.SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		void IBoardArchive.FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void ClearBoardData()
		{
		}

		public void InitWorld(int boardId, bool isFirstCreate)
		{
		}

		public void OnBoardItemChange()
		{
		}

		public void OnItemMerge(Item src, Item dst, Item result)
		{
		}

		public void InitBoardMoveHandler()
		{
		}

		public void InitBoardExtremeHandler()
		{
		}

		public void RecheckBoardStateAfterLoad()
		{
		}

		public int GetMoveNeedRowCount(int detailId)
		{
			return 0;
		}

		public int GetMoveCountByRowId(int rowId)
		{
			return 0;
		}

		Board IBoardMoveAdapter.GetBoard()
		{
			return null;
		}

		Board IBoardExtremeAdapter.GetBoard()
		{
			return null;
		}

		public void OnDepthIndexUpdate(int newDepth)
		{
		}

		public bool CanCheckExtreme()
		{
			return false;
		}

		public void TryAutoUnlockCloudByItem(Item item)
		{
		}

		bool IExternalOutput.CanUseItem(Item source)
		{
			return false;
		}

		bool IExternalOutput.TrySpawnItem(Item source, out int outputId, out ItemSpawnContext context)
		{
			outputId = default(int);
			context = null;
			return false;
		}

		public void RefreshConfig()
		{
		}

		public void ClearConfigCache()
		{
		}

		public void InitRuntimeAfterConfig(bool resetHandbookInfo)
		{
		}

		public void InitHandbookConfig()
		{
		}

		public void InitBoardRowConfig()
		{
		}

		public void InitCloudConfig()
		{
		}

		public void ValidateMilestoneConfig()
		{
		}

		public void InitMergeScoreConfig()
		{
		}

		public ScoreBoardActivity(ActivityLite lite)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void SaveSetup(ActivityInstance data)
		{
		}

		public override void LoadSetup(ActivityInstance data)
		{
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public void ActivityUpdate(float dt)
		{
		}

		string IBoardEntry.BoardEntryAsset()
		{
			return null;
		}

		public void ResetSaveState()
		{
		}

		public void ClearRuntime(bool clearEndReward)
		{
		}

		public void JumpTask(int param1, int param2)
		{
		}

		[Conditional("UNITY_EDITOR")]
		[Conditional("DEVELOPMENT_BUILD")]
		[Conditional("BUILD_SANDBOX")]
		public void Log(string info)
		{
		}

		[Conditional("DEVELOPMENT_BUILD")]
		[Conditional("BUILD_SANDBOX")]
		[Conditional("UNITY_EDITOR")]
		public void Error(string info)
		{
		}

		[Conditional("BUILD_SANDBOX")]
		[Conditional("UNITY_EDITOR")]
		[Conditional("DEVELOPMENT_BUILD")]
		public void ClearDebugRuntimeLog()
		{
		}

		public void AppendDebugRuntimeLog(string info)
		{
		}

		public string BuildDebugRuntimeLogText()
		{
			return null;
		}

		public void InitHandbookAgent(bool resetHandbookInfo)
		{
		}

		public void ClearHandbookAgent()
		{
		}

		public void ResetHandbookState()
		{
		}

		bool IBoardActivityHandbook.CheckIsBoardItem(int itemId)
		{
			return false;
		}

		void IBoardActivityHandbook.OnNewItemUnlock()
		{
		}

		void IBoardActivityHandbook.OnNewItemShow(MBItemView itemView)
		{
		}

		bool IBoardActivityHandbook.CheckClaimBoardCategoryReward(int categoryId)
		{
			return false;
		}

		bool IBoardActivityHandbook.CheckClaimBoardHandBookAllReward()
		{
			return false;
		}

		bool IBoardActivityHandbook.ProcessAllUnlockReward()
		{
			return false;
		}

		public void TrackHandbookRewardClaim(int itemId)
		{
		}

		public int GetCurMilestoneUnlockItemMaxLevel()
		{
			return 0;
		}

		public bool IsItemUnlock(int itemId)
		{
			return false;
		}

		[IDTag(1)]
		public bool TryAddMilestoneScore(int score)
		{
			return false;
		}

		[IDTag(0)]
		public bool TryAddMilestoneScore(int score, Item sourceItem)
		{
			return false;
		}

		MergeWorld IScoreSpecialBoardAdapter.GetScoreSpecialBoardWorld()
		{
			return null;
		}

		int IScoreSpecialBoardAdapter.GetScoreSpecialBoardId()
		{
			return 0;
		}

		int IScoreSpecialBoardAdapter.GetScoreSpecialBoardTokenId()
		{
			return 0;
		}

		string IScoreSpecialBoardAdapter.GetScoreSpecialBoardMergeScorePrefab()
		{
			return null;
		}

		bool IScoreSpecialBoardAdapter.TryGetScoreSpecialBoardItemConfig(int itemId, out IScoreSpecialBoardItemConfig config)
		{
			config = null;
			return false;
		}

		bool IScoreSpecialBoardAdapter.TryAddScoreSpecialBoardScore(Item item, int score)
		{
			return false;
		}

		public bool AdvanceMilestone(ScoreBoardMilestoneCompleteInfo completeInfo)
		{
			return false;
		}

		public List<RewardCommitData> PullMilestoneRewardListInternal()
		{
			return null;
		}

		public List<ScoreBoardSpawnItemInfo> PullMilestoneItemRewardListInternal(Vector3 origin)
		{
			return null;
		}

		public void ClearMilestoneRewardList()
		{
		}

		public void ClearMilestoneItemRewardList()
		{
		}

		public void SaveMilestoneItemRewardList(IList<AnyState> any)
		{
		}

		public void LoadMilestoneItemRewardList(IList<AnyState> any)
		{
		}

		public void CommitLoadedMilestoneItemRewardList()
		{
		}

		public void RefreshCurrentMilestoneScoreNeed()
		{
		}

		public ScoreMilestone GetCurrentMilestoneConf()
		{
			return null;
		}

		public ScoreMilestone GetMilestoneConfByIndex(int milestoneIndex, int cycleMilestoneIndex)
		{
			return null;
		}

		public bool HasCycleMilestone()
		{
			return false;
		}

		public int GetMaxMilestoneAdvancePerCall()
		{
			return 0;
		}

		public bool IsFinalMilestoneFinishedWithoutCycle()
		{
			return false;
		}

		public bool IsMilestoneFinishPendingValid()
		{
			return false;
		}

		public void MarkMilestoneFinishPendingIfNeed()
		{
		}

		public bool TryConsumeMilestoneFinishUIPending()
		{
			return false;
		}

		public void EndImmediateForMilestoneFinish(string reason)
		{
		}

		public void TryEndAfterMilestoneRewardPulled(string reason)
		{
		}

		public void CommitMilestoneReward(ScoreMilestone milestone, ScoreBoardMilestoneCompleteInfo completeInfo)
		{
		}

		public ScoreBoardSpawnItemInfo SpawnMilestoneItemReward(int itemId, Board board, ItemSpawnContext context, Vector3 origin, float delay, List<(RewardCommitData reward, float delay)> rewardBoxList)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCoPlaySound_003Ed__215))]
		public IEnumerator CoPlaySound(float delay, string soundName)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCoDelayMilestoneItemReward_003Ed__216))]
		public IEnumerator CoDelayMilestoneItemReward(Vector3 origin, List<(RewardCommitData reward, float delay)> rewardList)
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

		void IActivityOrderHandler.CollectDetectorExcludeItemMap(List<IDictionary<int, int>> container)
		{
		}

		public void RefreshOutputType()
		{
		}

		public void RefreshOutputMethod()
		{
		}

		public bool IsOrderMethod()
		{
			return false;
		}

		public bool IsEnergyMethod()
		{
			return false;
		}

		public bool IsScoreBoardOrderActive()
		{
			return false;
		}

		bool IBoardActivityOutput.IsValidForOrder()
		{
			return false;
		}

		ReasonString IBoardActivityOutput.GetReasonString()
		{
			return null;
		}

		FlyType IBoardActivityOutput.GetFlyType()
		{
			return default(FlyType);
		}

		public void FillExpireRewardList()
		{
		}

		public void FillExpireTokenReward(List<RewardCommitData> rewardList)
		{
		}

		public void FillExpireMilestoneReward(List<RewardCommitData> rewardList)
		{
		}

		public void FillExpireMilestoneItemReward(List<RewardCommitData> rewardList)
		{
		}

		IList<int> IBoardActivityRowConf.GetRowConfIdList(int detailId)
		{
			return null;
		}

		string IBoardActivityRowConf.GetRowConfStr(int rowId)
		{
			return null;
		}

		int IBoardActivityRowConf.GetCycleStartRowId(int detailId)
		{
			return 0;
		}

		public void ClearDisplayState()
		{
		}

		public void RecordTokenChange(int before, int after, int delta, ReasonString reason)
		{
		}

		public void RecordUseTokenStart(int useNum, int tokenBefore, int tokenAfter, Vector3 fromPos)
		{
		}

		public void RecordUseTokenSpawn(int itemId, Item item, RewardCommitData reward)
		{
		}

		public void RecordUseTokenFinish()
		{
		}

		public ScoreBoardMilestoneCompleteInfo CreateMilestoneCompleteInfo(ScoreMilestone milestone, int fromScore, int toScore)
		{
			return null;
		}

		public void RecordMilestoneComplete(ScoreBoardMilestoneCompleteInfo info)
		{
		}

		public void RecordMilestoneProgressFinish()
		{
		}

		public void RecordCloudUnlock(int beforeLevel, int afterLevel, int itemId, int unlockType, Item sourceItem)
		{
		}

		public void RecordHandbookUnlock(Item item)
		{
		}

		[IDTag(1)]
		public bool TryAddToken(int tokenId, int num)
		{
			return false;
		}

		[IDTag(0)]
		public bool TryAddToken(int tokenId, int num, ReasonString reason)
		{
			return false;
		}

		public void AddToken(int num, ReasonString reason)
		{
		}

		public bool _TryUseToken(int num, ReasonString reason, Vector3 fromPos)
		{
			return false;
		}

		public void SpawnTokenItem(int itemId, ReasonString reason, Vector3 fromPos)
		{
		}

		public void InitTokenOutput()
		{
		}

		public void ClearTokenOutput()
		{
		}

		public int GetCurrentDropMilestoneIndex()
		{
			return 0;
		}

		public void RefreshCachedOutputsOne(IList<string> outputsOne)
		{
		}

		public static (int, int, int) ParseMilestoneOutputOne(string output)
		{
			return default((int, int, int));
		}

		public bool TrySpawnItemToBoard(int itemId, ReasonString reason, Vector3 fromPos, out Item item)
		{
			item = null;
			return false;
		}

		public int GetTokenUseCost(int count)
		{
			return 0;
		}

		public bool TrySwitchTokenBoostRate()
		{
			return false;
		}

		public void MarkTokenBoostUnlockShown()
		{
		}

		public void InitTokenBoost()
		{
		}

		public void ClearTokenBoost()
		{
		}

		public void RefreshTokenBoostUnlock()
		{
		}

		public int GetTokenBoostRate()
		{
			return 0;
		}

		public int GetTokenBoostCost(int count)
		{
			return 0;
		}

		public bool IsTokenBoostCostAffordable(int count)
		{
			return false;
		}

		public void EnsureTokenBoostAffordable(int count)
		{
		}

		public void ResolveTokenBoostOutput(int baseItemId, int baseItemCount, out int finalItemId, List<(int itemId, int num)> bonusItems)
		{
			finalItemId = default(int);
		}

		public static bool HasRecord(int id, IList<AnyState> list)
		{
			return false;
		}

		public void TrackMilestoneComplete(ScoreBoardMilestoneCompleteInfo info)
		{
		}

		public void TrackUseTokenSpawn(int itemId)
		{
		}

		public void TrackTapGetToken(int itemId, int itemNum, int boardId)
		{
		}

		void IBoardActivityOutput.TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
		{
		}

		public void TrackMergeScore(Item item, int score, int milestoneIndex, int cycleMilestoneIndex)
		{
		}

		public void TrackHandbookUnlock(Item item)
		{
		}

		public void TrackEndReward()
		{
		}

		public int GetTrackCurrentMilestoneQueue()
		{
			return 0;
		}

		[IDTag(1)]
		public int GetTrackMilestoneQueue(ScoreBoardMilestoneCompleteInfo info)
		{
			return 0;
		}

		[IDTag(0)]
		public int GetTrackMilestoneQueue(int milestoneIndex, int cycleMilestoneIndex)
		{
			return 0;
		}

		public int GetTrackMilestoneNum()
		{
			return 0;
		}

		public int GetTrackDifficulty()
		{
			return 0;
		}

		public int GetTrackBoardId()
		{
			return 0;
		}

		public int GetTrackBoardRow()
		{
			return 0;
		}

		public bool IsTrackFinalMilestone(ScoreBoardMilestoneCompleteInfo info)
		{
			return false;
		}

		[IDTag(0)]
		public static string BuildTrackRewardInfo(ScoreBoardMilestoneCompleteInfo info)
		{
			return null;
		}

		[IDTag(1)]
		public static string BuildTrackRewardInfo(IReadOnlyList<RewardCommitData> rewardList)
		{
			return null;
		}

		public static void AppendRewardInfo(List<string> rewards, IReadOnlyList<RewardCommitData> rewardList)
		{
		}

		public override void Open()
		{
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__370))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public void ClearStartUI()
		{
		}

		public string GetBoardEntryAsset()
		{
			return null;
		}

		public void PopStartUI()
		{
		}

		public void PopEndUI()
		{
		}

		public void PopMilestoneFinishUI()
		{
		}

		public void PopConvertUI()
		{
		}

		public void RefreshTheme()
		{
		}

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}

		public IEnumerable<(string, AssetTag)> _003C_003EiFixBaseProxy_ResEnumerate()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}
	}
}
