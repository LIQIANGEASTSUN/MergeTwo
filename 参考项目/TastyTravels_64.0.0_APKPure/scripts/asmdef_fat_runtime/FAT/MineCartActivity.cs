using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using EL.Resource;
using FAT.Merge;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class MineCartActivity : ActivityLike, IBoardEntry, IBoardArchive, IActivityUpdate, IActivityOrderHandler, IExternalOutput, MergeWorld.IActivityHandler, ISpawnEffectWithTrail, ISpawnEffect, IBoardActivityHandbook, IBoardActivityRowConf, IBoardMoveAdapter, IBoardExtremeAdapter
	{
		public enum ItemOutputType
		{
			None = 0,
			Energy = 1,
			Order = 2,
			All = 3
		}

		[CompilerGenerated]
		public sealed class _003CCoDelayReward_003Ed__153 : IEnumerator<object>, IEnumerator, IDisposable
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
			public _003CCoDelayReward_003Ed__153(int _003C_003E1__state)
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
		public sealed class _003CCoPlaySound_003Ed__152 : IEnumerator<object>, IEnumerator, IDisposable
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
			public _003CCoPlaySound_003Ed__152(int _003C_003E1__state)
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
		public sealed class _003CResEnumerate_003Ed__31 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MineCartActivity _003C_003E4__this;

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
			public _003CResEnumerate_003Ed__31(int _003C_003E1__state)
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

		public bool HasPlayedEnterAnimation;

		public bool NeedShowHandbookRedDot;

		public bool PlayedHandbookBanner;

		public bool CanPlayFinishRoundGuide;

		[NonSerialized]
		public List<int> _allItemIdList;

		[NonSerialized]
		public BoardMoveHandler _boardMoveHandler;

		[NonSerialized]
		public BoardExtremeHandler _boardExtremeHandler;

		[NonSerialized]
		public int _curDepthIndex;

		[NonSerialized]
		public MineCartItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public int _milestonePhase;

		[NonSerialized]
		public List<(int itemId, int weight)> _useItemRewardPool;

		[NonSerialized]
		public int _randomCount;

		[NonSerialized]
		public List<RewardCommitData> _useItemRewards;

		public static float _flyDelayTime;

		public static float _flyIntervalTime;

		[NonSerialized]
		public List<(int itemId, int weight)> _milestoneRewardPool;

		[NonSerialized]
		public List<RewardCommitData> _milestoneRewards;

		public string order_trail_key;

		public override bool Valid => false;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public EventMineCart ConfD { get; set; }

		public int DetailId { get; set; }

		public int UnlockMaxLevel { get; set; }

		public ItemOutputType OutputType { get; set; }

		public override ActivityVisual Visual => null;

		public VisualRes VisualBoard { get; }

		public VisualRes VisualLoading { get; }

		public VisualRes VisualHelp { get; }

		public VisualRes VisualBanner { get; }

		public VisualRes VisualMilestoneReward { get; }

		public VisualRes VisualHandbook { get; }

		public VisualRes VisualRewardTips { get; }

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		FeatureEntry IBoardArchive.Feature => default(FeatureEntry);

		public int RoundIndex { get; set; }

		public int MilestoneNum { get; set; }

		public int BaseMilestoneNum { get; set; }

		public EventMineCartDetail GetCurDetailConfig()
		{
			return null;
		}

		public MineCartActivity(ActivityLite lite_)
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

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__31))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
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

		public bool CheckClaimBoardCategoryReward(int itemId)
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

		void IBoardArchive.SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		void IBoardArchive.FillBoardData(fat.gamekitdata.Merge data)
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

		public void _InitBoardMoveHandler()
		{
		}

		public void _InitBoardExtremeHandler()
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

		int IBoardMoveAdapter.GetMoveNeedRowCount(int detailId)
		{
			return 0;
		}

		int IBoardMoveAdapter.GetMoveCountByRowId(int rowId)
		{
			return 0;
		}

		Board IBoardMoveAdapter.GetBoard()
		{
			return null;
		}

		void IBoardMoveAdapter.OnDepthIndexUpdate(int newDepth)
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

		public void CheckBoardExtremeCase()
		{
		}

		public void _OnBoardItemChange()
		{
		}

		void IActivityUpdate.ActivityUpdate(float deltaTime)
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

		public void _RefreshItemOutputType()
		{
		}

		public void _InitStartItem()
		{
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public bool GetOrderRewardBR(int diff, out int rewardId, out int rewardNum)
		{
			rewardId = default(int);
			rewardNum = default(int);
			return false;
		}

		public bool GetOrderRewardBRAct(int diff, out int rewardId, out int rewardNum)
		{
			rewardId = default(int);
			rewardNum = default(int);
			return false;
		}

		public void TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
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

		public EventMineCartDrop GetCurDropConf()
		{
			return null;
		}

		public int _GetCurDropConfId()
		{
			return 0;
		}

		public void TrackBonusGetItem(int rewardId, int rewardCount)
		{
		}

		public EventMineCartRound GetCurRoundConfig()
		{
			return null;
		}

		public int GetCurRoundConfigId()
		{
			return 0;
		}

		public void _RefreshRoundInfo(bool needAdd = false)
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

		public bool HasSpecialItem()
		{
			return false;
		}

		public void _OnUseItem(Item source, ItemActiveSourceComponent comp)
		{
		}

		public void _TrackUseItem(int milestonePhase)
		{
		}

		public void _RefreshUseItemRewardPool()
		{
		}

		public void _BeginUseItemReward()
		{
		}

		[IteratorStateMachine(typeof(_003CCoPlaySound_003Ed__152))]
		public IEnumerator CoPlaySound(float delay, string soundName)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCoDelayReward_003Ed__153))]
		public IEnumerator CoDelayReward(float delay, Vector3 origin, List<RewardCommitData> rewardList)
		{
			return null;
		}

		public void _TryAddMilestoneNum(int addNum)
		{
		}

		public void TryClaimMilestoneReward(int milestonePhase, float delayTime)
		{
		}

		public void _BeginMilestoneReward(int rewardCount, float delayTime)
		{
		}

		void ISpawnEffectWithTrail.AddTrail(MBItemView view, Tween tween)
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

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}
	}
}
