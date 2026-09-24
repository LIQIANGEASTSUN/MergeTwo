using System.Collections.Generic;
using TLF;
using UnityEngine;

public abstract class GameGoodsAttributeBase
{
	protected GameGoodsBase mGamegoodsBase;

	public GameGoodsVo GameGoods => mGamegoodsBase.GameGoods;

	public IGoodsBaseVo GoodsBaseVo => mGamegoodsBase.GoodsBaseVo;

	public GameGoodsType GoodsType => mGamegoodsBase.GoodsType;

	public GameLevelGrid GameGrid => mGamegoodsBase.GameGrid;

	public GameGoodsAttributeBase(GameGoodsBase gameGoodsBase)
	{
		mGamegoodsBase = gameGoodsBase;
	}

	public virtual void OnInitialize()
	{
	}

	public virtual void OnExecute(bool normal = true)
	{
	}

	public virtual void OnUpdate()
	{
	}

	public virtual void OnCoolDownSpeedup(int time)
	{
	}

	public virtual void OnMakingSpeedup(int time)
	{
	}

	public virtual void OnSpecialExecute()
	{
	}

	public virtual bool CanExecute()
	{
		if (!LoadingViewLogic.mLoadFinish)
		{
			return false;
		}
		if (mGamegoodsBase != null && (Object)(object)mGamegoodsBase.GameGrid != (Object)null && mGamegoodsBase.GameGrid.GetGameMapInitState())
		{
			return false;
		}
		return true;
	}

