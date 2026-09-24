using TLF;
using UnityEngine;

public class InitiativeConversion2Attribute : GameGoodsAttributeBase
{
	public InitiativeConversion2Attribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnInitialize()
	{
		if (OnResume() && GameGoods.GoodsState != GameGoodsState.InitiativeProduce)
		{
			GameGoods.GoodsState = GameGoodsState.InitiativeProduce;
		}
	}

	public override void OnExecute(bool normal = true)
	{
		if (mGamegoodsBase == null || GameGoods == null || (Object)(object)GameGrid == (Object)null)
		{
			return;
		}
		if (GameGoods.residualValue <= 0f)
		{
			RemoveGoods();
			return;
		}
		ICleverBoxDropGoodsVo cleverBoxDropGoodsID = Singleton<GameLevelManager>.Instance.GetCleverBoxDropGoodsID(GameGoods);
		if (cleverBoxDropGoodsID != null)
		{
			GameLevelGrid gameLevelGrid = null;
			bool flag = false;
			if (IsSelectSelfGrid(GameGoods.goodsID, GameGoods.residualValue - cleverBoxDropGoodsID.value))
			{
				gameLevelGrid = GameGrid;
				flag = true;
			}
			else
			{
				gameLevelGrid = mGamegoodsBase.GameGrid.GetNearbyEmptyGrid(mGamegoodsBase.GameGrid.GetGridId(), showEnoughTip: true, cleverBoxDropGoodsID.goodsID, checkPlayerState: true);
			}
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				return;
			}
			if (flag)
			{
				int goodsID = GameGoods.goodsID;
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsID, -1, GameGoods);
				GameGrid.EmptyParentSelectGrid();
				GameGrid.parentLogic?.CheckOrderUpdate(goodsID);
			}
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(cleverBoxDropGoodsID.goodsID, gameLevelGrid);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(cleverBoxDropGoodsID.goodsID, 1, gameGoodsBaseById.GameGoods);
			gameLevelGrid.ChangeGameGoodsVo(gameGoodsBaseById, "癰r4끤w\udc31仍");
			if (flag)
			{
				gameLevelGrid.GetGameLevelItem()?.PlayItemShow();
			}
			else
			{
				gameLevelGrid.GetGameLevelItem()?.PlayItemFly(GameGrid.GameItemParent);
			}
			MonoSingleton<GuideManager>.Instance.CurrentProduceId = cleverBoxDropGoodsID.goodsID;
			gameLevelGrid.AutoSelectGrid();
			if (!flag)
			{
				GameGoods.residualValue -= cleverBoxDropGoodsID.value;
				if (GameGoods.residualValue <= 0f)
				{
					RemoveGoods();
				}
				else if (Singleton<GameLevelManager>.Instance.GetCleverBoxDropGoodsID(GameGoods) == null)
				{
					RemoveGoods();
				}
			}
			ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, cleverBoxDropGoodsID.goodsID);
			ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, cleverBoxDropGoodsID.goodsID);
			ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, cleverBoxDropGoodsID.goodsID);
			ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, cleverBoxDropGoodsID.goodsID);
			MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_Creater(GameGoods.goodsID);
			MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GoodsBox(2);
			if (GameGoods != null && GameGoods.goodsID != 100360)
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
			if (GameLevelDefine.OrderNeedLowLevelGoods.Contains(cleverBoxDropGoodsID.goodsID))
			{
				GameLevelDefine.ClearOrderNeedLowLevelGoods();
			}
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, GameGrid.GameItemParent, cleverBoxDropGoodsID.goodsID, 0f);
			EventManager.GetInstance().DispatchEvent(203244);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, GameGrid.GameItemParent, cleverBoxDropGoodsID.goodsID, 0f);
		}
		else
		{
			RemoveGoods();
		}
	}

	private void RemoveGoods()
	{
		//IL_0018: Unknown result type (might be due to invalid IL or missing references)
		if (IGoodsBaseVo.IsTreasureBox(GoodsBaseVo.type))
		{
			GameGrid.ItemDisappearAnim();
		}
		int goodsID = GameGoods.goodsID;
		Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GameGoods.goodsID, -1, GameGoods);
		GameGrid.EmptyParentSelectGrid();
		GameGrid.ChangeGameGoodsVo(null, "순끕玷椝捑 Ò发愽䡶");
		GameGrid.parentLogic?.CheckOrderUpdate(goodsID);
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase != null && GameGoods != null)
		{
			_ = (Object)(object)GameGrid == (Object)null;
		}
	}

	private bool IsSelectSelfGrid(int boxID, float residualValue)
	{
		if (GameGrid.CheckEmptyGridEnough(1))
		{
			return false;
		}
		if (Singleton<GameLevelManager>.Instance.GetCleverBoxDropByGoodsIDAndValue(boxID, residualValue) != null)
		{
			return false;
		}
		return true;
	}
}
