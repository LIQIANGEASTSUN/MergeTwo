using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Config;
using EL.Resource;
using FAT.Merge;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class FarmBoardActivity : ActivityLike, IBoardEntry, IBoardArchive, IActivityUpdate, IActivityOrderHandler, IBoardActivityHandbook, IBoardActivityRowConf, IExternalOutput, MergeWorld.IActivityHandler, IBoardBoostHost, IActivityCupChallengeTaskJump, IBoardSkinBindingSource, IBoardMainChainSource
	{
		public enum TokenOutputType
		{
			None = 0,
			Energy = 1,
			Order = 2,
			All = 3
		}

		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__54 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public FarmBoardActivity _003C_003E4__this;

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
			public _003CResEnumerate_003Ed__54(int _003C_003E1__state)
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
		public BoardTokenBoostController _tokenBoost;

		[NonSerialized]
		public ActivityBoardHandbookAgent _handbookAgent;

		[NonSerialized]
		public List<int> _allItemIdList;

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
		public RewardConfig farmlandOutputInfo;

		[NonSerialized]
		public string farmlandOutputInfoStr;

		[NonSerialized]
		public readonly List<(int itemId, int weight)> _farmlandOutputPool;

		[NonSerialized]
		public Vector3 _rewardBoxPos;

		[NonSerialized]
		public readonly List<int> _animalOutputInfo;

		[NonSerialized]
		public readonly List<(int itemId, int weight)> _animalOutputPool;

		[NonSerialized]
		public int _curAnimalOutputIndex;

		[NonSerialized]
		public int _curAnimalFrozenLevel;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public FarmBoardItemSpawnBonusHandler _spawnBonusHandler;

		public override bool Valid => false;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public EventFarmBoard ConfD { get; set; }

		public int BoardSkinId => 0;

		public int MainCategoryId => 0;

		public int GroupId { get; set; }

		public int UnlockMaxLevel { get; set; }

		public int UnlockFarmlandNum { get; set; }

		public TokenOutputType OutputType { get; set; }

		public int TokenNum { get; set; }

		public BoardTokenBoostController TokenBoost => null;

		public override ActivityVisual Visual => null;

		public VisualRes VisualBoard { get; }

		public VisualRes VisualHelp { get; }

		public VisualRes VisualTokenTip { get; }

		public VisualRes VisualLoading { get; }

		public VisualRes VisualComplete { get; }

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		public ActivityBoardHandbookAgent HandbookAgent => null;

		FeatureEntry IBoardArchive.Feature => default(FeatureEntry);

		public bool IsReadyToMove => false;

		public EventFarmBoardGroup GetCurGroupConfig()
		{
			return null;
		}

		public EventFarmItemDrop GetCurBoardDropConfig()
		{
			return null;
		}

		public bool _UseLegacyFarmlandLogic()
		{
			return false;
		}

		public bool _UseLegacyAnimalLogic()
		{
			return false;
		}

		public int _GetCurBoardDropConfigId()
		{
			return 0;
		}

		public EventFarmItemDrop _GetBoardDropConfigByUnlockLevel(int unlockLevel)
		{
			return null;
		}

		public int _GetBoardDropConfigIdByUnlockLevel(int unlockLevel)
		{
			return 0;
		}

		public void DebugResetFarmBoard()
		{
		}

		public FarmBoardActivity(ActivityLite lite_)
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

		public void _InitBoost()
		{
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__54))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public override void WhenReset()
		{
		}

		public override void WhenEnd()
		{
		}

		public override void Open()
		{
		}

		public void Close()
		{
		}

		public void _RefreshPopupInfo()
		{
		}

		string IBoardEntry.BoardEntryAsset()
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

		public void _RefreshAllItemIdList()
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

		public void TrackHandbookRewardClaim(int itemId)
		{
		}

		void IBoardArchive.SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		void IBoardArchive.FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void _InitFarmBoardData()
		{
		}

		public void _InitWorld(int boardId, bool isFirstCreate)
		{
		}

		public void _ClearFarmBoardData()
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

		public bool CheckHasFarmland(int unlockLevel)
		{
			return false;
		}

		public int CollectFarmland(Vector3 farmlandPos)
		{
			return 0;
		}

		public int _CollectLegacyFarmland(Vector3 farmlandPos)
		{
			return 0;
		}

		public int _CollectNewFarmland(Vector3 farmlandPos)
		{
			return 0;
		}

		public bool _CanCollectNewFarmland(EventFarmItemDrop dropConfig)
		{
			return false;
		}

		public bool _TryPrepareNewFarmlandOutputItems(EventFarmItemDrop dropConfig, IList<int> outputItemIdList)
		{
			return false;
		}

		public bool _TryCollectFarmlandRewardBoxItem(Board board, Func<int, bool> canCollectRewardItem)
		{
			return false;
		}

		public bool _CheckIsCurrentFarmlandOutputItem(int itemId)
		{
			return false;
		}

		public void _SpawnFarmlandItemToBoardOrRewardBox(Board board, int itemId, Vector3 farmlandPos)
		{
		}

		public void _RefreshFarmlandInfo()
		{
		}

		public bool _TryRefreshNewFarmlandOutputPool(EventFarmItemDrop dropConfig)
		{
			return false;
		}

		public void SetRewardBoxPos(Vector3 rewardBoxPos)
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

		public int GetConsumeItemId()
		{
			return 0;
		}

		public bool CanConsumeCurrentAnimalItem(int itemId)
		{
			return false;
		}

		public bool CheckHasConsumeItem()
		{
			return false;
		}

		public bool CheckIsInOutput()
		{
			return false;
		}

		public bool _TryGetConsumeContext(Item item, out Board board, out EventFarmBoardAnimal conf)
		{
			board = null;
			conf = null;
			return false;
		}

		public void _CommitLegacyAnimalOutput(EventFarmBoardAnimal conf)
		{
		}

		public void _CommitNewAnimalOutput()
		{
		}

		public bool TryConsumeItem(Item item)
		{
			return false;
		}

		public int TryOutputItem(Vector3 animalPos)
		{
			return 0;
		}

		public bool _TryGetNextOutputItem(out int itemId, out int totalOutputTimes)
		{
			itemId = default(int);
			totalOutputTimes = default(int);
			return false;
		}

		public void _RefreshAnimalOutputInfo()
		{
		}

		public EventFarmBoardAnimal _GetAnimalConfig()
		{
			return null;
		}

		public EventFarmItemDrop _GetCurAnimalDropConfig()
		{
			return null;
		}

		public int _GetNewAnimalEatItemId()
		{
			return 0;
		}

		public bool _TryGetNewAnimalEatItemId(out int eatItemId)
		{
			eatItemId = default(int);
			return false;
		}

		public bool _TryGetFrozenAnimalDropConfig(out EventFarmItemDrop dropConfig)
		{
			dropConfig = null;
			return false;
		}

		public bool _CanCommitNewAnimalOutput()
		{
			return false;
		}

		public bool _ValidateNewAnimalOutputConfig(EventFarmItemDrop dropConfig)
		{
			return false;
		}

		public bool _TryRandomNewAnimalOutputItem(EventFarmItemDrop dropConfig, out int outputItemId)
		{
			outputItemId = default(int);
			return false;
		}

		public bool _TryRefreshAnimalOutputPool(EventFarmItemDrop dropConfig)
		{
			return false;
		}

		public void _ClearAnimalOutputState()
		{
		}

		public bool IsEnergyType()
		{
			return false;
		}

		public bool IsOrderType()
		{
			return false;
		}

		public void _RefreshTokenOutputType()
		{
		}

		public void TryAddToken(int id, int num, ReasonString reason)
		{
		}

		public bool TryUseToken(int id, int num, ReasonString reason)
		{
			return false;
		}

		public bool _HasEnoughToken(int changNum, bool showTips)
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

		public void _RefreshScoreEntity()
		{
		}

		public void _ClearScoreEntity()
		{
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public void _RefreshSpawnBonusHandler()
		{
		}

		public void _ClearSpawnBonusHandler()
		{
		}

		public EventFarmDrop GetCurDropConf()
		{
			return null;
		}

		public int _GetCurDropConfId()
		{
			return 0;
		}

		public void JumpTask(int param1, int param2)
		{
		}

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
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

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}
	}
}
