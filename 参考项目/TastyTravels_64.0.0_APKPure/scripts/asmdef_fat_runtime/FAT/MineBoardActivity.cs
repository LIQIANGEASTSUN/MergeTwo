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
	public class MineBoardActivity : ActivityLike, IBoardEntry, IActivityOrderHandler, IBoardActivityOutput, IBoardActivityHandbook, IActivityCupChallengeTaskJump, IBoardSkinBindingSource, IBoardMainChainSource
	{
		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__46 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MineBoardActivity _003C_003E4__this;

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
			public _003CResEnumerate_003Ed__46(int _003C_003E1__state)
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

		public int UnlockMaxLevel;

		[NonSerialized]
		public bool _hasPop;

		[NonSerialized]
		public int _progressPhase;

		[NonSerialized]
		public int _progressNum;

		[NonSerialized]
		public int _tokenNum;

		[NonSerialized]
		public ActivityBoardHandbookAgent _handbookAgent;

		public ActivityVisual StartTheme;

		public ActivityVisual BoardTheme;

		public ActivityVisual EndTheme;

		public ActivityVisual RewardTheme;

		public ActivityVisual HelpTheme;

		public ActivityVisual HandBookTheme;

		public ActivityVisual LoadingTheme;

		public ActivityVisual BannerTheme;

		public ActivityVisual MilestoneTheme;

		public PopupActivity StartPopup;

		public PopupActivity EndPopup;

		public PopupActivity RewardPopup;

		public UIResAlt StartResAlt;

		public UIResAlt EndResAlt;

		public UIResAlt BoardResAlt;

		public UIResAlt RewardResAlt;

		public UIResAlt HelpResAlt;

		public UIResAlt HandBookResAlt;

		public UIResAlt MilestoneResAlt;

		public UIResAlt LoadingResAlt;

		public UIResAlt BannerResAlt;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public MineTokenSpawnBonusHandler _spawnBonusHandler;

		public EventMine ConfD { get; set; }

		public int BoardSkinId => 0;

		public int MainCategoryId => 0;

		public int GroupId { get; set; }

		public override ActivityVisual Visual => null;

		public bool BoardEntryVisible => false;

		public BoardActivityOutputType OutputType { get; set; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		public ActivityBoardHandbookAgent HandbookAgent => null;

		public bool EnableLegacyHandbook => false;

		public EventMineGroup GetCurGroupConfig()
		{
			return null;
		}

		public void Setup(ActivityLite lite_, EventMine confD_)
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

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__46))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public override void SetupClear()
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public override void Open()
		{
		}

		public void _RefreshPopupInfo()
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public bool IsMileStoneToken(int id)
		{
			return false;
		}

		public void TryAddToken(int id, int num, ReasonString reason)
		{
		}

		public bool TryUseToken(int id, int num, ReasonString reason)
		{
			return false;
		}

		public bool ChangeItemToken(bool isAdd, int changNum)
		{
			return false;
		}

		public int GetTokenNum()
		{
			return 0;
		}

		public int GetCurProgressPhase()
		{
			return 0;
		}

		public int GetCurProgressNum()
		{
			return 0;
		}

		public EventMineReward GetProgressInfo(int progressPhase)
		{
			return null;
		}

		public EventMineDrop GetDropInfo(int progressPhase)
		{
			return null;
		}

		public bool CheckProgressFinish()
		{
			return false;
		}

		public void TryAddProgressNum(int tokenId, int tokenNum, ReasonString reason)
		{
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

		public void _RefreshSpawnBonusHandler()
		{
		}

		public void _ClearSpawnBonusHandler()
		{
		}

		public void _SetBonusHandlerDirty()
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

		public void TrackHandbookRewardClaim(int itemId)
		{
		}

		public void JumpTask(int param1, int param2)
		{
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

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public void _003C_003EiFixBaseProxy_SetupClear()
		{
		}

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}
	}
}
