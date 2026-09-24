using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using EL.Resource;
using FAT.Merge;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class DiningBoardActivity : ActivityLike, IBoardArchive, IActivityUpdate, IBoardMoveAdapter, IBoardActivityRowConf, IBoardExtremeAdapter, IExternalOutput, MergeWorld.IActivityHandler, IBoardEntry, IActivityCupChallengeTaskJump, IBoardSkinBindingSource, IBoardMainChainSource, IBoardActivityHandbook, IActivityOrderHandler, IBoardActivityOutput, IBoardBoostHost
	{
		public enum CloudUnlockType
		{
			Auto = 0,
			Manual = 1
		}

		public enum SoundEffect
		{
			BoardReward = 0,
			MineFlyMilestoneToken = 1,
			FarmboardUnlock = 2,
			FarmboardCloudFade = 3,
			FarmboardCloudCover = 4,
			DiggingLevelReward = 5,
			DiningboardDecorBuild = 6,
			DiningboardDecorUnlock = 7,
			DiningboardServe = 8,
			DiningboardServeReady = 9,
			DiningboardServeClose = 10,
			DiningboardCongrats = 11,
			WhiteBall = 12
		}

		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__228 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public DiningBoardActivity _003C_003E4__this;

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
			public _003CResEnumerate_003Ed__228(int _003C_003E1__state)
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

			public void _003C_003Em__Finally9()
			{
			}

			public void _003C_003Em__Finally10()
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
		public readonly Dictionary<int, (int itemId, CloudUnlockType unlockType)> _cloudItemInfo;

		[NonSerialized]
		public BoardMoveHandler _boardMoveHandler;

		[NonSerialized]
		public BoardExtremeHandler _boardExtremeHandler;

		[NonSerialized]
		public int _groupId;

		[NonSerialized]
		public int _curDepthIndex;

		[NonSerialized]
		public int _tokenNum;

		[NonSerialized]
		public int _maxUnlockBuildingIndex;

		[NonSerialized]
		public int _score;

		[NonSerialized]
		public readonly Dictionary<int, int> _tableSubmitCounts;

		[NonSerialized]
		public BoardTokenBoostController _tokenBoost;

		[NonSerialized]
		public ActivityBoardHandbookAgent _handbookAgent;

		[NonSerialized]
		public Func<Vector3?> _scoreFlyPositionResolver;

		[NonSerialized]
		public readonly List<RewardCommitData> _milestoneRewards;

		public const string TableRewardTrailPrefab = "fat_guide:fx_common_trail.prefab";

		public static readonly ISpawnEffect TableRewardSpawnEffect;

		[NonSerialized]
		public Func<int, Vector3?> _tableFlyPositionResolver;

		[NonSerialized]
		public Func<int, Vector3?> _tableGenerateItemPositionResolver;

		[NonSerialized]
		public Action<int, Action> _tableFeedbackPlayer;

		[NonSerialized]
		public Action _tableSubmitStarted;

		[NonSerialized]
		public Func<float> _tableReleaseTimeResolver;

		[NonSerialized]
		public DiningBoardItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public readonly List<(int itemId, int num, int weight)> _cachedOutputs;

		[NonSerialized]
		public int _cachedDropStage;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public FeatureEntry Feature { get; }

		public int UnlockCloudLevel { get; set; }

		public int TotalBuildingCount => 0;

		public bool IsAllBuildingCompleted => false;

		public override bool Valid => false;

		public EventDiningBoard EventConf { get; }

		public DiningBoardGroup GroupConf { get; set; }

		public int BoardSkinId => 0;

		public int TokenNum => 0;

		public int TokenId => 0;

		public int ScoreTokenId => 0;

		public int ScoreSpecialChestId => 0;

		public int MainCategoryId => 0;

		public int Score => 0;

		public int MaxUnlockBuildingIndex => 0;

		public int BoardId => 0;

		public int BoardRow => 0;

		public ActivityBoardHandbookAgent HandbookAgent => null;

		public IReadOnlyList<RewardCommitData> MilestoneRewards => null;

		public int ScoreMilestoneCount => 0;

		public static float FlyDuration => 0f;

		public BoardTokenBoostController TokenBoost => null;

		public BoardActivityOutputType OutputType { get; set; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		public override ActivityVisual Visual => null;

		public override VisualRes GuideRes => default(VisualRes);

		public VisualRes VisualMain { get; }

		public VisualRes VisualLoading { get; }

		public VisualRes VisualHelp { get; }

		public VisualRes VisualMilestone { get; }

		public VisualRes VisualRewardTips { get; }

		public VisualRes VisualTokenTip { get; }

		public VisualRes VisualSuccess { get; }

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public ActivityVisual BuildCompleteVisual { get; }

		public VisualPopup ConvertPopup { get; }

		public event Action<Item> CloudChanged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<DiningBoardUIState, DiningBoardUIState> UIStateChanged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<int, int> BuildingUnlocked
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void InitWorld(int boardId, bool fresh)
		{
		}

		public void BindBoardEvents()
		{
		}

		public void ClearBoardData()
		{
		}

		public void InitBoardConfig()
		{
		}

		public void OnBoardItemChange()
		{
		}

		public void OnItemMerge(Item source, Item target, Item result)
		{
		}

		public void OnItemSpawn(ItemSpawnContext context, Item item)
		{
		}

		public void TryAutoUnlockCloud(Item item)
		{
		}

		public void CompleteCloudUnlock(Item cause)
		{
		}

		public bool UnlockCloudIsGetChessItem()
		{
			return false;
		}

		public List<int> GetCloudIdList()
		{
			return null;
		}

		public void ActivityUpdate(float deltaTime)
		{
		}

		public void InitBoardMoveHandler()
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

		public void OnDepthIndexUpdate(int newDepth)
		{
		}

		public IList<int> GetRowConfIdList(int detailId)
		{
			return null;
		}

		public string GetRowConfStr(int rowId)
		{
			return null;
		}

		public int GetCycleStartRowId(int detailId)
		{
			return 0;
		}

		public void InitBoardExtremeHandler()
		{
		}

		public bool CanCheckExtreme()
		{
			return false;
		}

		Board IBoardExtremeAdapter.GetBoard()
		{
			return null;
		}

		public void CheckBoardExtremeCase()
		{
		}

		public bool IsReadyToMove()
		{
			return false;
		}

		public void StartMoveUpBoard()
		{
		}

		public bool CanUseItem(Item source)
		{
			return false;
		}

		public bool TrySpawnItem(Item source, out int outputId, out ItemSpawnContext context)
		{
			outputId = default(int);
			context = null;
			return false;
		}

		public bool TryDragItemToTable(Item source, int tableId, bool flySource = false)
		{
			return false;
		}

		public DiningMapDetail GetBuildingDetail(int index)
		{
			return null;
		}

		public void TryUnlockBuilding(Item result)
		{
		}

		public int GetCurrentDropStage()
		{
			return 0;
		}

		public static void PlaySound(SoundEffect soundEffect)
		{
		}

		public DiningBoardActivity(ActivityLite lite)
		{
		}

		public override void SaveSetup(ActivityInstance data)
		{
		}

		public override void LoadSetup(ActivityInstance data)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public void Clear()
		{
		}

		public override void Open()
		{
		}

		public void JumpTask(int param1, int param2)
		{
		}

		public void InitConfig()
		{
		}

		public void TrackEndReward(List<RewardCommitData> rewardList)
		{
		}

		public void InitHandbookAgent(bool reset)
		{
		}

		public void DisposeHandbook()
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

		public bool CheckClaimBoardCategoryReward(int categoryId)
		{
			return false;
		}

		public bool CheckClaimBoardHandBookAllReward()
		{
			return false;
		}

		public bool ProcessAllUnlockReward()
		{
			return false;
		}

		public void TrackHandbookRewardClaim(int itemId)
		{
		}

		public void SetScoreFlyPositionResolver(Func<Vector3?> resolver)
		{
		}

		public DiningScoreDetail GetScoreMilestone(int index)
		{
			return null;
		}

		public int GetScoreMilestoneTotal(int index)
		{
			return 0;
		}

		public bool IsScoreItem(Item item)
		{
			return false;
		}

		public void AddScoreFromItem(int sourceItemId, Vector2Int sourceCoord, int score, ReasonString reason)
		{
		}

		public void AddScore(int score, ReasonString reason)
		{
		}

		public void RewardReachedScoreMilestones(int scoreBefore)
		{
		}

		public bool IsSpecialScoreReward(int itemId)
		{
			return false;
		}

		public void SetTableFlyPositionResolver(Func<int, Vector3?> resolver, Func<int, Vector3?> generateItemPositionResolver, Action<int, Action> feedbackPlayer, Action tableSubmitStarted = null, Func<float> releaseTimeResolver = null)
		{
		}

		public DiningBoardTableVisualState GetTableVisualState(int tableIndex)
		{
			return default(DiningBoardTableVisualState);
		}

		public void InitTableState()
		{
		}

		public int GetTableSubmitCount(int tableId)
		{
			return 0;
		}

		public bool IsTableClosed(int tableId)
		{
			return false;
		}

		public DiningTableDetail FindAvailableTableByItem(int itemId)
		{
			return null;
		}

		public bool TryShowClosedTableTips(Item item)
		{
			return false;
		}

		public bool CanSubmitToTable(int tableId, Item item)
		{
			return false;
		}

		public void SubmitToTable(DiningTableDetail conf, Board board, Vector2Int sourceCoord, int sourceItemId, bool flySource)
		{
		}

		public void InitTokenOutput()
		{
		}

		public void ClearTokenOutput()
		{
		}

		public void TryAddToken(int id, int count, ReasonString reason)
		{
		}

		public void AddToken(int count, ReasonString reason)
		{
		}

		public bool TryUseToken(Vector3 from)
		{
			return false;
		}

		public void ConvertExpireTokenReward(List<RewardCommitData> rewards)
		{
		}

		public bool OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		bool IBoardActivityOutput.IsValidForOrder()
		{
			return false;
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

		ReasonString IBoardActivityOutput.GetReasonString()
		{
			return null;
		}

		FlyType IBoardActivityOutput.GetFlyType()
		{
			return default(FlyType);
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public DiningBoardUIState CaptureUIState()
		{
			return default(DiningBoardUIState);
		}

		public void NotifyUIStateChanged(in DiningBoardUIState previous)
		{
		}

		public void RefreshUIVisuals()
		{
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__228))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
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

		public VisualRes _003C_003EiFixBaseProxy_get_GuideRes()
		{
			return default(VisualRes);
		}

		public IEnumerable<(string, AssetTag)> _003C_003EiFixBaseProxy_ResEnumerate()
		{
			return null;
		}
	}
}
