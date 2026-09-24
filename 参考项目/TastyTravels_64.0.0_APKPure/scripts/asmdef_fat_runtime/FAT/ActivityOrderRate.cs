using System;
using DG.Tweening;
using FAT.Merge;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityOrderRate : ActivityLike, IBoardEntry, IActivityOrderHandler, ISpawnEffectWithTrail, ISpawnEffect
	{
		public EventOrderRate Conf;

		public EventOrderRateDetail DetailConf;

		public bool IsRewardAlready;

		public int CurPhase;

		public int CurShowPhase;

		public bool CurShowAlready;

		public bool needShow;

		public VisualPopup MainPopup;

		public VisualPopup StartPopup;

		[NonSerialized]
		public bool _needPop;

		public string trail_res_key;

		public string order_trail_key;

		public int DetailID { get; set; }

		public int MilestoneFirst { get; set; }

		public int MilestoneSecond { get; set; }

		public int MilestoneThird { get; set; }

		public int LastMainShowScore { get; set; }

		public string buff_entry_res_key => null;

		public ActivityOrderRate(ActivityLite lite_)
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public override void SetupFresh()
		{
		}

		public override void LoadSetup(ActivityInstance instance)
		{
		}

		public override void SaveSetup(ActivityInstance instance)
		{
		}

		public override void Open()
		{
		}

		public override void AfterLoad(ActivityInstance data_)
		{
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public void ResolveMilestone()
		{
		}

		public void ResolveCurPhase()
		{
		}

		public void TryAddPhase(RewardCommitData data)
		{
		}

		public void OnFlyIconStart(FlyableItemSlice item)
		{
		}

		public static bool IsMergeCoinReward(RewardCommitData reward, int mergeCoinId)
		{
			return false;
		}

		public void RefreshLastShowPhase()
		{
		}

		public static string GetExtraRewardMiniThemeRes(int eventId, int paramId)
		{
			return null;
		}

		bool IActivityOrderHandler.IsValidForBoard(int boardId)
		{
			return false;
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public bool TryClaimReward(int order, int reward, Vector3 OrderPos)
		{
			return false;
		}

		void ISpawnEffectWithTrail.AddTrail(MBItemView view, Tween tween)
		{
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_AfterLoad(ActivityInstance P0)
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
