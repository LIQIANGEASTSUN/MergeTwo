using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using EL.Resource;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class RescueBoardActivity : ActivityLike, IBoardEntry, IBoardArchive, IExternalOutput, MergeWorld.IActivityHandler, IActivityUpdate, IActivityCupChallengeTaskJump, IBoardSkinBindingSource, IBoardMainChainSource, IBoardActivityHandbook, IBoardActivityOutput, IActivityOrderHandler
	{
		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__130 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public RescueBoardActivity _003C_003E4__this;

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
			public _003CResEnumerate_003Ed__130(int _003C_003E1__state)
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
		public float _extremeCaseTime;

		[NonSerialized]
		public bool _isWaitExtremeCase;

		public const int SAVE_OFFSET_RESCUE_TARGET = 1000;

		public const int SAVE_OFFSET_PENDING_OUTPUT = 2000;

		public int _detailId;

		[NonSerialized]
		public int _milestoneScore;

		[NonSerialized]
		public int _tokenNum;

		[NonSerialized]
		public int _curBoardIndex;

		[NonSerialized]
		public Dictionary<int, int> _targetHitCount;

		[NonSerialized]
		public List<(int targetId, int interactIndex)> _pendingOutputQueue;

		[NonSerialized]
		public bool _isGuideBlock;

		[NonSerialized]
		public ActivityVisual _mainVisual;

		[NonSerialized]
		public ActivityVisual _helpVisual;

		[NonSerialized]
		public ActivityVisual _handbookVisual;

		[NonSerialized]
		public ActivityVisual _loadingVisual;

		[NonSerialized]
		public ActivityVisual _milestoneVisual;

		[NonSerialized]
		public ActivityVisual _rescueSuccessVisual;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public RescueTokenSpawnBonusHandler _spawnBonusHandler;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public bool BoardEntryVisible => false;

		public FeatureEntry Feature => default(FeatureEntry);

		public int BoardId => 0;

		public EventRescue EventConf { get; set; }

		public EventRescueDetail DetailConf { get; set; }

		public int BoardSkinId => 0;

		public int MainCategoryId => 0;

		public int TokenNum => 0;

		public bool HasPendingOutput => false;

		public List<RewardCommitData> RescueCycleRewardList { get; set; }

		public int EventDiff => 0;

		public override ActivityVisual Visual => null;

		public ActivityVisual MainVisual => null;

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		public UIResAlt StartResAlt { get; }

		public UIResAlt BoardResAlt { get; }

		public UIResAlt ConvertResAlt { get; }

		public UIResAlt LoadingResAlt { get; }

		public UIResAlt MilestoneResAlt { get; }

		public UIResAlt EndResAlt { get; }

		public UIResAlt HelpResAlt { get; }

		public UIResAlt RescueSuccessResAlt { get; }

		public ActivityBoardHandbookAgent HandbookAgent { get; set; }

		public BoardActivityOutputType OutputType { get; set; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		public void InitWorld(int boardId, bool isFirstOpen)
		{
		}

		public void RefreshClearedCloudState(Board board)
		{
		}

		public void ClearWorld()
		{
		}

		public void OnBoardItemChange()
		{
		}

		public void CheckBoardExtremeCase()
		{
		}

		public void ActivityUpdate(float dt)
		{
		}

		public bool CheckHasExtremeCase()
		{
			return false;
		}

		public void ExecuteExtremeCase()
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public void SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public int GetCurrentMergeBoardId()
		{
			return 0;
		}

		public IList<int> GetMainBoardIdList()
		{
			return null;
		}

		public IList<int> GetLoopBoardIdList()
		{
			return null;
		}

		public bool TrySwitchToNextBoard()
		{
			return false;
		}

		public void CollectInheritItems(Dictionary<int, int> inheritDict)
		{
		}

		public void CollectRewardBoxItems(Dictionary<int, int> rewardBoxDict)
		{
		}

		public void CollectBonusItems(Dictionary<int, int> bonusDict)
		{
		}

		public void SendInheritRewardToBoard(Dictionary<int, int> rewardBoxDict, Dictionary<int, int> inheritDict)
		{
		}

		public void AppendItemsToRewardList(Dictionary<int, int> itemDict)
		{
		}

		public bool HasNextBoard()
		{
			return false;
		}

		public int GetCurBoardIndex()
		{
			return 0;
		}

		public MergeCloud GetCloudConfig(int cloudId)
		{
			return null;
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

		public bool TryUseFirecracker(Item source)
		{
			return false;
		}

		public void CommitPendingOutput()
		{
		}

		public void FlushPendingOutputToRewardBox()
		{
		}

		public int SelectTargetId()
		{
			return 0;
		}

		public IList<int> GetTargetOutputItems(int targetId, int interactIndex)
		{
			return null;
		}

		public void ProcessTargetOutput(int targetId, int interactIndex)
		{
		}

		public void OnTargetCleared(int targetId, EventRescueTarget targetConf)
		{
		}

		public RescueBoardActivity(ActivityLite lite_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public override void Open()
		{
		}

		public void JumpTask(int param1, int param2)
		{
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__130))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public void CollectAllBoardReward(List<RewardCommitData> rewardList)
		{
		}

		public IList<int> GetCurTargetAreaIds()
		{
			return null;
		}

		public int GetTargetHitCount(int targetId)
		{
			return 0;
		}

		public int GetTargetIdByCloudId(int cloudId)
		{
			return 0;
		}

		public bool IsTargetCleared(int targetId)
		{
			return false;
		}

		public bool IsCurrentStageAllTargetCleared()
		{
			return false;
		}

		public int CalcMilestonePhase()
		{
			return 0;
		}

		public void AddRescueProgress(int addScore)
		{
		}

		public void ClaimMilestoneReward(int phase)
		{
		}

		public bool CheckMilestoneFinish()
		{
			return false;
		}

		public int GetMilestonePhase()
		{
			return 0;
		}

		public int GetMilestoneScore()
		{
			return 0;
		}

		public EventRescueStage GetCurStageConfig()
		{
			return null;
		}

		public int GetCurRescueItemId()
		{
			return 0;
		}

		public int GetCurrentBoardConfId()
		{
			return 0;
		}

		public bool IsInCycleBoard()
		{
			return false;
		}

		public EventRescueMS GetMilestoneConfig(int phase)
		{
			return null;
		}

		public EventRescueDrop GetDropConfig(int phase)
		{
			return null;
		}

		public int GetCurrentDropPhase()
		{
			return 0;
		}

		public void _RefreshPopupInfo()
		{
		}

		public bool CheckGuideFirstRescue()
		{
			return false;
		}

		public void SetGuideBlock(bool block)
		{
		}

		public bool CheckIsBoardItem(int itemId)
		{
			return false;
		}

		public void OnNewItemUnlock()
		{
		}

		public void OnNewItemShow(MBItemView itemView)
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

		public void InitHandbookAgent(bool resetHandbookInfo)
		{
		}

		public void TrackClaimItemReward(int itemId)
		{
		}

		public void RefreshOutputType()
		{
		}

		public void RefreshOutputMethod()
		{
		}

		public bool IsEnergyMethod()
		{
			return false;
		}

		public bool IsOrderMethod()
		{
			return false;
		}

		public bool IsValidForOrder()
		{
			return false;
		}

		FlyType IBoardActivityOutput.GetFlyType()
		{
			return default(FlyType);
		}

		void IBoardActivityOutput.TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
		{
		}

		ReasonString IBoardActivityOutput.GetReasonString()
		{
			return null;
		}

		public void TryAddToken(int id, int num, ReasonString reason)
		{
		}

		public bool TryUseToken(int id, int num, ReasonString reason)
		{
			return false;
		}

		public bool ChangeToken(bool isAdd, int changeNum)
		{
			return false;
		}

		public void InitFreeToken()
		{
		}

		public void RefreshScoreEntity()
		{
		}

		public void ClearScoreEntity()
		{
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public void RefreshSpawnBonusHandler()
		{
		}

		public void ClearSpawnBonusHandler()
		{
		}

		public void SetBonusHandlerDirty()
		{
		}

		public void GetSpawnOutputsOne(IList<(int itemId, int num, int weight)> dst)
		{
		}

		public bool TryGetOutputFixedOne(out int itemId, out int num)
		{
			itemId = default(int);
			num = default(int);
			return false;
		}

		public (int, int) GetWithOutputTimeRange()
		{
			return default((int, int));
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
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

		public IEnumerable<(string, AssetTag)> _003C_003EiFixBaseProxy_ResEnumerate()
		{
			return null;
		}
	}
}
