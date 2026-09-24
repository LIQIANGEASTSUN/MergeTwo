using TLF;
using UnityEngine;

public class GoodsDisposableSingle : GameGoodsBase
{
	public GoodsDisposableSingle(GameGoodsVo goodsVo, GameLevelGrid grid)
		: base(GameGoodsType.DisposableSingle, goodsVo, grid)
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
		int makingGoodsIDByMaterial = goodsInstrumentVO.GetMakingGoodsIDByMaterial(gameGoodsVo.goodsID);
		if (makingGoodsIDByMaterial > 0)
		{
			GameLevelDefine.ChangeUUIDCache(gameGoodsVo, -1);
			gameLevelGrid.ChangeGameGoodsVo(null, "숃끏憭挄灚?\u008a厉刟熟\ud9c0ő");
			GameGoods.MakingGoodsID = makingGoodsIDByMaterial;
			GameGoods.MakingStarTime = ServerTimeManager.CurrentTime();
			GameGoods.MakingTime = Singleton<GameLevelManager>.Instance.GetMachineMakingTimeByGoodsID(GameGoods.goodsID, makingGoodsIDByMaterial);
			GameGoods.MakeMaterials.Clear();
			GameGoods.MakeMaterials.Add(Singleton<GameLevelManager>.Instance.GetMaterialVoByGameGoods(gameGoodsVo));
			SpecialUse();
			EventManager.GetInstance().DispatchEvent(100122, mGoodsVo.goodsID);
			ObjectManager.GetInstance().gameLevelModel.RefreshGridNum = true;
			return true;
		}
		return false;
	}
}
