using System;
using TLF;
using UnityEngine;

public class LimitedProduceAttribute : GameGoodsAttributeBase
{
	public LimitedProduceAttribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (IsMaxProduceReached())
		{
			DestroyLimitedProducer();
		}
		else
		{
			if (!OnResume())
			{
				return;
			}
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
			if (initiativeProduceById == null)
			{
				Log.E(string.Format("껰\u1733莧灛ꄽ朂떉㛚调ǀ\uf7a2〄Ꟶ呲ò卣슟뀚灝灒綜勵\ua8f0㘽៲", mGamegoodsBase.GameGoods.goodsID));
				return;
			}
			if (IGoodsBaseVo.IsCoolDown(mGamegoodsBase.GameGoods.GoodsState))
			{
				if (mGamegoodsBase.GameGoods.InitiativeCDStarTime <= 0)
				{
					mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
				}
				if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.HideCoolDown && mGamegoodsBase.GameGoods.InitiativeSurplusNumber <= 0)
				{
					mGamegoodsBase.GameGoods.InitiativeSurplusNumber = initiativeProduceById.frequency;
				}
				if (mGamegoodsBase.GameGoods.InitiativeCDStarTime <= 0)
				{
					return;
				}
				int num = GetInitiativeCDRound(initiativeProduceById);
				if (num > 0)
				{
					if (num > 1)
					{
						num = 1;
					}
					mGamegoodsBase.GameGrid.SetCDProgress(num, initiative: true);
					UpdateProduceNum(initiativeProduceById.frequency * num, changeCdTime: false);
				}
				else
				{
					int cDTime = initiativeProduceById.GetCDTime(mGamegoodsBase.GameGoods.InitiativeCDIndex);
					float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.InitiativeCDStarTime, cDTime);
					mGamegoodsBase.GameGrid.SetCDProgress(progress, initiative: true);
				}
				return;
			}
			if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.InitiativeProduce && mGamegoodsBase.GameGoods.InitiativeSurplusNumber == 0)
			{
				mGamegoodsBase.GameGoods.InitiativeSurplusNumber = initiativeProduceById.frequency;
			}
			if (mGamegoodsBase.GameGoods.GoodsState != GameGoodsState.InitiativeProduce)
			{
				if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber == 0)
				{
					mGamegoodsBase.GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
				}
				if (mGamegoodsBase.GameGoods.InitiativeSurplusNumber <= 0)
				{
					mGamegoodsBase.GameGoods.InitiativeSurplusNumber = 0;
					mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
					mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.CoolDown;
					GoodsAnalytic(30, 1);
				}
				else
				{
					mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
				}
			}
		}
	}

	public override void OnExecute(bool normal = true)
	{
		int consumptionReturn = 0;
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null)
		{
			return;
		}
		bool updateUncooledState = mGamegoodsBase.GameGoods.UpdateUncooledState;
		if (mGamegoodsBase.GameGoods.UncooledDuration() <= 0)
		{
			if (updateUncooledState)
			{
				mGamegoodsBase.GameGrid.UpdateItemUncd();
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
		int num = Singleton<GameLevelManager>.Instance.GetInitiativeConversionGoodsID(mGamegoodsBase.GameGoods);
		if (num == -1)
		{
			return;
		}
		int dropRate = GetDropRate(initiativeProduceById);
		if (dropRate > 0)
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
		GameLevelGrid nearbyEmptyGrid = mGamegoodsBase.GameGrid.GetNearbyEmptyGrid(mGamegoodsBase.GameGrid.GetGridId(), showEnoughTip: true, num);
		if ((Object)(object)nearbyEmptyGrid == (Object)null || !Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(initiativeProduceById.GetCostItemList(), dropRate))
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
		nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById, "癰r4끤w\udc31仍", updateOrder: false);
		ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
		ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
		ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
		ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
		MonoSingleton<GuideManager>.Instance.CurrentProduceId = num;
		UpdateProduceNum(ObjectManager.GetInstance().doubleConsumptionModel.GetGeneratorConsume(dropRate));
		mGamegoodsBase.GameGrid.UnlockGoodsMap(num);
		mGamegoodsBase.GameGrid.GetNewGoods(num);
		EventManager.GetInstance().DispatchEvent(100105, num);
		Singleton<GameLevelManager>.Instance.PlayAudio(3, 0, IndependentType.None, GameGoods.goodsID);
		GameLevelItem gameLevelItem = GameGrid.GetGameLevelItem();
		GameButton gameButton = ((gameLevelItem != null) ? ((Component)gameLevelItem).GetComponent<GameButton>() : null);
		if ((Object)(object)gameButton != (Object)null)
		{
			gameButton.SetSkipNextClickSound(skip: true);
		}
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
			EarnActivityScore(dropRate - consumptionReturn);
		}
		MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_Creater(mGamegoodsBase.GameGoods.goodsID);
		MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType_GuideTrans(GuideWeakType.NewFunctionGuide, ((Component)mGamegoodsBase.GameGrid.GetGameLevelItem()).transform);
		if (GameLevelDefine.OrderNeedLowLevelGoods.Contains(num))
		{
			GameLevelDefine.ClearOrderNeedLowLevelGoods();
		}
		if (IsMaxProduceReached())
		{
			DestroyLimitedProducer(playDisappearAnim: true);
		}
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null)
		{
			return;
		}
		if (IsMaxProduceReached())
		{
			DestroyLimitedProducer(playDisappearAnim: true);
		}
		else if (IGoodsBaseVo.IsCoolDown(mGamegoodsBase.GameGoods.GoodsState))
		{
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
			if (initiativeProduceById == null || mGamegoodsBase.GameGoods.InitiativeCDStarTime <= 0)
			{
				return;
			}
			int cDTime = initiativeProduceById.GetCDTime(mGamegoodsBase.GameGoods.InitiativeCDIndex);
			float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.InitiativeCDStarTime, cDTime);
			mGamegoodsBase.GameGrid.SetCDProgress(progress, initiative: true);
			int num = GetInitiativeCDRound(initiativeProduceById);
			if (num > 0)
			{
				if (num > 1)
				{
					num = 1;
				}
				UpdateProduceNum(initiativeProduceById.frequency * num);
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
			Log.E(string.Format("껰\u1733莧灛ꄽ朂떉㛚调ǀ\uf7a2〄Ꟶ呲ò卣슟뀚灝灒綜勵\ua8f0㘽៲", mGamegoodsBase.GameGoods.goodsID));
		}
		else
		{
			if (!IGoodsBaseVo.IsCoolDown(mGamegoodsBase.GameGoods.GoodsState))
			{
				return;
			}
			if (mGamegoodsBase.GameGoods.InitiativeCDStarTime <= 0)
			{
				mGamegoodsBase.GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
			int num = GetInitiativeCDRound(initiativeProduceById, time);
			if (num > 0)
			{
				if (num > 1)
				{
					num = 1;
				}
				if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown)
				{
					mGamegoodsBase.GameGrid.SetGlobalSpeedupState(state: true, num);
				}
				UpdateProduceNum(initiativeProduceById.frequency * num, changeCdTime: false);
			}
			else
			{
				int cDTime = initiativeProduceById.GetCDTime(mGamegoodsBase.GameGoods.InitiativeCDIndex);
				float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.InitiativeCDStarTime, cDTime);
				if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown)
				{
					mGamegoodsBase.GameGrid.SetGlobalSpeedupState(state: true, progress);
				}
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
				GoodsAnalytic(30, 2);
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
			if (mGamegoodsBase.GameGoods.UncooledDuration() <= 0)
			{
				if (mGamegoodsBase.GameGoods.InitiativeAdditionalNumber > 0)
				{
					flag = true;
				}
				if (mGamegoodsBase.GameGoods.InitiativeAdditionalNumber >= GameLevelDefine.Abs(changeNum))
				{
					mGamegoodsBase.GameGoods.InitiativeAdditionalNumber += changeNum;
				}
				else
				{
					int num2 = mGamegoodsBase.GameGoods.InitiativeAdditionalNumber + changeNum;
					mGamegoodsBase.GameGoods.InitiativeAdditionalNumber = 0;
					mGamegoodsBase.GameGoods.InitiativeSurplusNumber += num2;
					flag3 = true;
				}
			}
			Singleton<GameLevelManager>.Instance.SetBaseProduceNum(mGamegoodsBase.GoodsBaseVo.goodsID, -changeNum);
			if (IsMaxProduceReached())
			{
				return;
			}
		}
		if (changeNum < 0 && GameGoods.UncooledDuration() > 0)
		{
			return;
		}
		if (flag)
		{
			flag2 = true;
			if (mGamegoodsBase.GameGoods.InitiativeAdditionalNumber == 0)
			{
				EventManager.GetInstance().DispatchEvent(100129);
			}
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
				if (!mGamegoodsBase.GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
				{
					mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.CoolDown;
				}
				EventManager.GetInstance().DispatchEvent(100129);
				GoodsAnalytic(30, 1);
				GeneratorEnterCD();
				flag2 = true;
			}
		}
		else if (!mGamegoodsBase.GameGrid.ChangeGameGoodsState(GameGoodsState.InitiativeProduce))
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
		if (mGamegoodsBase.GoodsBaseVo.type != 30)
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

	private bool IsMaxProduceReached()
	{
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null)
		{
			return false;
		}
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (initiativeProduceById == null || initiativeProduceById.capacity <= 0)
		{
			return false;
		}
		return mGamegoodsBase.GameGoods.InitiativeUseTotal >= initiativeProduceById.capacity;
	}

	private void DestroyLimitedProducer(bool playDisappearAnim = false)
	{
		//IL_0037: Unknown result type (might be due to invalid IL or missing references)
		if (mGamegoodsBase != null && mGamegoodsBase.GameGoods != null && !((Object)(object)mGamegoodsBase.GameGrid == (Object)null))
		{
			if (playDisappearAnim)
			{
				mGamegoodsBase.GameGrid.ItemDisappearAnim();
			}
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(mGamegoodsBase.GameGoods.goodsID, -1, mGamegoodsBase.GameGoods);
			mGamegoodsBase.GameGrid.EmptyParentSelectGrid();
			mGamegoodsBase.GameGrid.ChangeGameGoodsVo(null, "숃끓撴倄汀7\u0096厕녲塯☦\0逕\ud96d");
		}
	}
}
