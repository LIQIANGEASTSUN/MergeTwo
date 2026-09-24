using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Config;
using DG.Tweening;
using FAT.Merge;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class WishBoardActivity : ActivityLike, IBoardEntry, IBoardArchive, IActivityUpdate, IActivityOrderHandler, ISpawnEffectWithTrail, ISpawnEffect, IExternalOutput, MergeWorld.IActivityHandler, IBoardActivityHandbook, IBoardActivityRowConf, IBoardBoostHost, IActivityCupChallengeTaskJump, IBoardSkinBindingSource, IBoardMainChainSource
	{
		public enum EOutputMethod
		{
			None = 0,
			Energy = 1,
			Order = 2,
			All = 3
		}

		public enum EOutputType
		{
			None = 0,
			Token = 1,
			Item = 2
		}

		[CompilerGenerated]
		public sealed class _003CCoDelayReward_003Ed__130 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public WishBoardActivity _003C_003E4__this;

			public Vector3 origin;

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
			public _003CCoDelayReward_003Ed__130(int _003C_003E1__state)
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
		public sealed class _003CCoPlaySound_003Ed__129 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public float delay;

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
			public _003CCoPlaySound_003Ed__129(int _003C_003E1__state)
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

		[NonSerialized]
		public int _progressPhase;

		[NonSerialized]
		public int _progressNum;

		[NonSerialized]
		public int _tokenNum;

		[NonSerialized]
		public ActivityBoardHandbookAgent _handbookAgent;

		[NonSerialized]
		public List<int> _allMilestoneItemIdList;

		[NonSerialized]
		public bool _isMilestoneLevelChangedOnUnlock;

		[NonSerialized]
		public BoardTokenBoostController _tokenBoost;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		public int _lastKey;

		[NonSerialized]
		public List<RewardCommitData> _milestoneRewad;

		public string order_trail_key;

		[NonSerialized]
		public int _curDepthIndex;

		[NonSerialized]
		public bool _isReadyToMove;

		[NonSerialized]
		public int _readyFrameCount;

		[NonSerialized]
		public bool _isBoardMoving;

		[NonSerialized]
		public Action _moveUpAction;

		[NonSerialized]
		public float _extremeCaseTime;

		[NonSerialized]
		public bool _isWaitExtremeCase;

		[NonSerialized]
		public WishBoardItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public float AudioBaseDelay;

		public override bool Valid => false;

		public VisualRes VisualUIBoardMain { get; }

		public VisualRes VisualUIHelp { get; }

		public VisualRes VisualUILoading { get; }

		public VisualRes VisualUIHandbookTips { get; }

		public VisualRes VisualUIHandbook { get; }

		public VisualRes VisualUIMilestone { get; }

		public VisualRes VisualMilestoneTips { get; }

		public VisualRes VisualUITip { get; }

		public VisualRes VisualTokenTip { get; }

		public VisualPopup VisualStartNoticePopup { get; }

		public VisualPopup VisualEndNoticePopup { get; }

		public VisualPopup VisualConvertPopup { get; }

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public int UnlockMaxLevel { get; set; }

		public EventWishBoard ConfD { get; set; }

		public int BoardSkinId => 0;

		public int MainCategoryId => 0;

		public int GroupId { get; set; }

		public int TokenNum => 0;

		public BoardTokenBoostController TokenBoost => null;

		public bool EnableLegacyHandbook => false;

		public ActivityBoardHandbookAgent HandbookAgent => null;

		FeatureEntry IBoardArchive.Feature => default(FeatureEntry);

		public EOutputMethod OutputMethod { get; set; }

		public EOutputType OutputType { get; set; }

		public override ActivityVisual Visual => null;

		public int CurDepthIndex => 0;

		public bool IsReadyToMove => false;

		public WishBoardActivity(ActivityLite lite)
		{
		}

		public void InitTheme()
		{
		}

		public override void SetupFresh()
		{
		}

		public void _InitBoost()
		{
		}

		public void _InitWishBoardData()
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void Open()
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void WhenReset()
		{
		}

		public override void WhenEnd()
		{
		}

		public void _ClearWishBoardData()
		{
		}

		public void EnterWishBoard()
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public (int, int) GetScoreRewardPay(int diff)
		{
			return default((int, int));
		}

		public (int, int) GetScoreRewardAct(int diff)
		{
			return default((int, int));
		}

		public void _RefreshScoreEntity()
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

		public EventWishBarReward GetProgressInfo(int progressPhase)
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

		public void SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void _InitWorld(int boardId, bool isFirstCreate)
		{
		}

		public void _InitStartItem()
		{
		}

		public string GetRandomKey()
		{
			return null;
		}

		public EventWishBoardGroup GetCurGroupConfig()
		{
			return null;
		}

		public int GetCurProgressPhase()
		{
			return 0;
		}

		public int GetCurProgressNum()
		{
			return 0;
		}

		public List<RewardConfig> GetMileStoneLastStageReward()
		{
			return null;
		}

		public int GetTokenNum()
		{
			return 0;
		}

		public void CheckActivityEndAndSettlement()
		{
		}

		public bool CheckMilestoneItemCanUse(int id)
		{
			return false;
		}

		public void BeginDragReward(Item use, float delay = 0f)
		{
		}

		[IteratorStateMachine(typeof(_003CCoPlaySound_003Ed__129))]
		public IEnumerator CoPlaySound(float delay)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCoDelayReward_003Ed__130))]
		public IEnumerator CoDelayReward(Vector3 origin)
		{
			return null;
		}

		void ISpawnEffectWithTrail.AddTrail(MBItemView view, Tween tween)
		{
		}

		public void InitHandbookAgent(bool resetHandbookInfo)
		{
		}

		public void TrackHandbookRewardClaim(int itemId)
		{
		}

		public EventWishMilestone GetCurMilestone()
		{
			return null;
		}

		public bool IsItemUnlock(int itemId)
		{
			return false;
		}

		public List<int> GetAllItemIdList()
		{
			return null;
		}

		public int _GetCurUnlockItemMaxLevel()
		{
			return 0;
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

		public void _OnBoardItemChange()
		{
		}

		public void CheckBoardExtremeCase()
		{
		}

		public void _CheckCanMoveBoard()
		{
		}

		void IActivityUpdate.ActivityUpdate(float deltaTime)
		{
		}

		public void StartMoveUpBoard()
		{
		}

		public void _MoveDownBoard(Board board, int downRowCount, int detailParam)
		{
		}

		public bool _CheckHasExtremeCase()
		{
			return false;
		}

		public void _ExecuteExtremeCase()
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

		public void _RefreshOutputMethod()
		{
		}

		public void _RefreshOutputType()
		{
		}

		public void _RefreshSpawnBonusHandler()
		{
		}

		public void _ClearSpawnBonusHandler()
		{
		}

		public EventWishDrop GetCurDropConf()
		{
			return null;
		}

		public int _GetCurDropConfId()
		{
			return 0;
		}

		public void TryAddToken(int id, int num, ReasonString reason)
		{
		}

		public bool TryUseToken(Vector3 fromPos)
		{
			return false;
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

		public void TrackMineMilestone()
		{
		}

		public void SetAudioBaseDelay(float delay)
		{
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

		public void _003C_003EiFixBaseProxy_SetupFresh()
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
