using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class GameGoodsVo : BaseVO
{
	public string UUID = "";

	public int goodsID;

	public GameGoodsState GoodsState = GameGoodsState.Normal;

	public int InitiativeSurplusNumber;

	public int InitiativeAdditionalNumber;

	public int InitiativeUseTotal;

	public long InitiativeCDStarTime;

	public int PassiveSurplusNumber;

	public int PassiveUseTotal;

	public long PassiveCDStarTime;

	public int MakingGoodsID;

	public List<MakingMaterialVo> MakeMaterials = new List<MakingMaterialVo>();

	public long MakingStarTime;

	public List<int> CollectList = new List<int>();

	public List<int> InitiativeProduceList = new List<int>();

	public List<int> InitiativeSequenceList = new List<int>();

	public int InitiativeSequenceID;

	public List<int> PassiveProduceList = new List<int>();

	public List<int> PassiveSequenceList = new List<int>();

	public int PassiveSequenceID;

	public int SpeedupTotalTime;

	public int AdTotalTimes;

	public int DiamondTotalNum;

	public int CardTotalNum;

	public string DoneType = "刞炟\ud9dcő";

	public int CookingType = 1;

	public int InitiativeCDIndex;

	public int PassiveCDIndex;

	public List<int> DropoutList = new List<int>();

	public List<BaseData3VO> ChoiceRewards = new List<BaseData3VO>();

	public Dictionary<int, List<int>> SpecialCookingDic = new Dictionary<int, List<int>>();

	public List<int> MergeDropList = new List<int>();

	public int BubbleDiscount = 100;

	public int GoodsUses = 1;

	public int BuffValue;

	public long BuffStarTime;

	public long BuffEndTime;

	public int BuffTotalTime;

	public int ResetBuyCDTime;

	public int BuyCdTotal;

	public float residualValue;

	public int BubbleGoodsOpt;

	public int MakingTime;

	public int StackID;

	public bool UpdateUncooledState;

	public List<int> GetMakeMaterialIDs()
	{
		List<int> list = new List<int>();
		for (int i = 0; i < MakeMaterials.Count; i++)
		{
			if (MakeMaterials[i] != null)
			{
				list.Add(MakeMaterials[i].goodsID);
			}
		}
		return list;
	}

	public void SetUUID()
	{
		if (UUID.IsNullOrEmpty())
		{
			UUID = GameLevelDefine.GetGoodsUUID(goodsID, GetHashCode());
			GameLevelDefine.ChangeUUIDCache(this, 1);
		}
		else
		{
			Log.E("끒ӻ푧䐅椛啒*厨坠㯕\u08d5⼄᧵咠댩ښᳵ䜟\ud9a8Ȏ" + UUID);
		}
	}

	public void MandatorySetUUID(string uuid)
	{
		UUID = uuid;
	}

	public void SetBubbleGoodsOpt(int state)
	{
		BubbleGoodsOpt = state;
	}

	public bool IsBubbleGoodsOpt()
	{
		return BubbleGoodsOpt == 1;
	}

	public void SetUncooledState(bool state)
	{
		UpdateUncooledState = state;
	}

	public int UncooledDuration()
	{
		if (IGoodsBaseVo.IsDisabled(GoodsState))
		{
			return 0;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return 0;
		}
		int buffRemainTime = ObjectManager.GetInstance().goodsBuffModel.GetBuffRemainTime(GoodsBuffType.Generator_No_CD, goodsBaseVoById.series);
		if (buffRemainTime <= 0)
		{
			UpdateUncooledState = false;
		}
		else if (!UpdateUncooledState && goodsBaseVoById != null && goodsBaseVoById.type == 2)
		{
			UpdateUncooledState = true;
		}
		if (UpdateUncooledState)
		{
			return buffRemainTime;
		}
		return 0;
	}

	public void FillUpProduceNum()
	{
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsID);
		if (initiativeProduceById != null)
		{
			InitiativeSurplusNumber = initiativeProduceById.capacity;
			GoodsState = GameGoodsState.InitiativeProduce;
		}
	}

	public void AddGoodsUses(int num)
	{
		GoodsUses += num;
	}

	public void SetStackID()
	{
		StackID = ObjectManager.GetInstance().gameLevelModel.GetStackID();
	}

	public void ClearBuff()
	{
		BuffValue = 0;
		BuffStarTime = 0L;
		BuffEndTime = 0L;
		BuffTotalTime = 0;
	}

	public bool ResetBuyTotal()
	{
		int todayDateNumber = ServerTimeManager.TodayDateNumber;
		if (todayDateNumber != ResetBuyCDTime && ResetBuyCDTime < todayDateNumber)
		{
			ResetBuyCDTime = todayDateNumber;
			BuyCdTotal = 0;
			return true;
		}
		return false;
	}

	public void AddCdBuyCount()
	{
		BuyCdTotal++;
	}

	public bool IsCanOutput()
	{
		if (UncooledDuration() > 0)
		{
			return true;
		}
		if (InitiativeSurplusNumber > 0 || InitiativeAdditionalNumber > 0)
		{
			return true;
		}
		return false;
	}
}
