using TLF;
using UnityEngine;

public class AutoDropAttribute : GameGoodsAttributeBase
{
	public AutoDropAttribute(GameGoodsBase gameGoodsBase)
		: base(gameGoodsBase)
	{
	}

	public override void OnUpdate()
	{
		if (mGamegoodsBase == null || mGamegoodsBase.GameGoods == null || (Object)(object)mGamegoodsBase.GameGrid == (Object)null || !CanExecute() || mGamegoodsBase.GameGoods.MergeDropList == null || mGamegoodsBase.GameGoods.MergeDropList.Count <= 0)
		{
			return;
		}
		bool flag = false;
		while (mGamegoodsBase.GameGoods.MergeDropList.Count > 0)
		{
			int num = mGamegoodsBase.GameGoods.MergeDropList[0];
			GameLevelGrid nearbyEmptyGrid = mGamegoodsBase.GameGrid.GetNearbyEmptyGrid(mGamegoodsBase.GameGrid.GetGridId(), showEnoughTip: false, num);
			if ((Object)(object)nearbyEmptyGrid == (Object)null)
			{
				break;
			}
			mGamegoodsBase.GameGoods.MergeDropList.RemoveAt(0);
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(num, nearbyEmptyGrid);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(num, 1, gameGoodsBaseById.GameGoods);
			nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById, "숅끏澭瀆慐 Â叁");
			nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(mGamegoodsBase.GameGrid.GameItemParent);
			flag = true;
		}
		if (flag)
		{
			mGamegoodsBase.GameGrid.SaveGridData();
			ObjectManager.GetInstance().SaveToDisk();
		}
	}
}
