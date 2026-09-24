using System.Collections.Generic;
using TLF;
using UnityEngine;

public class GoodsDisposableMany : GameGoodsBase
{
	public GoodsDisposableMany(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.DisposableMany, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.MakingAttribute, new MakingAttribute(this));
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
		GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
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
			gameLevelGrid.ChangeGameGoodsVo(null, "숃끏憭挄灚?\u008a厉刟熟\ud9c0ő");
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
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(GameGoods.goodsID);
		if (goodsInstrumentVO != null)
		{
			GameGoods.InitiativeSurplusNumber = goodsInstrumentVO.capacity;
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
			ObjectManager.GetInstance().gameLevelModel.RefreshGridNum = true;
			ObjectManager.GetInstance().SaveToDisk();
			MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.PutIntoMachine);
		}
	}
}
