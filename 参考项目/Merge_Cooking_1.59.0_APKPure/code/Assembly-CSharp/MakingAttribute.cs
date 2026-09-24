using System.Collections.Generic;
using System.Linq;
using TLF;
using UnityEngine;

public class MakingAttribute : GameGoodsAttributeBase
{
	public MakingAttribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		bool flag = false;
		if (!OnResume())
		{
			return;
		}
		if (GameGoods.GoodsState == GameGoodsState.CoolDown || GameGoods.GoodsState == GameGoodsState.HideCoolDown || GameGoods.GoodsState == GameGoodsState.CanWork || GameGoods.GoodsState == GameGoodsState.Working || GameGoods.GoodsState == GameGoodsState.InitiativeProduce)
		{
			IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
			if (goodsInstrumentVO != null)
			{
				if (GameGoods.GoodsState == GameGoodsState.HideCoolDown && GameGoods.InitiativeSurplusNumber <= 0)
				{
					GameGoods.InitiativeSurplusNumber = goodsInstrumentVO.initialNumber;
					flag = true;
				}
				if (GameGoods.InitiativeCDStarTime > 0)
				{
					if ((int)(ServerTimeManager.CurrentTime() - GameGoods.InitiativeCDStarTime) < 0)
					{
						GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
					}
					float num = ServerTimeManager.TimeProgress(GameGoods.InitiativeCDStarTime, goodsInstrumentVO.cd);
					GameGrid.SetCDProgress(num, initiative: true);
					int num2 = Mathf.FloorToInt(num);
					if (num2 >= 1)
					{
						UpdateProduceNum(goodsInstrumentVO.frequency * num2);
					}
				}
			}
			UpdateWorking();
			if ((GameGoods.CollectList == null || GameGoods.CollectList.Count <= 0) && GameGoods.GoodsState == GameGoodsState.InitiativeProduce && !GameGrid.ChangeGameGoodsState(GameGoodsState.CanWork))
			{
				GameGoods.GoodsState = GameGoodsState.CanWork;
			}
		}
		else if (GameGoods.GoodsState != GameGoodsState.CanWork)
		{
			IGoodsInstrumentVO goodsInstrumentVO2 = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
			if (goodsInstrumentVO2 != null && GameGoods.InitiativeSurplusNumber == 0)
			{
				GameGoods.InitiativeSurplusNumber = goodsInstrumentVO2.initialNumber;
			}
			GameGoods.GoodsState = GameGoodsState.CanWork;
			flag = true;
		}
		if (flag)
		{
			GameGrid.SaveGridData();
		}
	}

	public override void OnExecute(bool normal = true)
	{
		if (mGamegoodsBase == null || GameGoods == null || (Object)(object)GameGrid == (Object)null)
		{
			return;
		}
		if (GameGoods.CollectList == null || GameGoods.CollectList.Count <= 0)
		{
			if (GameGoods.GoodsState == GameGoodsState.InitiativeProduce && !GameGrid.ChangeGameGoodsState(GameGoodsState.CanWork))
			{
				GameGoods.GoodsState = GameGoodsState.CanWork;
			}
		}
		else if (mGamegoodsBase.GoodsType == GameGoodsType.DisposableSingle || mGamegoodsBase.GoodsType == GameGoodsType.DisposableMany)
		{
			DisposableInstrumentExecute();
		}
		else
		{
			NormalInstrumentExecute();
		}
	}

	private void TryReportTakeoutAnalytic(int goodsId)
	{
		if (goodsId > 0 && !GameLevelDefine.IsSkipAnalyticForOrderTakeout && ABTestSwitchDefine.GetInstrumentQuickTakeoutSwitch())
		{
			if (!GameLevelDefine.IsGoodsForCurrentOrder(goodsId))
			{
				GameLevelDefine.GoodsDetailQuickOutAnalytic("숅끥榺渆杛9ª厩숋끥澭甌束7Â叁괗G赴", 1, 3);
			}
			else if (!GameGrid.CheckEmptyGridEnough(1))
			{
				GameLevelDefine.GoodsDetailQuickOutAnalytic("숅끥榺渆杛9ª厩숋끥澭甌束7Â叁괗G赴", 1, 0);
			}
		}
	}

	private void NormalInstrumentExecute()
	{
		GameLevelGrid nearbyEmptyGrid = GameGrid.GetNearbyEmptyGrid(GameGrid.GetGridId(), showEnoughTip: true, 0, checkPlayerState: true);
		if ((Object)(object)nearbyEmptyGrid == (Object)null)
		{
			return;
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
		if (goodsInstrumentVO == null || !Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(goodsInstrumentVO.GetCostItemList()))
		{
			return;
		}
		Singleton<GameLevelManager>.Instance.DeductionOfConsumption(goodsInstrumentVO.GetCostItemList(), GameGrid);
		int num = GameGoods.CollectList[0];
		GameGoods.CollectList.RemoveAt(0);
		if (num > 0)
		{
			if (GameGoods.CollectList.Count <= 0)
			{
				GameGoods.InitiativeUseTotal++;
				ObjectManager.GetInstance().userDataModel.UseMachineNumber++;
				if (GameGoods.InitiativeSurplusNumber <= 0)
				{
					if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
					{
						GameGoods.GoodsState = GameGoodsState.CoolDown;
					}
				}
				else if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CanWork))
				{
					GameGoods.GoodsState = GameGoodsState.CanWork;
				}
			}
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, nearbyEmptyGrid);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
			nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById, "녭孡㨸\0逗\ud972");
			nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(GameGrid.GameItemParent, 0.4f, isPlayDownEffect: true, 0, 1, makeComplete: true);
			if (GameLevelManager.PlaySpecialProduceGoods.Contains(num))
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(num);
				if (goodsBaseVoById != null)
				{
					GameGrid.PlayDesignatedEffect(goodsBaseVoById.GetIcon() + "晟e4끦g報㻜");
					Singleton<GameLevelManager>.Instance.PlayAudio(17);
				}
			}
			else
			{
				GameGrid?.GetGameLevelItem()?.PlayOnceAnim("숏끜徿焐敗&\u0082厁숏끂憰渐楫4\u008a厉닲ï赴", "", 1f);
			}
			MonoSingleton<GuideManager>.Instance.CurrentProduceId = num;
			MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType_GuideTrans(GuideWeakType.InstrumentCanTake, ((Component)GameGrid.GetGameLevelItem()).transform);
			MonoSingleton<GuideWeakManager>.Instance.GetGuideModel.RecordInstrumentTake();
			ObjectManager.GetInstance().gameLevelModel.MainOrderMachineAnalytics(5, GameGoods, num);
			MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.TakeOutFromMachine);
			TryReportTakeoutAnalytic(GameGoods.MakingGoodsID);
		}
		GameGoods.MakingGoodsID = 0;
		if (GameGoods.CollectList.Count <= 0)
		{
			EventManager.GetInstance().DispatchEvent(100166);
		}
		if (goodsInstrumentVO != null)
		{
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
			BoardAudioHelper.Play(Singleton<ConfigManager>.Instance.Tables.TbWwiseLevelGoods.DataMap, goodsInstrumentVO.goodsID, EBoardAudioAction.Take);
		}
		Singleton<GameLevelManager>.Instance.SaveGameMapToDisk();
		ObjectManager.GetInstance().SaveToDisk();
	}

	private void DisposableInstrumentExecute()
	{
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
		if (goodsInstrumentVO == null)
		{
			return;
		}
		if (GameGoods.InitiativeUseTotal + 1 < goodsInstrumentVO.capacity)
		{
			GameLevelGrid nearbyEmptyGrid = GameGrid.GetNearbyEmptyGrid(GameGrid.GetGridId(), showEnoughTip: true, 0, checkPlayerState: true);
			if ((Object)(object)nearbyEmptyGrid == (Object)null || !Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(goodsInstrumentVO.GetCostItemList()))
			{
				return;
			}
			Singleton<GameLevelManager>.Instance.DeductionOfConsumption(goodsInstrumentVO.GetCostItemList(), GameGrid);
			int num = GameGoods.CollectList[0];
			GameGoods.CollectList.RemoveAt(0);
			if (num > 0)
			{
				if (GameGoods.CollectList.Count <= 0)
				{
					GameGoods.InitiativeUseTotal++;
					ObjectManager.GetInstance().userDataModel.UseMachineNumber++;
					if (GameGoods.InitiativeSurplusNumber <= 0)
					{
						if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
						{
							GameGoods.GoodsState = GameGoodsState.CoolDown;
						}
					}
					else if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CanWork))
					{
						GameGoods.GoodsState = GameGoodsState.CanWork;
					}
				}
				GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, nearbyEmptyGrid);
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
				nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById, "녭孡㨸\0逗\ud972");
				nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(GameGrid.GameItemParent, 0.4f, isPlayDownEffect: true, 0, 1, makeComplete: true);
				if (GameLevelManager.PlaySpecialProduceGoods.Contains(num))
				{
					IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(num);
					if (goodsBaseVoById != null)
					{
						GameGrid.PlayDesignatedEffect(goodsBaseVoById.GetIcon() + "晟e4끦g報㻜");
						Singleton<GameLevelManager>.Instance.PlayAudio(17);
					}
				}
				MonoSingleton<GuideManager>.Instance.CurrentProduceId = num;
				MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType_GuideTrans(GuideWeakType.InstrumentCanTake, ((Component)GameGrid.GetGameLevelItem()).transform);
				MonoSingleton<GuideWeakManager>.Instance.GetGuideModel.RecordInstrumentTake();
				ObjectManager.GetInstance().gameLevelModel.MainOrderMachineAnalytics(5, GameGoods, num);
				MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.TakeOutFromMachine);
				EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, nearbyEmptyGrid.GameItemParent, num, 0f);
				EventManager.GetInstance().DispatchEvent(203244);
				EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, nearbyEmptyGrid.GameItemParent, num, 0f);
			}
			GameGoods.MakingGoodsID = 0;
			if (GameGoods.CollectList.Count <= 0)
			{
				EventManager.GetInstance().DispatchEvent(100166);
			}
		}
		else
		{
			if (!Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(goodsInstrumentVO.GetCostItemList()))
			{
				return;
			}
			Singleton<GameLevelManager>.Instance.DeductionOfConsumption(goodsInstrumentVO.GetCostItemList(), GameGrid);
			int num2 = GameGoods.CollectList[0];
			GameGoods.CollectList.RemoveAt(0);
			if (num2 > 0)
			{
				if (GameGoods.CollectList.Count <= 0)
				{
					GameGoods.InitiativeUseTotal++;
					ObjectManager.GetInstance().userDataModel.UseMachineNumber++;
					if (GameGoods.InitiativeSurplusNumber <= 0)
					{
						if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
						{
							GameGoods.GoodsState = GameGoodsState.CoolDown;
						}
					}
					else if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CanWork))
					{
						GameGoods.GoodsState = GameGoodsState.CanWork;
					}
				}
				GameGoodsBase gameGoodsBaseById2 = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num2, GameGrid);
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num2, 1, gameGoodsBaseById2.GameGoods);
				GameGrid.ChangeGameGoodsVo(gameGoodsBaseById2, "녭孡㨸\0逗\ud972");
				GameGrid.EmptyParentSelectGrid();
				if ((Object)(object)GameGrid.GetGameLevelItem() != (Object)null)
				{
					GameGrid.GetGameLevelItem().PlayItemShow();
				}
				if (GameLevelManager.PlaySpecialProduceGoods.Contains(num2))
				{
					IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(num2);
					if (goodsBaseVoById2 != null)
					{
						GameGrid.PlayDesignatedEffect(goodsBaseVoById2.GetIcon() + "晟e4끦g報㻜");
						Singleton<GameLevelManager>.Instance.PlayAudio(17);
					}
				}
				MonoSingleton<GuideManager>.Instance.CurrentProduceId = num2;
				MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType_GuideTrans(GuideWeakType.InstrumentCanTake, ((Component)GameGrid.GetGameLevelItem()).transform);
				MonoSingleton<GuideWeakManager>.Instance.GetGuideModel.RecordInstrumentTake();
				ObjectManager.GetInstance().gameLevelModel.MainOrderMachineAnalytics(5, GameGoods, num2);
				MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.TakeOutFromMachine);
				EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, GameGrid.GameItemParent, num2, 0f);
				EventManager.GetInstance().DispatchEvent(203244);
				EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, GameGrid.GameItemParent, num2, 0f);
			}
			GameGoods.MakingGoodsID = 0;
			List<int> conversionList = goodsInstrumentVO.GetConversionList();
			bool flag = false;
			if (conversionList.Count > 0)
			{
				for (int i = 0; i < conversionList.Count; i++)
				{
					GameLevelGrid nearbyEmptyGrid2 = GameGrid.GetNearbyEmptyGrid(GameGrid.GetGridId(), showEnoughTip: false, conversionList[i]);
					if ((Object)(object)nearbyEmptyGrid2 != (Object)null)
					{
						GameGoodsBase gameGoodsBaseById3 = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(conversionList[i], nearbyEmptyGrid2);
						Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(conversionList[i], 1, gameGoodsBaseById3.GameGoods);
						nearbyEmptyGrid2.ChangeGameGoodsVo(gameGoodsBaseById3, "녭孡㨸\0逗\ud972");
					}
					else
					{
						ObjectManager.GetInstance().gameLevelModel.AddTemporaryItem(conversionList[i], 1);
						flag = true;
					}
				}
				if (flag)
				{
					EventManager.GetInstance().DispatchEvent(100018);
				}
			}
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.goodsID, -1, GameGoods);
			if (num2 <= 0)
			{
				GameGrid.EmptyParentSelectGrid();
				GameGrid.ChangeGameGoodsVo(null, "녭孡㨸\0逗\ud972");
			}
		}
		ObjectManager.GetInstance().SaveToDisk();
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase == null || GameGoods == null || (Object)(object)GameGrid == (Object)null)
		{
			return;
		}
		if (GameGoods.GoodsState == GameGoodsState.CoolDown || GameGoods.GoodsState == GameGoodsState.HideCoolDown || GameGoods.GoodsState == GameGoodsState.CanWork)
		{
			IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
			if (goodsInstrumentVO != null)
			{
				if (GameGoods.GoodsState == GameGoodsState.CoolDown)
				{
					float progress = ServerTimeManager.TimeProgress(GameGoods.InitiativeCDStarTime, goodsInstrumentVO.cd);
					GameGrid.SetCDProgress(progress, initiative: true);
				}
				if (ServerTimeManager.VerifyTime(GameGoods.InitiativeCDStarTime, goodsInstrumentVO.cd) && GameGoods.InitiativeSurplusNumber < goodsInstrumentVO.capacity)
				{
					UpdateProduceNum(goodsInstrumentVO.frequency);
				}
			}
		}
		else if (GameGoods.GoodsState == GameGoodsState.Working)
		{
			UpdateWorking();
		}
		else if (GameGoods.GoodsState == GameGoodsState.Bubble)
		{
			OnBubbleUpdate();
		}
	}

	public override void OnSpecialExecute()
	{
		if (mGamegoodsBase == null || GameGoods == null || (Object)(object)GameGrid == (Object)null || GoodsBaseVo == null || GameGoods.InitiativeSurplusNumber <= 0)
		{
			return;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < GameGoods.MakeMaterials.Count; i++)
		{
			list.Add(GameGoods.MakeMaterials[i].goodsID);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.MakeMaterials[i].goodsID, -1);
		}
		GameGoods.MakingStarTime = ServerTimeManager.CurrentTime();
		GameGoods.MakingTime = Singleton<GameLevelManager>.Instance.GetMachineMakingTimeByGoodsID(GoodsBaseVo.goodsID, GameGoods.MakingGoodsID);
		GameGoods.ClearBuff();
		GoodsBuffVo buffVo = ObjectManager.GetInstance().goodsBuffModel.GetBuffVo(GoodsBuffType.Instrument_Speed_Up, GoodsBaseVo.series);
		if (buffVo != null)
		{
			GameGoods.BuffValue = buffVo.buffValue;
			if (buffVo.activityID == 1550)
			{
				GameGoods.BuffValue = ObjectManager.GetInstance().feverFlambeV2Model.GetInsSpeedBuffValueByMakingTime(GameGoods.MakingTime);
			}
			else if (buffVo.activityID == 1560)
			{
				GameGoods.BuffValue = ObjectManager.GetInstance().feverRelayV2Model.GetInsSpeedBuffValueByMakingTime(GameGoods.MakingTime);
			}
			else if (buffVo.activityID == 1551)
			{
				GameGoods.BuffValue = ObjectManager.GetInstance().feverFlambeStageModel.GetInsSpeedBuffValueByMakingTime(GameGoods.MakingTime);
			}
			else if (buffVo.activityID == 1910)
			{
				GameGoods.BuffValue = ObjectManager.GetInstance().feverFlambeV3Model.GetInsSpeedBuffValueByMakingTime(GameGoods.MakingTime);
			}
			buffVo.buffValue = GameGoods.BuffValue;
			ObjectManager.GetInstance().goodsBuffModel.SetBuffVo(GoodsBuffType.Instrument_Speed_Up, GoodsBaseVo.series, buffVo);
			GameGoods.BuffStarTime = ServerTimeManager.CurrentTime();
		}
		if (!GameGrid.ChangeGameGoodsState(GameGoodsState.Working))
		{
			GameGoods.GoodsState = GameGoodsState.Working;
		}
		MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.MachineEnterWork);
		GoodsAnalytic(1, 1);
		ObjectManager.GetInstance().gameLevelModel.MainOrderMachineAnalytics(3, GameGoods, GameGoods.MakingGoodsID);
		UpdateProduceNum(-1);
		EventManager.GetInstance().DispatchEvent(100166);
		ObjectManager.GetInstance().SaveToDisk();
		string instrumentSound = Singleton<GameLevelManager>.Instance.GetInstrumentSound(GoodsBaseVo);
		AudioManager.Instance.PlayInstrumentSound(instrumentSound);
		EventManager.GetInstance().DispatchEvent(100281);
		GameLevelDefine.CheckUpdateOrderMatByGoods(list);
	}

	public void UpdateProduceNum(int changeNum)
	{
		if (changeNum > 0 && GameGoods.GoodsState == GameGoodsState.CoolDown && GameGoods.DoneType == "刞炟\ud9dcő")
		{
			Singleton<GameLevelManager>.Instance.PlayAudio(6);
		}
		GameGoods.InitiativeSurplusNumber += changeNum;
		if (GameGoods.InitiativeSurplusNumber <= 0)
		{
			GameGoods.InitiativeSurplusNumber = 0;
			GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			if (GameGoods.GoodsState != GameGoodsState.Working && GameGoods.GoodsState != GameGoodsState.InitiativeProduce && GameGoods.GoodsState != GameGoodsState.CoolDown && !GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
			{
				GameGoods.GoodsState = GameGoodsState.CoolDown;
			}
		}
		else
		{
			IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
			if (goodsInstrumentVO == null)
			{
				return;
			}
			if (GameGoods.InitiativeSurplusNumber >= goodsInstrumentVO.capacity)
			{
				GameGoods.InitiativeSurplusNumber = goodsInstrumentVO.capacity;
			}
			else if (goodsInstrumentVO.cd > 0)
			{
				GameGoods.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
			}
			if (GameGoods.GoodsState != GameGoodsState.Working && GameGoods.GoodsState != GameGoodsState.InitiativeProduce && GameGoods.GoodsState != GameGoodsState.CanWork && !GameGrid.ChangeGameGoodsState(GameGoodsState.CanWork))
			{
				GameGoods.GoodsState = GameGoodsState.CanWork;
			}
		}
		GameGrid.SaveGridData();
	}

	private void UpdateWorking(bool globalSpeedup = false)
	{
		if (GameGoods.GoodsState != GameGoodsState.Working)
		{
			return;
		}
		long num = ServerTimeManager.CurrentTime();
		bool flag = false;
		if (GameGoods.MakingStarTime <= 0 || GameGoods.MakingStarTime > num)
		{
			GameGoods.MakingStarTime = num;
			flag = true;
		}
		if (GameGoods.BuffStarTime > num)
		{
			GameGoods.BuffStarTime = num;
			flag = true;
		}
		if (GameGoods.BuffTotalTime < 0)
		{
			GameGoods.BuffTotalTime = 0;
			flag = true;
		}
		if (flag)
		{
			GameGrid.SaveGridData();
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
		if (goodsInstrumentVO == null)
		{
			return;
		}
		if (goodsInstrumentVO.GetMakeRecipeVo(GameGoods.MakingGoodsID) == null)
		{
			GameGoods.MakeMaterials.Clear();
			GameGoods.CollectList = new List<int>();
			if (Singleton<GameLevelManager>.Instance.GetSpecialGoodsCookingVo(GameGoods.MakingGoodsID) != null)
			{
				int specialCookingGoodsID = Singleton<GameLevelManager>.Instance.GetSpecialCookingGoodsID(GameGoods, GameGoods.MakingGoodsID);
				if (specialCookingGoodsID > 0)
				{
					GameGoods.CollectList.Add(specialCookingGoodsID);
				}
				else
				{
					GameGoods.CollectList.Add(GameGoods.MakingGoodsID);
				}
			}
			else
			{
				GameGoods.CollectList.Add(GameGoods.MakingGoodsID);
			}
			IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(GameGoods.MakingGoodsID);
			if (goodsCookingVO != null && goodsCookingVO.extraProducts.IsNotNullAndEmpty())
			{
				string[] array = goodsCookingVO.extraProducts.Split(';');
				foreach (string text in array)
				{
					if (text.IsNullOrEmpty())
					{
						continue;
					}
					string[] array2 = text.Split('|');
					if (array2.Length == 2 && array2[1].ToInt() > 0)
					{
						for (int j = 0; j < array2[1].ToInt(); j++)
						{
							GameGoods.CollectList.Add(array2[0].ToInt());
						}
					}
				}
			}
			if (GameGoods.CollectList.Count > 0 && GameGoods.GoodsState != GameGoodsState.InitiativeProduce && !GameGrid.ChangeGameGoodsState(GameGoodsState.InitiativeProduce))
			{
				GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
			}
			GameGrid.SaveGridData();
			return;
		}
		int makingTimeByGameGoods = Singleton<GameLevelManager>.Instance.GetMakingTimeByGameGoods(GameGoods);
		float makingProgress = GameLevelDefine.GetMakingProgress(GameGoods, makingTimeByGameGoods);
		if (globalSpeedup)
		{
			GameGrid.SetGlobalSpeedupState(state: true, makingProgress);
		}
		else
		{
			GameGrid.SetWorkingProgress(makingProgress);
		}
		if (makingProgress >= 1f)
		{
			AudioManager.Instance.StopInstrumentSound();
			Singleton<GameLevelManager>.Instance.PlayAudio(13, 0, IndependentType.None, GameGoods.goodsID);
			GameGoods.MakeMaterials.Clear();
			GameGoods.CollectList = new List<int>();
			if (Singleton<GameLevelManager>.Instance.GetSpecialGoodsCookingVo(GameGoods.MakingGoodsID) != null)
			{
				int specialCookingGoodsID2 = Singleton<GameLevelManager>.Instance.GetSpecialCookingGoodsID(GameGoods, GameGoods.MakingGoodsID);
				if (specialCookingGoodsID2 > 0)
				{
					GameGoods.CollectList.Add(specialCookingGoodsID2);
				}
				else
				{
					GameGoods.CollectList.Add(GameGoods.MakingGoodsID);
				}
			}
			else
			{
				GameGoods.CollectList.Add(GameGoods.MakingGoodsID);
			}
			IGoodsCookingVO goodsCookingVO2 = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(GameGoods.MakingGoodsID);
			if (goodsCookingVO2 != null && goodsCookingVO2.extraProducts.IsNotNullAndEmpty())
			{
				string[] array3 = goodsCookingVO2.extraProducts.Split(';');
				foreach (string text2 in array3)
				{
					if (text2.IsNullOrEmpty())
					{
						continue;
					}
					string[] array4 = text2.Split('|');
					if (array4.Length == 2 && array4[1].ToInt() > 0)
					{
						for (int l = 0; l < array4[1].ToInt(); l++)
						{
							GameGoods.CollectList.Add(array4[0].ToInt());
						}
					}
				}
			}
			MonoSingleton<GuideManager>.Instance.CloseMachineMakingGuide();
			if (GameGoods.CollectList.Count > 0 && GameGoods.GoodsState != GameGoodsState.InitiativeProduce)
			{
				if (!GameGrid.ChangeGameGoodsState(GameGoodsState.InitiativeProduce))
				{
					GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
				}
				TimeManager.Instance.Schedule(this, (float dt) =>
				{
					EventManager.GetInstance().DispatchEvent(100113);
				}, 0.2f, 1, 0f);
				ObjectManager.GetInstance().gameLevelModel.MainOrderMachineAnalytics(4, GameGoods, GameGoods.MakingGoodsID);
				GoodsAnalytic(1, 2);
			}
			GameGoods.ClearBuff();
			EventManager.GetInstance().DispatchEvent(100166);
			ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.FinishMaking, 1);
			ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.FinishMaking, 1);
			ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.FinishMaking, 1);
			ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.FinishMaking, 1);
			ObjectManager.GetInstance().dailyChallengeModel.SetChallengeTask(DailyTaskType.FinishMaking, 1);
			GameGrid.SaveGridData();
		}
		else
		{
			GameGoods.DoneType = "刞炟\ud9dcő";
		}
	}

	public override void OnMakingSpeedup(int time)
	{
		if (GameGoods.GoodsState == GameGoodsState.Working && time > 0)
		{
			GameGoods.MakingStarTime -= time;
			GameGrid.SaveGridData();
			UpdateWorking(globalSpeedup: true);
		}
	}
}
