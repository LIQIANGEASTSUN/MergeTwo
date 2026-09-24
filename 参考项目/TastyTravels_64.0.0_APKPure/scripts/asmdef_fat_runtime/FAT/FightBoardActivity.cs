using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using FAT.Merge;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class FightBoardActivity : ActivityLike, IBoardEntry, IBoardArchive, IExternalOutput, MergeWorld.IActivityHandler, ISpawnEffectWithTrail, ISpawnEffect, IBoardActivityOutput, IActivityOrderHandler
	{
		[CompilerGenerated]
		public sealed class _003CCoDelayReward_003Ed__73 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public FightBoardActivity _003C_003E4__this;

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
			public _003CCoDelayReward_003Ed__73(int _003C_003E1__state)
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
		public sealed class _003CCoPlaySound_003Ed__72 : IEnumerator<object>, IEnumerator, IDisposable
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
			public _003CCoPlaySound_003Ed__72(int _003C_003E1__state)
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

		public FightMonster monster;

		[NonSerialized]
		public MergeWorld _world;

		[NonSerialized]
		public MergeWorldTracer _tracer;

		[NonSerialized]
		public FightBoardItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public readonly List<(int itemId, int weight)> _itemOutputs;

		[NonSerialized]
		public readonly List<RewardCommitData> _attackRewards;

		[NonSerialized]
		public readonly List<RewardCommitData> _levelRewards;

		public EventFight eventFight;

		public EventFightDetail eventFightDetail;

		public EventFightLevel eventFightLevel;

		[NonSerialized]
		public int _detailID;

		[NonSerialized]
		public int _monsterHp;

		[NonSerialized]
		public int _hasCycleHint;

		[NonSerialized]
		public int _attackCount;

		public string order_trail_key;

		public MergeWorld World => null;

		public override ActivityVisual Visual => null;

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		public VisualRes BoardRes { get; }

		public VisualRes LoadingRes { get; }

		public VisualRes HelpRes { get; }

		public VisualRes MilestoneRes { get; }

		public VisualRes MilestoneTipsRes { get; }

		public FeatureEntry Feature => default(FeatureEntry);

		public BoardActivityOutputType OutputType { get; set; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		public void FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		void ISpawnEffectWithTrail.AddTrail(MBItemView view, Tween tween)
		{
		}

		public FightBoardActivity(ActivityLite lite)
		{
		}

		public override void Open()
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void WhenEnd()
		{
		}

		public bool CollectAllBoardReward(List<RewardCommitData> rewards)
		{
			return false;
		}

		public override void WhenReset()
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
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

		public void EnterBoard()
		{
		}

		public void LeaveBoard()
		{
		}

		public void InitData()
		{
		}

		public void LoadData()
		{
		}

		public void RefreshTheme()
		{
		}

		public void EnterNextLevel()
		{
		}

		public void RefreshLevel()
		{
		}

		public void RefreshMonsterData()
		{
		}

		public void InitWorld(fat.gamekitdata.Merge data)
		{
		}

		public void Cleanup()
		{
		}

		public void _BeginReward(int output)
		{
		}

		public void _BeginAttackReward(int output)
		{
		}

		[IteratorStateMachine(typeof(_003CCoPlaySound_003Ed__72))]
		public IEnumerator CoPlaySound(float delay)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCoDelayReward_003Ed__73))]
		public IEnumerator CoDelayReward(Vector3 origin)
		{
			return null;
		}

		public void _BeginLevelReward()
		{
		}

		public void Exit()
		{
		}

		public string GetMilestoneText()
		{
			return null;
		}

		public List<EventFightLevel> GetFightLevels()
		{
			return null;
		}

		public int GetCurrentMilestoneIndex()
		{
			return 0;
		}

		public bool CheckIsShowRedPoint(out int rpNum)
		{
			rpNum = default(int);
			return false;
		}

		public void SetHasCycleHint(bool isShow)
		{
		}

		public bool CanShowCycleHint()
		{
			return false;
		}

		public void RefreshOutputType()
		{
		}

		public void RefreshOutputMethod()
		{
		}

		public bool _IsEnergyMethod()
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

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
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

		void IBoardActivityOutput.TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
		{
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

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}
	}
}
