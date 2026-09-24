using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Config;
using FAT.Merge;
using IFix.Core;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class TrainMissionActivity : ActivityLike, IBoardEntry, IBoardArchive, IMergeItemIndicatorHandler, IEnergyBoostReplaceItem, IActivityCupChallengeTaskJump
	{
		[NonSerialized]
		public int _missionDetailID;

		[NonSerialized]
		public int _groupDetailID;

		[NonSerialized]
		public int _challengeIndex;

		[NonSerialized]
		public int _challengeComplete;

		[NonSerialized]
		public int _topOrderID;

		[NonSerialized]
		public int _bottomOrderID;

		[NonSerialized]
		public int _topOrderComplete;

		[NonSerialized]
		public int _bottomOrderComplete;

		[NonSerialized]
		public bool _waitEnterNextChallenge;

		[NonSerialized]
		public bool _waitRecycle;

		[NonSerialized]
		public bool _needPlayEnterAnim;

		[NonSerialized]
		public int _topOrderStartTime;

		[NonSerialized]
		public int _bottomOrderStartTime;

		[NonSerialized]
		public int _limitCommitCount;

		[NonSerialized]
		public int _trainQueue;

		[NonSerialized]
		public int _milestoneQueue;

		[NonSerialized]
		public int _challengeQueue;

		public bool needJumpCD;

		public const int JUMP_CD_ITEM_ID = -1;

		public EventTrainMissionRound missionRound;

		public EventTrainMission mission;

		public TrainChallenge trainChallenge;

		public TrainMissionOrder topOrder;

		public TrainMissionOrder bottomOrder;

		[NonSerialized]
		public List<RewardCommitData> _orderRewardWaitCommit;

		[NonSerialized]
		public RewardCommitData _trainMilestoneRewardWaitCommit;

		[NonSerialized]
		public RewardCommitData _recycleReward;

		public bool waitConfirmEnd;

		[NonSerialized]
		public bool _hasConvert;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public override ActivityVisual Visual => null;

		public VisualRes VisualMain { get; }

		public VisualRes VisualHelp { get; }

		public VisualRes VisualChooseGroup { get; }

		public VisualRes VisualComplete { get; }

		public VisualRes VisualLoading { get; }

		public VisualRes VisualPreview { get; }

		public VisualRes VisualReward { get; }

		public VisualRes VisualItemInfo { get; }

		public VisualPopup StartPopup { get; }

		public VisualPopup EndPopup { get; }

		public bool waitEnterNextChallenge => false;

		public bool waitRecycle => false;

		public bool NeedPlayEnterAnim => false;

		public int challengeIndex => 0;

		public int groupDetailID => 0;

		public RewardCommitData recycleReward => null;

		public int TrainQueue => 0;

		public string BadgeAsset => null;

		public FeatureEntry Feature => default(FeatureEntry);

		public int ActivityBoardId => 0;

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

		public TrainMissionActivity(ActivityLite lite)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public void SaveNormalData(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public void LoadNormalData(ActivityInstance data_)
		{
		}

		public override void Open()
		{
		}

		public override void WhenEnd()
		{
		}

		public void SendJumpCDItem()
		{
		}

		public bool CheckCanShowRP()
		{
			return false;
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public bool NeedChooseGroup()
		{
			return false;
		}

		public void GetGroupInfo(Dictionary<int, List<int>> pairs)
		{
		}

		public void ChooseGroup(int id)
		{
		}

		public int GetCurMilestoneProgress()
		{
			return 0;
		}

		public int GetCurMilestoneTotal()
		{
			return 0;
		}

		public List<RewardCommitData> CompleteTrainMission(TrainMissionOrder order, int index)
		{
			return null;
		}

		public int CheckMissionState(TrainMissionOrder order, int index)
		{
			return 0;
		}

		public void EnterNextChallenge()
		{
		}

		public void ChangeAnimState(bool state)
		{
		}

		public void GetTrainMilestones(List<TrainMilestone> list)
		{
		}

		public List<RewardCommitData> GetOrderWaitCommitReward()
		{
			return null;
		}

		public RewardCommitData GetMilestoneWaitCommitReward()
		{
			return null;
		}

		public RewardCommitData GetRecycleReward()
		{
			return null;
		}

		public bool PutItem(Item item)
		{
			return false;
		}

		public bool PeekItem(int idx, int bagId)
		{
			return false;
		}

		public void FinishRoundDebug()
		{
		}

		public List<Item> FinishRound()
		{
			return null;
		}

		public List<RewardConfig> GetTotalRewardPreview()
		{
			return null;
		}

		public void _InitWorld()
		{
		}

		public void SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void _CreateWorld()
		{
		}

		public void _CreateWorldTracer()
		{
		}

		public void _Bind()
		{
		}

		public void _CreateInventory()
		{
		}

		public void _OnBoardItemChange()
		{
		}

		public void FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void _RefreshNextChallengeItem(List<Item> list)
		{
		}

		public void _RefreshMission()
		{
		}

		public void _RefreshDetailID()
		{
		}

		public void _RefreshTheme()
		{
		}

		public List<int> _GetCanChooseGroupDetailID()
		{
			return null;
		}

		public bool _CheckGroupLevelRequire(int id)
		{
			return false;
		}

		public void _FillGroupDetailID(List<int> ids, int GroupId)
		{
		}

		public void _ResetChallenge()
		{
		}

		public void _StartNewChallenge()
		{
		}

		public void _UpdateChallenge()
		{
		}

		public void _FillBoardItemByChallenge()
		{
		}

		public void _UpdateOrder()
		{
		}

		public bool _FinishOrder(TrainMissionOrder order)
		{
			return false;
		}

		public void _FinishChallenge()
		{
		}

		[IDTag(1)]
		public void _BeginMilestoneReward()
		{
		}

		[IDTag(0)]
		public void _BeginMilestoneReward(TrainMilestone trainMilestone)
		{
		}

		public void _EnterNextRound()
		{
		}

		public ItemIndType CheckIndicator(int itemId, out string asset)
		{
			asset = null;
			return default(ItemIndType);
		}

		public bool IsItemNeeded(int itemId)
		{
			return false;
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

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}
	}
}
