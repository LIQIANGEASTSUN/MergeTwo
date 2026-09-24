using System.Collections.Generic;
using TLF;
using UnityEngine;

public class PassiveConversionAttribute : GameGoodsAttributeBase
{
	public PassiveConversionAttribute(GameGoodsBase gameGoodsBase)
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
			Log.E(string.Format("꺬\u1733캧ᙛꆟ裺잶\a빊≓턘⁋筏bú叹─⓸劲凁ɮ", mGamegoodsBase.GameGoods.goodsID));
		}
		else if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown || mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.HideCoolDown)
		{
			if (mGamegoodsBase.GameGoods.PassiveCDStarTime <= 0)
			{
				mGamegoodsBase.GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
			}
			if (mGamegoodsBase.GameGoods.PassiveCDStarTime > 0)
			{
				int passiveCDRound = GetPassiveCDRound(passiveProduceById);
				if (passiveCDRound > 0)
				{
					mGamegoodsBase.GameGrid.SetCDProgress(passiveCDRound, initiative: false);
					UpdateProduceNum(passiveProduceById.frequency * passiveCDRound);
				}
				else
				{
					int cDTime = passiveProduceById.GetCDTime(mGamegoodsBase.GameGoods.PassiveCDIndex);
					float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.PassiveCDStarTime, cDTime);
					mGamegoodsBase.GameGrid.SetCDProgress(progress, initiative: false);
				}
			}
		}
		else
		{
			if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown)
			{
				return;
			}
			mGamegoodsBase.GameGoods.PassiveSurplusNumber = passiveProduceById.initialNumber;
			if (mGamegoodsBase.GameGoods.PassiveSurplusNumber <= 0)
			{
				mGamegoodsBase.GameGoods.PassiveSurplusNumber = 0;
				mGamegoodsBase.GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
				mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.CoolDown;
				GoodsAnalytic(2, 1);
			}
			else
			{
				if (mGamegoodsBase.GameGoods.PassiveSurplusNumber >= passiveProduceById.capacity)
				{
					mGamegoodsBase.GameGoods.PassiveSurplusNumber = passiveProduceById.capacity;
				}
				mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.AutoProduce;
			}
		}
	}

	public override void OnExecute(bool normal = true)
	{
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null || mGamegoodsBase.GameGrid.IsDrag || mGamegoodsBase.GameGrid.IsPlayCdAnim || mGamegoodsBase.GameGrid.GlobalSpeedupState)
		{
			return;
		}
		IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (passiveProduceById == null)
		{
			return;
		}
		if (mGamegoodsBase.GameGoods.PassiveUseTotal >= passiveProduceById.capacity)
		{
			UpdateProduceNum(0);
		}
		else
		{
			if (mGamegoodsBase.GameGoods.PassiveSurplusNumber <= 0)
			{
				return;
			}
			GameLevelGrid emptyGridAroundID = mGamegoodsBase.GameGrid.GetEmptyGridAroundID(mGamegoodsBase.GameGrid.GetGridId());
			if (!((Object)(object)emptyGridAroundID == (Object)null) && Singleton<GameLevelManager>.Instance.WhetherSatisfiesCost(passiveProduceById.GetCostItemList()))
			{
				Singleton<GameLevelManager>.Instance.DeductionOfConsumption(passiveProduceById.GetCostItemList(), mGamegoodsBase.GameGrid);
				int passiveConversionGoodsID = Singleton<GameLevelManager>.Instance.GetPassiveConversionGoodsID(mGamegoodsBase.GameGoods);
				if (passiveConversionGoodsID > 0)
				{
					GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(passiveConversionGoodsID, emptyGridAroundID);
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(passiveConversionGoodsID, 1, gameGoodsBaseById.GameGoods);
					emptyGridAroundID.ChangeGameGoodsVo(gameGoodsBaseById, "癰r4끤w\udc31仍");
				}
				UpdateProduceNum(-1);
				if (!mGamegoodsBase.GameGrid.CheckEmptyGridEnough(1))
				{
					mGamegoodsBase.GameGrid.GameMapFull();
				}
				Singleton<GameLevelManager>.Instance.PlayAudio(2, 0, IndependentType.None, GameGoods.goodsID);
				emptyGridAroundID.GetGameLevelItem()?.PlayItemFly(mGamegoodsBase.GameGrid.GameItemParent);
			}
		}
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null)
		{
			return;
		}
		if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown || mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.HideCoolDown)
		{
			IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(mGamegoodsBase.GameGoods.goodsID);
			if (passiveProduceById == null || mGamegoodsBase.GameGoods.PassiveCDStarTime <= 0)
			{
				return;
			}
			int cDTime = passiveProduceById.GetCDTime(mGamegoodsBase.GameGoods.PassiveCDIndex);
			float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.PassiveCDStarTime, cDTime);
			mGamegoodsBase.GameGrid.SetCDProgress(progress, initiative: false);
			if (ServerTimeManager.VerifyTime(mGamegoodsBase.GameGoods.PassiveCDStarTime, cDTime))
			{
				UpdateProduceNum(passiveProduceById.frequency);
				mGamegoodsBase.GameGoods.PassiveCDIndex++;
				if (mGamegoodsBase.GameGoods.PassiveCDIndex >= passiveProduceById.GetCDList().Count)
				{
					mGamegoodsBase.GameGoods.PassiveCDIndex = 0;
				}
			}
			else
			{
				mGamegoodsBase.GameGoods.DoneType = "刞炟\ud9dcő";
			}
		}
		else if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.AutoProduce && !MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			if (CanExecute())
			{
				OnExecute();
			}
		}
		else if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.Bubble)
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
		else if (mGamegoodsBase.GameGoods.GoodsState == GameGoodsState.CoolDown && mGamegoodsBase.GameGoods.PassiveCDStarTime > 0)
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
				float progress = ServerTimeManager.TimeProgress(mGamegoodsBase.GameGoods.PassiveCDStarTime, cDTime);
				mGamegoodsBase.GameGrid.SetGlobalSpeedupState(state: true, progress, isPassive: true);
			}
		}
	}

	public void UpdateProduceNum(int changeNum)
	{
		bool flag = false;
		IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(mGamegoodsBase.GameGoods.goodsID);
		if (passiveProduceById == null)
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
				GoodsAnalytic(2, 2);
			}
			int num = passiveProduceById.capacity - mGamegoodsBase.GameGoods.PassiveSurplusNumber;
			if (num > changeNum)
			{
				mGamegoodsBase.GameGoods.PassiveSurplusNumber += changeNum;
			}
			else if (num > 0)
			{
				mGamegoodsBase.GameGoods.PassiveSurplusNumber += num;
			}
		}
		else
		{
			mGamegoodsBase.GameGoods.PassiveUseTotal += Mathf.Abs(changeNum);
			mGamegoodsBase.GameGoods.PassiveSurplusNumber += changeNum;
		}
		if (mGamegoodsBase.GameGoods.PassiveSurplusNumber < 0)
		{
			mGamegoodsBase.GameGoods.PassiveSurplusNumber = 0;
		}
		if (mGamegoodsBase.GameGoods.PassiveUseTotal >= passiveProduceById.capacity)
		{
			List<int> conversionList = passiveProduceById.GetConversionList();
			if (conversionList.Count > 0)
			{
				bool flag2 = true;
				int num2 = conversionList.Count - 1;
				if (num2 > 0)
				{
					flag2 = mGamegoodsBase.GameGrid.CheckEmptyGridEnough(num2);
				}
				if (flag2)
				{
					int goodsID = mGamegoodsBase.GameGoods.goodsID;
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(mGamegoodsBase.GameGoods.goodsID, -1, mGamegoodsBase.GameGoods);
					for (int i = 0; i < conversionList.Count; i++)
					{
						if (i == 0)
						{
							GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(conversionList[i], mGamegoodsBase.GameGrid);
							Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(conversionList[i], 1, gameGoodsBaseById.GameGoods);
							mGamegoodsBase.GameGrid.ChangeGameGoodsVo(gameGoodsBaseById, "순끕玷椝捑 Ò发愽䡶");
							mGamegoodsBase.GameGrid.EmptyParentSelectGrid();
							continue;
						}
						GameLevelGrid nearbyEmptyGrid = mGamegoodsBase.GameGrid.GetNearbyEmptyGrid(mGamegoodsBase.GameGrid.GetGridId(), showEnoughTip: false, conversionList[i]);
						if ((Object)(object)nearbyEmptyGrid == (Object)null)
						{
							return;
						}
						GameGoodsBase gameGoodsBaseById2 = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(conversionList[i], nearbyEmptyGrid);
						Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(conversionList[i], 1, gameGoodsBaseById2.GameGoods);
						nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById2, "순끕玷椝捑 Ò发愽䡶");
						nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(mGamegoodsBase.GameGrid.GameItemParent);
					}
					mGamegoodsBase.GameGrid.parentLogic?.CheckOrderUpdate(goodsID);
				}
			}
			else
			{
				int goodsID2 = mGamegoodsBase.GameGoods.goodsID;
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(mGamegoodsBase.GameGoods.goodsID, -1, mGamegoodsBase.GameGoods);
				mGamegoodsBase.GameGrid.EmptyParentSelectGrid();
				mGamegoodsBase.GameGrid.ChangeGameGoodsVo(null, "순끕玷椝捑 Ò发愽䡶");
				mGamegoodsBase.GameGrid.parentLogic?.CheckOrderUpdate(goodsID2);
			}
			flag = true;
		}
		else if (mGamegoodsBase.GameGoods.PassiveSurplusNumber <= 0)
		{
			mGamegoodsBase.GameGoods.PassiveSurplusNumber = 0;
			mGamegoodsBase.GameGoods.PassiveCDStarTime = ServerTimeManager.CurrentTime();
			if (!mGamegoodsBase.GameGrid.ChangeGameGoodsState(GameGoodsState.CoolDown))
			{
				mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.CoolDown;
			}
			GoodsAnalytic(2, 1);
		}
		else if (!mGamegoodsBase.GameGrid.ChangeGameGoodsState(GameGoodsState.AutoProduce))
		{
			mGamegoodsBase.GameGoods.GoodsState = GameGoodsState.AutoProduce;
		}
		if (mGamegoodsBase != null && (Object)(object)mGamegoodsBase.GameGrid != (Object)null)
		{
			mGamegoodsBase.GameGrid.SaveGridData();
		}
		if (flag)
		{
			ObjectManager.GetInstance().SaveToDisk();
		}
	}
}
