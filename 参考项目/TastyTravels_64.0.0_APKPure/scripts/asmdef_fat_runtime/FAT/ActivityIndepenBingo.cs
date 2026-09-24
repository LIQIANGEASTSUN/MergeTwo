using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Config;
using FAT.Merge;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityIndepenBingo : ActivityLike, IBoardEntry, IBoardArchive, IMergeItemIndicatorHandler, IEnergyBoostReplaceItem, IActivityCupChallengeTaskJump
	{
		public int bingoCount;

		public bool needJumpCD;

		public const int needJumpCDIndex = -1;

		public IndepenBingoMap bingoMap;

		public VisualPopup startPopup;

		public VisualRes mainVisual;

		public VisualPopup restartPopup;

		public VisualRes rewardVisual;

		public VisualRes itemVisual;

		public VisualPopup endPopup;

		public VisualRes groupChooseVisual;

		public VisualRes levelCompleteVisual;

		public VisualRes helpVisual;

		public VisualRes loadingVisual;

		public VisualRes spawnerPreviewVisual;

		public bool hasConvert;

		public bool waitConfirmEnd;

		public Queue<Vector3> completeCellQueue;

		[NonSerialized]
		public ActivityInstance _data;

		public int detailID { get; set; }

		public int groupDetailID { get; set; }

		public int boardIndex { get; set; }

		public bool waitEnterNextBoard { get; set; }

		public bool waitRecycle { get; set; }

		public EventIndepenBingoRound roundConf { get; set; }

		public EventIndepenBingo conf { get; set; }

		public EventIndepenBingoDetail detailConf { get; set; }

		public IndepenBingoGroupDetail groupDetailConf { get; set; }

		public IndepenBingoBoard bingoBoardConf { get; set; }

		public override VisualRes GuideRes => default(VisualRes);

		public override ActivityVisual Visual => null;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public bool IsEnd => false;

		public long CountdownLimit => 0L;

		public RewardCommitData recycleReward { get; set; }

		public FeatureEntry Feature => default(FeatureEntry);

		public bool NeedChooseGroup => false;

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

		public void SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		public void _InitWorld()
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

		public ItemIndType CheckIndicator(int itemId, out string asset)
		{
			asset = null;
			return default(ItemIndType);
		}

		public bool CheckBingoComplete()
		{
			return false;
		}

		public int GetBingoTotalNum()
		{
			return 0;
		}

		public int GetBingoCount()
		{
			return 0;
		}

		public BingoResult CompleteBingo(IndepenBingoCell item, Vector3 worldPos, out RewardCommitData completeReward, out List<RewardCommitData> bingoReward, out bool enterNextBoard, out bool enterNextRound)
		{
			completeReward = null;
			bingoReward = null;
			enterNextBoard = default(bool);
			enterNextRound = default(bool);
			return default(BingoResult);
		}

		public void DequeueItemFly(int tid, Vector3 start)
		{
		}

		public RewardCommitData _ClaimCellReward((int, int) cellKey, ref BingoResult result)
		{
			return null;
		}

		public List<RewardCommitData> _ClaimBingoReward((int, int) cellKey, ref BingoResult result)
		{
			return null;
		}

		public bool CheckEnterNextBoard()
		{
			return false;
		}

		public bool CheckEnterNextRound()
		{
			return false;
		}

		public (RewardConfig, RewardConfig, RewardConfig) GetBoardRewardInfo()
		{
			return default((RewardConfig, RewardConfig, RewardConfig));
		}

		public int GetBingoBoardIndex()
		{
			return 0;
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public string MetaEntryAsset()
		{
			return null;
		}

		public ActivityIndepenBingo(ActivityLite lite)
		{
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public override void Open()
		{
		}

		public void SendJumpCDItem()
		{
		}

		public override void AfterLoad(ActivityInstance data_)
		{
		}

		public void _InitConf()
		{
		}

		public void _InitTheme()
		{
		}

		public void _PopupStart()
		{
		}

		public void GetGroupInfo(Dictionary<int, List<int>> pairs)
		{
		}

		public void ChooseGroup(int id)
		{
		}

		public void EnterNextBoard()
		{
		}

		public List<Item> FinishRound()
		{
			return null;
		}

		public RewardCommitData GetRecycleReward()
		{
			return null;
		}

		public List<int> _GetCanChooseGroupDetailID()
		{
			return null;
		}

		public bool _CheckGroupLevelRequire(int id)
		{
			return false;
		}

		public void _FillGroupDetailID(List<int> ids, int BingoGroupsID)
		{
		}

		public void _ResetBoardIndex()
		{
		}

		public void _RefreshBoard()
		{
		}

		public void _RefreshNextBoardItem(List<Item> list)
		{
		}

		public void _RefreshBingoMap()
		{
		}

		public void _EnterNextRound()
		{
		}

		public bool PutItem(Item item)
		{
			return false;
		}

		public bool PeekItem(int idx, int bagId)
		{
			return false;
		}

		public bool IsItemNeeded(int itemId)
		{
			return false;
		}

		public void JumpTask(int param1, int param2)
		{
		}

		public VisualRes _003C_003EiFixBaseProxy_get_GuideRes()
		{
			return default(VisualRes);
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
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

		public void _003C_003EiFixBaseProxy_AfterLoad(ActivityInstance P0)
		{
		}
	}
}
