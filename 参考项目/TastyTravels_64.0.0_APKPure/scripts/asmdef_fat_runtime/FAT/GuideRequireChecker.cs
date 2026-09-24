using System;
using System.Collections.Generic;
using Config;
using FAT.Merge;

namespace FAT
{
	public class GuideRequireChecker
	{
		[NonSerialized]
		public int mLastCollectedItemTid;

		public UIManager uiMan => null;

		public void Reset()
		{
		}

		public bool IsMatchRequirement(IList<string> requires)
		{
			return false;
		}

		public bool _IsMatchRequirement(IList<string> requires)
		{
			return false;
		}

		public bool _CheckRequire(GuideMergeRequire require)
		{
			return false;
		}

		public bool _CheckVineLeapExtraReward()
		{
			return false;
		}

		public bool IsMatchUIState(int state, int extra)
		{
			return false;
		}

		public bool _IsLayerEmpty(UILayer layer)
		{
			return false;
		}

		public bool _IsBoardReady(UIResource res)
		{
			return false;
		}

		public bool _IsFishBoardReady()
		{
			return false;
		}

		public bool _IsFightBoardReady()
		{
			return false;
		}

		public bool _IsMonopolyBoardReady()
		{
			return false;
		}

		public bool _IsSceneReady()
		{
			return false;
		}

		public bool _IsSceneBuildingPopUp(int id)
		{
			return false;
		}

		public bool _IsRequireUIState(int value, int extra)
		{
			return false;
		}

		public bool _IsRequireLoginGiftItem()
		{
			return false;
		}

		public bool _IsRequireBubbleItem(ItemBubbleType type, int id, int num)
		{
			return false;
		}

		public bool _IsRequireBoardItem(int id, int num)
		{
			return false;
		}

		public bool _IsRequireBoardItemCategory(int categoryId)
		{
			return false;
		}

		public bool _IsRequireBoardSandItem(int id, int num)
		{
			return false;
		}

		public bool _IsRequireOnGoingOrderNum(int num)
		{
			return false;
		}

		public bool _IsRequireOrderCommittable(int orderId)
		{
			return false;
		}

		public bool _IsRequireOrderComplete(int orderId)
		{
			return false;
		}

		public bool _IsRequireOrderUncomplete(int orderId)
		{
			return false;
		}

		public bool _IsRequireCanLevelUp(int level)
		{
			return false;
		}

		public bool _IsRequireLevel(int level)
		{
			return false;
		}

		public bool _IsRequireBoardReward(int tid)
		{
			return false;
		}

		public bool _IsRequireSelectItem(int tid)
		{
			return false;
		}

		public bool _IsRequireSelectBubble(int tid)
		{
			return false;
		}

		public bool _IsRequireCollectItem(int tid)
		{
			return false;
		}

		public bool _IsRequireBoardItemCoolDown(int tid)
		{
			return false;
		}

		public bool _IsRequireBoardItemOutput(int tid)
		{
			return false;
		}

		public bool _IsRequireGiftBoxFirstItem(int tid)
		{
			return false;
		}

		public bool _IsRequireMainBoardEmptyGridNum(int num)
		{
			return false;
		}

		public bool _IsRequireBoardNoMatch()
		{
			return false;
		}

		public bool _IsRequireBagEmptyGridNum(int num)
		{
			return false;
		}

		public bool _IsRequireBagInUseGridNum(int num)
		{
			return false;
		}

		public bool _IsRequireBuildingCanBuy(int id)
		{
			return false;
		}

		public bool _IsRequireBuildingCanUpgrade(int id, int level)
		{
			return false;
		}

		public bool _IsRequireBuildingLevel(int id, int level)
		{
			return false;
		}

		public bool _IsRequireEventTypeActive(int typeId)
		{
			return false;
		}

		public bool _IsRequireNotNewUserActivity()
		{
			return false;
		}

		public bool _isCardAlbumPanel()
		{
			return false;
		}

