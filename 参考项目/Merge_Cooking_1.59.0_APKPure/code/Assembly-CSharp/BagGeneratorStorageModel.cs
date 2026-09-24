using System;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
using TLF;
using UnityEngine;

public class BagGeneratorStorageModel : BaseModel
{
	private readonly string m_Key = "숵끻亞䔶䉳\u0017>匽숥끻厍否剦\rR卑숭끨䮘䔮佱\r2匱뻅";

	public BagGeneratorStorageVO m_VO;

	public List<int> guideGoods = new List<int>();

	private List<BagItemShowVo> bagItems = new List<BagItemShowVo>();

	public Dictionary<int, int> showAniGoodsDic = new Dictionary<int, int>();

	public bool OpenState
	{
		get
		{
			if (m_VO != null)
			{
				return m_VO.openState;
			}
			return false;
		}
	}

	public bool HardSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_Generator_Retire);

	public bool IsNewUser
	{
		get
		{
			if (m_VO != null)
			{
				return m_VO.isNewUser;
			}
			return false;
		}
	}

	public bool BagNewUIState
	{
		get
		{
			if (m_VO != null)
			{
				return m_VO.BagNewUIState;
			}
			return false;
		}
	}

	public override void InitModel(bool timingSave = false)
	{
		m_VO = new BagGeneratorStorageVO();
		string item = GetItem(m_Key);
		if (!string.IsNullOrEmpty(item))
		{
			try
			{
				m_VO = JsonConvert.DeserializeObject<BagGeneratorStorageVO>(item);
				BagGenetatorAnalytic();
			}
			catch
			{
				Log.E("䯎ឪÙ湼\ue3f8聗닆〔\ue81f趮踡" + item);
				BagGenetatorErrorAnalytic(item);
			}
		}
		bagItems.AddRange(StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.list);
		bagItems.Sort((BagItemShowVo x, BagItemShowVo y) => x.unlockRestaurant.CompareTo(y.unlockRestaurant));
		showAniGoodsDic.Clear();
		EventManager.GetInstance().AddEventListener(100104, CheckOpenState);
		EventManager.GetInstance().AddEventListener<string>(202009, GuideEvent);
	}

	private void CheckOpenState()
	{
		CheckOpenBagNewUI();
		if (m_VO.openState)
		{
			AddGeneratorToBag();
			CheckBagStorage();
			return;
		}
		bool flag = MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_Generator_Retire);
		bool flag2 = MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_Generator_Retire);
		if (((m_VO.BagNewUIState && ABTestSwitchDefine.GeneratorCollectionSwitch()) & flag & flag2) && ObjectManager.GetInstance().gameLevelModel.CheckGeneratorCollectionOpen())
		{
			m_VO.openState = true;
			m_VO.isNewUser = true;
			SaveUserData();
			GenetatorRetireAnalytic("숅끔徵爆畗9\u0082厁匡橴ā诉酥");
			AddGeneratorToBag();
			CheckBagStorage();
			EventManager.GetInstance().DispatchEvent(100047);
		}
	}

	private void AddGeneratorToBag()
	{
		List<GameGoodsVo> allCollectGeneratorFromBag = ObjectManager.GetInstance().gameLevelModel.GetAllCollectGeneratorFromBag();
		if (allCollectGeneratorFromBag == null || allCollectGeneratorFromBag.Count <= 0)
		{
			return;
		}
		List<Dictionary<string, object>> list = new List<Dictionary<string, object>>();
		foreach (GameGoodsVo item in allCollectGeneratorFromBag)
		{
			if (!m_VO.m_bagGeneratorStorageDic.ContainsKey(item.goodsID))
			{
				list.Add(new Dictionary<string, object> { { "숅끥玾弆杛6Ò发漻䉼", item.goodsID } });
			}
			AddGameGoodsVo(item, isSave: false);
		}
		EventManager.GetInstance().DispatchEvent(100047);
		SaveUserData();
		GenetatorRetireAnalytic("숙끓披愚晀\r\u008e厍숅끥断理杫 \u009a厙냦ó赴", list);
	}

	private void CheckBagStorage()
	{
		if (m_VO.m_bagGeneratorStorageDic == null)
		{
			m_VO.m_bagGeneratorStorageDic = new Dictionary<int, List<GameGoodsVo>>();
		}
		List<int> list = new List<int>();
		bool flag = MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_Generator_Retire);
		foreach (KeyValuePair<int, List<GameGoodsVo>> item in m_VO.m_bagGeneratorStorageDic)
		{
			if (item.Value != null && item.Value.Count > 0 && (StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(item.Key) == null || !flag))
			{
				list.Add(item.Key);
			}
		}
		foreach (int item2 in list)
		{
			ObjectManager.GetInstance().gameLevelModel.AddTemporaryItem(item2, m_VO.m_bagGeneratorStorageDic[item2].Count);
			m_VO.m_bagGeneratorStorageDic.Remove(item2);
		}
		if (!flag)
		{
			m_VO.openState = false;
		}
		if (list.Count > 0 || !flag)
		{
			EventManager.GetInstance().DispatchEvent(100018);
			EventManager.GetInstance().DispatchEvent(100047);
			SaveUserData();
		}
	}

	public void CheckOpenStateByGoodID(int goodID)
	{
		if (m_VO.openState)
		{
			return;
		}
		bool flag = MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_Generator_Retire);
		bool flag2 = MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_Generator_Retire);
		BagItemShowVo item = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(goodID);
		if (((m_VO.BagNewUIState && ABTestSwitchDefine.GeneratorCollectionSwitch()) & flag & flag2) && item != null && ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(item.unlockRestaurant))
		{
			m_VO.openState = true;
			m_VO.isNewUser = true;
			SaveUserData();
			GenetatorRetireAnalytic("숅끔徵爆畗9\u0082厁匡橴ā诉酥");
			List<BagItemShowVo> list = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.list.FindAll((BagItemShowVo a) => a.unlockRestaurant <= ObjectManager.GetInstance().restaurantLevelModel.CurRestaurantID);
			ObjectManager.GetInstance().userDataModel.ShowGeneratorBagTotal += list.Count;
			ObjectManager.GetInstance().userDataModel.UnlockGeneratorBagTotal += list.Count;
			AddNewBagItemShowTab(list);
			EventManager.GetInstance().DispatchEvent(100047);
		}
	}

	public void CheckOpenBagNewUI()
	{
		if (!m_VO.BagNewUIState)
		{
			bool flag = MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_Bag_NewUI);
			if (ABTestSwitchDefine.NewBagUISwitch() & flag)
			{
				m_VO.BagNewUIState = true;
				SaveUserData();
			}
		}
	}

	public void CheckUnlockNewGenerator(int restaurantId)
	{
		List<BagItemShowVo> list = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.list.FindAll((BagItemShowVo a) => a.unlockRestaurant == restaurantId);
		if (OpenState && list != null && list.Count > 0)
		{
			ObjectManager.GetInstance().userDataModel.ShowGeneratorBagTotal += list.Count;
			ObjectManager.GetInstance().userDataModel.UnlockGeneratorBagTotal += list.Count;
			AddNewBagItemShowTab(list);
			GenetatorRetireAnalytic("숅끔徵爆畗9\u0082厁匡橴ā诉酥");
		}
	}

	public bool CheckCanAddGood(GameGoodsVo vo)
	{
		if (vo == null)
		{
			return false;
		}
		if (!m_VO.openState)
		{
			return false;
		}
		BagItemShowVo item = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(vo.goodsID);
		if (item == null)
		{
			return false;
		}
		return ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(item.unlockRestaurant);
	}

	public void AddGameGoodsVo(GameGoodsVo vo, bool isSave = true)
	{
		string action;
		if (m_VO.m_bagGeneratorStorageDic.ContainsKey(vo.goodsID))
		{
			m_VO.m_bagGeneratorStorageDic[vo.goodsID].Add(vo);
			action = "숃끕璿弄湆!Ö叕수끕榆爙瑑&ª厩뻹";
		}
		else
		{
			m_VO.m_bagGeneratorStorageDic.Add(vo.goodsID, new List<GameGoodsVo> { vo });
			action = "숙끓涫攚晀\rº厹숵끝徼父牀=\u0082厁匡橴ā诉酥";
		}
		AddShowAniGoods(vo.goodsID);
		GenetatorRetireAnalytic(action, new List<Dictionary<string, object>>
		{
			new Dictionary<string, object> { { "숅끥玾弆杛6Ò发漻䉼", vo.goodsID } }
		});
		if (isSave)
		{
			SaveUserData();
		}
	}

	public void RemoveGameGoodsVo(int id)
	{
		if (m_VO != null && m_VO.m_bagGeneratorStorageDic.ContainsKey(id) && m_VO.m_bagGeneratorStorageDic[id].Count > 0)
		{
			m_VO.m_bagGeneratorStorageDic[id].RemoveAt(0);
		}
		SaveUserData();
	}

	public GameGoodsVo GetGameGoodsVoById(int id)
	{
		if (m_VO != null && m_VO.m_bagGeneratorStorageDic.ContainsKey(id) && m_VO.m_bagGeneratorStorageDic[id].Count > 0)
		{
			return m_VO.m_bagGeneratorStorageDic[id].First();
		}
		return null;
	}

	public int GetGameGoodsVoNumById(int id)
	{
		if (m_VO != null && m_VO.m_bagGeneratorStorageDic.ContainsKey(id))
		{
			return m_VO.m_bagGeneratorStorageDic[id].Count;
		}
		return 0;
	}

	public void AddShowGuideGoods(int id, int guideId, bool isSave = true)
	{
		if (!m_VO.showGuideGoodsDic.ContainsKey(id))
		{
			m_VO.showGuideGoodsDic.Add(id, guideId);
		}
		else
		{
			m_VO.showGuideGoodsDic[id] = guideId;
		}
		if (isSave)
		{
			SaveUserData();
		}
	}

	public Dictionary<int, List<GameGoodsVo>> GetBagGeneratorStorageDic()
	{
		return m_VO.m_bagGeneratorStorageDic;
	}

	public List<int> GetBagGeneratorStorageList()
	{
		List<int> list = new List<int>();
		foreach (KeyValuePair<int, List<GameGoodsVo>> item in m_VO.m_bagGeneratorStorageDic)
		{
			if (item.Value != null && item.Value.Count > 0)
			{
				list.Add(item.Key);
			}
		}
		return list;
	}

	public (int hasCount, int totalCount) GetBagGeneratorStorageInfo()
	{
		int count = GetBagGeneratorStorageList().Count;
		int num = 0;
		foreach (BagItemShowVo bagItem in bagItems)
		{
			if (ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(bagItem.unlockRestaurant))
			{
				num++;
			}
		}
		return (hasCount: count, totalCount: num);
	}

	public bool CheckShowGuideGoods(int id, int scene)
	{
		BagItemShowVo item = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(id);
		if (item == null)
		{
			return false;
		}
		if (m_VO.showGuideGoodsDic != null && (!m_VO.showGuideGoodsDic.ContainsKey(id) || m_VO.showGuideGoodsDic[id] < scene))
		{
			return ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(item.unlockRestaurant);
		}
		return false;
	}

	private void GuideEvent(string eventName)
	{
		List<Dictionary<string, object>> list = new List<Dictionary<string, object>>();
		if (eventName.Equals("숏끛溯攐即7¾厽숅끛溭䈆牆\u001b¾厽眳㩿"))
		{
			foreach (KeyValuePair<int, List<GameGoodsVo>> item in m_VO.m_bagGeneratorStorageDic)
			{
				if (item.Value != null && item.Value.Count > 0 && Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value[0].goodsID) != null && !IGoodsBaseVo.IsDisabled(item.Value[0].GoodsState) && (!m_VO.showGuideGoodsDic.ContainsKey(item.Value[0].goodsID) || m_VO.showGuideGoodsDic[item.Value[0].goodsID] < 2))
				{
					list.Add(new Dictionary<string, object> { 
					{
						"숅끥玾弆杛6Ò发漻䉼",
						item.Value[0].goodsID
					} });
					guideGoods.Add(item.Value[0].goodsID);
					AddShowGuideGoods(item.Value[0].goodsID, 2, isSave: false);
				}
			}
			SaveUserData();
			GenetatorRetireAnalytic("숃끟徭朄牆7\u0082厁숏끓憽朐畫0\u008a厉", list);
		}
		else
		{
			if (!eventName.Equals("숏끛溯攐即7¾厽숅끛溭䜆牆\u001b¾厽룦\u008f赴"))
			{
				return;
			}
			foreach (GameGoodsVo item2 in ObjectManager.GetInstance().gameLevelModel.GetAllCollectGeneratorFromLevel())
			{
				if (!m_VO.showGuideGoodsDic.ContainsKey(item2.goodsID) || m_VO.showGuideGoodsDic[item2.goodsID] < 1)
				{
					list.Add(new Dictionary<string, object> { { "숅끥玾弆杛6Ò发漻䉼", item2.goodsID } });
					AddShowGuideGoods(item2.goodsID, 1, isSave: false);
				}
			}
			SaveUserData();
			GenetatorRetireAnalytic("숃끟徭朄牆7\u0082厁숏끓施爐畫?\u009a厙椵䁽", list);
		}
	}

	public bool CheckGeneratorCollectionGuideOpenInBag()
	{
		return false;
	}

	public bool GetBagNewUISwitch()
	{
		if (OpenState)
		{
			return true;
		}
		if (BagNewUIState)
		{
			return true;
		}
		return false;
	}

	public void BagSortAnalytic()
	{
		int gameBagOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagOpenNum();
		int bagGoodsNum = Singleton<GameLevelManager>.Instance.GetBagGoodsNum();
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숋끥璻漌杓\rÖ叕귭¿赴", gameBagOpenNum);
		dictionary.Add("숋끥疻猌杓\rÚ叙숉끞溆琊敛'¾厽", bagGoodsNum);
		AnalyticInit.OnEvent("숋끥玻漌杓\rÒ发娢䶌", dictionary);
	}

	public void GenetatorRetireAnalytic(string action, List<Dictionary<string, object>> goodIds = null)
	{
		if (m_VO != null && m_VO.openState)
		{
			goodIds = goodIds ?? new List<Dictionary<string, object>>();
			int gameBagOpenNum = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenNum();
			int bagGoodsNum = ObjectManager.GetInstance().gameLevelModel.GetBagGoodsNum();
			int num = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.list.Count((BagItemShowVo a) => ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(a.unlockRestaurant));
			int num2 = m_VO.m_bagGeneratorStorageDic.Sum((KeyValuePair<int, List<GameGoodsVo>> a) => a.Value.Count);
			Dictionary<string, object> dataDic = new Dictionary<string, object>
			{
				{ "숉끥澸渊杀;Â叁", action },
				{
					"숅끥玾弆杛6Ò发扩d4끤c倨㫉",
					goodIds.ToArray()
				},
				{
					"숏끥憫甐杇&\u008a厉恲a4끴a䜻㣌",
					ObjectManager.GetInstance().restaurantLevelModel.CurRestaurantID
				},
				{ "숋끥璻漌杓\rÖ叕귭¿赴", gameBagOpenNum },
				{ "숋끥疻猌杓\rÚ叙숉끞溆琊敛'¾厽", bagGoodsNum },
				{ "숏끥犫攐杀;Î反녟噴✰\0逜\ud972", num },
				{ "숏끥犫攐杀;Î反숏끏措漐彐\r\u0092厑곕\u0083赴", num2 }
			};
			AnalyticInit.OnEvent("숋끥犻攌杓\rÎ反刣疟\ud9dcő", dataDic);
		}
	}

	private void BagGenetatorAnalytic()
	{
		List<GameGoodsAnalyticVo> list = new List<GameGoodsAnalyticVo>();
		GameGoodsAnalyticVo gameGoodsAnalyticVo = null;
		foreach (KeyValuePair<int, List<GameGoodsVo>> item in m_VO.m_bagGeneratorStorageDic)
		{
			if (item.Value == null || item.Value.Count <= 0)
			{
				continue;
			}
			for (int i = 0; i < item.Value.Count; i++)
			{
				gameGoodsAnalyticVo = GameLevelDefine.GetGameGoodsAnalyticVo(StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(item.Key)?.id ?? item.Key, item.Value[i]);
				if (gameGoodsAnalyticVo != null)
				{
					list.Add(gameGoodsAnalyticVo);
				}
			}
		}
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟璵椶癆7Ö叕橲e4끬k갡䋜", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵숵끟璵椶癆7Ö叕娢䵽", dictionary);
		}
	}

	private void BagGenetatorErrorAnalytic(string dataString)
	{
		List<GameGoodsErrorAnalyticVo> list = GameLevelDefine.SplitStringByLength(dataString, 2000);
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟璵椶癆7Ö叕숏끟徆氐牆 \u0082厁냕÷赴", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵숵끟璵椶癆7Ö叕숏끟澆爐牆 Â叁", dictionary);
		}
	}

	private void BagGenetatorToJsonErrorAnalytic()
	{
		List<GameGoodsAnalyticVo> list = new List<GameGoodsAnalyticVo>();
		GameGoodsAnalyticVo gameGoodsAnalyticVo = null;
		foreach (KeyValuePair<int, List<GameGoodsVo>> item in m_VO.m_bagGeneratorStorageDic)
		{
			if (item.Value == null || item.Value.Count <= 0)
			{
				continue;
			}
			for (int i = 0; i < item.Value.Count; i++)
			{
				gameGoodsAnalyticVo = GameLevelDefine.GetGameGoodsAnalyticVo(StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(item.Key)?.id ?? item.Key, item.Value[i]);
				if (gameGoodsAnalyticVo != null)
				{
					list.Add(gameGoodsAnalyticVo);
				}
			}
		}
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟璵椶癆7Ö叕숙끟斆弚牕$\u009a厙숅끈沫椆敆\r¶厵攡䲌", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵숵끟璵椶癆7Ö叕숙끟斆弚牕$\u009a厙匡橲ā讽該", dictionary);
		}
	}

	public void SaveUserData(bool upload = true)
	{
		if (m_Key == null)
		{
			return;
		}
		try
		{
			string value = JsonConvert.SerializeObject((object)m_VO);
			SaveItem(m_Key, value);
			if (upload)
			{
				Singleton<ServerManager>.Instance.SaveServerItem(m_Key, value);
			}
		}
		catch (Exception)
		{
			BagGenetatorToJsonErrorAnalytic();
		}
	}

	public void SyncServerDataToLocal()
	{
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(m_Key);
		if (serverItem.IsNullOrEmpty())
		{
			m_VO = new BagGeneratorStorageVO();
			SaveUserData(upload: false);
			return;
		}
		try
		{
			BagGeneratorStorageVO bagGeneratorStorageVO = JsonConvert.DeserializeObject<BagGeneratorStorageVO>(serverItem);
			if (bagGeneratorStorageVO != null)
			{
				m_VO = bagGeneratorStorageVO;
				SaveUserData(upload: false);
			}
		}
		catch (Exception)
		{
		}
	}

	public int GetTotalPage()
	{
		return (bagItems.Count - 1) / (BagViewLogic.column * BagViewLogic.row) + 1;
	}

	public List<BagItemShowVo> GetBagItemShowListByPage(int pageIndex)
	{
		List<BagItemShowVo> list = new List<BagItemShowVo>();
		int num = (pageIndex - 1) * (BagViewLogic.column * BagViewLogic.row);
		int num2 = num + BagViewLogic.column * BagViewLogic.row;
		for (int i = num; i < num2; i++)
		{
			if (i < bagItems.Count)
			{
				list.Add(bagItems[i]);
			}
		}
		return list;
	}

	public List<BagItemShowVo> GetAllBagItemShowList()
	{
		return bagItems;
	}

	private void AddShowAniGoods(int goodID)
	{
		if (showAniGoodsDic.ContainsKey(goodID))
		{
			showAniGoodsDic[goodID]++;
		}
		else
		{
			showAniGoodsDic.Add(goodID, 1);
		}
	}

	public int GetShowBagAnimationRecord(int goodID)
	{
		if (showAniGoodsDic.ContainsKey(goodID))
		{
			return showAniGoodsDic[goodID];
		}
		return 0;
	}

	public void ClearBagAnimationRecord(int goodID)
	{
		if (showAniGoodsDic.ContainsKey(goodID))
		{
			showAniGoodsDic.Remove(goodID);
		}
	}

	public int GetAllNewBagItemShowTab()
	{
		return m_VO.newBagShowedTab;
	}

	public void AddNewBagItemShowTab(List<BagItemShowVo> items)
	{
		int i;
		for (i = 0; i < items.Count; i++)
		{
			int num = bagItems.FindIndex((BagItemShowVo a) => a.id == items[i].id);
			if (num != -1)
			{
				int num2 = num / (BagViewLogic.column * BagViewLogic.row) + 1;
				m_VO.newBagShowedTab = Mathf.Max(m_VO.newBagShowedTab, num2);
			}
			if (!m_VO.newBagOpenIds.Contains(items[i].id))
			{
				m_VO.newBagOpenIds.Add(items[i].id);
			}
		}
		SaveUserData();
	}

	public void ClearNewBagItemShowTabList()
	{
		if (m_VO.newBagShowedTab != -1)
		{
			m_VO.newBagShowedTab = -1;
			SaveUserData();
		}
	}

	public List<int> GetNewBagItemShowOpenIds()
	{
		return m_VO.newBagOpenIds;
	}

	public void ClearNewBagItemShowOpenIds()
	{
		if (m_VO.newBagOpenIds.Count > 0)
		{
			m_VO.newBagOpenIds.Clear();
			SaveUserData();
		}
	}

	public void DebugClearAllGeneratorGuideData()
	{
		m_VO.showGuideGoodsDic.Clear();
		SaveUserData();
	}

	public void DebugAddAllGeneratorData()
	{
		m_VO.m_bagGeneratorStorageDic.Clear();
		foreach (BagItemShowVo item in StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.list)
		{
			if (item.type == 2)
			{
				AddGameGoodsVo(new GameGoodsVo
				{
					goodsID = item.id,
					GoodsState = GameGoodsState.Normal
				});
			}
		}
		SaveUserData();
	}

	public void DebugAddGeneratorData(int count)
	{
		m_VO.m_bagGeneratorStorageDic.Clear();
		int num = 0;
		foreach (BagItemShowVo item in StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.list)
		{
			if (item.type == 2)
			{
				AddGameGoodsVo(new GameGoodsVo
				{
					goodsID = item.id,
					GoodsState = GameGoodsState.Normal
				});
				num++;
				if (num >= count)
				{
					break;
				}
			}
		}
		SaveUserData();
	}

	public void DebugClearAllGeneratorData()
	{
		m_VO.m_bagGeneratorStorageDic.Clear();
		SaveUserData();
	}

	public void DebugBagGenetatorErrorAnalytic()
	{
		string item = GetItem(m_Key);
		BagGenetatorErrorAnalytic(item);
	}

	public void DebugBagGenetatorToJsonErrorAnalytic()
	{
		BagGenetatorToJsonErrorAnalytic();
	}
}
