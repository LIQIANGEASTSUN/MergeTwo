using TLF;
using UnityEngine;

public class CollectAttribute : GameGoodsAttributeBase
{
	public CollectAttribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (OnResume() && GameGoods.GoodsState != GameGoodsState.CanCollect)
		{
			GameGoods.GoodsState = GameGoodsState.CanCollect;
		}
	}

	public override void OnExecute(bool normal = true)
	{
		if (mGamegoodsBase == null || GameGoods == null)
		{
			return;
		}
		IGoodsCollectVo collectVo = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(GameGoods.goodsID);
		if (collectVo == null)
		{
			return;
		}
		if (collectVo.itemId == 1005)
		{
			GameLevelDefine.ProduceAnalytics(3, null, collectVo.amount, 0, GameGoods);
			GameGrid.CreatorSpeedup(collectVo.amount);
			EventManager.GetInstance().DispatchEvent(100195, GameGrid, 1);
			DefiniteChange();
		}
		else if (collectVo.itemId == 1012)
		{
			GameGrid.CookingSpeedup(collectVo.amount);
			EventManager.GetInstance().DispatchEvent(100195, GameGrid, 2);
			DefiniteChange();
		}
		else if (collectVo.itemId == 1013)
		{
			if (ObjectManager.GetInstance().feverFlambeModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff())
			{
				ViewManager.Instance.ShowTip("숆끛榷琇扝?ª厩수끔徼搙敓+\u0082厁匡橳ā诀鬱");
				return;
			}
			if (ObjectManager.GetInstance().feverRelayModel.IsActiveBuff() || ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff())
			{
				ViewManager.Instance.ShowTip("숆끛榷琇扝?ª厩수끔徼搙敓+\u0082厁匡橳ā诀鬲");
				return;
			}
			if (ObjectManager.GetInstance().airPlaneModel.IsInAirPlane())
			{
				ViewManager.Instance.ShowTip("숆끛榷琇扝?ª厩수끔徼搙敓+\u0082厁匡橳ā诀鬳");
				return;
			}
			if (ObjectManager.GetInstance().timelimitMultModel.IsIn2Activity())
			{
				ViewManager.Instance.ShowTip("숃끓䊴攄䱀`\u000e匍숃끥璕氄瑙;Ö叕숯끉犪朰敚7Î反뻥");
				return;
			}
			if (ObjectManager.GetInstance().timelimitMultModel.IsIn4Activity())
			{
				ViewManager.Instance.ShowTip("숃끓䊴攄䱀`\u000e匍숃끥璕氄瑙;Ö叕숯끉犪朰敚7Î反뻥");
				return;
			}
			if (ObjectManager.GetInstance().timelimitMultModel.IsIn8Activity())
			{
				ViewManager.Instance.ShowTip("숃끓䊴攄䱀`\u000e匍숃끥璕氄瑙;Ö叕숯끉犪朰敚7Î反뻥");
				return;
			}
			if (ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() > ConsumptionRate.Double)
			{
				ManytimesInfiniteEnergyHintData data = new ManytimesInfiniteEnergyHintData
				{
					GoodsId = GameGoods.goodsID,
					rate = ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate(),
					SureCallback = () =>
					{
						ObjectManager.GetInstance().doubleConsumptionModel.SetDoubleConsumptionState(state: true);
						if (ObjectManager.GetInstance().doubleConsumptionModel.FourtimesDropState)
						{
							ObjectManager.GetInstance().doubleConsumptionModel.SetFourtimesDropState(state: false);
							ObjectManager.GetInstance().doubleConsumptionModel.SetInfiniteEnergyOpenRate(ConsumptionRate.Fourtimes);
						}
						else if (ObjectManager.GetInstance().doubleConsumptionModel.EighttimesOpenState)
						{
							ObjectManager.GetInstance().doubleConsumptionModel.SetEighttimesDropState(state: false);
							ObjectManager.GetInstance().doubleConsumptionModel.SetInfiniteEnergyOpenRate(ConsumptionRate.Eighttimes);
						}
						GameLevelDefine.ClearOrderNeedLowLevelGoods();
						EventManager.GetInstance().DispatchEvent<Transform>(100194, GameGrid.GameItemParent);
						ObjectManager.GetInstance().itemDataModel.SetInfiniteEnergy(collectVo.amount, collectVo.goodsID);
						DefiniteChange();
					}
				};
				if (ABTestSwitchDefine.GoodsDetailsSwitch())
				{
					ViewManager.Instance.ShowView<ManytimesInfiniteEnergyHint_newLogic>(data, ViewManager.ViewLayer.POP, animate: true);
				}
				else
				{
					ViewManager.Instance.ShowView<ManytimesInfiniteEnergyHintLogic>(data, ViewManager.ViewLayer.POP, animate: true);
				}
			}
			else
			{
				EventManager.GetInstance().DispatchEvent<Transform>(100194, GameGrid.GameItemParent);
				ObjectManager.GetInstance().itemDataModel.SetInfiniteEnergy(collectVo.amount, collectVo.goodsID);
				DefiniteChange();
			}
		}
		else if (collectVo.itemId == 1026)
		{
			if (!GameGrid.CreatorAddProduceNum(GoodsBaseVo))
			{
				ViewManager.Instance.ShowTip("숚끈玶攛火'Ò发医橨ā讹酴");
				return;
			}
			DefiniteChange();
		}
		else if (collectVo.itemId == 1027)
		{
			if (!GameGrid.GoodsRandomUpgrade(GoodsBaseVo))
			{
				ViewManager.Instance.ShowTip("숚끈玶攛火'Ò发医橨ā讹酴");
				return;
			}
			DefiniteChange();
		}
		else if (collectVo.itemId == 1030)
		{
			if (!GameGrid.GoodsInstrumentSpeedup(collectVo.amount))
			{
				ViewManager.Instance.ShowTip("숵끉禼猶畀=ê叩숆끕璵椇捑1Ö叕숵끔滫琶潜;¾厽");
				return;
			}
			DefiniteChange();
		}
		else
		{
			int num = -1;
			if (collectVo.itemId == 1002)
			{
				num = 26;
			}
			if (collectVo.itemId == 1003)
			{
				num = 27;
			}
			if (collectVo.itemId == 1001)
			{
				num = 28;
			}
			if (num > 0)
			{
				MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideID(num);
			}
			if (true)
			{
				GameGrid.CollectFly(collectVo.itemId, collectVo.amount);
				DefiniteChange();
				ObjectManager.GetInstance().itemDataModel.ChangeItemNum(collectVo.itemId, collectVo.amount, needNotice: false, 7);
			}
			else
			{
				DefiniteChange();
			}
		}
		MarkCollectStrongSignal(collectVo);
		EItemID itemId = (EItemID)collectVo.itemId;
		if ((uint)(itemId - 1003) <= 1u || itemId == EItemID.CookingCard)
		{
			MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.CollectGoodsReward);
		}
	}

	private void MarkCollectStrongSignal(IGoodsCollectVo collectVo)
	{
		if (collectVo == null)
		{
			return;
		}
		switch ((EItemID)collectVo.itemId)
		{
		case EItemID.Lightning:
		case EItemID.FireworksItem:
			MonoSingleton<PlayerStateManager>.Instance.MarkStrongSignal(string.Format("㛒ﳆā诀荽", (EItemID)collectVo.itemId));
			break;
		case EItemID.Money:
		case EItemID.CookingCard:
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(collectVo.goodsID);
			if (goodsBaseVoById != null && Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVoById.series, goodsBaseVoById.level + 1) != null)
			{
				MonoSingleton<PlayerStateManager>.Instance.MarkStrongSignal(string.Format("Ꝛ䛼庢\ue15b㙉z쭾㵽䇵伱", (EItemID)collectVo.itemId));
			}
			break;
		}
		}
	}

	private void DefiniteChange()
	{
		if (GameGoods == null || (Object)(object)GameGrid == (Object)null || GoodsBaseVo == null)
		{
			return;
		}
		GameGrid.EmptyParentSelectGrid();
		Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.goodsID, -1, GameGoods);
		GameLevelDefine.MapGoodsAnalytics(GameGoods.goodsID, 1, 2);
		if (GameLevelDefine.IsShowGoodsStackable(GoodsBaseVo, GameGoods))
		{
			GameGoods.AddGoodsUses(-1);
			Singleton<GameLevelManager>.Instance.StackUseAnalytic(GameGoods, 1);
			if (GameGoods.GoodsUses <= 0)
			{
				GameGrid.ChangeGameGoodsVo(null, "晣o4끬g崱㻜");
				return;
			}
			GameGrid.UpdateGameLevelItem();
			GameGrid.SaveGridData();
		}
		else
		{
			GameGrid.ChangeGameGoodsVo(null, "晣o4끬g崱㻜");
		}
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase != null && GameGoods != null && !((Object)(object)GameGrid == (Object)null) && GameGoods.GoodsState == GameGoodsState.Bubble)
		{
			OnBubbleUpdate();
		}
	}
}
