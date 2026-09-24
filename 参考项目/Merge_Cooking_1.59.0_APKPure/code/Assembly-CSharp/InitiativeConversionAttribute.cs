using System;
using System.Collections.Generic;
using TLF;
using UnityEngine;

public class InitiativeConversionAttribute : GameGoodsAttributeBase
{
	public InitiativeConversionAttribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (!OnResume())
		{
			return;
		}
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(GameGoods.goodsID);
		if (initiativeProduceById == null)
		{
			Log.E(string.Format("꺬\u1733캧ᙛꄏ仺잶\a빊≓턘⁋筏bú叹熄挻剺ﺧ凼\uf624뛆", GameGoods.goodsID));
			return;
		}
		if (IGoodsBaseVo.IsCoolDown(GameGoods.GoodsState))
		{
			if (GameGoods.InitiativeCDStarTime <= 0)
			{
				GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
			if (GameGoods.GoodsState == GameGoodsState.HideCoolDown && GameGoods.InitiativeSurplusNumber <= 0)
			{
				GameGoods.InitiativeSurplusNumber = initiativeProduceById.frequency;
			}
			if (GameGoods.InitiativeCDStarTime <= 0)
			{
				return;
			}
			int initiativeCDRound = GetInitiativeCDRound(initiativeProduceById);
			if (initiativeCDRound > 0)
			{
				GameGrid.SetCDProgress(initiativeCDRound, initiative: true);
				if ((mGamegoodsBase is GoodsTreasureBox || mGamegoodsBase is GoodsDynamicTreasureBox) && initiativeProduceById.initialNumber > 0 && GameGoods.InitiativeSurplusNumber <= 0)
				{
					GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
				}
				UpdateProduceNum(initiativeProduceById.frequency * initiativeCDRound, changeCdTime: false);
			}
			else
			{
				int cDTime = initiativeProduceById.GetCDTime(GameGoods.InitiativeCDIndex);
				float progress = ServerTimeManager.TimeProgress(GameGoods.InitiativeCDStarTime, cDTime);
				GameGrid.SetCDProgress(progress, initiative: true);
			}
			return;
		}
		if (GameGoods.GoodsState == GameGoodsState.InitiativeProduce && GameGoods.InitiativeSurplusNumber == 0)
		{
			GameGoods.InitiativeSurplusNumber = initiativeProduceById.frequency;
		}
		if (GameGoods.GoodsState == GameGoodsState.InitiativeProduce)
		{
			return;
		}
		if (GameGoods.InitiativeSurplusNumber == 0)
		{
			GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
		}
		if (mGamegoodsBase is GoodsTreasureBox || mGamegoodsBase is GoodsDynamicTreasureBox)
		{
			if (initiativeProduceById.GetCDTime(GameGoods.InitiativeCDIndex) > 0)
			{
				GameGoods.GoodsState = GameGoodsState.BoxWaitOpen;
			}
			else
			{
				GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
			}
		}
		else if (GameGoods.InitiativeSurplusNumber <= 0)
		{
			GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			GameGoods.GoodsState = GameGoodsState.CoolDown;
			GoodsAnalytic(2, 1);
		}
		else
		{
			GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
		}
	}

