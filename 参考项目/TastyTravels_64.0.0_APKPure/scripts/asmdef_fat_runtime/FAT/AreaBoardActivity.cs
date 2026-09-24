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
	public class AreaBoardActivity : ActivityLike, IBoardEntry, IBoardArchive, IActivityUpdate, IActivityOrderHandler, IExternalOutput, MergeWorld.IActivityHandler, IBoardActivityHandbook, IBoardActivityRowConf, IBoardMoveAdapter, IBoardExtremeAdapter, IMergeItemIndicatorHandler, IBoardActivityOutput, IBoardBoostHost, IActivityCupChallengeTaskJump, IBoardSkinBindingSource, IBoardMainChainSource
	{
		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__116 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public AreaBoardActivity _003C_003E4__this;

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
			public _003CResEnumerate_003Ed__116(int _003C_003E1__state)
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
		public int _curDepthIndex;

		[NonSerialized]
		public int _progressPhase;

		[NonSerialized]
		public int _progressNum;

		[NonSerialized]
		public int _tokenNum;

		[NonSerialized]
		public bool _galleryRewardClaimed;

		[NonSerialized]
		public Dictionary<int, bool> _chainRewardClaimed;

		[NonSerialized]
		public BoardMoveHandler _boardMoveHandler;

		[NonSerialized]
		public BoardExtremeHandler _boardExtremeHandler;

		[NonSerialized]
		public List<int> _allItemIdList;

		[NonSerialized]
		public List<int> _milestoneItemIdList;

		[NonSerialized]
		public Dictionary<int, (int, int)> _cloudItemIdDict;

		[NonSerialized]
		public BoardTokenBoostController _tokenBoost;

		public const int CategoryIDOffset = 10000;

		public const int spawnOffset = 1000;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public AreaBoardItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public List<RewardCommitData> _handbookRewards;

		public override bool Valid => false;

		public EventAreaBoard Conf { get; set; }

		public int BoardSkinId => 0;

		public int MainCategoryId => 0;

		public int DetailId { get; set; }

		public int UnlockMilestoneLevel { get; set; }

		public int UnlockCloudLevel { get; set; }

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public FeatureEntry Feature { get; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		public BoardActivityOutputType OutputType { get; set; }

		public override ActivityVisual Visual => null;

		public override VisualRes GuideRes => default(VisualRes);

		public BoardTokenBoostController TokenBoost => null;

		public int ProgressPhase => 0;

		public int ProgressNum => 0;

		public bool GalleryRewardClaimed => false;

		public List<int> AllItemIdList => null;

		public List<int> MilestoneItemIdList => null;

		public Dictionary<int, bool> ChainRewardClaimed => null;

		public int TokenNum => 0;

		public VisualRes VisualBoard { get; }

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		public VisualRes VisualLoading { get; }

		public VisualRes VisualHelp { get; }

		public VisualRes VisualComplete { get; }

		public VisualRes VisualMilestone { get; }

		public VisualRes VisualMilestoneReward { get; }

		public VisualRes VisualHandbook { get; }

		public VisualRes VisualHandBookComplete { get; }

		public VisualRes VisualTokenTip { get; }

		public List<RewardCommitData> HandBookRewards => null;

		public event Action Invalidate
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

		public AreaBoardActivity(ActivityLite lite)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public void _InitBoost()
		{
		}

		public override void SetupFresh()
		{
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__116))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public void _AddListener()
		{
		}

		public void _RemoveListener()
		{
		}

		public override void WhenReset()
		{
		}

		public override void WhenEnd()
		{
		}

		public EventAreaBoardGroup GetGroupConfig()
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

		public void TryClaimHandbookReward(int itemId, Vector3 itemFlyFrom)
		{
		}

		public bool TryGetItemState(int itemId, out HandbookItemState state)
		{
			state = default(HandbookItemState);
			return false;
		}

		public bool TryGetCategoryStateByItem(int itemId, out bool state)
		{
			state = default(bool);
			return false;
		}

		public int GetTokenNum()
		{
			return 0;
		}

		public bool TryUseToken(Vector3 fromPos)
		{
			return false;
		}

		public List<int> GetCloudIdList()
		{
			return null;
		}

		public bool UnlockCloudIsGetChessItem()
		{
			return false;
		}

		public override void Open()
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public void _RefreshPopupInfo()
		{
		}

		public void SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void _InitBoardData()
		{
		}

		public void _InitWorld(int boardId, bool isFirstCreate)
		{
		}

		public void _ClearBoardData()
		{
		}

		public void _OnBoardItemChange()
		{
		}

		public void _InitBoardMoveHandler()
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

		public void _InitBoardExtremeHandler()
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

		public void ActivityUpdate(float deltaTime)
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

		public bool IsTokenType()
		{
			return false;
		}

		public bool IsItemType()
		{
			return false;
		}

		public void RefreshOutputType()
		{
		}

		public void RefreshOutputMethod()
		{
		}

		bool IBoardActivityOutput.IsValidForOrder()
		{
			return false;
		}

		FlyType IBoardActivityOutput.GetFlyType()
		{
			return default(FlyType);
		}

		ReasonString IBoardActivityOutput.GetReasonString()
		{
			return null;
		}

		public void _InitStartItem()
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

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public void TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
		{
		}

		public void _RefreshScoreEntity()
		{
		}

		public void _RefreshSpawnBonusHandler()
		{
		}

		public void _ClearSpawnBonusHandler()
		{
		}

		public void _SetBonusHandlerDirty()
		{
		}

		public void TrackBonusGetItem(int rewardId, int rewardCount)
		{
		}

		public EventAreaMilestone GetProgressInfo()
		{
			return null;
		}

		public bool CheckProgressFinish()
		{
			return false;
		}

		public void AddMilestoneScore(int num)
		{
		}

		public void _BeginMilestoneReward()
		{
		}

		public void _EnterNextMile()
		{
		}

		public void TrackAreaMilestone()
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

		public void _OnUseItem(Item source, ItemActiveSourceComponent comp)
		{
		}

		public void TryAddToken(int id, int num, ReasonString reason)
		{
		}

		public bool _TryUseToken(int id, int num, ReasonString reason, Vector3 fromPos)
		{
			return false;
		}

		public bool ChangeItemToken(bool isAdd, int changNum)
		{
			return false;
		}

		public void _InitStartToken()
		{
		}

		public void _ClearScoreEntity()
		{
		}

		public bool CheckIsBoardItem(int itemId)
		{
			return false;
		}

		public void OnMergeItem(Item src, Item dst, Item result)
		{
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

		public void OnClaimHandbookReward(IBoardActivityHandbook activity, (int, bool, bool) result, List<RewardCommitData> chainRewards)
		{
		}

		public void _RefreshAllItemIdList()
		{
		}

		public int _GetCurMilestoneUnlockItemMaxLevel()
		{
			return 0;
		}

		public bool IsItemLock(int itemId)
		{
			return false;
		}

		public bool IsItemPreview(int itemId)
		{
			return false;
		}

		public bool IsItemUnlock(int itemId)
		{
			return false;
		}

		public bool IsItemReceived(int itemId)
		{
			return false;
		}

		public void TrackHandBookClaim(int itemId)
		{
		}

		public ItemIndType CheckIndicator(int itemId, out string asset)
		{
			asset = null;
			return default(ItemIndType);
		}

		public void JumpTask(int param1, int param2)
		{
		}

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}

		public VisualRes _003C_003EiFixBaseProxy_get_GuideRes()
		{
			return default(VisualRes);
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public IEnumerable<(string, AssetTag)> _003C_003EiFixBaseProxy_ResEnumerate()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}
	}
}
