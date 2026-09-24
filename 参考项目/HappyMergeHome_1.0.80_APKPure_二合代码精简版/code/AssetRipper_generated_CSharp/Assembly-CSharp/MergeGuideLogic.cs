using System;
using IFix.Core;
using UnityEngine;

public class MergeGuideLogic : Manager<MergeGuideLogic>
{
	[NonSerialized]
	public int guideGridIndex;

	[NonSerialized]
	public MergeBoard.Grid cdGridItem;

	[NonSerialized]
	public Coroutine _coroutineProduct;

	public static bool _frenzyCard2TipPlaying;

	public static bool _frenzyCard2TipRequested;

	public void CheckMergeGuide(bool isPointerUp = false)
	{
	}

	[IDTag(0)]
	public void CheckMergeFinish()
	{
	}

	public void CheckProductFinish()
	{
	}

	public void TriggerProductFinish(MergeBoard.Grid grid)
	{
	}

	public void CheckOrderFinish()
	{
	}

	public void CheckChoseItemGuide()
	{
	}

	public void CheckGetReward()
	{
	}

	public void CheckOrderNeedItem()
	{
	}

	public void ChoseCdProduct()
	{
	}

	public void ChoseBubbleProduct()
	{
	}

	public void CheckTriggerProduct()
	{
	}

	public void CheckProduct()
	{
	}

	public void CheckUnLockModule()
	{
	}

	public void CheckUnLockStore()
	{
	}

	public bool CheckUnLockDecoTask()
	{
		return false;
	}

	public bool UnLockCheckUI()
	{
		return false;
	}

	public void EnergyTorrentLogic()
	{
	}

	public void EnergyTorrentLogic8()
	{
	}

	public void CheckMergePackageGuide()
	{
	}

	public void CheckBackHomeDecoNodeGuide()
	{
	}

	public void CheckDetectiveLogic()
	{
	}

	public void CheckCatSwimmingLogic()
	{
	}

	public void CheckPizzaTowerLogic()
	{
	}

	public void CheckCardCollectionGuide()
	{
	}

	public void CheckRecoverCoinLogic()
	{
	}

	public void CheckThemeDecoLogic()
	{
	}

	public void CheckNewbieRoomLogic()
	{
	}

	public void CheckStarJourneyEntrance()
	{
	}

	public void CheckStarJourneyTask()
	{
	}

	public void CheckSummerWatermelonLogic()
	{
	}

	public void CheckFrenzyCardTask()
	{
	}

	public void CheckFrenzyCard2Task()
	{
	}

	public static void RequestFrenzyCard2Tip()
	{
	}

	public void CheckEightFoldEnergy()
	{
	}

	public void CheckComboCriticalHit()
	{
	}

	[IDTag(1)]
	public void CheckMergeFinish(MergeBoard mergeBoard)
	{
	}

	public bool TryProcessExistingMergeGuide(MergeBoard mergeBoard)
	{
		return false;
	}

	public void SetupMergeTips(MergeBoard mergeBoard, MergeBoard.Grid startGrid, MergeBoard.Grid endGrid)
	{
	}

	public void EnsureMergeTipList(MergeBoard mergeBoard)
	{
	}

	public bool ValidateMergeGuideTarget()
	{
		return false;
	}

	public bool TryGetCorrectTips(MergeBoard mergeBoard, out MergeBoard.Grid grid_1, out MergeBoard.Grid grid_2)
	{
		grid_1 = null;
		grid_2 = null;
		return false;
	}

	public bool TryFindTaskRequiredTips(MergeBoard mergeBoard, out MergeBoard.Grid grid_1, out MergeBoard.Grid grid_2)
	{
		grid_1 = null;
		grid_2 = null;
		return false;
	}

	public void UpdateMergeTips(MergeBoard mergeBoard, MergeBoard.Grid grid_1, MergeBoard.Grid grid_2)
	{
	}

	public void SwapGridsIfNeeded(MergeBoard mergeBoard, ref MergeBoard.Grid grid_1, ref MergeBoard.Grid grid_2)
	{
	}

	public void UpdateConfigIndices(MergeBoard.Grid grid_1, MergeBoard.Grid grid_2)
	{
	}
}
