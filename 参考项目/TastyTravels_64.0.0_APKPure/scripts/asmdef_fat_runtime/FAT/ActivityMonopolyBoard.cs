using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Config;
using DG.Tweening;
using FAT.Merge;
using IFix.Core;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityMonopolyBoard : ActivityLike, IBoardEntry, IBoardArchive, IActivityUpdate, IActivityOrderHandler, IExternalOutput, MergeWorld.IActivityHandler, ISpawnEffectWithTrail, ISpawnEffect, IBoardActivityHandbook, IBoardExtremeAdapter
	{
		public struct MonoGridCell
		{
			public int ruleId;

			public Vector2Int coord;
		}

		public class MonopolyBoardData
		{
			public int colCount;

			public int rowCount;

			public int lapTarget;

			public List<RewardConfig> finishReward;

			public Vector2Int lapPos;

			public Vector2Int dicePos;

			public List<MonoGridCell> cells;

			public bool isFixRoute;

			public List<int> diceRoute;

			public Dictionary<int, int> keyGridRequire;

			public Dictionary<int, int> keyGridCellCount;

			[IDTag(1)]
			public MonoGridCell GetCell(int index)
			{
				return default(MonoGridCell);
			}

			[IDTag(0)]
			public MonoGridCell GetCell(Vector2Int coord)
			{
				return default(MonoGridCell);
			}
		}

		[CompilerGenerated]
		public sealed class _003CCoDelayReward_003Ed__112 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public float delay;

			public List<RewardCommitData> rewardList;

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
			public _003CCoDelayReward_003Ed__112(int _003C_003E1__state)
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

		public EventMonopoly conf;

		public EventMonopolyDetail confD;

		public bool isShowLoopTips;

		[NonSerialized]
		public int _detailID;

		public const float flyExWaitTime = 0.2f;

		[NonSerialized]
		public MergeWorld _world;

		[NonSerialized]
		public MergeWorldTracer _tracer;

		[NonSerialized]
		public MonopolyItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public BoardExtremeHandler _boardExtremeHandler;

		[NonSerialized]
		public List<RewardCommitData> _stageFinishRewards;

		public string order_trail_key;

		[NonSerialized]
		public float _rewardDelay;

		[NonSerialized]
		public float _goDelay;

		[NonSerialized]
		public Vector3 _goOrigin;

		[NonSerialized]
		public Vector3 _rewardOrigin;

		[NonSerialized]
		public float _interval;

		[NonSerialized]
		public List<RewardCommitData> _useItemRewards;

		[NonSerialized]
		public List<RewardCommitData> _useGoItemRewards;

		[NonSerialized]
		public int curStage;

		[NonSerialized]
		public int curLap;

		[NonSerialized]
		public int curPathOrder;

		[NonSerialized]
		public int[] diceBag;

		[NonSerialized]
		public int fixRouteIndex;

		public MonopolyBoardData boardData;

		[NonSerialized]
		public readonly Dictionary<int, int> _keyHitsThisRound;

		[NonSerialized]
		public readonly Dictionary<int, int> _keyPassesThisRound;

		[NonSerialized]
		public int _forcedNextDice;

		[NonSerialized]
		public readonly int[] _forcedDebt;

		[NonSerialized]
		public readonly List<int> _keyHitsEncodedBuffer;

		public override bool Valid => false;

		public VisualRes BoardRes { get; }

		public VisualRes LoadingRes { get; }

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		public VisualRes MilestoneRes { get; }

		public VisualRes LoopTipsRes { get; }

		public VisualRes RoundFinishTipRes { get; }

		public VisualRes HelpRes { get; }

		public override ActivityVisual Visual => null;

		FeatureEntry IBoardArchive.Feature => default(FeatureEntry);

		public bool showDiceDebugButton { get; set; }

		public MergeWorld World => null;

		public MergeWorldTracer Tracer => null;

		public int BoardId => 0;

		public float rewardFlyDuration { get; set; }

		public float singleRewardFlyDur => 0f;

		public MonopolyStage CurrentStageConfigForUI => null;

		public ActivityMonopolyBoard(ActivityLite lite_)
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

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void Open()
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		void IBoardArchive.SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		void IBoardArchive.FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void RefreshTheme()
		{
		}

		public List<MonopolyStage> GetMilestones()
		{
			return null;
		}

		public int GetTrophyIndex(int id)
		{
			return 0;
		}

		public void Track_Event_Monopoly_Roll(int num, int gridId, int milestoneQueue, int totalStageNum)
		{
		}

		public void Track_Event_Monopoly_Milestone(int milestoneQueue, int totalStageNum, bool isFinal)
		{
		}

		public void Track_Event_Monopoly_End_Collect(string itemsinfo)
		{
		}

		public void TrackTapGetItem(int itemId, int itemCount)
		{
		}

		public void TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
		{
		}

		public static ActivityMonopolyBoard GetActiveActivity()
		{
			return null;
		}

		public static void DebugSetStage(string stageStr)
		{
		}

		public static void DebugSetLap(string lapStr)
		{
		}

		public static void DebugSwitchDiceButton()
		{
		}

		public void EnterBoard()
		{
		}

		public void LeaveBoard()
		{
		}

		public void InitWorld(fat.gamekitdata.Merge data)
		{
		}

		public void Cleanup()
		{
		}

		public void EnterMonopolyBoard()
		{
		}

		public void ExitMonopolyBoard()
		{
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		bool IActivityOrderHandler.OnPostUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public bool GetOrderRewardBR_Monopoly(int diff, out int rewardId, out int rewardNum)
		{
			rewardId = default(int);
			rewardNum = default(int);
			return false;
		}

		public bool GetOrderRewardBR_MonopolyAct(int diff, out int rewardId, out int rewardNum)
		{
			rewardId = default(int);
			rewardNum = default(int);
			return false;
		}

		public (int, int) Roll()
		{
			return default((int, int));
		}

		public void Settle(bool sendGoReward)
		{
		}

		public void SettleGoReward()
		{
		}

		public void SetRewardFlyDuration(float interval, bool hasFlyToInventory)
		{
		}

		public void SettleNormalReward()
		{
		}

		public void CheckFinalReward()
		{
		}

		[IteratorStateMachine(typeof(_003CCoDelayReward_003Ed__112))]
		public IEnumerator CoDelayReward(float delay, Vector3 origin, List<RewardCommitData> rewardList)
		{
			return null;
		}

		public List<RewardCommitData> GetStageFinishRewards()
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

		public void SetGoRewardAnim(float delay, Vector3 flyOrigin)
		{
		}

		public void SetRewardAnim(float delay, Vector3 flyOrigin)
		{
		}

		public (int, int) OnUseItem()
		{
			return default((int, int));
		}

		void ISpawnEffectWithTrail.AddTrail(MBItemView view, Tween tween)
		{
		}

		public bool CheckIsShowRedPoint(out int redNum)
		{
			redNum = default(int);
			return false;
		}

		public void _OnBoardItemChange()
		{
		}

		void IActivityUpdate.ActivityUpdate(float deltaTime)
		{
		}

		Board IBoardExtremeAdapter.GetBoard()
		{
			return null;
		}

		bool IBoardExtremeAdapter.CanCheckExtreme()
		{
			return false;
		}

		public void BuildBoardData(MonopolyStage stage, Func<int, MonoGridCell> resolveRule = null)
		{
		}

		public static List<int> GetRandomDropsFromGrid(int gridId)
		{
			return null;
		}

		public void EncodeKeyGridHits(List<int> outList)
		{
		}

		public void DecodeKeyGridHits(List<int> inList)
		{
		}

		public void StartNewRound()
		{
		}

		public void RefreshBoardData()
		{
		}

		public int GetDiceResult()
		{
			return 0;
		}

		public int GetFixRouteResult()
		{
			return 0;
		}

		public int GetRandomRouteResult()
		{
			return 0;
		}

		public int TryGetForcedDiceForGuarantee()
		{
			return 0;
		}

		public (int, int, int) ComputeRemainingOpportunityForKey(int keyId)
		{
			return default((int, int, int));
		}

		public int CountPossibleKeyHitsNextRollForKey(int keyId)
		{
			return 0;
		}

		public int FindNearestKeyDistance1to6(int keyId)
		{
			return 0;
		}

		public bool IsKeyCell(MonoGridCell cell)
		{
			return false;
		}

		public (int, int) MovePlayer()
		{
			return default((int, int));
		}

		public void GetMonopolySpawnOutputsOne(IList<(int itemId, int num, int weight)> dst)
		{
		}

		public bool TryGetMonopolyOutputFixedOne(out int itemId, out int num)
		{
			itemId = default(int);
			num = default(int);
			return false;
		}

		public (int, int) GetWithOutputTimeRange()
		{
			return default((int, int));
		}

		public MonopolyStage GetCurrentStageConfig()
		{
			return null;
		}

		[IDTag(1)]
		public (string, string) GetGridRes(Vector2Int coord)
		{
			return default((string, string));
		}

		[IDTag(0)]
		public (string, string) GetGridRes(int id)
		{
			return default((string, string));
		}

		public int GetCurrentLapTarget()
		{
			return 0;
		}

		public int GetCurrentLap()
		{
			return 0;
		}

		public int GetCurrentcurStage()
		{
			return 0;
		}

		public int GetCurrentPathOrder()
		{
			return 0;
		}

		public (int, int) GetBoardSize()
		{
			return default((int, int));
		}

		public Vector2Int GetCurrentCoord()
		{
			return default(Vector2Int);
		}

		public bool TryGetCell(int x, int y, out int ruleId, out bool isGo)
		{
			ruleId = default(int);
			isGo = default(bool);
			return false;
		}

		public bool IsPityGrid(int x, int y)
		{
			return false;
		}

		public int GetPityRemainTimes(int x, int y)
		{
			return 0;
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

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}
	}
}