	public bool OnResume()
	{
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null)
		{
			return false;
		}
		if (IGoodsBaseVo.CannotDrag(mGamegoodsBase.GameGoods.GoodsState) || mGamegoodsBase.GameGrid.IsLock)
		{
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
			if (initiativeProduceById != null)
			{
				mGamegoodsBase.GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
			}
			IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(mGamegoodsBase.GameGoods.goodsID);
			if (passiveProduceById != null)
			{
				mGamegoodsBase.GameGoods.PassiveSurplusNumber = passiveProduceById.initialNumber;
			}
			return false;
		}
		if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.AutoProduce)
		{
			return false;
		}
		if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.Bubble)
		{
			if (mGamegoodsBase.GameGoods != null && !mGamegoodsBase.GameGoods.IsBubbleGoodsOpt() && ServerTimeManager.VerifyInGameTime((int)mGamegoodsBase.GameGoods.InitiativeCDStarTime, Singleton<GameLevelManager>.Instance.BubbleLife))
			{
				mGamegoodsBase.GameGrid.EmptyParentSelectGrid();
				if (GameLevelManager.BubbleBreak)
				{
					GameLevelManager.BubbleBreak = false;
					GameLevelDefine.OnEventBubbleGoods("匦橲ā讅鵫", mGamegoodsBase.GameGoods.goodsID, mGamegoodsBase.GameGoods, GetBubbleCount());
				}
				else
				{
					GameLevelDefine.OnEventBubbleGoods("녲䍥㰴\0逕\ud958", mGamegoodsBase.GameGoods.goodsID, mGamegoodsBase.GameGoods, GetBubbleCount());
				}
				int num = Singleton<GameLevelManager>.Instance.BubbleConversionID;
				IGoodsMergeVo goodsMergeVoById = Singleton<GameLevelManager>.Instance.GetGoodsMergeVoById(mGamegoodsBase.GameGoods.goodsID);
				if (goodsMergeVoById != null)
				{
					if (goodsMergeVoById.bubbleConversionID == -1)
					{
						num = 0;
					}
					else if (goodsMergeVoById.bubbleConversionID > 0)
					{
						num = goodsMergeVoById.bubbleConversionID;
					}
				}
				if ((Object)(object)mGamegoodsBase.GameGrid.GetGameLevelItem() != (Object)null)
				{
					mGamegoodsBase.GameGrid.GetGameLevelItem().PlayBubbleHide();
				}
				if (num > 0)
				{
					GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, mGamegoodsBase.GameGrid);
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
					mGamegoodsBase.GameGrid.ChangeGameGoodsVo(gameGoodsBaseById, "녢奵ㄪ\0逕\ud96e");
					if ((Object)(object)mGamegoodsBase.GameGrid.GetGameLevelItem() != (Object)null)
					{
						mGamegoodsBase.GameGrid.GetGameLevelItem().PlayItemShow();
					}
				}
				else
				{
					mGamegoodsBase.GameGrid.ChangeGameGoodsVo(null, "녢奵ㄪ\0逕\ud96e");
				}
				Singleton<GameLevelManager>.Instance.PlayAudio(4);
				EventManager.GetInstance().DispatchEvent(203250);
			}
			else if (mGamegoodsBase.GameGoods != null && mGamegoodsBase.GameGoods.IsBubbleGoodsOpt() && GameManager.GetInstance().StageScene == SceneType.MainLevel && ServerTimeManager.VerifyInGameTimeUseServerTime((int)mGamegoodsBase.GameGoods.InitiativeCDStarTime, Singleton<GameLevelManager>.Instance.BubbleLife))
			{
				mGamegoodsBase.GameGrid.EmptyParentSelectGrid();
				if (GameLevelManager.BubbleBreak)
				{
					GameLevelManager.BubbleBreak = false;
					GameLevelDefine.OnEventBubbleGoods("匦橲ā讅鵫", mGamegoodsBase.GameGoods.goodsID, mGamegoodsBase.GameGoods, GetBubbleCount());
				}
				else
				{
					GameLevelDefine.OnEventBubbleGoods("녲䍥㰴\0逕\ud958", mGamegoodsBase.GameGoods.goodsID, mGamegoodsBase.GameGoods, GetBubbleCount());
				}
				if ((Object)(object)mGamegoodsBase.GameGrid.GetGameLevelItem() != (Object)null)
				{
					mGamegoodsBase.GameGrid.GetGameLevelItem().PlayBubbleHide();
				}
				ObjectManager.GetInstance().gameLevelModel.LastBubbleBuyGoodsID = 0;
				BaseData3VO bubbleConversion = Singleton<GameLevelManager>.Instance.BubbleConversion;
				if (bubbleConversion != null && bubbleConversion.id > 0)
				{
					mGamegoodsBase.GameGrid.CollectFly(bubbleConversion.id, bubbleConversion.num);
					ObjectManager.GetInstance().itemDataModel.ChangeItemNum(bubbleConversion.id, bubbleConversion.num, needNotice: false, 100);
					mGamegoodsBase.GameGrid.ChangeGameGoodsVo(null, "녢奵ㄪ\0逕\ud96e");
				}
				else
				{
					GameGrid.ChangeGameGoodsVo(null, "녢奵ㄪ\0逕\ud96e");
				}
				Singleton<GameLevelManager>.Instance.PlayAudio(4);
			}
			return false;
		}
		return true;
	}

	public void OnBubbleUpdate()
	{
		if (mGamegoodsBase.GameGoods != null && !mGamegoodsBase.GameGoods.IsBubbleGoodsOpt() && ServerTimeManager.VerifyInGameTime((int)mGamegoodsBase.GameGoods.InitiativeCDStarTime, Singleton<GameLevelManager>.Instance.BubbleLife))
		{
			mGamegoodsBase.GameGrid.EmptyParentSelectGrid();
			if (GameLevelManager.BubbleBreak)
			{
				GameLevelManager.BubbleBreak = false;
				GameLevelDefine.OnEventBubbleGoods("匦橲ā讅鵫", mGamegoodsBase.GameGoods.goodsID, mGamegoodsBase.GameGoods, GetBubbleCount());
			}
			else
			{
				GameLevelDefine.OnEventBubbleGoods("녲䍥㰴\0逕\ud958", mGamegoodsBase.GameGoods.goodsID, mGamegoodsBase.GameGoods, GetBubbleCount());
			}
			int num = Singleton<GameLevelManager>.Instance.BubbleConversionID;
			IGoodsMergeVo goodsMergeVoById = Singleton<GameLevelManager>.Instance.GetGoodsMergeVoById(mGamegoodsBase.GameGoods.goodsID);
			if (goodsMergeVoById != null)
			{
				if (goodsMergeVoById.bubbleConversionID == -1)
				{
					num = 0;
				}
				else if (goodsMergeVoById.bubbleConversionID > 0)
				{
					num = goodsMergeVoById.bubbleConversionID;
				}
			}
			if ((Object)(object)mGamegoodsBase.GameGrid.GetGameLevelItem() != (Object)null)
			{
				mGamegoodsBase.GameGrid.GetGameLevelItem().PlayBubbleHide();
			}
			if (num > 0)
			{
				GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, mGamegoodsBase.GameGrid);
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
				mGamegoodsBase.GameGrid.ChangeGameGoodsVo(gameGoodsBaseById, "녢奵ㄪ\0逕\ud96e");
				if ((Object)(object)mGamegoodsBase.GameGrid.GetGameLevelItem() != (Object)null)
				{
					mGamegoodsBase.GameGrid.GetGameLevelItem().PlayItemShow();
				}
			}
			else
			{
				mGamegoodsBase.GameGrid.ChangeGameGoodsVo(null, "녢奵ㄪ\0逕\ud96e");
			}
			MonoSingleton<GuideManager>.Instance.CloseBubbleGuide();
			Singleton<GameLevelManager>.Instance.PlayAudio(4);
			if (GameLevelDefine.MustbeBubbleList.Contains(goodsMergeVoById.goodsID))
			{
				GameLevelDefine.MustbeBubbleList.Remove(goodsMergeVoById.goodsID);
			}
			else
			{
				Singleton<GameLevelManager>.Instance.CurrentBubbleNum--;
			}
			EventManager.GetInstance().DispatchEvent(203250);
		}
		else if (mGamegoodsBase.GameGoods != null && mGamegoodsBase.GameGoods.IsBubbleGoodsOpt() && GameManager.GetInstance().StageScene == SceneType.MainLevel && ServerTimeManager.VerifyInGameTimeUseServerTime((int)mGamegoodsBase.GameGoods.InitiativeCDStarTime, Singleton<GameLevelManager>.Instance.BubbleLife))
		{
			mGamegoodsBase.GameGrid.EmptyParentSelectGrid();
			if (GameLevelManager.BubbleBreak)
			{
				GameLevelManager.BubbleBreak = false;
				GameLevelDefine.OnEventBubbleGoods("匦橲ā讅鵫", mGamegoodsBase.GameGoods.goodsID, mGamegoodsBase.GameGoods, GetBubbleCount());
			}
			else
			{
				GameLevelDefine.OnEventBubbleGoods("녲䍥㰴\0逕\ud958", mGamegoodsBase.GameGoods.goodsID, mGamegoodsBase.GameGoods, GetBubbleCount());
			}
			if ((Object)(object)mGamegoodsBase.GameGrid.GetGameLevelItem() != (Object)null)
			{
				mGamegoodsBase.GameGrid.GetGameLevelItem().PlayBubbleHide();
			}
			ObjectManager.GetInstance().gameLevelModel.LastBubbleBuyGoodsID = 0;
			IGoodsMergeVo goodsMergeVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsMergeVoById(mGamegoodsBase.GameGoods.goodsID);
			BaseData3VO bubbleConversion = Singleton<GameLevelManager>.Instance.BubbleConversion;
			if (bubbleConversion != null && bubbleConversion.id > 0)
			{
				mGamegoodsBase.GameGrid.CollectFly(bubbleConversion.id, bubbleConversion.num);
				ObjectManager.GetInstance().itemDataModel.ChangeItemNum(bubbleConversion.id, bubbleConversion.num, needNotice: false, 100);
				mGamegoodsBase.GameGrid.ChangeGameGoodsVo(null, "녢奵ㄪ\0逕\ud96e");
			}
			else
			{
				GameGrid.ChangeGameGoodsVo(null, "녢奵ㄪ\0逕\ud96e");
			}
			MonoSingleton<GuideManager>.Instance.CloseBubbleGuide();
			Singleton<GameLevelManager>.Instance.PlayAudio(4);
			if (GameLevelDefine.MustbeBubbleList.Contains(goodsMergeVoById2.goodsID))
			{
				GameLevelDefine.MustbeBubbleList.Remove(goodsMergeVoById2.goodsID);
			}
			else
			{
				Singleton<GameLevelManager>.Instance.CurrentBubbleNum--;
			}
		}
		else
		{
			mGamegoodsBase.GameGrid.UpdateBubbleGoodsTime();
		}
	}

	public int GetInitiativeCDRound(IGoodsProduceVo produceVo, int time = 0)
	{
		if (produceVo == null)
		{
			return 0;
		}
		int num = (int)(ServerTimeManager.CurrentTime() - mGamegoodsBase.GameGoods.InitiativeCDStarTime);
		if (num < 0)
		{
			mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			num = 0;
		}
		num += time;
		int num2 = 0;
		int i = mGamegoodsBase.GameGoods.InitiativeCDIndex;
		if (num >= produceVo.GetTotalCDTime())
		{
			num2 = Mathf.FloorToInt((float)num / (float)produceVo.GetTotalCDTime());
			num -= num2 * produceVo.GetTotalCDTime();
			num2 *= produceVo.GetCDList().Count;
			for (; i < produceVo.GetCDList().Count; i++)
			{
				num -= produceVo.GetCDTime(i);
				if (num < 0)
				{
					break;
				}
				num2++;
			}
			mGamegoodsBase.GameGoods.InitiativeCDIndex = 0;
			i = mGamegoodsBase.GameGoods.InitiativeCDIndex;
			mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime() - (produceVo.GetCDTime(i) + num);
		}
		else
		{
			for (; i < produceVo.GetCDList().Count; i++)
			{
				num -= produceVo.GetCDTime(i);
				if (num < 0)
				{
					break;
				}
				num2++;
			}
			if (i >= produceVo.GetCDList().Count)
			{
				mGamegoodsBase.GameGoods.InitiativeCDIndex = 0;
			}
			else
			{
				mGamegoodsBase.GameGoods.InitiativeCDIndex = i;
			}
			i = mGamegoodsBase.GameGoods.InitiativeCDIndex;
			mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime() - (produceVo.GetCDTime(i) + num);
		}
		return num2;
	}

	public int GetPassiveCDRound(IGoodsProduceVo produceVo, int time = 0)
	{
		if (produceVo == null)
		{
			return 0;
		}
		long num = ServerTimeManager.CurrentTime();
		if (GameGoods.BuffStarTime > num)
		{
			GameGoods.BuffStarTime = num;
		}
		if (GameGoods.BuffTotalTime < 0)
		{
			GameGoods.BuffTotalTime = 0;
		}
		int num2 = (int)(num - GameGoods.PassiveCDStarTime);
		int num3 = 0;
		if (GameGoods.BuffValue > 0 && GameGoods.BuffStarTime > 0)
		{
			if (GameGoods.BuffEndTime > 0)
			{
				num2 = (int)(num - GameGoods.PassiveCDStarTime + GameGoods.BuffTotalTime);
				num3 = GameGoods.BuffTotalTime;
			}
			else
			{
				num2 = (int)(num - GameGoods.PassiveCDStarTime + (num - GameGoods.BuffStarTime) * (GameGoods.BuffValue - 1)) + GameGoods.BuffTotalTime;
				num3 = (int)((num - GameGoods.BuffStarTime) * (GameGoods.BuffValue - 1) + GameGoods.BuffTotalTime);
			}
		}
		else
		{
			num2 = (int)(num - GameGoods.PassiveCDStarTime + GameGoods.BuffTotalTime);
			num3 = GameGoods.BuffTotalTime;
		}
		if (num2 < 0)
		{
			GameGoods.PassiveCDStarTime = num;
			num2 = 0;
		}
		num2 += time;
		int num4 = 0;
		int i = GameGoods.PassiveCDIndex;
		if (num2 >= produceVo.GetTotalCDTime())
		{
			num4 = Mathf.FloorToInt((float)num2 / (float)produceVo.GetTotalCDTime());
			num2 -= num4 * produceVo.GetTotalCDTime();
			num4 *= produceVo.GetCDList().Count;
			for (; i < produceVo.GetCDList().Count; i++)
			{
				num2 -= produceVo.GetCDTime(i);
				if (num2 < 0)
				{
					break;
				}
				num4++;
			}
			GameGoods.PassiveCDIndex = 0;
			i = GameGoods.PassiveCDIndex;
			int num5 = produceVo.GetCDTime(i) + num2;
			GameGoods.PassiveCDStarTime = num - num5;
		}
		else
		{
			for (; i < produceVo.GetCDList().Count; i++)
			{
				num2 -= produceVo.GetCDTime(i);
				if (num2 < 0)
				{
					break;
				}
				num4++;
			}
			if (i >= produceVo.GetCDList().Count)
			{
				GameGoods.PassiveCDIndex = 0;
			}
			else
			{
				GameGoods.PassiveCDIndex = i;
			}
			i = GameGoods.PassiveCDIndex;
			GameGoods.PassiveCDStarTime = num - (produceVo.GetCDTime(i) + num2 - num3);
		}
		return num4;
	}

	public virtual void EarnActivityScore(int dropRate = 1, GameLevelGrid emptyGrid = null)
	{
		Transform val = null;
		if (mGamegoodsBase != null && (Object)(object)mGamegoodsBase.GameGrid != (Object)null)
		{
			val = mGamegoodsBase.GameGrid.GameItemParent;
		}
		int produceDropScore = ObjectManager.GetInstance().treasureHuntingModel.GetProduceDropScore();
		if (produceDropScore > 0)
		{
			produceDropScore *= dropRate;
			ObjectManager.GetInstance().treasureHuntingModel.AddTreasureHuntingScore(produceDropScore, val);
		}
		for (int i = 0; i < dropRate; i++)
		{
			int produceDropGoodsID = ObjectManager.GetInstance().independentMergeModel.GetProduceDropGoodsID();
			if (produceDropGoodsID > 0)
			{
				ObjectManager.GetInstance().independentMergeModel.AddIndependentGoods(produceDropGoodsID, 1, "숞끕斪爟捱<\u009a厙椵䂁", val);
			}
			int produceDropGoodsID2 = ObjectManager.GetInstance().mergeFishingGameModel.GetProduceDropGoodsID();
			if (produceDropGoodsID2 > 0)
			{
				ObjectManager.GetInstance().mergeFishingGameModel.AddGoodsToTemporary(produceDropGoodsID2, 1, "숞끕斪爟捱<\u009a厙椵䂁", val);
			}
			int produceDropGoodsID3 = ObjectManager.GetInstance().mergeFishingV2GameModel.GetProduceDropGoodsID();
			if (produceDropGoodsID3 > 0)
			{
				ObjectManager.GetInstance().mergeFishingV2GameModel.AddGoodsToTemporary(produceDropGoodsID3, 1, "숞끕斪爟捱<\u009a厙椵䂁", val);
			}
			if (ObjectManager.GetInstance().treasureCraftingModel.GetEnergyDropGoodsID() > 0)
			{
				ObjectManager.GetInstance().treasureCraftingModel.AddTreasureCraftingTokens(1, val);
			}
			int produceDropGoodsID4 = ObjectManager.GetInstance().independentStageMergeModel.GetProduceDropGoodsID();
			if (produceDropGoodsID4 > 0)
			{
				ObjectManager.GetInstance().independentStageMergeModel.AddIndependentGoods(produceDropGoodsID4, 1, "귙¿赴", val);
			}
			int produceDropGoodsID5 = ObjectManager.GetInstance().independentBasicModel.GetProduceDropGoodsID();
			if (produceDropGoodsID5 > 0)
			{
				ObjectManager.GetInstance().independentBasicModel.AddIndependentGoods(produceDropGoodsID5, 1, "숞끕斪爟捱<\u009a厙椵䂁", val);
			}
			int produceDropGoodsID6 = ObjectManager.GetInstance().idnStageBasicModel.GetProduceDropGoodsID();
			if (produceDropGoodsID6 > 0)
			{
				ObjectManager.GetInstance().idnStageBasicModel.AddIndependentGoods(produceDropGoodsID6, 1, "숞끕斪爟捱<\u009a厙椵䂁", val);
			}
			if (ObjectManager.GetInstance().independentFarmModel.GetEnergyDropGoodsID() > 0)
			{
				ObjectManager.GetInstance().independentFarmModel.AddFarmTokens(1, val);
			}
			int produceDropGoodsID7 = ObjectManager.GetInstance().idnStageModel.GetProduceDropGoodsID();
			if (produceDropGoodsID7 > 0)
			{
				ObjectManager.GetInstance().idnStageModel.AddIndependentGoods(produceDropGoodsID7, 1, "숞끕斪爟捱<\u009a厙椵䂁", val);
			}
		}
		if ((Object)(object)emptyGrid != (Object)null)
		{
			val = emptyGrid.GameItemParent;
		}
		ObjectManager.GetInstance().airPlaneModel.AddTokenByEnergy(dropRate, val);
		ObjectManager.GetInstance().airPlaneModel.CheckOpenActivity();
	}

	public virtual int GetProduceIDByRate(int produceID, int rate, out int returnEnergy)
	{
		returnEnergy = 0;
		if (Singleton<GameLevelManager>.Instance.IsMaxLevelGoods(produceID))
		{
			return produceID;
		}
		if (GameLevelDefine.OrderNeedLowLevelGoods.Contains(produceID))
		{
			return produceID;
		}
		if (produceID == 100035)
		{
			return produceID;
		}
		int powerOfTwo = GameLevelDefine.GetPowerOfTwo(rate);
		IGoodsBaseVo goodsBaseVo = null;
		for (int i = 1; i <= powerOfTwo; i++)
		{
			goodsBaseVo = GameLevelDefine.GetNextGoods(produceID, i);
			if (goodsBaseVo == null)
			{
				IGoodsBaseVo nextGoods = GameLevelDefine.GetNextGoods(produceID, i - 1);
				if (nextGoods != null)
				{
					returnEnergy = rate - GameLevelDefine.TwoPower(i - 1);
					return nextGoods.goodsID;
				}
				continue;
			}
			if (GameLevelDefine.OrderNeedLowLevelGoods.Contains(goodsBaseVo.goodsID))
			{
				returnEnergy = rate - GameLevelDefine.TwoPower(i);
				return goodsBaseVo.goodsID;
			}
			if (goodsBaseVo.series == 1002 && goodsBaseVo.level == 2)
			{
				returnEnergy = rate - GameLevelDefine.TwoPower(i);
				return goodsBaseVo.goodsID;
			}
		}
		return goodsBaseVo?.goodsID ?? produceID;
	}

	public void GoodsAnalytic(int goodsType, int action)
	{
		if (mGamegoodsBase != null && mGamegoodsBase.GameGoods != null && !((Object)(object)mGamegoodsBase.GameGrid == (Object)null))
		{
			if (action == 1)
			{
				mGamegoodsBase.GameGoods.SpeedupTotalTime = 0;
				mGamegoodsBase.GameGoods.AdTotalTimes = 0;
				mGamegoodsBase.GameGoods.DiamondTotalNum = 0;
				mGamegoodsBase.GameGoods.CardTotalNum = 0;
				mGamegoodsBase.GameGoods.DoneType = "刞炟\ud9dcő";
			}
			switch (goodsType)
			{
			case 1:
				GameLevelDefine.InstrumentAnalytics(action, mGamegoodsBase.GameGoods);
				break;
			case 30:
				GameLevelDefine.LimitedProduceAnalytics(action, mGamegoodsBase.GameGoods);
				break;
			default:
				GameLevelDefine.ProduceAnalytics(action, mGamegoodsBase.GameGoods);
				break;
			}
			if (action == 2)
			{
				mGamegoodsBase.GameGoods.SpeedupTotalTime = 0;
				mGamegoodsBase.GameGoods.AdTotalTimes = 0;
				mGamegoodsBase.GameGoods.DiamondTotalNum = 0;
				mGamegoodsBase.GameGoods.CardTotalNum = 0;
				mGamegoodsBase.GameGoods.DoneType = "刞炟\ud9dcő";
			}
			mGamegoodsBase.GameGrid.SaveGridData();
		}
	}

	public void GeneratorEnterCD()
	{
		if (mGamegoodsBase != null && mGamegoodsBase.GoodsBaseVo != null)
		{
			ObjectManager.GetInstance().userDataModel.SetStuckspotNumByType(UserStuckspotType.GeneratorCd, 1);
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숅끥玾弆杛6Ò发漻䉼", mGamegoodsBase.GoodsBaseVo.goodsID);
			dictionary.Add("숅끥玾弆杛6Ò发녳剥㨊\0連\ud975", mGamegoodsBase.GoodsBaseVo.series);
			dictionary.Add("숏끥犾愐杚7Î反숵끕皫收瑘7Þ叝뻰", mGamegoodsBase.GoodsBaseVo.level);
			int stuckspotNumByType = ObjectManager.GetInstance().userDataModel.GetStuckspotNumByType(UserStuckspotType.GeneratorCd);
			int stuckspotNumByType2 = ObjectManager.GetInstance().userDataModel.GetStuckspotNumByType(UserStuckspotType.None);
			dictionary.Add("숋끥枺漌杀7¢厡숞끃斆猟牝?\u009a厙", stuckspotNumByType);
			dictionary.Add("숆끥璸椇杘\rÖ叕듘\u00af赴", stuckspotNumByType2);
			AnalyticInit.OnEvent("숏끥犾愐杚7Î反녴塯ఊ\0途\ud96c", dictionary);
		}
	}

	private int GetBubbleCount()
	{
		return (int)ObjectManager.GetInstance().itemDataModel.GetItemNum(1009);
	}
}