	public override void OnExecute(bool normal = true)
	{
		int consumptionReturn = 0;
		if (mGamegoodsBase == null || GameGoods == null || (Object)(object)GameGrid == (Object)null)
		{
			return;
		}
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(GameGoods.goodsID);
		if (initiativeProduceById == null)
		{
			return;
		}
		if (GameGoods.InitiativeUseTotal >= initiativeProduceById.capacity)
		{
			UpdateProduceNum(0);
		}
		else
		{
			if (GameGoods.InitiativeSurplusNumber <= 0)
			{
				return;
			}
			int num = Singleton<GameLevelManager>.Instance.GetInitiativeConversionGoodsID(GameGoods);
			if (num > 0)
			{
				int dropRate = GetDropRate(initiativeProduceById);
				if (dropRate > 1)
				{
					int generatorConsume = ObjectManager.GetInstance().doubleConsumptionModel.GetGeneratorConsume(dropRate);
					int returnEnergy = 0;
					int realityProduceID = GetRealityProduceID(num, initiativeProduceById, dropRate, generatorConsume, out returnEnergy);
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
				GameLevelGrid gameLevelGrid = null;
				bool flag = false;
				if (IsSelectSelfGrid(initiativeProduceById))
				{
					gameLevelGrid = GameGrid;
					flag = true;
				}
				else
				{
					gameLevelGrid = GameGrid.GetNearbyEmptyGrid(GameGrid.GetGridId(), showEnoughTip: true, num, checkPlayerState: true);
				}
				if ((Object)(object)gameLevelGrid == (Object)null || !Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(initiativeProduceById.GetCostItemList(), dropRate))
				{
					return;
				}
				if (consumptionReturn > 0)
				{
					TopUIViewLogic.TobeReturnedEnergy += consumptionReturn;
				}
				Singleton<GameLevelManager>.Instance.DeductionOfConsumption(initiativeProduceById.GetCostItemList(), GameGrid, dropRate - consumptionReturn);
				if (flag)
				{
					int goodsID = GameGoods.goodsID;
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.goodsID, -1, GameGoods);
					GameGrid.EmptyParentSelectGrid();
					GameGrid.parentLogic?.CheckOrderUpdate(goodsID);
				}
				if (mGamegoodsBase is GoodsLockGoodsBox)
				{
					gameLevelGrid.ChangeGameGoodsVo(Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, gameLevelGrid, new GameGoodsVo
					{
						goodsID = num,
						GoodsState = GameGoodsState.Lock
					}), "癰r4끤w\udc31仍");
				}
				else
				{
					if (mGamegoodsBase is GoodsDynamicTreasureBox)
					{
						GameGoods.DropoutList.Add(num);
					}
					GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, gameLevelGrid);
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
					gameLevelGrid.ChangeGameGoodsVo(gameGoodsBaseById, "癰r4끤w\udc31仍");
				}
				ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
				ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
				ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
				ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, num);
				if (flag)
				{
					gameLevelGrid.GetGameLevelItem()?.PlayItemShow();
				}
				else
				{
					gameLevelGrid.GetGameLevelItem()?.PlayItemFly(GameGrid.GameItemParent, 0.4f, isPlayDownEffect: false, dropRate, dropRate - consumptionReturn);
				}
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
					ViewManager.GetInstance().ShowRewardTip(rewardData, GameGrid.GameItemParent, showNum: true, RewardFlyIconType.TopLightning, 1f, endCall);
				}
				if (initiativeProduceById.GetCostItemList().Count > 0)
				{
					EarnActivityScore(dropRate - consumptionReturn, gameLevelGrid);
				}
				MonoSingleton<GuideManager>.Instance.CurrentProduceId = num;
				gameLevelGrid.AutoSelectGrid();
				MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_Creater(GameGoods.goodsID);
				MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GoodsBox(2);
				if (!flag)
				{
					UpdateProduceNum(ObjectManager.GetInstance().doubleConsumptionModel.GetGeneratorConsume(dropRate));
				}
				if (mGamegoodsBase != null && GameGoods != null && GameGoods.goodsID != 100360)
				{
					Singleton<GameLevelManager>.Instance.PlayAudio(3, 0, IndependentType.None, GameGoods.goodsID);
					GameLevelGrid gameGrid = GameGrid;
					object obj;
					if (gameGrid == null)
					{
						obj = null;
					}
					else
					{
						GameLevelItem gameLevelItem = gameGrid.GetGameLevelItem();
						obj = ((gameLevelItem != null) ? ((Component)gameLevelItem).GetComponent<GameButton>() : null);
					}
					GameButton gameButton = (GameButton)obj;
					if ((Object)(object)gameButton != (Object)null)
					{
						gameButton.SetSkipNextClickSound(skip: true);
					}
				}
				if (GameLevelDefine.OrderNeedLowLevelGoods.Contains(num))
				{
					GameLevelDefine.ClearOrderNeedLowLevelGoods();
				}
				EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
				EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, GameGrid.GameItemParent, num, 0f);
				EventManager.GetInstance().DispatchEvent(203244);
				EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, GameGrid.GameItemParent, num, 0f);
				return;
			}
			List<int> conversionList = initiativeProduceById.GetConversionList();
			if (conversionList.Count > 0)
			{
				bool flag2 = true;
				int num2 = conversionList.Count - 1;
				if (num2 > 0)
				{
					flag2 = GameGrid.CheckEmptyGridEnough(num2, showEnoughTip: true, checkPlayerState: true);
				}
				if (!flag2 || !Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(initiativeProduceById.GetCostItemList()))
				{
					return;
				}
				Singleton<GameLevelManager>.Instance.DeductionOfConsumption(initiativeProduceById.GetCostItemList(), GameGrid);
				UpdateProduceNum(-1);
				if (mGamegoodsBase != null && GameGoods != null && GameGoods.goodsID != 100360)
				{
					Singleton<GameLevelManager>.Instance.PlayAudio(3, 0, IndependentType.None, GameGoods.goodsID);
					GameLevelGrid gameGrid2 = GameGrid;
					object obj2;
					if (gameGrid2 == null)
					{
						obj2 = null;
					}
					else
					{
						GameLevelItem gameLevelItem2 = gameGrid2.GetGameLevelItem();
						obj2 = ((gameLevelItem2 != null) ? ((Component)gameLevelItem2).GetComponent<GameButton>() : null);
					}
					GameButton gameButton2 = (GameButton)obj2;
					if ((Object)(object)gameButton2 != (Object)null)
					{
						gameButton2.SetSkipNextClickSound(skip: true);
					}
				}
				EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
			}
			else
			{
				UpdateProduceNum(-1);
			}
		}
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase == null || GameGoods == null || (Object)(object)GameGrid == (Object)null)
		{
			return;
		}
		if (GameGoods.GoodsState == GameGoodsState.CoolDown || GameGoods.GoodsState == GameGoodsState.HideCoolDown)
		{
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(GameGoods.goodsID);
			if (initiativeProduceById == null || GameGoods.InitiativeCDStarTime <= 0)
			{
				return;
			}
			int cDTime = initiativeProduceById.GetCDTime(GameGoods.InitiativeCDIndex);
			float progress = ServerTimeManager.TimeProgress(GameGoods.InitiativeCDStarTime, cDTime);
			GameGrid.SetCDProgress(progress, initiative: true);
			if (ServerTimeManager.VerifyTime(GameGoods.InitiativeCDStarTime, cDTime))
			{
				if ((mGamegoodsBase is GoodsTreasureBox || mGamegoodsBase is GoodsDynamicTreasureBox) && initiativeProduceById.initialNumber > 0 && GameGoods.InitiativeSurplusNumber <= 0)
				{
					GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
				}
				UpdateProduceNum(initiativeProduceById.frequency);
				if (mGamegoodsBase is GoodsTreasureBox || mGamegoodsBase is GoodsDynamicTreasureBox)
				{
					MonoSingleton<GuideManager>.Instance.CloseTreasureBoxGuide();
				}
				GameGoods.InitiativeCDIndex++;
				if (GameGoods.InitiativeCDIndex >= initiativeProduceById.GetCDList().Count)
				{
					GameGoods.InitiativeCDIndex = 0;
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
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(GameGoods.goodsID);
		if (initiativeProduceById == null)
		{
			Log.E(string.Format("꺬\u1733캧ᙛꄏ仺잶\a빊≓턘⁋筏bú叹熄挻剺ﺧ凼\uf624뛆", GameGoods.goodsID));
		}
		else
		{
			if (!IGoodsBaseVo.IsCoolDown(GameGoods.GoodsState))
			{
				return;
			}
			if (GameGoods.InitiativeCDStarTime <= 0)
			{
				GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
			int initiativeCDRound = GetInitiativeCDRound(initiativeProduceById, time);
			if (initiativeCDRound > 0)
			{
				if (GameGoods.GoodsState == GameGoodsState.CoolDown)
				{
					GameGrid.SetGlobalSpeedupState(state: true, initiativeCDRound);
				}
				if ((mGamegoodsBase is GoodsTreasureBox || mGamegoodsBase is GoodsDynamicTreasureBox) && initiativeProduceById.initialNumber > 0 && GameGoods.InitiativeSurplusNumber <= 0)
				{
					GameGoods.InitiativeSurplusNumber = initiativeProduceById.initialNumber;
				}
				UpdateProduceNum(initiativeProduceById.frequency * initiativeCDRound, changeCdTime: false);
			}
			else
			{
				int cDTime = initiativeProduceById.GetCDTime(GameGoods.InitiativeCDIndex);
				float progress = ServerTimeManager.TimeProgress(GameGoods.InitiativeCDStarTime, cDTime);
				if (GameGoods.GoodsState == GameGoodsState.CoolDown)
				{
					GameGrid.SetGlobalSpeedupState(state: true, progress);
				}
			}
		}
	}

	public void UpdateProduceNum(int changeNum, bool changeCdTime = true)
	{
		//IL_0173: Unknown result type (might be due to invalid IL or missing references)
		bool flag = false;
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(GameGoods.goodsID);
		if (initiativeProduceById == null)
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
			int num = initiativeProduceById.capacity - GameGoods.InitiativeSurplusNumber;
			if (num > changeNum)
			{
				GameGoods.InitiativeSurplusNumber += changeNum;
			}
			else if (num > 0)
			{
				GameGoods.InitiativeSurplusNumber += num;
			}
			if (changeCdTime)
			{
				GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
		}
		else
		{
			GameGoods.InitiativeUseTotal += Mathf.Abs(changeNum);
			GameGoods.InitiativeSurplusNumber += changeNum;
			Singleton<GameLevelManager>.Instance.SetBaseProduceNum(GoodsBaseVo.goodsID, -changeNum);
		}
		if (IGoodsBaseVo.IsTreasureBox(GoodsBaseVo.type) && GameGoods.GoodsState == GameGoodsState.CoolDown)
		{
			Singleton<GameLevelManager>.Instance.CurrentOpenBox = null;
		}
		if (GameGoods.InitiativeUseTotal >= initiativeProduceById.capacity)
		{
			if (GameGoods.goodsID == 100360)
			{
				Singleton<GameLevelManager>.Instance.PlayAudio(7);
			}
			if (IGoodsBaseVo.IsTreasureBox(GoodsBaseVo.type))
			{
				GameGrid.ItemDisappearAnim();
			}
			List<int> conversionList = initiativeProduceById.GetConversionList();
			if (conversionList.Count > 0)
			{
				bool flag2 = true;
				int num2 = conversionList.Count - 1;
				if (num2 > 0)
				{
					flag2 = GameGrid.CheckEmptyGridEnough(num2, showEnoughTip: true, checkPlayerState: true);
				}
				if (flag2)
				{
					int goodsID = GameGoods.goodsID;
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.goodsID, -1, GameGoods);
					for (int i = 0; i < conversionList.Count; i++)
					{
						if (i == 0)
						{
							GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(conversionList[i], GameGrid);
							Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(conversionList[i], 1, gameGoodsBaseById.GameGoods);
							GameGrid.ChangeGameGoodsVo(gameGoodsBaseById, "순끕玷椝捑 Ò发愽䡶");
							GameGrid.EmptyParentSelectGrid();
							ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, conversionList[i]);
							ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, conversionList[i]);
							ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, conversionList[i]);
							ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, conversionList[i]);
							if ((Object)(object)GameGrid.GetGameLevelItem() != (Object)null)
							{
								GameGrid.GetGameLevelItem().PlayItemShow();
							}
							IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsBaseById.GameGoods.goodsID);
							if (goodsBaseVoById != null && (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || IGoodsBaseVo.IsInstrument(goodsBaseVoById.type)))
							{
								Singleton<GameLevelManager>.Instance.ChangeGeneratorOrMachine(gameGoodsBaseById.GameGoods);
							}
							GameGrid.SelectCurrentGrid();
						}
						else
						{
							GameLevelGrid nearbyEmptyGrid = GameGrid.GetNearbyEmptyGrid(GameGrid.GetGridId(), showEnoughTip: false, conversionList[i]);
							if ((Object)(object)nearbyEmptyGrid == (Object)null)
							{
								return;
							}
							GameGoodsBase gameGoodsBaseById2 = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(conversionList[i], nearbyEmptyGrid);
							Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(conversionList[i], 1, gameGoodsBaseById2.GameGoods);
							nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById2, "순끕玷椝捑 Ò发愽䡶");
							ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, conversionList[i]);
							ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, conversionList[i]);
							ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, conversionList[i]);
							ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, conversionList[i]);
							nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(GameGrid.GameItemParent);
							IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsBaseById2.GameGoods.goodsID);
							if (goodsBaseVoById2 != null && (IGoodsBaseVo.IsCreator(goodsBaseVoById2.type) || IGoodsBaseVo.IsInstrument(goodsBaseVoById2.type)))
							{
								Singleton<GameLevelManager>.Instance.ChangeGeneratorOrMachine(gameGoodsBaseById2.GameGoods);
							}
						}
						EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, GameGrid.GameItemParent, conversionList[i], 0f);
						EventManager.GetInstance().DispatchEvent(203244);
						EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, GameGrid.GameItemParent, conversionList[i], 0f);
					}
					GameGrid.parentLogic?.CheckOrderUpdate(goodsID);
				}
			}
			else
			{
				int goodsID2 = GameGoods.goodsID;
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.goodsID, -1, GameGoods);
				GameGrid.EmptyParentSelectGrid();
				GameGrid.ChangeGameGoodsVo(null, "순끕玷椝捑 Ò发愽䡶");
				GameGrid.parentLogic?.CheckOrderUpdate(goodsID2);
			}
			flag = true;
		}
		else if (GameGoods.InitiativeSurplusNumber <= 0)
		{
			GameGoods.InitiativeSurplusNumber = 0;
			if (GameGoods.GoodsState != GameGoodsState.HideCoolDown && changeCdTime)
			{
				GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
			if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
			{
				GameGoods.GoodsState = GameGoodsState.CoolDown;
			}
			GoodsAnalytic(2, 1);
		}
		else if (GameGoods.InitiativeSurplusNumber >= initiativeProduceById.capacity)
		{
			if (!GameGrid.ChangeGameGoodsState(GameGoodsState.InitiativeProduce))
			{
				GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
			}
			else if (GameGrid.IsDrag || GameGrid.IsMoveItem)
			{
				Singleton<GameLevelManager>.Instance.IsSendGetEvent = true;
			}
			else
			{
				EventManager.GetInstance().DispatchEvent(100105, -1);
			}
		}
		else if (!GameGrid.ChangeGameGoodsState(GameGoodsState.InitiativeProduce))
		{
			GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
		}
		if (mGamegoodsBase != null && (Object)(object)GameGrid != (Object)null)
		{
			GameGrid.SaveGridData();
		}
		if (flag)
		{
			ObjectManager.GetInstance().SaveToDisk();
		}
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
		if (GoodsBaseVo.type != 2 && GoodsBaseVo.type != 3)
		{
			return 1;
		}
		return (int)ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate();
	}

	private int GetRealityProduceID(int produceID, IGoodsProduceVo produceVo, int rate, int consume, out int returnEnergy)
	{
		returnEnergy = 0;
		consume = GameLevelDefine.Abs(consume);
		if (GameGoods.InitiativeSurplusNumber < consume)
		{
			return produceID;
		}
		if (produceVo.capacity - GameGoods.InitiativeUseTotal < consume)
		{
			return produceID;
		}
		return GetProduceIDByRate(produceID, rate, out returnEnergy);
	}

	private bool IsSelectSelfGrid(IGoodsProduceVo produceVo)
	{
		if (produceVo == null)
		{
			return false;
		}
		if (GameGrid.CheckEmptyGridEnough(1))
		{
			return false;
		}
		if (produceVo.GetConversionList() != null && produceVo.GetConversionList().Count > 0)
		{
			return false;
		}
		if (GameGoods.InitiativeUseTotal < produceVo.capacity - 1)
		{
			return false;
		}
		return true;
	}
}
