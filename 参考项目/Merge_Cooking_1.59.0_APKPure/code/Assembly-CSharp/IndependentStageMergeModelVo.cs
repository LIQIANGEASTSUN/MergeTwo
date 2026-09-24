using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IndependentStageMergeModelVo : BaseVO
{
	public int ThemeID = 1;

	public bool OpenState;

	public int startDayID;

	public int endDayID;

	public long OpenTime;

	public int TokenDropType;

	public long CloseTime;

	public int LastResetDayID;

	public int TodayDropTotal;

	public int UnlockMaxLevel;

	public int UnlockBranchMaxLevel;

	public int TotalDropNum;

	public int GeneratorDropNum;

	public int TotalDropLevel1Num;

	public List<int> UnlockGoodsList = new List<int>();

	public List<int> ShowedInfoList = new List<int>();

	public Dictionary<int, IndependentGameGoodsVo> IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();

	public List<IndependentGameGoodsVo> IndependentTemporary = new List<IndependentGameGoodsVo>();

	public List<IndependentTemporaryInfo> IndependentTemporaryInfo = new List<IndependentTemporaryInfo>();

	public List<IndependentGameGoodsVo> IndependentTopTemporary = new List<IndependentGameGoodsVo>();

	public List<int> IndependentDropList = new List<int>();

	public List<int> IndependentTokenList = new List<int>();

	public Dictionary<int, List<int>> GoodsProduceDic = new Dictionary<int, List<int>>();

	public int IndependentDropIndex = -1;

	public bool GiftOpenState;

	public long GiftOpenTime;

	public long GiftCloseTime;

	public long LastPopGiftTime;

	public int OpenIapTag;

	public string OpenGroupValue = "";

	public Dictionary<string, string> OpenCardGroup = new Dictionary<string, string>();

	public int GiftShopType = -1;

	public int GiftDynamicIndex = 1;

	public bool supportCardReward;

	public bool isPlayKeyAnimtion;

	public Dictionary<int, int> BranchMaxLevel = new Dictionary<int, int>();

	public int stage = 1;

	public Dictionary<int, Dictionary<int, int>> IllustratedUnlockState = new Dictionary<int, Dictionary<int, int>>();

	public int MainOrderTotalDrop;

	public int RaceWinnerTotalDrop;

	public int LimitTimeOrderTotalDrop;

	public int MainOrderExp;

	public int RaceWinnerOrderExp;

	public int LimitTimeOrderExp;

	public bool IsPopedBigRewardState;

	public int participateTime;

	public int CompleteAllOrder;

	public int allEngry;

	public bool isResComplete = true;

	public void ResetData()
	{
		TodayDropTotal = 0;
		LastResetDayID = 0;
		UnlockMaxLevel = 0;
		UnlockBranchMaxLevel = 0;
		TotalDropNum = 0;
		GeneratorDropNum = 0;
		TotalDropLevel1Num = 0;
		UnlockGoodsList = new List<int>();
		ShowedInfoList = new List<int>();
		IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		IndependentTemporary = new List<IndependentGameGoodsVo>();
		IndependentTemporaryInfo = new List<IndependentTemporaryInfo>();
		IndependentTopTemporary = new List<IndependentGameGoodsVo>();
		IndependentDropList = new List<int>();
		IndependentTokenList = new List<int>();
		GoodsProduceDic = new Dictionary<int, List<int>>();
		BranchMaxLevel = new Dictionary<int, int>();
		IllustratedUnlockState = new Dictionary<int, Dictionary<int, int>>();
		OpenCardGroup = new Dictionary<string, string>();
		IndependentDropIndex = -1;
		GiftOpenState = false;
		GiftOpenTime = 0L;
		GiftCloseTime = 0L;
		LastPopGiftTime = 0L;
		OpenIapTag = 0;
		TokenDropType = 0;
		GiftShopType = 0;
		GiftDynamicIndex = 0;
		long itemNum = ObjectManager.GetInstance().itemDataModel.GetItemNum(1050);
		ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1050, -itemNum, needNotice: true, 54);
		supportCardReward = false;
		isPlayKeyAnimtion = false;
		stage = 1;
		MainOrderTotalDrop = 0;
		RaceWinnerTotalDrop = 0;
		LimitTimeOrderTotalDrop = 0;
		MainOrderExp = 0;
		RaceWinnerOrderExp = 0;
		LimitTimeOrderExp = 0;
		IsPopedBigRewardState = false;
		OpenGroupValue = "";
		CompleteAllOrder = 0;
		allEngry = 0;
		isResComplete = true;
	}
}
