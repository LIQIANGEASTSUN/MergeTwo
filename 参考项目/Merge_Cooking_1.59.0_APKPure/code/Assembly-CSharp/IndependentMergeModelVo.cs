using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IndependentMergeModelVo : BaseVO
{
	public int ThemeID = 1;

	public bool OpenState;

	public int startDayID;

	public int endDayID;

	public long OpenTime;

	public int TokenDropType;

	public Dictionary<string, string> OpenABGroup = new Dictionary<string, string>();

	public long CloseTime;

	public int LastResetDayID;

	public int TodayDropTotal;

	public int UnlockMaxLevel;

	public int TotalDropNum;

	public int TotalDropLevel1Num;

	public List<int> UnlockGoodsList = new List<int>();

	public List<int> ShowedInfoList = new List<int>();

	public Dictionary<int, Dictionary<int, int>> IllustratedUnlockState = new Dictionary<int, Dictionary<int, int>>();

	public Dictionary<int, IndependentGameGoodsVo> IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();

	public List<int> IndependentTemporary = new List<int>();

	public List<int> IndependentTopTemporary = new List<int>();

	public List<int> IndependentDropList = new List<int>();

	public List<int> IndependentTokenList = new List<int>();

	public Dictionary<int, List<int>> GoodsProduceDic = new Dictionary<int, List<int>>();

	public int IndependentDropIndex = -1;

	public bool GiftOpenState;

	public long GiftOpenTime;

	public long GiftCloseTime;

	public long LastPopGiftTime;

	public int OpenIap2Tag;

	public int OpenIap3Tag;

	public int GiftShopType = -1;

	public int GiftDynamicIndex = 1;

	public int PassLevel = 1;

	public int LastAnimPassLevel = 1;

	public int PassExp;

	public bool supportCardReward;

	public Dictionary<int, int> BranchMaxLevel = new Dictionary<int, int>();

	public int MainOrderTotalDrop;

	public int RaceWinnerTotalDrop;

	public int LimitTimeOrderTotalDrop;

	public int MainOrderExp;

	public int RaceWinnerOrderExp;

	public int LimitTimeOrderExp;

	public bool IsPopedBigRewardState;

	public List<IIndependentRewardListVO> RewardListVos = new List<IIndependentRewardListVO>();

	public int MergeViewOpenTiems;

	public int DeleteItemTimes;

	public int FullItemTimes;

	public void ResetData()
	{
		TodayDropTotal = 0;
		LastResetDayID = 0;
		UnlockMaxLevel = 0;
		TotalDropNum = 0;
		TotalDropLevel1Num = 0;
		UnlockGoodsList = new List<int>();
		ShowedInfoList = new List<int>();
		IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		IndependentTemporary = new List<int>();
		IndependentTopTemporary = new List<int>();
		IndependentDropList = new List<int>();
		IndependentTokenList = new List<int>();
		GoodsProduceDic = new Dictionary<int, List<int>>();
		BranchMaxLevel = new Dictionary<int, int>();
		RewardListVos = new List<IIndependentRewardListVO>();
		IllustratedUnlockState = new Dictionary<int, Dictionary<int, int>>();
		IndependentDropIndex = -1;
		GiftOpenState = false;
		GiftOpenTime = 0L;
		GiftCloseTime = 0L;
		LastPopGiftTime = 0L;
		OpenIap2Tag = 0;
		OpenIap3Tag = 0;
		TokenDropType = 0;
		GiftShopType = 0;
		GiftDynamicIndex = 0;
		PassLevel = 1;
		LastAnimPassLevel = 1;
		PassExp = 0;
		long itemNum = ObjectManager.GetInstance().itemDataModel.GetItemNum(1050);
		ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1050, -itemNum, needNotice: true, 54);
		supportCardReward = false;
		MainOrderTotalDrop = 0;
		RaceWinnerTotalDrop = 0;
		LimitTimeOrderTotalDrop = 0;
		MainOrderExp = 0;
		RaceWinnerOrderExp = 0;
		LimitTimeOrderExp = 0;
		MergeViewOpenTiems = 0;
		DeleteItemTimes = 0;
		FullItemTimes = 0;
		IsPopedBigRewardState = false;
	}
}
