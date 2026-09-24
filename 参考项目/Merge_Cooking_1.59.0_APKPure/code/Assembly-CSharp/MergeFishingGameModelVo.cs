using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class MergeFishingGameModelVo : BaseVO
{
	public int LastResetDayID;

	public int TodayDropTotal;

	public int UnlockMaxLevel;

	public int TotalDropNum;

	public int TotalDropLevel1Num;

	public int IndependentDropIndex = -1;

	public List<int> UnlockGoodsList = new List<int>();

	public Dictionary<int, IndependentGameGoodsVo> IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();

	public List<int> IndependentTemporary = new List<int>();

	public List<int> IndependentTopTemporary = new List<int>();

	public List<int> IndependentDropList = new List<int>();

	public List<int> IndependentTokenList = new List<int>();

	public Dictionary<int, List<int>> GoodsProduceDic = new Dictionary<int, List<int>>();

	public void ResetData()
	{
		TodayDropTotal = 0;
		LastResetDayID = 0;
		UnlockMaxLevel = 0;
		TotalDropNum = 0;
		TotalDropLevel1Num = 0;
		IndependentDropIndex = -1;
		UnlockGoodsList = new List<int>();
		IndependentMap = new Dictionary<int, IndependentGameGoodsVo>();
		IndependentTemporary = new List<int>();
		IndependentTopTemporary = new List<int>();
		IndependentDropList = new List<int>();
		IndependentTokenList = new List<int>();
		GoodsProduceDic = new Dictionary<int, List<int>>();
	}
}
