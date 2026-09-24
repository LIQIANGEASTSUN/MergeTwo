using System;
using TLF;
using UnityEngine;

public class InitiativeProduceAttributeInn : GameGoodsAttributeBase
{
	public InitiativeProduceAttributeInn(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (!OnResume())
		{
			return;
		}
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (initiativeProduceById == null)
		{
			Log.E(string.Format("꺬\u1733ধ者ꄏ仺➣\u02f4빊≓턘⁋筏bú叹熄挻剺ﺧ凼\uf624뛆", mGamegoodsBase.GameGoods.goodsID));
			return;
		}
		if (IGoodsBaseVo.IsCoolDown(mGamegoodsBase.GameGoods.GoodsState) || mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.AutoProduce)
		{
			if (mGamegoodsBase.GameGoods.InitiativeCDStarTime <= 0)
			{
				mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
			if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.HideCoolDown && mGamegoodsBase.GameGoods.InitiativeSurplusNumber <= 0)
			{
				mGamegoodsBase.GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
			}
			if (mGamegoodsBase.GameGoods.InitiativeCDStarTime > 0)
			{
				int initiativeCDRound = GetInitiativeCDRound(initiativeProduceById);
				if (initiativeCDRound > 0)
				{
					mGamegoodsBase.GameGrid.SetCDProgress(initiativeCDRound, initiative: true);
					UpdateProduceNum(initiativeProduceById.frequency * initiativeCDRound, changeCdTime: false);
				}
				else
				{
					int cDTime = initiativeProduceById.GetCDTime(mGamegoodsBase.GameGoods.InitiativeCDIndex);
					float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.InitiativeCDStarTime, cDTime);
					mGamegoodsBase.GameGrid.SetCDProgress(progress, initiative: true);
				}
			}
			return;
		}
		if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.InitiativeProduce && mGamegoodsBase.GameGoods.InitiativeSurplusNumber == 0)
		{
			mGamegoodsBase.GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
		}
		if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.InitiativeProduce)
		{
			return;
		}
		if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber == 0)
		{
			mGamegoodsBase.GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
		}
		if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber <= 0)
		{
			mGamegoodsBase.GameGoods.InitiativeSurplusNumber = 0;
			mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.AutoProduce)
			{
				mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.CoolDown;
				GoodsAnalytic(2, 1);
			}
		}
		else if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber <= initiativeProduceById.frequency * 2)
		{
			mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.AutoProduce)
			{
				mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.HideCoolDown;
			}
		}
		else if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.AutoProduce)
		{
			mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
		}
	}

	public override void OnExecute(bool normal = true)
	{
		int consumptionReturn = 0;
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null)
		{
			return;
		}
		bool updateUncooledState = GameGoods.UpdateUncooledState;
		if (GameGoods.UncooledDuration() <= 0)
		{
			if (updateUncooledState)
			{
				GameGrid.UpdateItemUncd();
			}
			if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber <= 0 && mGamegoodsBase.GameGoods.InitiativeAdditionalNumber <= 0)
			{
				return;
			}
		}
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (initiativeProduceById == null)
		{
			return;
		}
		bool flag = mGamegoodsBase.GameGrid.CheckEmptyGridEnough(1, showEnoughTip: true, checkPlayerState: true);
		SendVibrateEvent(!flag);
		if (!flag)
		{
			return;
		}
		int dropRate = GetDropRate(initiativeProduceById);
		if (!Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(initiativeProduceById.GetCostItemList(), dropRate))
		{
			return;
		}
		int num = Singleton<GameLevelManager>.Instance.GetInitiativeProduceGoodsID(mGamegoodsBase.GameGoods);
		if (num == -1)
		{
			return;
		}
		if (dropRate > 1)
		{
			int generatorConsume = ObjectManager.GetInstance().doubleConsumptionModel.GetGeneratorConsume(dropRate);
			int returnEnergy = 0;
			int realityProduceID = GetRealityProduceID(num, dropRate, generatorConsume, out returnEnergy);
			if (realityProduceID != num)
			{
				num = realityProduceID;
				consumptionReturn = returnEnergy;
			}
			else
			{
				consumptionReturn = dropRate - 1;
			}
		}
		GameLevelGrid nearbyEmptyGrid = mGamegoodsBase.GameGrid.GetNearbyEmptyGrid(mGamegoodsBase.GameGrid.GetGridId(), showEnoughTip: true, num, checkPlayerState: true);
		if ((Object)(object)nearbyEmptyGrid == (Object)null)
		{
			return;
		}
		if (consumptionReturn > 0)
		{
			TopUIViewLogic.TobeReturnedEnergy += consumptionReturn;
		}
		Singleton<GameLevelManager>.Instance.DeductionOfConsumption(initiativeProduceById.GetCostItemList(), mGamegoodsBase.GameGrid, dropRate - consumptionReturn);
		GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, nearbyEmptyGrid);
		Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
		ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
		ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
		ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
		ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
		ObjectManager.GetInstance().userDataModel.ClickGeneratorCount(1);
		nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById, "癰r4끤w\udc31仍", updateOrder: false);
		MonoSingleton<GuideManager>.Instance.CurrentProduceId = num;
		UpdateProduceNum(ObjectManager.GetInstance().doubleConsumptionModel.GetGeneratorConsume(dropRate));
		mGamegoodsBase.GameGrid.UnlockGoodsMap(num);
		mGamegoodsBase.GameGrid.GetNewGoods(num);
		EventManager.GetInstance().DispatchEvent(100105, num);
		GameLevelItem gameLevelItem = GameGrid.GetGameLevelItem();
		GameButton gameButton = ((gameLevelItem != null) ? ((Component)gameLevelItem).GetComponent<GameButton>() : null);
		if ((Object)(object)gameButton != (Object)null)
		{
			gameButton.SetSkipNextClickSound(skip: true);
		}
		Singleton<GameLevelManager>.Instance.PlayAudio(3, 0, IndependentType.None, GameGoods.goodsID);
		nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(mGamegoodsBase.GameGrid.GameItemParent, 0.4f, isPlayDownEffect: false, dropRate, dropRate - consumptionReturn);
		if (consumptionReturn > 0)
		{
			BaseData3VO rewardData = new BaseData3VO
			{
				type = 1,
				id = 1004,
				num = consumptionReturn
			};
			Action endCall = () =>
			{
				TopUIViewLogic.TobeReturnedEnergy -= consumptionReturn;
				EventManager.GetInstance().DispatchEvent(100014, 1004);
			};
			ViewManager.GetInstance().ShowRewardTip(rewardData, mGamegoodsBase.GameGrid.GameItemParent, showNum: true, RewardFlyIconType.TopLightning, 1f, endCall);
		}
		if (initiativeProduceById.GetCostItemList().Count > 0)
		{
			EarnActivityScore(dropRate - consumptionReturn, nearbyEmptyGrid);
		}
		MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_Creater(mGamegoodsBase.GameGoods.goodsID);
		MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType_GuideTrans(GuideWeakType.NewFunctionGuide, ((Component)mGamegoodsBase.GameGrid.GetGameLevelItem()).transform);
		if (GameLevelDefine.OrderNeedLowLevelGoods.Contains(num))
		{
			GameLevelDefine.ClearOrderNeedLowLevelGoods();
		}
		EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, nearbyEmptyGrid.GameItemParent, num, 0f);
		EventManager.GetInstance().DispatchEvent(203244);
		EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, nearbyEmptyGrid.GameItemParent, num, 0f);
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null)
		{
			return;
		}
		if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown || mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.HideCoolDown || mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.AutoProduce)
		{
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
			if (initiativeProduceById == null || mGamegoodsBase.GameGoods.InitiativeCDStarTime <= 0)
			{
				return;
			}
			int cDTime = initiativeProduceById.GetCDTime(mGamegoodsBase.GameGoods.InitiativeCDIndex);
			float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.InitiativeCDStarTime, cDTime);
			mGamegoodsBase.GameGrid.SetCDProgress(progress, initiative: true);
			int initiativeCDRound = GetInitiativeCDRound(initiativeProduceById);
			if (initiativeCDRound > 0)
			{
				UpdateProduceNum(initiativeProduceById.frequency * initiativeCDRound);
				MonoSingleton<GuideManager>.Instance.CloseGeneratorCDGuide();
				mGamegoodsBase.GameGoods.InitiativeCDIndex++;
				if (mGamegoodsBase.GameGoods.InitiativeCDIndex >= initiativeProduceById.GetCDList().Count)
				{
					mGamegoodsBase.GameGoods.InitiativeCDIndex = 0;
				}
			}
			else
			{
				mGamegoodsBase.GameGoods.DoneType = "刞炟\ud9dcő";
			}
		}
		else if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.Bubble)
		{
			OnBubbleUpdate();
		}
	}

	public override void OnCoolDownSpeedup(int time)
	{
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (initiativeProduceById == null)
		{
			Log.E(string.Format("꺬\u1733ধ者ꄏ仺➣\u02f4빊≓턘⁋筏bú叹熄挻剺ﺧ凼\uf624뛆", mGamegoodsBase.GameGoods.goodsID));
		}
		else
		{
			if (!IGoodsBaseVo.IsCoolDown(mGamegoodsBase.GameGoods.GoodsState) && mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.AutoProduce)
			{
				return;
			}
			if (mGamegoodsBase.GameGoods.InitiativeCDStarTime <= 0)
			{
				mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
			int initiativeCDRound = GetInitiativeCDRound(initiativeProduceById, time);
			if (initiativeCDRound > 0)
			{
				if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown)
				{
					mGamegoodsBase.GameGrid.SetGlobalSpeedupState(state: true, initiativeCDRound);
				}
				UpdateProduceNum(initiativeProduceById.frequency * initiativeCDRound, changeCdTime: false);
				return;
			}
			int cDTime = initiativeProduceById.GetCDTime(mGamegoodsBase.GameGoods.InitiativeCDIndex);
			float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.InitiativeCDStarTime, cDTime);
			if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown)
			{
				mGamegoodsBase.GameGrid.SetGlobalSpeedupState(state: true, progress);
			}
		}
	}

	public void UpdateProduceNum(int changeNum, bool changeCdTime = true)
	{
		bool flag = false;
		bool flag2 = false;
		bool flag3 = false;
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (initiativeProduceById == null)
		{
			return;
		}
		if (changeNum >= 0)
		{
			if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown)
			{
				if (mGamegoodsBase.GameGoods.DoneType == "刞炟\ud9dcő")
				{
					Singleton<GameLevelManager>.Instance.PlayAudio(6);
				}
				GoodsAnalytic(2, 2);
			}
			int num = initiativeProduceById.capacity - mGamegoodsBase.GameGoods.InitiativeSurplusNumber;
			if (num > changeNum)
			{
				mGamegoodsBase.GameGoods.InitiativeSurplusNumber += changeNum;
			}
			else if (num > 0)
			{
				mGamegoodsBase.GameGoods.InitiativeSurplusNumber += num;
			}
			if (changeCdTime)
			{
				mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
		}
		else
		{
			mGamegoodsBase.GameGoods.InitiativeUseTotal += GameLevelDefine.Abs(changeNum);
			if (mGamegoodsBase.GameGoods.InitiativeAdditionalNumber > 0)
			{
				flag = true;
			}
			if (mGamegoodsBase.GameGoods.InitiativeAdditionalNumber >= GameLevelDefine.Abs(changeNum))
			{
				mGamegoodsBase.GameGoods.InitiativeAdditionalNumber += changeNum;
			}
			else if (GameGoods.UncooledDuration() <= 0)
			{
				int num2 = mGamegoodsBase.GameGoods.InitiativeAdditionalNumber + changeNum;
				mGamegoodsBase.GameGoods.InitiativeAdditionalNumber = 0;
				mGamegoodsBase.GameGoods.InitiativeSurplusNumber += num2;
				flag3 = true;
			}
			Singleton<GameLevelManager>.Instance.SetBaseProduceNum(mGamegoodsBase.GoodsBaseVo.goodsID, -changeNum);
		}
		if (flag)
		{
			flag2 = true;
			if (mGamegoodsBase.GameGoods.InitiativeAdditionalNumber == 0)
			{
				EventManager.GetInstance().DispatchEvent(100129);
			}
		}
		if (changeNum < 0 && GameGoods.UncooledDuration() > 0)
		{
			if (flag2)
			{
				mGamegoodsBase.GameGrid.UpdateGameLevelItem();
			}
			return;
		}
		if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber <= 0)
		{
			if (flag3)
			{
				mGamegoodsBase.GameGoods.InitiativeSurplusNumber = 0;
				if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.HideCoolDown && changeCdTime)
				{
					mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
				}
				if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.AutoProduce)
				{
					if (!mGamegoodsBase.GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
					{
						mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.CoolDown;
					}
					EventManager.GetInstance().DispatchEvent(100129);
					EventManager.GetInstance().DispatchEvent(203252);
					GoodsAnalytic(2, 1);
					GeneratorEnterCD();
				}
				flag2 = true;
			}
		}
		else if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber >= initiativeProduceById.capacity)
		{
			if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.AutoProduce && !mGamegoodsBase.GameGrid.ChangeGameGoodsState(GameGoodsState.InitiativeProduce))
			{
				mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
			}
		}
		else if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber <= initiativeProduceById.frequency * 2)
		{
			if (initiativeProduceById.GetCDTime(mGamegoodsBase.GameGoods.InitiativeCDIndex) > 0)
			{
				if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.HideCoolDown && changeCdTime)
				{
					mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
				}
				if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.AutoProduce && !mGamegoodsBase.GameGrid.ChangeGameGoodsState(GameGoodsState.HideCoolDown))
				{
					mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.HideCoolDown;
				}
			}
		}
		else if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.AutoProduce && !mGamegoodsBase.GameGrid.ChangeGameGoodsState(GameGoodsState.InitiativeProduce))
		{
			mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
		}
		if (flag2)
		{
			mGamegoodsBase.GameGrid.UpdateGameLevelItem();
		}
		mGamegoodsBase.GameGrid.SaveGridData();
	}

	private int GetDropRate(IGoodsProduceVo produceVo)
	{
		if (produceVo == null)
		{
			return 1;
		}
		if (produceVo.doubleConsume == 0)
		{
			return 1;
		}
		if (mGamegoodsBase.GoodsBaseVo.type != 2 && mGamegoodsBase.GoodsBaseVo.type != 3)
		{
			return 1;
		}
		return (int)ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate();
	}

	private int GetRealityProduceID(int produceID, int rate, int consume, out int returnEnergy)
	{
		returnEnergy = 0;
		consume = GameLevelDefine.Abs(consume);
		if (GameGoods.UncooledDuration() <= 0 && mGamegoodsBase.GameGoods.InitiativeSurplusNumber + mGamegoodsBase.GameGoods.InitiativeAdditionalNumber < consume)
		{
			return produceID;
		}
		return GetProduceIDByRate(produceID, rate, out returnEnergy);
	}

	private void SendVibrateEvent(bool isEmptyGrid)
	{
		if (isEmptyGrid)
		{
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
		}
		else
		{
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
		}
	}
}
