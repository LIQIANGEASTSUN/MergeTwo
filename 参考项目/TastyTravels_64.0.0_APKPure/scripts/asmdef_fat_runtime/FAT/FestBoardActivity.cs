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
	public class FestBoardActivity : ActivityLike, IBoardArchive, IActivityUpdate, IBoardMoveAdapter, IBoardActivityRowConf, IBoardExtremeAdapter, IExternalOutput, MergeWorld.IActivityHandler, IBoardEntry, IActivityCupChallengeTaskJump, IBoardSkinBindingSource, IBoardMainChainSource, IBoardActivityHandbook, IActivityOrderHandler, IBoardActivityOutput, IBoardBoostHost
	{
		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__137 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public FestBoardActivity _003C_003E4__this;

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
			public _003CResEnumerate_003Ed__137(int _003C_003E1__state)
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
		public Dictionary<int, (int itemId, int type)> _cloudItemIdDict;

		[NonSerialized]
		public HashSet<int> _scoreItemIdSet;

		[NonSerialized]
		public int _groupId;

		[NonSerialized]
		public int _curDepthIndex;

		[NonSerialized]
		public int _score;

		[NonSerialized]
		public int _displayedScore;

		[NonSerialized]
		public int _tokenNum;

		[NonSerialized]
		public int _buildingIndex;

		[NonSerialized]
		public int _spinStage;

		[NonSerialized]
		public int _spineRoundIndex;

		[NonSerialized]
		public int _spinRoundSeed;

		[NonSerialized]
		public int _spinCompletedRounds;

		[NonSerialized]
		public int _currentRoundSpinCount;

		[NonSerialized]
		public int _pendingSpinDetailId;

		[NonSerialized]
		public int _spinMaxStage;

		[NonSerialized]
		public Dictionary<int, List<RewardCommitData>> _milestoneRewardDict;

		[NonSerialized]
		public List<int> _spinRewardDetailIdSeq;

		public const int SpinDefaultStage = 1;

		[NonSerialized]
		public ActivityBoardHandbookAgent _handbookAgent;

		[NonSerialized]
		public FestBoardItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public List<(int itemId, int num, int weight)> _cachedOutputsOne;

		[NonSerialized]
		public int _cachedDropMilestoneIndex;

		[NonSerialized]
		public BoardTokenBoostController _tokenBoost;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public FeatureEntry Feature { get; }

		public int BoardId => 0;

		public override bool Valid => false;

		public EventFestBoard EventConf { get; set; }

		public FestBoardGroup GroupConf { get; set; }

		public int BoardSkinId => 0;

		public int MainCategoryId => 0;

		public int UnlockCloudLevel { get; set; }

		public List<RewardCommitData> MapRewardList { get; set; }

		public bool MapRewardClaimFlag { get; set; }

		public int TokenNum => 0;

		public int TokenId { get; set; }

		public int Score => 0;

		public int DisplayedScore => 0;

		public int BuildingIndex => 0;

		public bool HasPendingSpinResult => false;

		public override ActivityVisual Visual => null;

		public VisualRes VisualMain { get; }

		public VisualRes VisualMilestone { get; }

		public VisualRes VisualMap { get; }

		public VisualRes VisualLoading { get; }

		public override VisualRes GuideRes { get; }

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		public int ScoreTokenId => 0;

		public ActivityBoardHandbookAgent HandbookAgent => null;

		public BoardTokenBoostController TokenBoost => null;

		public BoardActivityOutputType OutputType { get; set; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		public void SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void InitWorld(int boardId, bool isFirstCreate)
		{
		}

		public void ClearBoardData()
		{
		}

		public void OnBoardItemChange()
		{
		}

		public void OnItemMerge(Item src, Item dst, Item result)
		{
		}

		public void TryAutoUnlockCloudByItem(Item item)
		{
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

		public void InitBoardConfig()
		{
		}

		public bool IsScoreItem(int id)
		{
			return false;
		}

		public bool IsSpinActiveItem(int id)
		{
			return false;
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

		public void _OnUseItem(Item source, ItemActiveSourceComponent comp)
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

		public bool IsReadyToMove()
		{
			return false;
		}

		public void StartMoveUpBoard()
		{
		}

		public FestBoardActivity(ActivityLite lite_)
		{
		}

		public void RefreshTheme()
		{
		}

		public void CheckThemeConfig()
		{
		}

		public void CheckTheme(int themeId, string themeField)
		{
		}

		public void InitGroupConfig()
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SetupFresh()
		{
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__137))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public override void WhenActive(bool new_)
		{
		}

		public override void WhenReset()
		{
		}

		public override void WhenEnd()
		{
		}

		public void AddEventListener()
		{
		}

		public void RemoveEventListener()
		{
		}

		public void FillExpireRewardList()
		{
		}

		public string ConvertRewardStatToString(Dictionary<int, int> rewardStatMap)
		{
			return null;
		}

		public void FillExpireTokenReward(List<RewardCommitData> rewardList)
		{
		}

		public void FillExpireBoardReward(List<RewardCommitData> rewardList)
		{
		}

		public override void Open()
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public bool CanSpin()
		{
			return false;
		}

		public void SpinOnce(Item source)
		{
		}

		public UISpinResult TakeSpinResult()
		{
			return null;
		}

		public void ShowLastSpinPanel()
		{
		}

		public void CloseSpinPanel()
		{
		}

		public int GenerateSpinRoundSeed()
		{
			return 0;
		}

		public bool IsSpinValid()
		{
			return false;
		}

		public bool BuildSpinSequenceWithSeed(int seed, int stage, List<int> outputSeq)
		{
			return false;
		}

		public void EnterNextSpinRound()
		{
		}

		public bool EnsureSpinSequenceReady()
		{
			return false;
		}

		public void SetSpineInvalidData()
		{
		}

		public void ClampSpinStage()
		{
		}

		public void AddMilestoneScore(int score)
		{
		}

		public void CommitMilestoneReward(int milestoneIndex)
		{
		}

		public void SetDisplayScore(int score)
		{
		}

		public int GetScoreMilestoneCount()
		{
			return 0;
		}

		public int GetScoreCycleMilestoneCount()
		{
			return 0;
		}

		public bool HasCycleMilestone()
		{
			return false;
		}

		public FestScoreMilestone GetScoreMilestoneConfByIndex(int index)
		{
			return null;
		}

		public int GetScoreMilestoneThreshold(int index)
		{
			return 0;
		}

		public int GetMilestoneIndexByScore(int score)
		{
			return 0;
		}

		public bool CheckCanAddScore()
		{
			return false;
		}

		public bool IsAllScoreMilestoneCompleted()
		{
			return false;
		}

		public List<RewardCommitData> GetMilestoneRewardByIndex(int index)
		{
			return null;
		}

		public int GetBuildingMilestoneCount()
		{
			return 0;
		}

		public FestMapMilestone GetBuildingMilestoneByIndex(int index)
		{
			return null;
		}

		public bool IsBuildingMilestoneUnlocked(int index)
		{
			return false;
		}

		public int GetCurrentBuildingIndex()
		{
			return 0;
		}

		public bool CanUnlockBuildingMilestone(int index)
		{
			return false;
		}

		public bool CanUnlockBuildingWithItem(int objId)
		{
			return false;
		}

		public bool TryUnlockBuildingWithItem(int objId)
		{
			return false;
		}

		public void CheckEarlyFinish()
		{
		}

		public bool IsAllBuildingCompleted()
		{
			return false;
		}

		public void MarkMapRewardClaimed()
		{
		}

		public void OpenSpinInfo()
		{
		}

		public bool IsEarlyFinishEnabled()
		{
			return false;
		}

		public void JumpTask(int param1, int param2)
		{
		}

		public void InitHandbookAgent(bool resetHandbookInfo)
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

		public void InitTokenOutput()
		{
		}

		public void ClearTokenOutput()
		{
		}

		public void TryAddToken(int id, int num, ReasonString reason)
		{
		}

		public bool TryUseToken(Vector3 fromPos)
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

		public int GetCurrentDropMilestoneIndex()
		{
			return 0;
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

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public IEnumerable<(string, AssetTag)> _003C_003EiFixBaseProxy_ResEnumerate()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_WhenActive(bool P0)
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
