using TLF;
using UnityEngine;

public class PassiveProduceAttribute : GameGoodsAttributeBase
{
	public PassiveProduceAttribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (!OnResume())
		{
			return;
		}
		IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (passiveProduceById == null)
		{
			Log.E(string.Format("꺬\u1733ধ者ꆟ裺➣\u02f4빊≓턘⁋筏bú叹─⓸劲凁ɮ", mGamegoodsBase.GameGoods.goodsID));
		}
		else if (IGoodsBaseVo.IsCoolDown(GameGoods.GoodsState) || GameGoods.GoodsState == GameGoodsState.AutoProduce)
		{
			if (GameGoods.PassiveCDStarTime < 0)
			{
				GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
				SetGoodsBuff(passiveProduceById);
			}
			if (GameGoods.GoodsState == GameGoodsState.HideCoolDown && GameGoods.PassiveSurplusNumber <= 0)
			{
				GameGoods.PassiveSurplusNumber = passiveProduceById.initialNumber;
			}
			if (GameGoods.PassiveCDStarTime > 0)
			{
				int passiveCDRound = GetPassiveCDRound(passiveProduceById);
				if (passiveCDRound > 0)
				{
					GameGrid.SetCDProgress(passiveCDRound, initiative: false);
					UpdateProduceNum(passiveProduceById.frequency * passiveCDRound);
				}
				else
				{
					int cDTime = passiveProduceById.GetCDTime(GameGoods.PassiveCDIndex);
					float progress = (float)(ServerTimeManager.CurrentTime() - GameGoods.PassiveCDStarTime) / (float)cDTime;
					GameGrid.SetCDProgress(progress, initiative: false);
				}
				return;
			}
			if (GameGoods.PassiveSurplusNumber <= 0)
			{
				GameGoods.PassiveSurplusNumber = 0;
				if (GameGoods.PassiveCDStarTime <= 0)
				{
					GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
				}
				GameGoods.GoodsState = GameGoodsState.CoolDown;
				SetGoodsBuff(passiveProduceById);
				return;
			}
			if (GameGoods.PassiveSurplusNumber >= passiveProduceById.capacity)
			{
				GameGoods.PassiveSurplusNumber = passiveProduceById.capacity;
				GameGoods.PassiveCDStarTime = 0L;
				GameGoods.ClearBuff();
			}
			else if (GameGoods.PassiveCDStarTime <= 0)
			{
				GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
			}
			GameGoods.GoodsState = GameGoodsState.AutoProduce;
		}
		else
		{
			if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown)
			{
				return;
			}
			mGamegoodsBase.GameGoods.PassiveSurplusNumber = passiveProduceById.initialNumber;
			if (GameGoods.PassiveSurplusNumber <= 0)
			{
				GameGoods.PassiveSurplusNumber = 0;
				if (GameGoods.PassiveCDStarTime <= 0)
				{
					GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
				}
				GameGoods.GoodsState = GameGoodsState.CoolDown;
				SetGoodsBuff(passiveProduceById);
				GoodsAnalytic(2, 1);
				EventManager.GetInstance().DispatchEvent(100129);
				EventManager.GetInstance().DispatchEvent(203252);
			}
			else
			{
				if (GameGoods.PassiveSurplusNumber >= passiveProduceById.capacity)
				{
					GameGoods.PassiveSurplusNumber = passiveProduceById.capacity;
					GameGoods.PassiveCDStarTime = 0L;
					GameGoods.ClearBuff();
				}
				else if (GameGoods.PassiveCDStarTime <= 0)
				{
					GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
					SetGoodsBuff(passiveProduceById);
				}
				GameGoods.GoodsState = GameGoodsState.AutoProduce;
			}
		}
	}

	public override void OnExecute(bool normal = true)
	{
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null || mGamegoodsBase.GameGrid.IsDrag || mGamegoodsBase.GameGrid.IsPlayCdAnim || mGamegoodsBase.GameGrid.GlobalSpeedupState || (mGamegoodsBase.GameGoods.PassiveSurplusNumber <= 0 && mGamegoodsBase.GameGoods.InitiativeAdditionalNumber <= 0))
		{
			return;
		}
		IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (passiveProduceById == null || !Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(passiveProduceById.GetCostItemList()))
		{
			return;
		}
		GameLevelGrid gameLevelGrid = null;
		int num = -1;
		if (normal)
		{
			gameLevelGrid = mGamegoodsBase.GameGrid.GetEmptyGridAroundID(mGamegoodsBase.GameGrid.GetGridId());
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				return;
			}
			num = Singleton<GameLevelManager>.Instance.GetPassiveProduceGoodsID(mGamegoodsBase.GameGoods);
		}
		else
		{
			if (mGamegoodsBase.GameGrid.CheckEmptyGridEnough(1, showEnoughTip: true, checkPlayerState: true))
			{
				num = Singleton<GameLevelManager>.Instance.GetPassiveProduceGoodsID(mGamegoodsBase.GameGoods);
				gameLevelGrid = mGamegoodsBase.GameGrid.GetNearbyEmptyGrid(mGamegoodsBase.GameGrid.GetGridId(), showEnoughTip: true, num, checkPlayerState: true);
				if (num > 0 && (Object)(object)gameLevelGrid != (Object)null)
				{
					ObjectManager.GetInstance().userDataModel.ClickGeneratorCount(1);
				}
			}
			SendVibrateEvent((Object)(object)gameLevelGrid == (Object)null);
		}
		if (!((Object)(object)gameLevelGrid == (Object)null) && num != -1)
		{
			Singleton<GameLevelManager>.Instance.DeductionOfConsumption(passiveProduceById.GetCostItemList(), mGamegoodsBase.GameGrid);
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, gameLevelGrid);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
			gameLevelGrid.ChangeGameGoodsVo(gameGoodsBaseById, "癰r4끤w\udc31仍", updateOrder: false);
			UpdateProduceNum(-1);
			mGamegoodsBase.GameGrid.UnlockGoodsMap(num);
			mGamegoodsBase.GameGrid.GetNewGoods(num);
			if (!mGamegoodsBase.GameGrid.CheckEmptyGridEnough(1))
			{
				mGamegoodsBase.GameGrid.GameMapFull();
			}
			Singleton<GameLevelManager>.Instance.PlayAudio(2, 0, IndependentType.None, GameGoods.goodsID);
			gameLevelGrid.GetGameLevelItem()?.PlayItemFly(mGamegoodsBase.GameGrid.GameItemParent);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, gameLevelGrid.GameItemParent, num, 0f);
			EventManager.GetInstance().DispatchEvent(203244);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, gameLevelGrid.GameItemParent, num, 0f);
		}
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase == null || GameGoods == null || (Object)(object)GameGrid == (Object)null)
		{
			return;
		}
		if ((GameGoods.GoodsState == GameGoodsState.AutoProduce || GameGoods.InitiativeAdditionalNumber > 0) && CanExecute() && !MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			OnExecute();
		}
		if (IGoodsBaseVo.IsCoolDown(GameGoods.GoodsState) || GameGoods.GoodsState == GameGoodsState.AutoProduce)
		{
			IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(GameGoods.goodsID);
			if (passiveProduceById == null || GameGoods.PassiveCDStarTime <= 0)
			{
				return;
			}
			passiveProduceById.GetCDTime(GameGoods.PassiveCDIndex);
			float passiveCDProgress = GameLevelDefine.GetPassiveCDProgress(GameGoods, passiveProduceById);
			GameGrid.SetCDProgress(passiveCDProgress, initiative: false);
			int passiveCDRound = GetPassiveCDRound(passiveProduceById);
			if (passiveCDRound > 0)
			{
				UpdateProduceNum(passiveProduceById.frequency * passiveCDRound);
				GameGoods.PassiveCDIndex++;
				if (GameGoods.PassiveCDIndex >= passiveProduceById.GetCDList().Count)
				{
					GameGoods.PassiveCDIndex = 0;
				}
			}
			else
			{
				GameGoods.DoneType = "刞炟\ud9dcő";
			}
		}
		else if (GameGoods.GoodsState == GameGoodsState.Bubble)
		{
			OnBubbleUpdate();
		}
	}

	public override void OnCoolDownSpeedup(int time)
	{
		IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (passiveProduceById == null)
		{
			Log.E(string.Format("꺬\u1733ধ者ꆟ裺➣\u02f4빊≓턘⁋筏bú叹─⓸劲凁ɮ", mGamegoodsBase.GameGoods.goodsID));
		}
		else if ((IGoodsBaseVo.IsCoolDown(GameGoods.GoodsState) || GameGoods.GoodsState == GameGoodsState.AutoProduce) && mGamegoodsBase.GameGoods.PassiveCDStarTime > 0)
		{
			int passiveCDRound = GetPassiveCDRound(passiveProduceById, time);
			if (passiveCDRound > 0)
			{
				mGamegoodsBase.GameGrid.SetGlobalSpeedupState(state: true, passiveCDRound, isPassive: true);
				UpdateProduceNum(passiveProduceById.frequency * passiveCDRound);
			}
			else
			{
				int cDTime = passiveProduceById.GetCDTime(mGamegoodsBase.GameGoods.PassiveCDIndex);
				float progress = (float)(ServerTimeManager.CurrentTime() - mGamegoodsBase.GameGoods.PassiveCDStarTime) / (float)cDTime;
				mGamegoodsBase.GameGrid.SetGlobalSpeedupState(state: true, progress, isPassive: true);
			}
		}
	}

	public void UpdateProduceNum(int changeNum)
	{
		bool flag = false;
		IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(GameGoods.goodsID);
		if (passiveProduceById == null)
		{
			return;
		}
		if (changeNum >= 0)
		{
			if (GameGoods.GoodsState == GameGoodsState.CoolDown)
			{
				if (GameGoods.DoneType == "刞炟\ud9dcő")
				{
					Singleton<GameLevelManager>.Instance.PlayAudio(6);
				}
				GoodsAnalytic(2, 2);
			}
			int num = passiveProduceById.capacity - GameGoods.PassiveSurplusNumber;
			if (num > changeNum)
			{
				GameGoods.PassiveSurplusNumber += changeNum;
			}
			else if (num > 0)
			{
				GameGoods.PassiveSurplusNumber += num;
			}
			GameGoods.ClearBuff();
			SetGoodsBuff(passiveProduceById);
		}
		else
		{
			GameGoods.PassiveUseTotal += Mathf.Abs(changeNum);
			if (GameGoods.InitiativeAdditionalNumber > 0)
			{
				GameGoods.InitiativeAdditionalNumber += changeNum;
				flag = true;
			}
			else
			{
				GameGoods.PassiveSurplusNumber += changeNum;
			}
		}
		if (flag)
		{
			GameGrid.UpdateGameLevelItem();
			GameGrid.SaveGridData();
			return;
		}
		if (GameGoods.PassiveSurplusNumber <= 0)
		{
			GameGoods.PassiveSurplusNumber = 0;
			if (GameGoods.PassiveCDStarTime <= 0)
			{
				GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
			}
			if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
			{
				GameGoods.GoodsState = GameGoodsState.CoolDown;
			}
			SetGoodsBuff(passiveProduceById);
			GoodsAnalytic(2, 1);
			GeneratorEnterCD();
			EventManager.GetInstance().DispatchEvent(100129);
			EventManager.GetInstance().DispatchEvent(203252);
		}
		else
		{
			if (!GameGrid.ChangeGameGoodsState(GameGoodsState.AutoProduce))
			{
				GameGoods.GoodsState = GameGoodsState.AutoProduce;
			}
			if (GameGoods.PassiveSurplusNumber >= passiveProduceById.capacity)
			{
				GameGoods.PassiveCDStarTime = 0L;
				GameGoods.ClearBuff();
			}
			else if (GameGoods.PassiveCDStarTime <= 0)
			{
				GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
				SetGoodsBuff(passiveProduceById);
			}
		}
		GameGrid.SaveGridData();
	}

	private void SetGoodsBuff(IGoodsProduceVo produceVo)
	{
		if (GameGoods == null || GoodsBaseVo == null)
		{
			return;
		}
		GoodsBuffVo buffVo = ObjectManager.GetInstance().goodsBuffModel.GetBuffVo(GoodsBuffType.PassiveCD_Speed_Up, GoodsBaseVo.series);
		if (buffVo != null)
		{
			int num = buffVo.buffValue;
			int cDTime = produceVo.GetCDTime(GameGoods.PassiveCDIndex);
			if (buffVo.activityID == 1550)
			{
				num = ObjectManager.GetInstance().feverFlambeV2Model.GetPassGeneratorCDBuffValueByCDTime(cDTime);
			}
			else if (buffVo.activityID == 1560)
			{
				num = ObjectManager.GetInstance().feverRelayV2Model.GetPassGeneratorCDBuffValueByCDTime(cDTime);
			}
			else if (buffVo.activityID == 1551)
			{
				num = ObjectManager.GetInstance().feverFlambeStageModel.GetPassGeneratorCDBuffValueByCDTime(cDTime);
			}
			else if (buffVo.activityID == 1910)
			{
				num = ObjectManager.GetInstance().feverFlambeV3Model.GetPassGeneratorCDBuffValueByCDTime(cDTime);
			}
			if (num != GameGoods.BuffValue)
			{
				GameGoods.ClearBuff();
				GameGoods.BuffValue = num;
				GameGoods.BuffStarTime = ServerTimeManager.CurrentTime();
				buffVo.buffValue = GameGoods.BuffValue;
				ObjectManager.GetInstance().goodsBuffModel.SetBuffVo(GoodsBuffType.PassiveCD_Speed_Up, GoodsBaseVo.series, buffVo);
			}
		}
		else
		{
			GameGoods.ClearBuff();
		}
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
