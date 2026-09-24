using System.Collections.Generic;
using TLF;
using UnityEngine;

public class GoodsManyInstrument : GameGoodsBase
{
	public GoodsManyInstrument(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.ManyMaterialInstrument, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.MakingAttribute, new MakingAttribute(this));
		AddAttribute(GameGoodsAttributeType.AutoDropAttribute, new AutoDropAttribute(this));
		InitializeAttribute();
	}

	public override void Use()
	{
		if (mGoodsVo != null && mGoodsVo.GoodsState == GameGoodsState.InitiativeProduce)
		{
			ExecuteAttribute();
			EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
		}
	}

	public override void SpecialUse()
	{
		if (mGoodsVo != null && mGoodsVo.GoodsState == GameGoodsState.CanWork)
		{
			SpecialExecuteAttribute();
		}
	}

	public override bool CheckEligible(object args)
	{
		GameLevelGrid gameLevelGrid = args as GameLevelGrid;
		if ((Object)(object)gameLevelGrid == (Object)null)
		{
			return false;
		}
		return CheckByMaterialB(gameLevelGrid);
	}

	private bool CheckByMaterialA(GameLevelGrid targetGrid)
	{
		if ((Object)(object)targetGrid == (Object)null)
		{
			return false;
		}
		if (mGoodsVo.GoodsState != GameGoodsState.CanWork)
		{
			return false;
		}
		if (GameGoods.InitiativeSurplusNumber <= 0)
		{
			return false;
		}
		if (GameGoods.MakeMaterials.Count >= 5)
		{
			return false;
		}
		GameGoodsVo gameGoodsVo = targetGrid.GetGameGoodsVo();
		if (gameGoodsVo == null)
		{
			return false;
		}
		if (gameGoodsVo.GoodsState == GameGoodsState.Bubble)
		{
			return false;
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
		if (goodsInstrumentVO == null)
		{
			return false;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < GameGoods.MakeMaterials.Count; i++)
		{
			list.Add(GameGoods.MakeMaterials[i].goodsID);
		}
		list.Add(gameGoodsVo.goodsID);
		if (goodsInstrumentVO.GetMakingGoodsByMaterials(list) > 0)
		{
			GameLevelDefine.ChangeUUIDCache(gameGoodsVo, -1);
			targetGrid.ChangeGameGoodsVo(null, "숃끏憭挄灚?\u008a厉刟熟\ud9c0ő");
			AddMaterial(Singleton<GameLevelManager>.Instance.GetMaterialVoByGameGoods(gameGoodsVo));
			GameLevelDefine.MachinePutinAnalytic("划擳\ud9ccœ");
			return true;
		}
		return false;
	}

	private bool CheckByMaterialB(GameLevelGrid targetGrid)
	{
		if ((Object)(object)targetGrid == (Object)null)
		{
			return false;
		}
		if (GameGoods.InitiativeSurplusNumber <= 0)
		{
			return false;
		}
		GameGoodsVo gameGoodsVo = targetGrid.GetGameGoodsVo();
		if (gameGoodsVo == null)
		{
			return false;
		}
		if (gameGoodsVo.GoodsState == GameGoodsState.Bubble)
		{
			return false;
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
		if (goodsInstrumentVO == null)
		{
			return false;
		}
		if (mGoodsVo.GoodsState == GameGoodsState.InitiativeProduce)
		{
			return CheckReplaceMaterial(targetGrid, gameGoodsVo, goodsInstrumentVO);
		}
		if (mGoodsVo.GoodsState != GameGoodsState.CanWork)
		{
			return false;
		}
		if (GameGoods.MakeMaterials.Count >= 5)
		{
			return false;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < GameGoods.MakeMaterials.Count; i++)
		{
			list.Add(GameGoods.MakeMaterials[i].goodsID);
		}
		list.Add(gameGoodsVo.goodsID);
		if (goodsInstrumentVO.GetMakingGoodsByMaterials(list) > 0)
		{
			GameLevelDefine.ChangeUUIDCache(gameGoodsVo, -1);
			targetGrid.ChangeGameGoodsVo(null, "숃끏憭挄灚?\u008a厉刟熟\ud9c0ő");
			AddMaterial(Singleton<GameLevelManager>.Instance.GetMaterialVoByGameGoods(gameGoodsVo));
			GameLevelDefine.MachinePutinAnalytic("划擳\ud9ccœ");
			return true;
		}
		return false;
	}

	public override bool MakingRevocation()
	{
		if (GameGoods.GoodsState != GameGoodsState.Working)
		{
			return false;
		}
		if (!GameGrid.ChangeGameGoodsState(GameGoodsState.CanWork))
		{
			GameGoods.GoodsState = GameGoodsState.CanWork;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < GameGoods.MakeMaterials.Count; i++)
		{
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.MakeMaterials[i].goodsID, 1);
			list.Add(GameGoods.MakeMaterials[i].goodsID);
		}
		GameGoods.ClearBuff();
		GameGrid.SaveGridData();
		GameLevelDefine.CheckUpdateOrderMatByGoods(list);
		return true;
	}

	public void AddMaterial(MakingMaterialVo targetGoodsVo)
	{
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
		if (goodsInstrumentVO != null)
		{
			GameGoods.MakeMaterials.Add(targetGoodsVo);
			int num = goodsInstrumentVO.CheckMaterialsMakingGoods(GameGoods.MakeMaterials);
			if (num > 0)
			{
				GameGoods.MakingGoodsID = num;
			}
			else
			{
				GameGoods.MakingGoodsID = 0;
			}
			GameGrid.UpdateGameLevelItem();
			GameGrid.SaveGridData();
			EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
			ObjectManager.GetInstance().gameLevelModel.MainOrderMachineAnalytics(1, GameGoods, targetGoodsVo.goodsID);
			GameLevelDefine.ShowGrayHintAnalytic(GameGoods, targetGoodsVo.goodsID);
			ObjectManager.GetInstance().SaveToDisk();
			ObjectManager.GetInstance().gameLevelModel.RefreshGridNum = true;
			MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.PutIntoMachine);
		}
	}

	private bool CheckReplaceMaterial(GameLevelGrid targetGrid, GameGoodsVo targetGoodsVo, IGoodsInstrumentVO instrumentVo)
	{
		if ((Object)(object)targetGrid == (Object)null || targetGoodsVo == null || instrumentVo == null)
		{
			return false;
		}
		if (instrumentVo.GetMakingGoodsByMaterials(new List<int> { targetGoodsVo.goodsID }) <= 0)
		{
			return false;
		}
		if (!Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(instrumentVo.GetCostItemList()))
		{
			return false;
		}
		Singleton<GameLevelManager>.Instance.DeductionOfConsumption(instrumentVo.GetCostItemList(), GameGrid);
		GameLevelDefine.ChangeUUIDCache(targetGoodsVo, -1);
		MakingMaterialVo materialVoByGameGoods = Singleton<GameLevelManager>.Instance.GetMaterialVoByGameGoods(targetGoodsVo);
		bool flag = false;
		int num = 0;
		if (GameGoods.CollectList.Count > 0)
		{
			num = GameGoods.CollectList[0];
			GameGoods.CollectList.RemoveAt(0);
		}
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
			GameLevelGrid gameLevelGrid = GameGrid.GetNearbyEmptyGrid(GameGrid.GetGridId());
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				gameLevelGrid = targetGrid;
			}
			else
			{
				targetGrid.ChangeGameGoodsVo(null, "숃끏憭挄灚?\u008a厉刟熟\ud9c0ő");
			}
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, gameLevelGrid);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
			gameLevelGrid.ChangeGameGoodsVo(gameGoodsBaseById, "녭孡㨸\0逗\ud972");
			gameLevelGrid.GetGameLevelItem()?.PlayItemFly(GameGrid.GameItemParent, 0.4f, isPlayDownEffect: true, 0, 1, makeComplete: true);
			flag = true;
			MonoSingleton<GuideManager>.Instance.CurrentProduceId = num;
			MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType_GuideTrans(GuideWeakType.InstrumentCanTake, ((Component)GameGrid.GetGameLevelItem()).transform);
			MonoSingleton<GuideWeakManager>.Instance.GetGuideModel.RecordInstrumentTake();
			ObjectManager.GetInstance().gameLevelModel.MainOrderMachineAnalytics(5, GameGoods, num);
			MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.TakeOutFromMachine);
		}
		GameGoods.MakingGoodsID = 0;
		if (GameGoods.CollectList.Count <= 0)
		{
			EventManager.GetInstance().DispatchEvent(100166);
		}
		Singleton<GameLevelManager>.Instance.SaveGameMapToDisk();
		AddMaterial(materialVoByGameGoods);
		GameLevelDefine.MachinePutinAnalytic("划擳\ud9ccœ");
		if (flag)
		{
			GameGrid?.GetGameLevelItem()?.PlayOnceAnim("숏끜徿焐敗&\u0082厁숏끂憰渐楫4\u008a厉닲ï赴", "숏끛璲弐瑛'Ö叕숏끛澲搐浓=Â叁뻯", 1f);
		}
		return true;
	}
}