		public bool _isCardGroupInfoPanel()
		{
			return false;
		}

		public bool _isOnLackOfEnergy(int num)
		{
			return false;
		}

		public bool _CheckEnergyBoostNum(int num)
		{
			return false;
		}

		public bool _CheckMiniBoardBoxNum(int num)
		{
			return false;
		}

		public bool _CheckMiniBoardMultiBoxNum(int num)
		{
			return false;
		}

		public bool _CheckMiniBoardItemSame()
		{
			return false;
		}

		public bool _CheckMiniBoardMultiItemSame()
		{
			return false;
		}

		public bool _CheckMiniBoardMultiEnterNext()
		{
			return false;
		}

		public bool _CheckDiggingTokenNum(int num)
		{
			return false;
		}

		public bool _CheckSceneReady()
		{
			return false;
		}

		public bool _CheckPachinkoToken(int num)
		{
			return false;
		}

		public bool _CheckItemCanBoost()
		{
			return false;
		}

		public bool _GuessColorTokenNum(int num)
		{
			return false;
		}

		public bool _CheckMultiSpinTokeNum()
		{
			return false;
		}

		public bool _GuessTotalRightItem(int num)
		{
			return false;
		}

		public bool _GuessPutRepeatedItem()
		{
			return false;
		}

		public bool _CheckBingoCompleteNum(int num)
		{
			return false;
		}

		public bool _CheckBingoUIState()
		{
			return false;
		}

		public bool _CheckMineBonusItemMax(int num)
		{
			return false;
		}

		public bool _CheckFirstFishUnlock(int num)
		{
			return false;
		}

		public bool _CheckCanPreview()
		{
			return false;
		}

		public bool _CheckClawOrderPickSuccess()
		{
			return false;
		}

		public bool _CheckStockItem(int id, int num)
		{
			return false;
		}

		public bool _CheckLevelCanBoost(int state)
		{
			return false;
		}

		public bool _CheckMineCartBoardRoundFinish()
		{
			return false;
		}

		public bool _CheckTrainMissionSpawnerNum(int num)
		{
			return false;
		}

		public bool _CheckIndepenBingoSpawnerNum(int num)
		{
			return false;
		}

		public bool _CheckMonopolyGrid(int value)
		{
			return false;
		}

		public bool _CheckMonopolyLap(int value)
		{
			return false;
		}

		public bool _IsEnergyDeliveryReady()
		{
			return false;
		}

		public bool _IsRequireDeliveryTaskReady(int value)
		{
			return false;
		}

		public bool _CheckBoardToken(int value, int needNum)
		{
			return false;
		}

		public bool _CheckBoardTokenEnable(int value, int extra)
		{
			return false;
		}

		public bool _IsOrderLikeComplete()
		{
			return false;
		}

		public bool _CheckIsSevenDayMilestone()
		{
			return false;
		}

		public bool _CheckSevenDayMilestoneNum(int value)
		{
			return false;
		}

		public bool _isSpawnerExitEnable()
		{
			return false;
		}

		public bool _CheckRaceMultiMain()
		{
			return false;
		}

		public bool _CheckOrderAppear(int value)
		{
			return false;
		}

		public bool _CheckFirstRescueMsscore()
		{
			return false;
		}

		public bool _CheckOrderCoopMatch(int value)
		{
			return false;
		}

		public bool _CheckAvatarNew()
		{
			return false;
		}

		public bool _CheckAvatarFrameNew()
		{
			return false;
		}

		public bool _CheckClearFogSetUnlock()
		{
			return false;
		}

		public bool _CheckClearFogMapUnlock(int n)
		{
			return false;
		}

		public bool _CheckScoreCoopFirst()
		{
			return false;
		}

		public bool _CheckScoreCoopSecond()
		{
			return false;
		}

		public bool TryGetScoreCoopMain(out UIScoreCoopMain ui)
		{
			ui = null;
			return false;
		}
	}
}
