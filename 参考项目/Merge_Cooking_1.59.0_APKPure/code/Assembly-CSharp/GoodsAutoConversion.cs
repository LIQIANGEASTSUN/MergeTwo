using System.Collections.Generic;
using TLF;
using UnityEngine;

public class GoodsAutoConversion : GameGoodsBase
{
	public GoodsAutoConversion(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.AutoConversion, goodsVo, grid)
	{
		AddAttribute(GameGoodsAttributeType.AutoConversionAttribute, new AutoConversionAttribute(this));
		InitializeAttribute();
	}

	public override bool CheckEligible(object args)
	{
		GameLevelGrid gameLevelGrid = args as GameLevelGrid;
		if ((Object)(object)gameLevelGrid == (Object)null)
		{
			return false;
		}
		if (IGoodsBaseVo.IsDisabled(mGoodsVo.GoodsState))
		{
			return false;
		}
		if (mGoodsType != GameGoodsType.AutoConversion)
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
		List<IGoodsAutoConversionVO> autoConversionVos = GameLevelDefine.GetAutoConversionVos(GameGoods.goodsID);
		if (autoConversionVos == null || autoConversionVos.Count == 0)
		{
			return false;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < GameGoods.MakeMaterials.Count; i++)
		{
			list.Add(GameGoods.MakeMaterials[i].goodsID);
		}
		list.Add(gameGoodsVo.goodsID);
		int num = 0;
		for (int j = 0; j < autoConversionVos.Count; j++)
		{
			if (autoConversionVos[j].CheckContainByMaterials(list))
			{
				num = autoConversionVos[j].conversionGoodsID;
				break;
			}
		}
		if (num > 0)
		{
			int goodsID = gameGoodsVo.goodsID;
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsID, -1, gameGoodsVo);
			gameLevelGrid.ChangeGameGoodsVo(null, "숅끏溭瘆慗=¾厽녥屲㨈\0逞\ud97a");
			GameGoods.MakeMaterials.Add(Singleton<GameLevelManager>.Instance.GetMaterialVoByGameGoods(gameGoodsVo));
			bool flag = false;
			for (int k = 0; k < autoConversionVos.Count; k++)
			{
				if (autoConversionVos[k].CheckMaterialsMakingGoods(GameGoods.MakeMaterials) > 0)
				{
					GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(autoConversionVos[k].conversionGoodsID, GameGrid);
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(autoConversionVos[k].conversionGoodsID, 1, gameGoodsBaseById.GameGoods);
					GameGrid.ChangeGameGoodsVo(gameGoodsBaseById, "숅끏溭瘆慗=¾厽녥屲㨈\0逞\ud97a");
					flag = true;
					break;
				}
			}
			GameGrid.parentLogic?.CheckOrderUpdate(goodsID);
			GameGrid.UpdateGameLevelItem();
			if (flag)
			{
				GameGrid.PlayItemShow();
			}
			GameGrid.SaveGridData();
			ObjectManager.GetInstance().SaveToDisk();
			EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
			return true;
		}
		return false;
	}
}
