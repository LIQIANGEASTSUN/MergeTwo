using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Config;
using FAT.Merge;
using IFix.Core;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityTileBingo : ActivityLike, IBoardEntry, IBoardArchive, IMergeItemIndicatorHandler, IEnergyBoostReplaceItem, IActivityCupChallengeTaskJump
	{
		public const int NeedJumpCDIndex = -1;

		public const int SaveProgressBoardStride = 100000;

		public const int SaveCompletedTileBoardBase = 1000000;

		public const int SaveClaimedMilestoneBoardBase = 2000000;

		public bool needJumpCD;

		public bool waitConfirmEnd;

		public bool hasConvert;

		[NonSerialized]
		public readonly TileBingoProgressState tileState;

		[NonSerialized]
		public readonly TileBingoMilestoneState milestoneState;

		[NonSerialized]
		public readonly List<RewardCommitData> tileRewardWaitCommit;

		[NonSerialized]
		public readonly List<RewardCommitData> milestoneRewardWaitCommit;

		[NonSerialized]
		public readonly Queue<Vector3> completeCellQueue;

		[NonSerialized]
		public ActivityInstance data;

		[NonSerialized]
		public int boardStartTS;

		[NonSerialized]
		public int completedBoardTotal;

		[NonSerialized]
		public int milestoneQueue;

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

		public VisualRes tipsVisual;

		public VisualRes bagVisual;

		public VisualRes bagCompleteVisual;

		public int detailID { get; set; }

		public int groupDetailID { get; set; }

		public int boardIndex { get; set; }

		public bool waitEnterNextBoard { get; set; }

		public bool waitRecycle { get; set; }

		public bool HasSeenSpecialTileChangeAnimThisRound { get; set; }

		public EventTileBingoRound roundConf { get; set; }

		public EventTileBingo conf { get; set; }

		public EventTileBingoDetail detailConf { get; set; }

		public TileBingoGroupDetail groupDetailConf { get; set; }

		public TileBingoBoard bingoBoardConf { get; set; }

		public TileBoardDetail tileBoardDetailConf { get; set; }

		public TileBingoProgressState TileState => null;

		public TileBingoMilestoneState MilestoneState => null;

		public int CompletedBoardTotal => 0;

		public int MilestoneQueue => 0;

		public override VisualRes GuideRes => default(VisualRes);

		public override ActivityVisual Visual => null;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public RewardCommitData recycleReward { get; set; }

		public FeatureEntry Feature => default(FeatureEntry);

		public int ActivityBoardId => 0;

		public bool NeedChooseGroup => false;

		public bool IsEnd => false;

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

		public void SetBoardData(fat.gamekitdata.Merge data_)
		{
		}

		public void FillBoardData(fat.gamekitdata.Merge data_)
		{
		}

		public void InitWorld()
		{
		}

		public void CreateWorld()
		{
		}

		public void CreateWorldTracer()
		{
		}

		public void BindWorldTracer()
		{
		}

		public void CreateInventory()
		{
		}

		public void OnBoardItemChange()
		{
		}

		public ItemIndType CheckIndicator(int itemId, out string asset)
		{
			asset = null;
			return default(ItemIndType);
		}

		public bool PutItem(Item item)
		{
			return false;
		}

		public bool PeekItem(int idx, int bagId)
		{
			return false;
		}

		public void SendJumpCDItem()
		{
		}

		public bool IsItemNeeded(int itemId)
		{
			return false;
		}

		public bool HasRequiredItemForTile(int tileIndex)
		{
			return false;
		}

		public bool HasRequiredItem(int itemId)
		{
			return false;
		}

		public void FillBoardItemByCurrentBoard()
		{
		}

		public void RefreshNextBoardItem(List<Item> spawnerItems)
		{
		}

		public void RefreshBoardSpawnerItems()
		{
		}

		public bool IsCurrentSpawnerItem(Item item)
		{
			return false;
		}

		public void CollectCurrentSpawnerItems(List<Item> list)
		{
		}

		public void InitConfig()
		{
		}

		public void InitTheme()
		{
		}

		public void RefreshBoardConfig()
		{
		}

		public void RefreshTileState()
		{
		}

		public void BuildMilestoneState()
		{
		}

		public void RestoreProgressState()
		{
		}

		public List<int> GetCanChooseGroupDetailID()
		{
			return null;
		}

		public bool CheckGroupLevelRequire(int id)
		{
			return false;
		}

		public void FillGroupDetailID(List<int> ids, int groupId)
		{
		}

		public void GetGroupInfo(Dictionary<int, List<int>> pairs)
		{
		}

		public void ChooseGroup(int id)
		{
		}

		public void ResetBoardIndex()
		{
		}

		public static int GetCompletedTileSaveKey(int boardIndex, int tileIndex)
		{
			return 0;
		}

		public static int GetClaimedMilestoneSaveKey(int boardIndex, int milestoneId)
		{
			return 0;
		}

		public void NotifyInvalidate()
		{
		}

		public void MarkSpecialChangeAnimSeen()
		{
		}

		public void ResetSpecialChangeAnimSeen()
		{
		}

		public ActivityTileBingo(ActivityLite lite)
		{
		}

		public override void Open()
		{
		}

		public void OpenMain()
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public override void WhenReset()
		{
		}

		public void DequeueItemFly(int tid, Vector3 start)
		{
		}

		public Vector3 ResolveItemFlyTarget()
		{
			return default(Vector3);
		}

		public void JumpTask(int param1, int param2)
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public override void SetupFresh()
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void WhenEnd()
		{
		}

		public TileBingoSubmitResult SubmitTile(int tileIndex, Vector3 worldPos)
		{
			return null;
		}

		public bool TryCollectSubmitTileInventoryItems(int tileIndex, List<Item> confirmList)
		{
			return false;
		}

		public int GetTileTotalNum()
		{
			return 0;
		}

		public int GetCompletedTileCount()
		{
			return 0;
		}

		public bool IsTileCompleted(int tileIndex)
		{
			return false;
		}

		public bool IsTileFaceUp(int tileIndex)
		{
			return false;
		}

		public List<RewardCommitData> GetTileWaitCommitRewards()
		{
			return null;
		}

		public List<RewardCommitData> GetMilestoneWaitCommitRewards()
		{
			return null;
		}

		public RewardCommitData GetRecycleReward()
		{
			return null;
		}

		public void EnterNextBoard()
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

		public void CompleteBoard(TileBingoSubmitResult result)
		{
		}

		public void EnterNextRound()
		{
		}

		public bool IsSpecialRewardAvailable(TileBingoCell tile)
		{
			return false;
		}

		public long GetSpecialRewardCountdown(TileBingoCell tile)
		{
			return 0L;
		}

		public long GetSpecialRewardLeftSeconds()
		{
			return 0L;
		}

		public int GetTileCoverSize()
		{
			return 0;
		}

		public RewardCommitData BeginReward(RewardConfig reward, ReasonString reason)
		{
			return null;
		}

		public List<Item> CollectRecycleItems(out int totalDiff)
		{
			totalDiff = default(int);
			return null;
		}

		public void TryBeginRecycleReward(int totalDiff)
		{
		}

		public static void AddReward(Dictionary<int, int> map, RewardConfig reward)
		{
		}

		public void TrackSubmit(TileBingoSubmitResult result)
		{
		}

		public void TrackRestart()
		{
		}

		public void TrackEnd()
		{
		}

		[IDTag(1)]
		public static string RewardInfo(params RewardCommitData[] rewards)
		{
			return null;
		}

		[IDTag(0)]
		public static string RewardInfo(IEnumerable<RewardCommitData> rewards)
		{
			return null;
		}

		public VisualRes _003C_003EiFixBaseProxy_get_GuideRes()
		{
			return default(VisualRes);
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}
	}
}
