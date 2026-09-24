using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Newtonsoft.Json;
using TLF;
using UnityEngine;

public class GameLevelModel : BaseModel
{
	private readonly string GameInitConfigKey = "숯끻五䤰䝫\u001b>匽숥끥䦚䜦呺\u0014*匩医橄ā譑륁";

	private readonly string GameLevelMapKey = "숯끻䖔嘰䝫\u001e\u001a匙숧끶徆䐨䕵\u0002\u0082厁頊k赴";

	private readonly string GameGridUnlockKey = "숯끻劔䤰䝫\u0015N卍숤끥䎌䬥䑸\u001d\u0012匑医橄ā譑륁";

	private readonly string GameBagMapKey = "숯끻䆔䜰䝫\u0010\n匉숺끷䆘吻彫\u0016\n匉뻝";

	private readonly string GameBasicBagInfoKey = "숯끻䆔匰䝫\u0010\n匉숨끹徆䤩䥵\u0015\u0082厁숵끼咖䄶买\u0013V单";

	private readonly string GameLimitBagInfoKey = "숯끻䦔䴰䝫\u001e*匩숨끮徆䤩䥵\u0015\u0082厁숵끼咖䄶买\u0013V单";

	private readonly string GameBasicTemporaryKey = "숯끻䆔匰䝫\u0010\n匉숾끹傆伿䥱\u001fF卅숳끻䆋吴剫\u0016\n匉뻝";

	private readonly string GameNewTemporaryKey = "숯끻䆔䤰䝫\u001f\n匉숯끥侍到乹\u0002B十숵끨咀䄶䅰\u0013V单";

	private readonly string GameBasicUnlockGoodsKey = "숯끻䆔匰䝫\u0010\n匉숿끹來䍀䥺\u001eB十숥끥厞弦䭻\u0016R卑刅圿\ud9ecŵ";

	private readonly string GameBasicProduceNumberKey = "숯끻䆔匰䝫\u0010\n匉숺끹䒆唻䥦\u001d\u0016匕숤끿䊆䔥䍡\u001f\u000e匍녒慟ቦ\0郱\ud952";

	private readonly string GameDynamicBoxDropKey = "숯끻妔丰䝫\u0016j卩숩끷侐堪䅫\u0010B十숥끾䒋䄦彤\r\u0016匕砈⾙";

	private readonly string GameBubbleDropNumKey = "숯끻喔䈰䝫\u0010Z卙숵끶侜倶䉰\0B十숧끴䆌吨彫\u0016\n匉뻝";

	private readonly string GameLevelMapServerKey = "숯끻䖔嘰䝫\u001e\u001a匙숧끶徆匨䕵\u0002\u0082厁숯끨䒏䄰䕦\r\u0016匕砈⾙";

	private readonly string GameBagMapServerKey = "숯끻䆔䜰䝫\u0010\n匉숺끷䖘刻彫\u0001\u001a匙숵끿咋䄶噰\u0013V单";

	private readonly string GameBasicDataServerKey = "숯끻䖔嘰䝫\u001e\u001a匙숨끶䦆䌩䕵\u0001*匩숸끩劜弹形\u0017N卍刅圿\ud9ecŵ";

	private readonly string GameGridUnlockServerKey = "숯끻劔䤰䝫\u0015N卍숤끥䎌䬥䑸\u001d\u0012匑숸끩劜弹形\u0017N卍刅圿\ud9ecŵ";

	private readonly string GameAdShowAnalyticsKey = "숯끻䒔弰䝫\u0013\u0016匕숽끲亖䄾卫\u0013>匽숣끣徍䐤䱷\u0001\u0082厁頊k赴";

	private readonly string GameActivityAdShowAnalyticsKey = "숯끻䎔吰䝫\u0013\u0012匑숾끬䆐䐿䥭\r\n匉숥끩䆑並彣\r\n匉숾끶厀弿䅽\u0011R卑刅圿\ud9ecŵ";

	private readonly string GameDoingMainOrderKey = "숯끻侔䤰䝫\u0016B十숧끽了弨乵\u001b>匽숯끨䆝丰佦\r\n匉頂\v赴";

	private readonly string GeneratorUUIDDataKey = "숯끿咗估䝦\u0013V单숫끥䦔丬剷\u001a*匩숿끥後䑀䕽\u0016\u0082厁頊k赴";

	private readonly string MainlineGoodsDeleteKey = "숤끻䦐严䵫\u001e*匩숥끥厞弦䕻\u0016R卑숯끿徕䐰䑠\u0017\u0082厁頊k赴";

	private readonly string GameLevelFiled = "숏끛皴攐䝸7Þ叝녬剆㼼\0途\ud966";

	private readonly string StackTotalKey = "숉끎澸琊卟\u0006Â叁眳㩴";

	private readonly string StackIDKey = "汓t4끣m긛䓬";

	private Dictionary<string, GoodsDeleteAnalyticVo> mGoodsDeleteDic;

	private Dictionary<string, int> mGeneratorUUIDDic;

	private Dictionary<int, GameGoodsVo> mGameLevelMap;

	private Dictionary<int, int> mGameGridUnlockDic;

	private Dictionary<int, GameGoodsVo> mGameBagMap;

	private Stack<int> mTemporaryItemVos;

	private int mGameBagOpenNum;

	private int mGameBagOpenLimitNum;

	private int mGameBagOpenLimitStartIndex;

	private int mGameBagOpenLimitEndIndex;

	public long mGameBagLimitEndTimeStamp;

	private int mGameBagBuyNum_diamond;

	private int mGameBagBuyNum_lv;

	private int mGameBagBuyNum_coin;

	private int mGameBagBuyNum_iap;

	private int mBubbleDropNum;

	private long mLastBubbleDrop;

	private int mLastBubbleBuyGoodsID;

	private List<int> mUnlockGoodsList;

	private Dictionary<int, int> mProduceNumberDic;

	private Dictionary<int, int> mAdShowAnalyticsDic;

	private Dictionary<int, int> mActivityAdShowAnalyticsDic;

	private Dictionary<int, IGameMapReplaceVo> mReplaceGoodsDic;

	private bool mReplaceGoods;

	private bool mInitGoodsUniquIDList;

	private Dictionary<int, Dictionary<int, List<int>>> mDynamicBoxDropDic;

	private int mUnlockGridNum;

	private int mHaveGoodsGridNum;

	public bool RefreshGridNum;

	public bool RefreshUnlockGridNum;

	private List<Dictionary<string, object>> mGeneratorSpeedEvents = new List<Dictionary<string, object>>();

	private readonly string GeneratorSpeedEventKey = "숯끿咗估䝦\u0013V单숺끥䒊唻剱\u0017\u0016匕숼끥咜弽偱\u001cV单鈂/赴";

	private List<Dictionary<string, object>> mMachineMakingEvents = new List<Dictionary<string, object>>();

	private readonly string MachineMakingEventKey = "숢끻䖚弣䵽\u001c\u001a匙숣끻徒䔤䵺\u0015\u0082厁숾끿䖗夿噫\u0019\u001a匙";

	private MainOrderMachineVo mDoingMainOrder;

	private int mSendEventInterval;

	public Dictionary<int, int> GameGridUnlockDic => mGameGridUnlockDic;

	public int UnlockGridNum
	{
		get
		{
			if (RefreshUnlockGridNum)
			{
				InitUnlockGrid();
			}
			return mUnlockGridNum;
		}
	}

	public int LastBubbleBuyGoodsID
	{
		get
		{
			return mLastBubbleBuyGoodsID;
		}
		set
		{
			mLastBubbleBuyGoodsID = value;
			SaveBubbleDropNum();
		}
	}

	public int BubbleDropNum
	{
		get
		{
			DateTime dateTimeByTimeSpan = TimeManager.Instance.GetDateTimeByTimeSpan(mLastBubbleDrop);
			if (TimeManager.Instance.isEqualToDay(dateTimeByTimeSpan.Year, dateTimeByTimeSpan.Month, dateTimeByTimeSpan.Day) > 0)
			{
				mBubbleDropNum = 0;
				SaveBubbleDropNum();
			}
			return mBubbleDropNum;
		}
		set
		{
			mBubbleDropNum = value;
			mLastBubbleDrop = ServerTimeManager.CurrentTime();
			SaveBubbleDropNum();
		}
	}

	public int RewardCount
	{
		get
		{
			if (mTemporaryItemVos == null)
			{
				return 0;
			}
			return mTemporaryItemVos.Count;
		}
	}

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		InitData();
		Singleton<GameLevelManager>.Instance.Init();
		InitUnlockGrid();
		GameLevelDefine.GeneratorCountAnalytic();
		CheckChangeBagGoodsState();
		CheckGeneratorUUID();
		SendGoodsDeleteEvent();
		RefreshGridNum = true;
		EventManager.GetInstance().AddEventListener(100002, TimeUpdate);
		EventManager.GetInstance().AddEventListener<GoodsBuffType, int, bool, bool>(202116, ChangeBuff);
		EventManager.GetInstance().AddEventListener<GoodsBuffType>(202117, RefreshBuff);
	}

	private void InitReplaceData()
	{
		List<IGameMapReplaceVo> list = StaticDataBase<StaticDataManager>.GetInstance().GameMapReplaceList.list;
		mReplaceGoodsDic = new Dictionary<int, IGameMapReplaceVo>();
		int num = 0;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].id == 1)
			{
				num = list[i].beforeGoodsId;
			}
			else if (!mReplaceGoodsDic.ContainsKey(list[i].beforeGoodsId))
			{
				mReplaceGoodsDic.Add(list[i].beforeGoodsId, list[i]);
			}
		}
		if (num < 10000 && num > 0 && !MonoSingleton<GuideManager>.Instance.GetGuideModel.IsFinish(num))
		{
			mReplaceGoods = true;
		}
	}

	private void InitData()
	{
		string text = "";
		text = GetItem(GameInitConfigKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				List<IGameInitVo> list = JsonConvert.DeserializeObject<List<IGameInitVo>>(text);
				if (list != null && list.Count > 0)
				{
					SerializableDataMap<int, IGameInitVo> serializableDataMap = new SerializableDataMap<int, IGameInitVo>("녧繲㜼\0郴\ud972");
					serializableDataMap.list = list;
					serializableDataMap.InitMap();
					StaticDataBase<StaticDataManager>.GetInstance().GameInitList = serializableDataMap;
				}
			}
			catch
			{
				SaveGameInitMap();
			}
		}
		else
		{
			SaveGameInitMap();
		}
		text = GetItem(GameBasicBagInfoKey);
		if (!string.IsNullOrEmpty(text))
		{
			string[] array = text.Split('|');
			if (array.Length != 0)
			{
				mGameBagOpenNum = array[0].ToInt();
			}
			if (array.Length > 1)
			{
				mGameBagBuyNum_diamond = array[1].ToInt();
			}
			if (array.Length > 2)
			{
				mGameBagBuyNum_lv = array[2].ToInt();
			}
			if (array.Length > 3)
			{
				mGameBagBuyNum_coin = array[3].ToInt();
			}
			if (array.Length > 4)
			{
				mGameBagBuyNum_iap = array[4].ToInt();
			}
		}
		int num = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숞끔沰䈟楝3¶厵匥橧ā试뙭").ToInt();
		if (mGameBagOpenNum < num)
		{
			mGameBagOpenNum = num;
			SaveBagInfoBag();
			BagAnalytics("癤e4끡w셀仜", 0);
		}
		text = GetItem(GameLimitBagInfoKey);
		if (!string.IsNullOrEmpty(text))
		{
			string[] array2 = text.Split('|');
			if (array2.Length != 0)
			{
				mGameBagOpenLimitNum = array2[0].ToInt();
			}
			if (array2.Length > 1)
			{
				mGameBagLimitEndTimeStamp = array2[1].ToInt();
			}
			if (array2.Length > 2)
			{
				mGameBagOpenLimitStartIndex = array2[2].ToInt();
			}
			if (array2.Length > 3)
			{
				mGameBagOpenLimitEndIndex = array2[3].ToInt();
			}
		}
		text = GetItem(GameBubbleDropNumKey);
		if (!string.IsNullOrEmpty(text))
		{
			string[] array3 = text.Split('|');
			if (array3 != null)
			{
				if (array3.Length != 0)
				{
					mBubbleDropNum = array3[0].ToInt();
				}
				if (array3.Length > 1)
				{
					mLastBubbleDrop = array3[1].ToLong(0L);
				}
				if (array3.Length > 2)
				{
					mLastBubbleBuyGoodsID = array3[2].ToInt();
				}
			}
		}
		mUnlockGoodsList = new List<int>();
		text = GetItem(GameBasicUnlockGoodsKey);
		if (!string.IsNullOrEmpty(text))
		{
			mUnlockGoodsList = ListFromJson<int>(text);
		}
		mGameGridUnlockDic = new Dictionary<int, int>();
		text = GetItem(GameGridUnlockKey);
		if (!string.IsNullOrEmpty(text))
		{
			mGameGridUnlockDic = DicFromJson<int, int>(text);
		}
		_TemporarySet(new Stack<int>());
		text = GetItem(GameNewTemporaryKey);
		if (string.IsNullOrEmpty(text))
		{
			text = GetItem(GameBasicTemporaryKey);
			if (!string.IsNullOrEmpty(text))
			{
				try
				{
					_OldTemparySet(StackFromJson<GameGoodsVo>(text));
				}
				catch
				{
					Log.E("䭝ឪ솪渌\ue362姣닆〘쭣눽");
					_TemporarySet(new Stack<int>());
					SaveTemporaryData();
				}
			}
		}
		else
		{
			try
			{
				_TemporarySet(StackFromJson<int>(text));
			}
			catch
			{
				Log.E("䭝ឪ솪渌\ue362姣닆〘쭣눽");
				_TemporarySet(new Stack<int>());
				SaveTemporaryData();
			}
		}
		mProduceNumberDic = new Dictionary<int, int>();
		text = GetItem(GameBasicProduceNumberKey);
		if (!string.IsNullOrEmpty(text))
		{
			mProduceNumberDic = DicFromJson<int, int>(text);
		}
		mGeneratorUUIDDic = new Dictionary<string, int>();
		text = GetItem(GeneratorUUIDDataKey);
		if (!string.IsNullOrEmpty(text))
		{
			mGeneratorUUIDDic = JsonConvert.DeserializeObject<Dictionary<string, int>>(text);
		}
		if (mGeneratorUUIDDic.Count == 0)
		{
			mInitGoodsUniquIDList = true;
		}
		mGameLevelMap = new Dictionary<int, GameGoodsVo>();
		text = GetItem(GameLevelMapKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				mGameLevelMap = JsonConvert.DeserializeObject<Dictionary<int, GameGoodsVo>>(text);
				GameMapAnalytic();
			}
			catch
			{
				Log.E("䮁ឪ솪渌\ue3ff梊닆〘\ue81f趮踡" + text);
				GameMapErrorAnalytic(text);
			}
		}
		else
		{
			List<IGameInitVo> list2 = StaticDataBase<StaticDataManager>.GetInstance().GameInitList.list;
			GameGoodsVo gameGoodsVo = null;
			for (int i = 0; i < list2.Count; i++)
			{
				gameGoodsVo = new GameGoodsVo();
				gameGoodsVo.goodsID = list2[i].goodsID;
				gameGoodsVo.GoodsState = Singleton<GameLevelManager>.Instance.GetGameGoodsState(list2[i].status);
				mGameLevelMap[list2[i].gridID] = gameGoodsVo;
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (item.Value != null && item.Value.goodsID != 0 && item.Value.UUID.IsNullOrEmpty())
			{
				item.Value.SetUUID();
			}
		}
		CheckGridUnlock();
		mGameBagMap = new Dictionary<int, GameGoodsVo>();
		text = GetItem(GameBagMapKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				mGameBagMap = JsonConvert.DeserializeObject<Dictionary<int, GameGoodsVo>>(text);
				GameBagAnalytic();
			}
			catch
			{
				Log.E("䭞ឪ솪渌\ue3f8聗닆〘\ue81f趮踡" + text);
				GameBagErrorAnalytic(text);
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			if (item2.Value != null && item2.Value.goodsID != 0 && item2.Value.UUID.IsNullOrEmpty())
			{
				item2.Value.SetUUID();
			}
		}
		mAdShowAnalyticsDic = new Dictionary<int, int>();
		text = GetItem(GameAdShowAnalyticsKey);
		if (!string.IsNullOrEmpty(text))
		{
			mAdShowAnalyticsDic = DicFromJson<int, int>(text);
		}
		mActivityAdShowAnalyticsDic = new Dictionary<int, int>();
		text = GetItem(GameActivityAdShowAnalyticsKey);
		if (!string.IsNullOrEmpty(text))
		{
			mActivityAdShowAnalyticsDic = DicFromJson<int, int>(text);
		}
		AdShowAnalytics();
		mDoingMainOrder = new MainOrderMachineVo();
		text = GetItem(GameDoingMainOrderKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				mDoingMainOrder = JsonConvert.DeserializeObject<MainOrderMachineVo>(text);
			}
			catch
			{
				mDoingMainOrder = new MainOrderMachineVo();
				SaveMainOrderAnalytics();
			}
		}
		mDynamicBoxDropDic = new Dictionary<int, Dictionary<int, List<int>>>();
		text = GetItem(GameDynamicBoxDropKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				mDynamicBoxDropDic = JsonConvert.DeserializeObject<Dictionary<int, Dictionary<int, List<int>>>>(text);
			}
			catch
			{
				mDynamicBoxDropDic = new Dictionary<int, Dictionary<int, List<int>>>();
				SaveDynamicBoxDropData();
			}
		}
		text = GetItem(GeneratorSpeedEventKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				mGeneratorSpeedEvents = JsonConvert.DeserializeObject<List<Dictionary<string, object>>>(text);
			}
			catch
			{
				mGeneratorSpeedEvents = new List<Dictionary<string, object>>();
				SaveGeneratorSpeedEvent();
			}
		}
		text = GetItem(MachineMakingEventKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				mMachineMakingEvents = JsonConvert.DeserializeObject<List<Dictionary<string, object>>>(text);
			}
			catch
			{
				mMachineMakingEvents = new List<Dictionary<string, object>>();
				SaveMachineMakingEvent();
			}
		}
		text = GetItem(MainlineGoodsDeleteKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				mGoodsDeleteDic = JsonConvert.DeserializeObject<Dictionary<string, GoodsDeleteAnalyticVo>>(text);
			}
			catch
			{
				mGoodsDeleteDic = new Dictionary<string, GoodsDeleteAnalyticVo>();
				SaveGoodsDeleteEvent();
			}
		}
	}

	private void CheckGridUnlock()
	{
		bool flag = false;
		List<IGameInitVo> list = StaticDataBase<StaticDataManager>.GetInstance().GameInitList.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i] == null || ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel() < list[i].unlockLv)
			{
				continue;
			}
			if (mGameGridUnlockDic.ContainsKey(list[i].gridID))
			{
				if (mGameGridUnlockDic[list[i].gridID] != 1)
				{
					mGameGridUnlockDic[list[i].gridID] = 1;
					flag = true;
				}
			}
			else
			{
				mGameGridUnlockDic.Add(list[i].gridID, 1);
				flag = true;
			}
		}
		if (flag)
		{
			SaveUnlockGridData();
		}
	}

	private void InitUnlockGrid()
	{
		int num = 0;
		for (int i = 1; i <= 9; i++)
		{
			for (int j = 1; j <= 7; j++)
			{
				int num2 = i * 10 + j;
				if (mGameGridUnlockDic != null && mGameGridUnlockDic.ContainsKey(num2) && mGameGridUnlockDic[num2] == 1 && CanAddUnlockNum(num2))
				{
					num++;
				}
			}
		}
		mUnlockGridNum = num;
		if (mUnlockGridNum > 63)
		{
			mUnlockGridNum = 63;
		}
		RefreshUnlockGridNum = false;
	}

	public int GetHaveGoodsGridNum()
	{
		if (RefreshGridNum)
		{
			if (mGameLevelMap != null)
			{
				int num = 0;
				foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
				{
					if (item.Value != null && mGameGridUnlockDic.ContainsKey(item.Key) && mGameGridUnlockDic[item.Key] == 1 && !IGoodsBaseVo.CannotDrag(item.Value.GoodsState) && item.Value.goodsID > 0)
					{
						num++;
					}
				}
				mHaveGoodsGridNum = num;
			}
			RefreshGridNum = false;
		}
		return mHaveGoodsGridNum;
	}

	private void ResetGameMap()
	{
		List<IGameInitVo> list = StaticDataBase<StaticDataManager>.GetInstance().GameInitList.list;
		IGameInitVo gameInitVo = null;
		GameGoodsVo gameGoodsVo = null;
		for (int i = 0; i < list.Count; i++)
		{
			gameInitVo = list[i];
			if (gameInitVo == null)
			{
				continue;
			}
			bool flag = false;
			if (GameGridUnlockDic != null && GameGridUnlockDic.ContainsKey(gameInitVo.gridID) && GameGridUnlockDic[gameInitVo.gridID] > 0)
			{
				flag = true;
			}
			if (flag)
			{
				if (!mGameLevelMap.ContainsKey(gameInitVo.gridID))
				{
					continue;
				}
				gameGoodsVo = mGameLevelMap[gameInitVo.gridID];
				if (gameGoodsVo == null)
				{
					continue;
				}
				IGameMapReplaceVo value;
				if (IGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState))
				{
					if (gameGoodsVo.goodsID != gameInitVo.goodsID)
					{
						gameGoodsVo.goodsID = gameInitVo.goodsID;
					}
				}
				else if (mReplaceGoods && mReplaceGoodsDic.TryGetValue(gameGoodsVo.goodsID, out value))
				{
					gameGoodsVo.goodsID = value.afterGoodsId;
				}
			}
			else if (mGameLevelMap.ContainsKey(gameInitVo.gridID))
			{
				gameGoodsVo = mGameLevelMap[gameInitVo.gridID];
				if (gameGoodsVo != null)
				{
					if (gameGoodsVo.goodsID != gameInitVo.goodsID)
					{
						gameGoodsVo.goodsID = gameInitVo.goodsID;
					}
					GameGoodsState gameGoodsState = Singleton<GameLevelManager>.Instance.GetGameGoodsState(gameInitVo.status);
					if (gameGoodsVo.GoodsState != gameGoodsState)
					{
						gameGoodsVo.GoodsState = gameGoodsState;
					}
				}
			}
			else if (gameInitVo.goodsID > 0)
			{
				GameGoodsVo gameGoodsVo2 = new GameGoodsVo();
				gameGoodsVo2.goodsID = gameInitVo.goodsID;
				gameGoodsVo2.GoodsState = Singleton<GameLevelManager>.Instance.GetGameGoodsState(gameInitVo.status);
				mGameLevelMap.Add(list[i].gridID, gameGoodsVo2);
			}
		}
		SaveLevelMapData();
	}

	public void ReloadGameLevelData(string fileName)
	{
	}

	public Dictionary<int, GameGoodsVo> GetGameLevelMap(bool copyData = true)
	{
		if (copyData)
		{
			return new Dictionary<int, GameGoodsVo>(mGameLevelMap);
		}
		return mGameLevelMap;
	}

	public Dictionary<int, GameGoodsVo> GetGameBagMap(bool copyData = true)
	{
		if (copyData)
		{
			return new Dictionary<int, GameGoodsVo>(mGameBagMap);
		}
		return mGameBagMap;
	}

	public void ChangeGameLevelMap(int gridId, GameGoodsVo goodsVo)
	{
		if (mGameLevelMap == null)
		{
			mGameLevelMap = new Dictionary<int, GameGoodsVo>();
		}
		mGameLevelMap[gridId] = goodsVo;
		SaveLevelMapData();
	}

	public void RemoveGoodsById(int id, int num = 1)
	{
		int num2 = num;
		Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(id, -num, null, bagGoods: true);
		bool flag = false;
		bool flag2 = false;
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		List<int> list2 = new List<int>();
		List<GameGoodsVo> list3 = new List<GameGoodsVo>();
		List<int> list4 = mGameLevelMap.Keys.ToList();
		for (int i = 0; i < list4.Count; i++)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(list4[i]))
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = mGameLevelMap[list4[i]];
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (gameGoodsVo.goodsID == id && !IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState))
			{
				num2--;
				LevelDeleteGoods(gameGoodsVo, goodsBaseVoById, list4[i], "숇끏澻爈獝&Â叁뷗\u00af赴", "");
				Singleton<GameLevelManager>.Instance.ChangeChessboardOwnerGoodsNum(id, -1);
				EventManager.GetInstance().DispatchEvent(100059, list4[i], gameGoodsVo.goodsID);
				GameLevelDefine.ChangeUUIDCache(gameGoodsVo, -1);
				mGameLevelMap[list4[i]] = null;
				GameLevelDefine.RemoveGeneratorAnalytic(goodsBaseVoById);
				flag = true;
				if (num2 <= 0)
				{
					break;
				}
			}
			else
			{
				if ((goodsBaseVoById.type != 8 && goodsBaseVoById.type != 13) || gameGoodsVo.GoodsState == GameGoodsState.Working || gameGoodsVo.MakeMaterials.Count <= 0)
				{
					continue;
				}
				for (int j = 0; j < gameGoodsVo.MakeMaterials.Count; j++)
				{
					if (gameGoodsVo.MakeMaterials[j].goodsID == id)
					{
						list.Add(gameGoodsVo);
						list2.Add(list4[i]);
						break;
					}
				}
			}
		}
		if (flag)
		{
			SaveLevelMapData();
		}
		if (num2 <= 0)
		{
			EventManager.GetInstance().DispatchEvent(203098);
			return;
		}
		List<int> list5 = mGameBagMap.Keys.ToList();
		for (int k = 0; k < list5.Count; k++)
		{
			GameGoodsVo gameGoodsVo = mGameBagMap[list5[k]];
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (gameGoodsVo.goodsID == id)
			{
				num2--;
				LevelDeleteGoods(gameGoodsVo, goodsBaseVoById, list5[k], "숇끏澻爈獝&Â叁뷗\u00af赴", "믤¿赴");
				EventManager.GetInstance().DispatchEvent(100059, -1, id);
				GameLevelDefine.ChangeUUIDCache(gameGoodsVo, -1);
				mGameBagMap[list5[k]] = null;
				GameLevelDefine.RemoveGeneratorAnalytic(goodsBaseVoById);
				flag2 = true;
				if (num2 <= 0)
				{
					break;
				}
			}
			else
			{
				if ((goodsBaseVoById.type != 8 && goodsBaseVoById.type != 13) || gameGoodsVo.GoodsState == GameGoodsState.Working || gameGoodsVo.MakeMaterials.Count <= 0)
				{
					continue;
				}
				for (int l = 0; l < gameGoodsVo.MakeMaterials.Count; l++)
				{
					if (gameGoodsVo.MakeMaterials[l].goodsID == id)
					{
						list3.Add(gameGoodsVo);
						break;
					}
				}
			}
		}
		if (flag2)
		{
			CheckGameBagLimitOpenNum();
			SaveBagMapData();
			EventManager.GetInstance().DispatchEvent(100047);
		}
		if (num2 <= 0)
		{
			EventManager.GetInstance().DispatchEvent(203098);
			return;
		}
		bool flag3 = false;
		flag = false;
		flag2 = false;
		for (int m = 0; m < list.Count; m++)
		{
			GameGoodsVo gameGoodsVo = list[m];
			int num3 = 0;
			if (list2.Count > m)
			{
				num3 = list2[m];
			}
			for (int num4 = gameGoodsVo.MakeMaterials.Count - 1; num4 >= 0; num4--)
			{
				if (gameGoodsVo.MakeMaterials[num4].goodsID == id)
				{
					gameGoodsVo.MakeMaterials.RemoveAt(num4);
					num2--;
					Singleton<GameLevelManager>.Instance.ChangeChessboardOwnerGoodsNum(id, -1);
					EventManager.GetInstance().DispatchEvent(100059, num3, id);
					flag = true;
					if (num2 <= 0)
					{
						flag3 = true;
						break;
					}
				}
			}
			IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(gameGoodsVo.goodsID);
			if (goodsInstrumentVO != null)
			{
				int num5 = goodsInstrumentVO.CheckMaterialsMakingGoods(gameGoodsVo.MakeMaterials);
				if (num5 > 0)
				{
					gameGoodsVo.MakingGoodsID = num5;
				}
				else
				{
					gameGoodsVo.MakingGoodsID = 0;
				}
			}
			EventManager.GetInstance().DispatchEvent(100061, num3);
			if (flag3)
			{
				break;
			}
		}
		if (flag)
		{
			SaveLevelMapData();
		}
		if (num2 <= 0)
		{
			EventManager.GetInstance().DispatchEvent(203098);
			return;
		}
		flag3 = false;
		for (int n = 0; n < list3.Count; n++)
		{
			GameGoodsVo gameGoodsVo = list3[n];
			for (int num6 = gameGoodsVo.MakeMaterials.Count - 1; num6 >= 0; num6--)
			{
				if (gameGoodsVo.MakeMaterials[num6].goodsID == id)
				{
					gameGoodsVo.MakeMaterials.RemoveAt(num6);
					num2--;
					EventManager.GetInstance().DispatchEvent(100059, -1, id);
					flag2 = true;
					if (num2 <= 0)
					{
						flag3 = true;
						break;
					}
				}
			}
			IGoodsInstrumentVO goodsInstrumentVO2 = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(gameGoodsVo.goodsID);
			if (goodsInstrumentVO2 != null)
			{
				int num7 = goodsInstrumentVO2.CheckMaterialsMakingGoods(gameGoodsVo.MakeMaterials);
				if (num7 > 0)
				{
					gameGoodsVo.MakingGoodsID = num7;
				}
				else
				{
					gameGoodsVo.MakingGoodsID = 0;
				}
			}
			if (flag3)
			{
				break;
			}
		}
		if (flag2)
		{
			CheckGameBagLimitOpenNum();
			SaveBagMapData();
			EventManager.GetInstance().DispatchEvent(100047);
		}
		EventManager.GetInstance().DispatchEvent(203098);
	}

	public void RemoveTransferGate()
	{
		bool flag = false;
		List<int> list = mGameLevelMap.Keys.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(list[i]))
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = mGameLevelMap[list[i]];
			if (gameGoodsVo != null && gameGoodsVo.goodsID > 0 && gameGoodsVo.GoodsState != GameGoodsState.Bubble && !IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
				if (goodsBaseVoById != null && goodsBaseVoById.type == 19)
				{
					mGameLevelMap[list[i]] = null;
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVoById.goodsID, -1, gameGoodsVo);
					flag = true;
				}
			}
		}
		if (flag)
		{
			GameLevelViewLogic.ResetGameMap = true;
			SaveLevelMapData();
		}
		Stack<int> stack = new Stack<int>();
		int[] array = mTemporaryItemVos.ToArray();
		Array.Reverse(array);
		int[] array2 = array;
		foreach (int num in array2)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(num);
			if (goodsBaseVoById != null && goodsBaseVoById.type != 19)
			{
				stack.Push(num);
			}
		}
		if (stack.Count != mTemporaryItemVos.Count)
		{
			_TemporarySet(stack);
			SaveTemporaryData();
		}
	}

	public void RemoveDailyChallengeGoods(Dictionary<int, IDailyChallengeRemoveVo> removeGoodsDic)
	{
		if (removeGoodsDic == null || removeGoodsDic.Count <= 0)
		{
			return;
		}
		bool flag = false;
		List<int> list = mGameLevelMap.Keys.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(list[i]))
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = mGameLevelMap[list[i]];
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0 || gameGoodsVo.GoodsState == GameGoodsState.Bubble || IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVoById != null && removeGoodsDic.TryGetValue(gameGoodsVo.goodsID, out var value))
			{
				LevelDeleteGoods(gameGoodsVo, goodsBaseVoById, list[i], "숆끛械愇摍1¦厥녬呬㴤\0逕\ud969", "");
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVoById.goodsID, -1, gameGoodsVo);
				if (value.conversionGoodsID > 0)
				{
					mGameLevelMap[list[i]] = new GameGoodsVo
					{
						goodsID = value.conversionGoodsID
					};
				}
				else
				{
					mGameLevelMap[list[i]] = null;
				}
				flag = true;
			}
		}
		if (flag)
		{
			GameLevelViewLogic.ResetGameMap = true;
			SaveLevelMapData();
			EventManager.GetInstance().DispatchEvent(100052);
		}
		bool flag2 = false;
		List<int> list2 = mGameBagMap.Keys.ToList();
		for (int j = 0; j < list2.Count; j++)
		{
			GameGoodsVo gameGoodsVo = mGameBagMap[list2[j]];
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVoById != null && removeGoodsDic.TryGetValue(goodsBaseVoById.goodsID, out var value2))
			{
				LevelDeleteGoods(gameGoodsVo, goodsBaseVoById, list2[j], "숆끛械愇摍1¦厥녬呬㴤\0逕\ud969", "믤¿赴");
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVoById.goodsID, -1, gameGoodsVo, bagGoods: true);
				if (value2.conversionGoodsID > 0)
				{
					mGameBagMap[list2[j]] = new GameGoodsVo
					{
						goodsID = value2.conversionGoodsID
					};
				}
				else
				{
					mGameBagMap[list2[j]] = null;
				}
				flag2 = true;
			}
		}
		EventManager.GetInstance().DispatchEvent(100047);
		if (flag2)
		{
			CheckGameBagLimitOpenNum();
			SaveBagMapData();
		}
		Stack<int> stack = new Stack<int>();
		int[] array = mTemporaryItemVos.ToArray();
		Array.Reverse(array);
		int[] array2 = array;
		foreach (int num in array2)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(num);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (removeGoodsDic.TryGetValue(goodsBaseVoById.goodsID, out var value3))
			{
				if (value3.conversionGoodsID > 0)
				{
					stack.Push(value3.conversionGoodsID);
				}
			}
			else
			{
				stack.Push(num);
			}
		}
		_TemporarySet(stack);
		SaveTemporaryData();
		EventManager.GetInstance().DispatchEvent(100018);
	}

	public void RemoveExpiredGoods()
	{
		Dictionary<int, List<IGoodsBaseVo>> dictionary = new Dictionary<int, List<IGoodsBaseVo>>();
		List<int> list = new List<int>();
		Dictionary<int, IExpiredGoodsVo> map = StaticDataBase<StaticDataManager>.GetInstance().ExpiredGoodsList.map;
		if (map == null || map.Count <= 0)
		{
			return;
		}
		int num = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숅끟䖴砆剂7\u001a匙숏끓澫漐灐\u0015Â叁숝끉掊栞摝&\u0092厑").ToInt();
		bool flag = false;
		List<int> list2 = mGameLevelMap.Keys.ToList();
		for (int i = 0; i < list2.Count; i++)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(list2[i]))
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = mGameLevelMap[list2[i]];
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (goodsBaseVoById.activityType > 0)
			{
				if (!dictionary.ContainsKey(1))
				{
					dictionary.Add(1, new List<IGoodsBaseVo>());
				}
				dictionary[1].Add(goodsBaseVoById);
			}
			if (gameGoodsVo.GoodsState != GameGoodsState.Bubble && !IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState) && map.TryGetValue(goodsBaseVoById.goodsID, out var value) && CanRemoveExpiredGoods(value))
			{
				list.Add(goodsBaseVoById.goodsID);
				if (num == 1)
				{
					LevelDeleteGoods(gameGoodsVo, goodsBaseVoById, list2[i], "獥x4끩t䀷䯌", "");
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVoById.goodsID, -1, gameGoodsVo);
					mGameLevelMap[list2[i]] = null;
					flag = true;
				}
			}
		}
		if (flag)
		{
			GameLevelViewLogic.ResetGameMap = true;
			SaveLevelMapData();
		}
		bool flag2 = false;
		List<int> list3 = mGameBagMap.Keys.ToList();
		for (int j = 0; j < list3.Count; j++)
		{
			GameGoodsVo gameGoodsVo = mGameBagMap[list3[j]];
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (goodsBaseVoById.activityType > 0)
			{
				if (!dictionary.ContainsKey(2))
				{
					dictionary.Add(2, new List<IGoodsBaseVo>());
				}
				dictionary[2].Add(goodsBaseVoById);
			}
			if (map.TryGetValue(goodsBaseVoById.goodsID, out var value2) && CanRemoveExpiredGoods(value2))
			{
				list.Add(goodsBaseVoById.goodsID);
				if (num == 1)
				{
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVoById.goodsID, -1, gameGoodsVo, bagGoods: true);
					mGameBagMap[list3[j]] = null;
					flag2 = true;
				}
			}
		}
		if (flag2)
		{
			CheckGameBagLimitOpenNum();
			SaveBagMapData();
			EventManager.GetInstance().DispatchEvent(100047);
		}
		Stack<int> stack = new Stack<int>();
		int[] array = mTemporaryItemVos.ToArray();
		Array.Reverse(array);
		int[] array2 = array;
		foreach (int num2 in array2)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(num2);
			if (goodsBaseVoById == null)
			{
				continue;
			}
			if (goodsBaseVoById.activityType > 0)
			{
				if (!dictionary.ContainsKey(3))
				{
					dictionary.Add(3, new List<IGoodsBaseVo>());
				}
				dictionary[3].Add(goodsBaseVoById);
			}
			if (map.TryGetValue(goodsBaseVoById.goodsID, out var value3))
			{
				if (!CanRemoveExpiredGoods(value3))
				{
					stack.Push(num2);
					continue;
				}
				list.Add(goodsBaseVoById.goodsID);
				if (num != 1)
				{
					stack.Push(num2);
				}
			}
			else
			{
				stack.Push(num2);
			}
		}
		_TemporarySet(stack);
		SaveTemporaryData();
		if (list.Count > 0)
		{
			List<Dictionary<string, object>> list4 = new List<Dictionary<string, object>>();
			for (int l = 0; l < list.Count; l++)
			{
				Dictionary<string, object> dictionary2 = new Dictionary<string, object>();
				dictionary2["숅끥玾弆杛6Ò发漻䉼"] = list[l];
				list4.Add(dictionary2);
			}
			if (list4.Count > 0)
			{
				Dictionary<string, object> dictionary3 = new Dictionary<string, object>();
				dictionary3.Add("숅끥玾弆杛6Ò发녩䝤㉐\0逢\ud969", list4.ToArray());
				AnalyticInit.OnEvent("숅끥玾弆杛6Ò发녤䅥㘶\0逕\ud956", dictionary3);
			}
		}
		List<Dictionary<string, object>> list5 = new List<Dictionary<string, object>>();
		foreach (KeyValuePair<int, List<IGoodsBaseVo>> item in dictionary)
		{
			for (int m = 0; m < item.Value.Count; m++)
			{
				if (item.Value[m] != null)
				{
					Dictionary<string, object> dictionary4 = new Dictionary<string, object>();
					dictionary4["숅끥玾弆杛6Ò发漻䉼"] = item.Value[m].goodsID;
					if (item.Key == 1)
					{
						dictionary4["숅끥璵椆杗3Ö叕穯n4끴{判勍"] = "숄끛皰攅浘7Þ叝뻰";
					}
					else if (item.Key == 2)
					{
						dictionary4["숅끥璵椆杗3Ö叕穯n4끴{判勍"] = "믤¿赴";
					}
					else if (item.Key == 3)
					{
						dictionary4["숅끥璵椆杗3Ö叕穯n4끴{判勍"] = "숋끟窮漌牆6î叭显䥽";
					}
					list5.Add(dictionary4);
				}
			}
		}
		if (list5.Count > 0)
		{
			Dictionary<string, object> dictionary5 = new Dictionary<string, object>();
			dictionary5.Add("숅끥玾弆杛6Ò发녩䝤㉐\0逢\ud969", list5.ToArray());
			AnalyticInit.OnEvent("숅끥玾弆杛6Ò发숇끕溆氈湕;¾厽냦\u0083赴", dictionary5);
		}
	}

	private bool CanRemoveExpiredGoods(IExpiredGoodsVo removeVo)
	{
		if (removeVo.goodsType == 1 && ObjectManager.GetInstance().dailyChallengeModel.IsInActivity())
		{
			int dailyChallengeThemeID = ObjectManager.GetInstance().dailyChallengeModel.GetDailyChallengeThemeID();
			if (Enumerable.Contains(removeVo.dailyChallengeTheme, dailyChallengeThemeID))
			{
				return false;
			}
		}
		return true;
	}

	private void _OldTemparySet(Stack<GameGoodsVo> tempItems)
	{
		Stack<int> stack = new Stack<int>();
		if (tempItems != null)
		{
			GameGoodsVo[] array = tempItems.ToArray();
			Array.Reverse(array);
			GameGoodsVo[] array2 = array;
			foreach (GameGoodsVo gameGoodsVo in array2)
			{
				if (gameGoodsVo != null && gameGoodsVo.goodsID > 0)
				{
					stack.Push(gameGoodsVo.goodsID);
				}
			}
		}
		mTemporaryItemVos = stack;
		Temporary.Bubble.ShowList.NotifyReorder(mTemporaryItemVos);
		SaveTemporaryData();
	}

	private void _TemporarySet(Stack<int> tempItems)
	{
		mTemporaryItemVos = tempItems;
		Temporary.Bubble.ShowList.NotifyReorder(mTemporaryItemVos);
	}

	private void _TemporaryPush(int tempItem)
	{
		mTemporaryItemVos.Push(tempItem);
		Temporary.Bubble.TA.AddItem(new Temporary.Bubble.TA.Item
		{
			goodsId = tempItem,
			count = 1
		});
		Temporary.Bubble.ShowList.NotifyReorder(mTemporaryItemVos);
	}

	private int _TemporaryPeek()
	{
		if (Temporary.Bubble.OpenSwitch)
		{
			return Temporary.Bubble.ShowList.Peek();
		}
		return mTemporaryItemVos.Peek();
	}

	private int _TemporaryPop()
	{
		int num = mTemporaryItemVos.Pop();
		Temporary.Bubble.TA.AddRemoveItem(new Temporary.Bubble.TA.Item
		{
			goodsId = num,
			count = 1
		});
		Temporary.Bubble.ShowList.NotifyReorder(mTemporaryItemVos);
		return num;
	}

	private void _TemporaryRemove(int goodsId)
	{
		List<int> list = mTemporaryItemVos.ToList();
		int num = list.FindLastIndex((int v) => v == goodsId);
		if (-1 == num)
		{
			return;
		}
		Temporary.Bubble.TA.AddRemoveItem(new Temporary.Bubble.TA.Item
		{
			goodsId = goodsId,
			count = 1
		});
		list.RemoveAt(num);
		list.Reverse();
		Stack<int> stack = new Stack<int>();
		foreach (int item in list)
		{
			stack.Push(item);
		}
		_TemporarySet(stack);
	}

	public void TemporaryBatchRemove(int goodsId, int count)
	{
		if (mTemporaryItemVos == null || mTemporaryItemVos.Count == 0 || count <= 0)
		{
			return;
		}
		List<int> list = mTemporaryItemVos.ToList();
		int num = 0;
		int num2 = 0;
		while (num2 < list.Count && num < count)
		{
			if (list[num2] == goodsId)
			{
				list.RemoveAt(num2);
				num++;
			}
			else
			{
				num2++;
			}
		}
		if (num == 0)
		{
			return;
		}
		Temporary.Bubble.TA.AddRemoveItem(new Temporary.Bubble.TA.Item
		{
			goodsId = goodsId,
			count = num
		});
		list.Reverse();
		Stack<int> stack = new Stack<int>();
		foreach (int item in list)
		{
			stack.Push(item);
		}
		_TemporarySet(stack);
		SaveTemporaryData();
	}

	public void AddTemporaryItem(int goodsId, int num)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById != null && goodsBaseVoById.type != 17)
		{
			if (mTemporaryItemVos == null)
			{
				_TemporarySet(new Stack<int>());
			}
			for (int i = 0; i < num; i++)
			{
				_TemporaryPush(goodsId);
			}
			SaveTemporaryData();
			GameLevelDefine.HasGoodsToTemporary = true;
		}
	}

	public void AddTemporaryItem(List<int> goodsVos)
	{
		if (goodsVos == null || goodsVos.Count <= 0)
		{
			return;
		}
		if (mTemporaryItemVos == null)
		{
			_TemporarySet(new Stack<int>());
		}
		foreach (int goodsVo in goodsVos)
		{
			if (goodsVo > 0)
			{
				_TemporaryPush(goodsVo);
			}
		}
		SaveTemporaryData();
		GameLevelDefine.HasGoodsToTemporary = true;
	}

	public Stack<int> GetTemporaryItems()
	{
		return mTemporaryItemVos;
	}

	public GameGoodsVo GetTemporaryItem()
	{
		if (mTemporaryItemVos != null && mTemporaryItemVos.Count > 0)
		{
			int num = _TemporaryPeek();
			if (num > 0)
			{
				return new GameGoodsVo
				{
					goodsID = num
				};
			}
		}
		return null;
	}

	public GameGoodsVo GetTemporaryItem(int goodsId)
	{
		if (mTemporaryItemVos != null && mTemporaryItemVos.Count > 0 && mTemporaryItemVos.FirstOrDefault((int v) => v == goodsId) >= 0)
		{
			return new GameGoodsVo
			{
				goodsID = goodsId
			};
		}
		return null;
	}

	public int GetTemporaryItemNum()
	{
		if (mTemporaryItemVos != null && mTemporaryItemVos.Count > 0)
		{
			return mTemporaryItemVos.Count;
		}
		return 0;
	}

	public void RemoveTemporaryItem()
	{
		if (mTemporaryItemVos != null && mTemporaryItemVos.Count > 0)
		{
			_TemporaryPop();
			SaveTemporaryData();
		}
	}

	public void RemoveTemporarySingleItemByGoodsID(int goodsId)
	{
		if (mTemporaryItemVos != null && mTemporaryItemVos.Count > 0)
		{
			_TemporaryRemove(goodsId);
			SaveTemporaryData();
		}
	}

	public void RemoveTemporaryItemByGoodsID(List<int> goodsIDs)
	{
		if (goodsIDs == null)
		{
			return;
		}
		Stack<int> stack = new Stack<int>();
		int[] array = mTemporaryItemVos.ToArray();
		Array.Reverse(array);
		int[] array2 = array;
		foreach (int goods_id in array2)
		{
			if (!goodsIDs.Exists((int gID) => gID == goods_id))
			{
				stack.Push(goods_id);
				continue;
			}
			Temporary.Bubble.TA.AddRemoveItem(new Temporary.Bubble.TA.Item
			{
				goodsId = goods_id,
				count = 1
			});
		}
		if (stack.Count != mTemporaryItemVos.Count)
		{
			_TemporarySet(stack);
			SaveTemporaryData();
		}
	}

	public void RemoveGoodsByGoodsID(List<int> goodsIDs)
	{
		if (goodsIDs == null)
		{
			return;
		}
		int[] array = mGameLevelMap.Keys.ToArray();
		foreach (int mapKey in array)
		{
			if (mGameLevelMap.ContainsKey(mapKey) && mGameLevelMap[mapKey] != null && goodsIDs.Exists((int gID) => gID == mGameLevelMap[mapKey].goodsID))
			{
				mGameLevelMap[mapKey] = null;
				RefreshGridNum = true;
			}
		}
		SaveLevelMapData();
		array = mGameBagMap.Keys.ToArray();
		foreach (int mapKey2 in array)
		{
			if (mGameBagMap.ContainsKey(mapKey2) && mGameBagMap[mapKey2] != null && goodsIDs.Exists((int gID) => gID == mGameBagMap[mapKey2].goodsID))
			{
				mGameBagMap[mapKey2] = null;
			}
		}
		CheckGameBagLimitOpenNum();
		SaveBagMapData();
	}

	public List<RecycleAnimationData> RemoveByRecycleGoods(List<int> recycleGoods)
	{
		List<RecycleAnimationData> list = new List<RecycleAnimationData>();
		if (recycleGoods == null || recycleGoods.Count == 0)
		{
			return list;
		}
		Stack<int> stack = new Stack<int>();
		int[] array = mTemporaryItemVos.ToArray();
		Array.Reverse(array);
		int[] array2 = array;
		foreach (int num in array2)
		{
			if (!recycleGoods.Contains(num))
			{
				stack.Push(num);
				continue;
			}
			Temporary.Bubble.TA.AddRemoveItem(new Temporary.Bubble.TA.Item
			{
				goodsId = num,
				count = 1
			});
		}
		if (stack.Count != mTemporaryItemVos.Count)
		{
			_TemporarySet(stack);
			SaveTemporaryData();
			EventManager.GetInstance().DispatchEvent(100018);
		}
		bool flag = false;
		array2 = mGameLevelMap.Keys.ToArray();
		foreach (int num2 in array2)
		{
			if (!mGameLevelMap.ContainsKey(num2) || !Singleton<GameLevelManager>.Instance.GridUnlock(num2))
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = mGameLevelMap[num2];
			if (gameGoodsVo == null || IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState))
			{
				continue;
			}
			if (recycleGoods.Contains(gameGoodsVo.goodsID))
			{
				list.Add(new RecycleAnimationData
				{
					goodsID = gameGoodsVo.goodsID,
					gridID = num2
				});
				mGameLevelMap[num2] = null;
				RefreshGridNum = true;
				flag = true;
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVoById == null || !IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) || gameGoodsVo.GoodsState == GameGoodsState.Working || gameGoodsVo.GoodsState == GameGoodsState.InitiativeProduce || gameGoodsVo.MakeMaterials.Count <= 0)
			{
				continue;
			}
			bool flag2 = false;
			for (int num3 = gameGoodsVo.MakeMaterials.Count - 1; num3 >= 0; num3--)
			{
				if (recycleGoods.Contains(gameGoodsVo.MakeMaterials[num3].goodsID))
				{
					gameGoodsVo.MakeMaterials.RemoveAt(num3);
					flag2 = true;
					flag = true;
				}
			}
			if (!flag2)
			{
				continue;
			}
			IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(gameGoodsVo.goodsID);
			if (goodsInstrumentVO != null)
			{
				int num4 = goodsInstrumentVO.CheckMaterialsMakingGoods(gameGoodsVo.MakeMaterials);
				if (num4 > 0)
				{
					gameGoodsVo.MakingGoodsID = num4;
				}
				else
				{
					gameGoodsVo.MakingGoodsID = 0;
				}
			}
			EventManager.GetInstance().DispatchEvent(100061, num2);
		}
		if (flag)
		{
			SaveLevelMapData();
		}
		flag = false;
		array2 = mGameBagMap.Keys.ToArray();
		foreach (int key in array2)
		{
			if (!mGameBagMap.ContainsKey(key))
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = mGameBagMap[key];
			if (gameGoodsVo == null)
			{
				continue;
			}
			if (recycleGoods.Contains(gameGoodsVo.goodsID))
			{
				mGameBagMap[key] = null;
				flag = true;
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVoById == null || !IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) || gameGoodsVo.GoodsState == GameGoodsState.Working || gameGoodsVo.GoodsState == GameGoodsState.InitiativeProduce || gameGoodsVo.MakeMaterials.Count <= 0)
			{
				continue;
			}
			bool flag3 = false;
			for (int num5 = gameGoodsVo.MakeMaterials.Count - 1; num5 >= 0; num5--)
			{
				if (recycleGoods.Contains(gameGoodsVo.MakeMaterials[num5].goodsID))
				{
					gameGoodsVo.MakeMaterials.RemoveAt(num5);
					flag3 = true;
					flag = true;
				}
			}
			if (!flag3)
			{
				continue;
			}
			IGoodsInstrumentVO goodsInstrumentVO2 = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(gameGoodsVo.goodsID);
			if (goodsInstrumentVO2 != null)
			{
				int num6 = goodsInstrumentVO2.CheckMaterialsMakingGoods(gameGoodsVo.MakeMaterials);
				if (num6 > 0)
				{
					gameGoodsVo.MakingGoodsID = num6;
				}
				else
				{
					gameGoodsVo.MakingGoodsID = 0;
				}
			}
		}
		if (flag)
		{
			CheckGameBagLimitOpenNum();
			SaveBagMapData();
			EventManager.GetInstance().DispatchEvent(100047);
		}
		Singleton<GameLevelManager>.Instance.RefreshMaxLvGoods();
		EventManager.GetInstance().DispatchEvent(202100);
		return list;
	}

	public List<RecycleAnimationData> PutinGeneratorToBag(List<int> generators)
	{
		List<RecycleAnimationData> list = new List<RecycleAnimationData>();
		if (generators == null || generators.Count == 0)
		{
			return list;
		}
		bool flag = false;
		int[] array = mGameLevelMap.Keys.ToArray();
		foreach (int num in array)
		{
			if (mGameLevelMap.ContainsKey(num) && Singleton<GameLevelManager>.Instance.GridUnlock(num))
			{
				GameGoodsVo gameGoodsVo = mGameLevelMap[num];
				if (gameGoodsVo != null && !IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState) && generators.Contains(gameGoodsVo.goodsID) && Singleton<GameLevelManager>.Instance.AddItemToGameBag(gameGoodsVo))
				{
					list.Add(new RecycleAnimationData
					{
						goodsID = gameGoodsVo.goodsID,
						gridID = num
					});
					mGameLevelMap[num] = null;
					RefreshGridNum = true;
					flag = true;
				}
			}
		}
		if (flag)
		{
			SaveLevelMapData();
		}
		return list;
	}

	public void ClearTemporaryItem()
	{
		_TemporarySet(new Stack<int>());
		SaveTemporaryData();
	}

	public void GameLevelGoodsSort()
	{
		Dictionary<int, GameGoodsVo> dictionary = new Dictionary<int, GameGoodsVo>();
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		List<GameGoodsVo> list2 = new List<GameGoodsVo>();
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (Singleton<GameLevelManager>.Instance.GridUnlock(item.Key))
			{
				GameGoodsVo value = item.Value;
				if (value == null || value.goodsID <= 0)
				{
					continue;
				}
				if (value.GoodsState == GameGoodsState.Bubble)
				{
					list2.Add(item.Value);
					continue;
				}
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value.goodsID);
				if (goodsBaseVoById != null)
				{
					if (IGoodsBaseVo.CannotDrag(value.GoodsState) || IGoodsBaseVo.IsInstrument(goodsBaseVoById.type) || IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
					{
						dictionary[item.Key] = item.Value;
					}
					else
					{
						list.Add(item.Value);
					}
				}
			}
			else
			{
				dictionary[item.Key] = item.Value;
			}
		}
		List<GameGoodsVo> list3 = BagSortHelper.Sort(list);
		list3.AddRange(list2);
		for (int i = 1; i <= GameLevelManager.Rows; i++)
		{
			for (int j = 1; j <= GameLevelManager.Columns; j++)
			{
				int num = i * 10 + j;
				if (Singleton<GameLevelManager>.Instance.GridUnlock(num) && !dictionary.ContainsKey(num) && list3 != null && list3.Count > 0)
				{
					dictionary[num] = list3[0];
					list3.RemoveAt(0);
				}
			}
		}
		mGameLevelMap = dictionary;
		SaveLevelMapDataLogic();
	}

	public void SetGameBagMap()
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		Dictionary<int, GameGoodsVo>.Enumerator enumerator = mGameBagMap.GetEnumerator();
		GameGoodsVo gameGoodsVo = null;
		while (enumerator.MoveNext())
		{
			gameGoodsVo = enumerator.Current.Value;
			if (gameGoodsVo != null && gameGoodsVo.goodsID > 0)
			{
				list.Add(gameGoodsVo);
			}
		}
		mGameBagMap = new Dictionary<int, GameGoodsVo>();
		for (int i = 0; i < list.Count; i++)
		{
			mGameBagMap.Add(i, list[i]);
		}
		SaveBagMapData();
	}

	public void BagGoodsSort()
	{
		List<GameGoodsVo> list = BagSortHelper.Sort(mGameBagMap);
		if (list != null && list.Count != 0)
		{
			mGameBagMap = new Dictionary<int, GameGoodsVo>();
			for (int i = 0; i < list.Count; i++)
			{
				mGameBagMap[i] = list[i];
			}
			SaveBagMapData();
		}
	}

	public int GetGameBagOpenNum()
	{
		return mGameBagOpenNum;
	}

	public int GetGameBagBuyNum_Diamond()
	{
		return mGameBagBuyNum_diamond;
	}

	public int GetGameBagBuyNum_Lv()
	{
		return mGameBagBuyNum_lv;
	}

	public int GetGameBagBuyNum_Coin()
	{
		return mGameBagBuyNum_coin;
	}

	public int GetGameBagBuyNum_Iap()
	{
		return mGameBagBuyNum_iap;
	}

	public int GetGameBagLimitOpenNum()
	{
		return mGameBagOpenLimitNum;
	}

	public int GetGameBagOpenLimitStartIndex()
	{
		return mGameBagOpenLimitStartIndex;
	}

	public int GetGameBagOpenLimitEndIndex()
	{
		return mGameBagOpenLimitEndIndex;
	}

	public long GetBagLimitEndTimeStamp()
	{
		return mGameBagLimitEndTimeStamp;
	}

	public bool GetBagLimitIsShow()
	{
		if (Singleton<ServerManager>.Instance.ServerTimeV2 <= 0 && mGameBagLimitEndTimeStamp > 0)
		{
			return true;
		}
		if (Singleton<ServerManager>.Instance.ServerTimeV2 > 0 && mGameBagLimitEndTimeStamp > 0 && Singleton<ServerManager>.Instance.ServerTimeV2 < mGameBagLimitEndTimeStamp)
		{
			return true;
		}
		return false;
	}

	public long GetBagLimitShowTimeStamp()
	{
		if (Singleton<ServerManager>.Instance.ServerTimeV2 <= 0 && mGameBagLimitEndTimeStamp > 0)
		{
			if (ServerTimeManager.CurrentTime() < mGameBagLimitEndTimeStamp)
			{
				return mGameBagLimitEndTimeStamp - ServerTimeManager.CurrentTime();
			}
			return 0L;
		}
		if (Singleton<ServerManager>.Instance.ServerTimeV2 > 0 && mGameBagLimitEndTimeStamp > 0 && Singleton<ServerManager>.Instance.ServerTimeV2 < mGameBagLimitEndTimeStamp)
		{
			return mGameBagLimitEndTimeStamp - Singleton<ServerManager>.Instance.ServerTimeV2;
		}
		return 0L;
	}

	public void SetBagLimitOpenNum(int num)
	{
		if (num <= 0)
		{
			mGameBagOpenLimitNum = 0;
		}
		else
		{
			mGameBagOpenLimitNum = num;
		}
		int gameBagOpenNum = GetGameBagOpenNum();
		int num2 = mGameBagOpenLimitNum;
		SetBagLimitStartAndEndIndex(gameBagOpenNum, gameBagOpenNum + num2);
		SaveLimitBagInfoBag();
	}

	public void SetBagLimitEndTimeStamp(long timeStamp)
	{
		if (mGameBagLimitEndTimeStamp > 0 && Singleton<ServerManager>.Instance.ServerTimeV2 < mGameBagLimitEndTimeStamp)
		{
			mGameBagLimitEndTimeStamp += timeStamp;
		}
		else
		{
			mGameBagLimitEndTimeStamp = Singleton<ServerManager>.Instance.ServerTimeV2 + timeStamp;
		}
		Debug.LogWarning((object)("순끟䶫愝卑 :匹숏끛䦾渐湆|*匩숄끎⺸包獗7½厼숏끈榯洐敆\u0006ª厩匡橖ā诨쨠" + Singleton<ServerManager>.Instance.ServerTimeV2));
		Debug.LogWarning((object)("순끟咫椝卑 V单숋끟枔攌浚3¢厡숟뀔斚渠牆 \u009a厙숇끮⦰㨈瑑z©厨뺼" + ServerTimeManager.CurrentTime()));
		Debug.LogWarning((object)("숦끏榠琧䉝?ª厩숞끩枼䰟⁶3¢厡숞끗撰吟楱<\u0096厕숹끗涼瀺楀3º厹ቪᔸ" + mGameBagLimitEndTimeStamp));
		SaveLimitBagInfoBag();
	}

	public void SetBagLimitStartAndEndIndex(int startIndex, int endIndex)
	{
		if (mGameBagOpenLimitStartIndex != startIndex || mGameBagOpenLimitEndIndex != endIndex)
		{
			mGameBagOpenLimitStartIndex = startIndex;
			mGameBagOpenLimitEndIndex = endIndex;
			Debug.LogWarning((object)("숨끟䲭椩单56匵숹끓犭琺浀3Î反祉n4끥z\uf56a冈" + mGameBagOpenLimitStartIndex));
			Debug.LogWarning((object)("숨끟䲭椩单56匵숯끓䦭渰浚6*匩匠橥ā诨耠" + mGameBagOpenLimitEndIndex));
			SaveLimitBagInfoBag();
		}
	}

	public void CheckGameBagLimitOpenNum()
	{
		Dictionary<int, GameGoodsVo> gameBagMap = GetGameBagMap(copyData: false);
		int gameBagOpenNum = GetGameBagOpenNum();
		int gameBagLimitOpenNum = GetGameBagLimitOpenNum();
		bool bagLimitIsShow = GetBagLimitIsShow();
		int num = 0;
		int num2 = gameBagLimitOpenNum;
		if (gameBagMap != null && gameBagLimitOpenNum > 0 && !bagLimitIsShow)
		{
			for (int i = 0; i < gameBagOpenNum + gameBagLimitOpenNum; i++)
			{
				if ((gameBagMap.ContainsKey(i) ? gameBagMap[i] : null) == null)
				{
					num++;
				}
			}
		}
		if (num > 0)
		{
			int num3 = gameBagLimitOpenNum - num;
			SetBagLimitOpenNum(num3);
			num2 = ((num3 > 0) ? num3 : 0);
			SetGameBagMap();
			EventManager.GetInstance().DispatchEvent(100047);
		}
		SetBagLimitStartAndEndIndex(gameBagOpenNum, gameBagOpenNum + num2);
	}

	public void AddBagOpenNum(int num)
	{
		mGameBagOpenNum += num;
		if (mGameBagOpenNum > Singleton<GameLevelManager>.Instance.BagMaximum)
		{
			mGameBagOpenNum = Singleton<GameLevelManager>.Instance.BagMaximum;
		}
		SaveBagInfoBag();
	}

	public void AddBagOpenNumCanSurpassMax(int num)
	{
		mGameBagOpenNum += num;
		SaveBagInfoBag();
	}

	public void AddBagBuyNum_Diamond(int num)
	{
		mGameBagBuyNum_diamond += num;
		SaveBagInfoBag();
	}

	public void AddBagBuyNum_Lv(int num)
	{
		mGameBagBuyNum_lv += num;
		SaveBagInfoBag();
	}

	public void AddBagBuyNum_Coin(int num)
	{
		mGameBagBuyNum_coin += num;
		SaveBagInfoBag();
	}

	public void AddBagBuyNum_Iap(int num)
	{
		mGameBagBuyNum_iap += num;
		SaveBagInfoBag();
	}

	public int GetBagGoodsNum()
	{
		int num = 0;
		if (mGameBagMap == null)
		{
			return num;
		}
		Dictionary<int, GameGoodsVo>.Enumerator enumerator = mGameBagMap.GetEnumerator();
		GameGoodsVo gameGoodsVo = null;
		while (enumerator.MoveNext())
		{
			gameGoodsVo = enumerator.Current.Value;
			if (gameGoodsVo != null && gameGoodsVo.goodsID > 0)
			{
				num++;
			}
		}
		return num;
	}

	public void ChangeBagMap(int gridId, GameGoodsVo goodsVo)
	{
		if (mGameBagMap == null)
		{
			mGameBagMap = new Dictionary<int, GameGoodsVo>();
		}
		mGameBagMap[gridId] = goodsVo;
		SaveBagMapData();
	}

	public bool AddItemToBag(GameGoodsVo goodsVo)
	{
		int num = mGameBagOpenNum + mGameBagOpenLimitNum;
		if (GetBagGoodsNum() < num)
		{
			if (mGameBagMap == null)
			{
				mGameBagMap = new Dictionary<int, GameGoodsVo>();
			}
			List<GameGoodsVo> list = new List<GameGoodsVo>();
			Dictionary<int, GameGoodsVo>.Enumerator enumerator = mGameBagMap.GetEnumerator();
			GameGoodsVo gameGoodsVo = null;
			while (enumerator.MoveNext())
			{
				gameGoodsVo = enumerator.Current.Value;
				if (gameGoodsVo != null && gameGoodsVo.goodsID > 0)
				{
					list.Add(gameGoodsVo);
				}
			}
			list.Add(goodsVo);
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏ㆰ式䝑\rÉ又❣\u0a4a"))
			{
				MonoSingleton<GuideManager>.Instance.FinishGuide("숎끏ㆰ式䝑\rÉ又❣\u0a4a");
			}
			mGameBagMap = new Dictionary<int, GameGoodsVo>();
			for (int i = 0; i < list.Count; i++)
			{
				mGameBagMap.Add(i, list[i]);
			}
			SaveBagMapData();
			return true;
		}
		return false;
	}

	public bool MoveGoodsToPageindex(GameGoodsVo goodsVo, int pageIndex)
	{
		if (mGameBagMap == null)
		{
			mGameBagMap = new Dictionary<int, GameGoodsVo>();
		}
		int num = mGameBagOpenNum + mGameBagOpenLimitNum;
		int num2 = BagViewLogic.row * BagViewLogic.column * (pageIndex - 1);
		if (num2 >= num)
		{
			return false;
		}
		int num3 = BagViewLogic.row * BagViewLogic.column * pageIndex - 1;
		num3 = ((num3 > num - 1) ? (num - 1) : num3);
		for (int i = num2; i <= num3; i++)
		{
			if (mGameBagMap.ContainsKey(i))
			{
				if (mGameBagMap[i] == null || mGameBagMap[i].goodsID <= 0)
				{
					mGameBagMap[i] = goodsVo;
					SaveBagMapData();
					return true;
				}
				continue;
			}
			mGameBagMap[i] = goodsVo;
			SaveBagMapData();
			return true;
		}
		return false;
	}

	public void ClearItemFromBag()
	{
		mGameBagMap = new Dictionary<int, GameGoodsVo>();
		SaveBagMapData();
	}

	public List<int> GetUnlockGoodsList()
	{
		return mUnlockGoodsList;
	}

	public bool CheckUnlockById(int id)
	{
		if (mUnlockGoodsList == null)
		{
			return false;
		}
		return mUnlockGoodsList.Contains(id);
	}

	public void ClearUnlockGoodsList()
	{
		mUnlockGoodsList = new List<int>();
		SaveUnlockGoodsList();
	}

	public void AddUnlockGoods(int id)
	{
		if (!mUnlockGoodsList.Contains(id))
		{
			JudgeUnlcokNewSeriesCreatorOrInstrument(id);
			mUnlockGoodsList.Add(id);
			SaveUnlockGoodsList();
		}
	}

	public void JudgeUnlcokNewSeriesCreatorOrInstrument(int newGoodsID)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(newGoodsID);
		if (goodsBaseVoById == null || (goodsBaseVoById.type != 2 && goodsBaseVoById.type != 4 && goodsBaseVoById.type != 5 && goodsBaseVoById.type != 7 && goodsBaseVoById.type != 8 && goodsBaseVoById.type != 12 && goodsBaseVoById.type != 13))
		{
			return;
		}
		bool flag = false;
		for (int i = 0; i < mUnlockGoodsList.Count; i++)
		{
			IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(mUnlockGoodsList[i]);
			if (goodsBaseVoById2 != null && goodsBaseVoById2.series == goodsBaseVoById.series && (goodsBaseVoById2.type == 2 || goodsBaseVoById2.type == 4 || goodsBaseVoById2.type == 5 || goodsBaseVoById2.type == 7 || goodsBaseVoById2.type == 8 || goodsBaseVoById2.type == 12 || goodsBaseVoById2.type == 13))
			{
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			ObjectManager.GetInstance().gameOrdersModel.RefreshNewCreatorInstrumentOrder(goodsBaseVoById.goodsID);
		}
	}

	public int GetProduceNumBySeries(int series)
	{
		if (mProduceNumberDic.ContainsKey(series))
		{
			return mProduceNumberDic[series];
		}
		return 0;
	}

	public void SetProduceNumBySeries(int series, int num)
	{
		ILevelBaseProduceVO item = StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseProduceList.GetItem(series);
		if (item != null && GetProduceNumBySeries(series) < item.GetProduceList.Count)
		{
			if (mProduceNumberDic.ContainsKey(series))
			{
				mProduceNumberDic[series] += num;
			}
			else
			{
				mProduceNumberDic.Add(series, num);
			}
			SaveProduceNumber();
		}
	}

	public int GetDynamicBoxDropGoods(int boxID, int dropType)
	{
		int result = -1;
		Dictionary<int, List<int>> value = null;
		if (mDynamicBoxDropDic.TryGetValue(boxID, out value) && value.TryGetValue(dropType, out var value2) && value2.Count > 0)
		{
			result = value2[0];
			value2.RemoveAt(0);
			SaveDynamicBoxDropData();
		}
		return result;
	}

	public void SetDynamicBoxDropGoods(int boxID, int dropType, List<int> dropList)
	{
		if (GameConst.GAME_MODE != GameConstMode.RELEASE)
		{
			string text = "";
			for (int i = 0; i < dropList.Count; i++)
			{
				text += string.Format("刮胺\ud9d3Ę", dropList[i]);
			}
		}
		if (mDynamicBoxDropDic.ContainsKey(boxID))
		{
			if (mDynamicBoxDropDic[boxID].ContainsKey(dropType))
			{
				mDynamicBoxDropDic[boxID][dropType] = dropList;
			}
			else
			{
				mDynamicBoxDropDic[boxID].Add(dropType, dropList);
			}
		}
		else
		{
			mDynamicBoxDropDic.Add(boxID, new Dictionary<int, List<int>>());
			mDynamicBoxDropDic[boxID].Add(dropType, dropList);
		}
		SaveDynamicBoxDropData();
	}

	public void AddUnlockGrid(int id)
	{
		bool flag = false;
		if (mGameGridUnlockDic.ContainsKey(id))
		{
			if (mGameGridUnlockDic[id] != 1)
			{
				mGameGridUnlockDic[id] = 1;
				flag = true;
				ObjectManager.GetInstance().gameLevelModel.RefreshUnlockGridNum = true;
			}
		}
		else
		{
			mGameGridUnlockDic.Add(id, 1);
			flag = true;
			ObjectManager.GetInstance().gameLevelModel.RefreshUnlockGridNum = true;
		}
		if (flag)
		{
			SaveUnlockGridData();
		}
	}

	private bool CanAddUnlockNum(int gridID)
	{
		if (mGameLevelMap == null)
		{
			return false;
		}
		if (mGameLevelMap.TryGetValue(gridID, out var value) && value != null && IGoodsBaseVo.CannotDrag(value.GoodsState))
		{
			return false;
		}
		return true;
	}

	private void CheckChangeBagGoodsState()
	{
		if (GameLevelDefine.CheckGoodsChangeState(mGameBagMap))
		{
			SaveBagMapData();
		}
	}

	private void ChangeBuff(GoodsBuffType _type, int series, bool add, bool isRefresh)
	{
		if (add)
		{
			AddGoodBuff(_type, series, isRefresh);
		}
		else
		{
			RemoveGoodBuff(_type, series);
		}
	}

	private void AddGoodBuff(GoodsBuffType _type, int series, bool isRefresh)
	{
		GameGoodsVo gameGoodsVo = null;
		IGoodsBaseVo goodsBaseVo = null;
		bool flag = false;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key))
			{
				continue;
			}
			gameGoodsVo = item.Value;
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0 || gameGoodsVo.GoodsState == GameGoodsState.Bubble || IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVo == null)
			{
				continue;
			}
			switch (_type)
			{
			case GoodsBuffType.Generator_No_CD:
				if (goodsBaseVo.type == 2 && (goodsBaseVo.series == series || series == 0))
				{
					gameGoodsVo.SetUncooledState(state: true);
					gameGoodsVo.FillUpProduceNum();
					flag = true;
				}
				continue;
			case GoodsBuffType.Instrument_Speed_Up:
				if (gameGoodsVo.GoodsState == GameGoodsState.Working)
				{
					if (addWorkingBuffRefres(gameGoodsVo, goodsBaseVo, series))
					{
						flag = true;
					}
					continue;
				}
				break;
			}
			if (_type == GoodsBuffType.PassiveCD_Speed_Up && goodsBaseVo.type == 5 && (goodsBaseVo.series == series || series == 0) && AddCDBuffRefres(gameGoodsVo, goodsBaseVo, series))
			{
				flag = true;
			}
		}
		if (flag)
		{
			SaveLevelMapData();
		}
		if (isRefresh)
		{
			switch (_type)
			{
			case GoodsBuffType.Generator_No_CD:
				EventManager.GetInstance().DispatchEvent(202113, series, 0);
				break;
			case GoodsBuffType.Instrument_Speed_Up:
				EventManager.GetInstance().DispatchEvent(202114, series, 0);
				break;
			case GoodsBuffType.PassiveCD_Speed_Up:
				EventManager.GetInstance().DispatchEvent(202115, series, 0);
				break;
			}
		}
		bool flag2 = false;
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			gameGoodsVo = item2.Value;
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVo == null)
			{
				continue;
			}
			switch (_type)
			{
			case GoodsBuffType.Generator_No_CD:
				if (goodsBaseVo.type == 2 && (goodsBaseVo.series == series || series == 0))
				{
					gameGoodsVo.SetUncooledState(state: true);
					gameGoodsVo.FillUpProduceNum();
					flag2 = true;
				}
				continue;
			case GoodsBuffType.Instrument_Speed_Up:
				if (gameGoodsVo.GoodsState == GameGoodsState.Working)
				{
					if (addWorkingBuffRefres(gameGoodsVo, goodsBaseVo, series))
					{
						flag2 = true;
					}
					continue;
				}
				break;
			}
			if (_type == GoodsBuffType.PassiveCD_Speed_Up && goodsBaseVo.type == 5 && (goodsBaseVo.series == series || series == 0) && AddCDBuffRefres(gameGoodsVo, goodsBaseVo, series))
			{
				flag2 = true;
			}
		}
		if (flag2)
		{
			SaveBagMapData();
		}
	}

	private void RemoveGoodBuff(GoodsBuffType _type, int series, int gridId = -1)
	{
		GameGoodsVo gameGoodsVo = null;
		IGoodsBaseVo goodsBaseVo = null;
		bool flag = false;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key) || (gridId != -1 && item.Key != gridId))
			{
				continue;
			}
			gameGoodsVo = item.Value;
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0 || gameGoodsVo.GoodsState == GameGoodsState.Bubble || IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVo == null)
			{
				continue;
			}
			if (_type == GoodsBuffType.Instrument_Speed_Up && gameGoodsVo.GoodsState == GameGoodsState.Working)
			{
				if (RemoveWorkingBuffRefres(gameGoodsVo, goodsBaseVo, series))
				{
					flag = true;
				}
			}
			else if (_type == GoodsBuffType.PassiveCD_Speed_Up && goodsBaseVo.type == 5 && (goodsBaseVo.series == series || series == 0) && RemoveCDBuffRefres(gameGoodsVo, goodsBaseVo, series))
			{
				flag = true;
			}
		}
		if (flag)
		{
			SaveLevelMapData();
			switch (_type)
			{
			case GoodsBuffType.Generator_No_CD:
				EventManager.GetInstance().DispatchEvent(202113, series);
				break;
			case GoodsBuffType.Instrument_Speed_Up:
				EventManager.GetInstance().DispatchEvent(202114, series);
				break;
			case GoodsBuffType.PassiveCD_Speed_Up:
				EventManager.GetInstance().DispatchEvent(202115, series);
				break;
			}
		}
		bool flag2 = false;
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			gameGoodsVo = item2.Value;
			if (gameGoodsVo == null || gameGoodsVo.goodsID <= 0)
			{
				continue;
			}
			goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
			if (goodsBaseVo == null)
			{
				continue;
			}
			if (_type == GoodsBuffType.Instrument_Speed_Up && gameGoodsVo.GoodsState == GameGoodsState.Working)
			{
				if (RemoveWorkingBuffRefres(gameGoodsVo, goodsBaseVo, series))
				{
					flag2 = true;
				}
			}
			else if (_type == GoodsBuffType.PassiveCD_Speed_Up && goodsBaseVo.type == 5 && (goodsBaseVo.series == series || series == 0) && RemoveCDBuffRefres(gameGoodsVo, goodsBaseVo, series))
			{
				flag2 = true;
			}
		}
		if (flag2)
		{
			SaveBagMapData();
		}
	}

	private void RefreshBuff(GoodsBuffType _type)
	{
		switch (_type)
		{
		case GoodsBuffType.Generator_No_CD:
			EventManager.GetInstance().DispatchEvent(202113, 0, 0);
			break;
		case GoodsBuffType.Instrument_Speed_Up:
			RefresWorkingBuff();
			EventManager.GetInstance().DispatchEvent(202114, 0, 0);
			break;
		case GoodsBuffType.PassiveCD_Speed_Up:
			RefreshCDBuff();
			EventManager.GetInstance().DispatchEvent(202115, 0, 0);
			break;
		}
	}

	private void RefresWorkingBuff()
	{
		GameGoodsVo gameGoodsVo = null;
		IGoodsBaseVo goodsBaseVo = null;
		bool flag = false;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key))
			{
				continue;
			}
			gameGoodsVo = item.Value;
			if (gameGoodsVo != null && gameGoodsVo.goodsID > 0 && gameGoodsVo.GoodsState != GameGoodsState.Bubble && !IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
				if (goodsBaseVo != null && gameGoodsVo.GoodsState == GameGoodsState.Working && RemoveWorkingBuffRefres(gameGoodsVo, goodsBaseVo, goodsBaseVo.series))
				{
					flag = true;
				}
			}
		}
		if (flag)
		{
			SaveLevelMapData();
		}
		bool flag2 = false;
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			gameGoodsVo = item2.Value;
			if (gameGoodsVo != null && gameGoodsVo.goodsID > 0)
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
				if (goodsBaseVo != null && gameGoodsVo.GoodsState == GameGoodsState.Working && RemoveWorkingBuffRefres(gameGoodsVo, goodsBaseVo, goodsBaseVo.series))
				{
					flag2 = true;
				}
			}
		}
		if (flag2)
		{
			SaveBagMapData();
		}
	}

	private bool addWorkingBuffRefres(GameGoodsVo tempGoodsVo, IGoodsBaseVo tempGoodsBaseVo, int series)
	{
		bool result = false;
		long num = ServerTimeManager.CurrentTime();
		if (tempGoodsVo.BuffTotalTime < 0)
		{
			tempGoodsVo.BuffTotalTime = 0;
			result = true;
		}
		if ((tempGoodsBaseVo.type == 8 || tempGoodsBaseVo.type == 13) && (tempGoodsBaseVo.series == series || series == 0))
		{
			if (tempGoodsVo.BuffValue > 0 && tempGoodsVo.BuffStarTime > 0 && tempGoodsVo.BuffEndTime <= 0)
			{
				if (tempGoodsVo.BuffStarTime > num)
				{
					tempGoodsVo.BuffStarTime = num;
				}
				int num2 = (int)(num - tempGoodsVo.BuffStarTime) * (tempGoodsVo.BuffValue - 1);
				tempGoodsVo.BuffTotalTime += num2;
				if (tempGoodsVo.BuffTotalTime < 0)
				{
					tempGoodsVo.BuffTotalTime = 0;
				}
				result = true;
			}
			int makingTimeByGameGoods = Singleton<GameLevelManager>.Instance.GetMakingTimeByGameGoods(tempGoodsVo);
			GoodsBuffVo buffVo = ObjectManager.GetInstance().goodsBuffModel.GetBuffVo(GoodsBuffType.Instrument_Speed_Up, series);
			if (buffVo != null)
			{
				if (buffVo.activityID == 1550)
				{
					buffVo.buffValue = ObjectManager.GetInstance().feverFlambeV2Model.GetInsSpeedBuffValueByMakingTime(makingTimeByGameGoods);
				}
				else if (buffVo.activityID == 1560)
				{
					buffVo.buffValue = ObjectManager.GetInstance().feverRelayV2Model.GetInsSpeedBuffValueByMakingTime(makingTimeByGameGoods);
				}
				else if (buffVo.activityID == 1551)
				{
					buffVo.buffValue = ObjectManager.GetInstance().feverFlambeStageModel.GetInsSpeedBuffValueByMakingTime(makingTimeByGameGoods);
				}
				else if (buffVo.activityID == 1910)
				{
					buffVo.buffValue = ObjectManager.GetInstance().feverFlambeV3Model.GetInsSpeedBuffValueByMakingTime(makingTimeByGameGoods);
				}
				ObjectManager.GetInstance().goodsBuffModel.SetBuffVo(GoodsBuffType.Instrument_Speed_Up, tempGoodsBaseVo.series, buffVo);
				tempGoodsVo.BuffValue = buffVo.buffValue;
				tempGoodsVo.BuffStarTime = num;
				tempGoodsVo.BuffEndTime = 0L;
				result = true;
			}
		}
		return result;
	}

	private bool RemoveWorkingBuffRefres(GameGoodsVo tempGoodsVo, IGoodsBaseVo tempGoodsBaseVo, int series)
	{
		bool result = false;
		long num = ServerTimeManager.CurrentTime();
		if (tempGoodsVo.BuffTotalTime < 0)
		{
			tempGoodsVo.BuffTotalTime = 0;
			result = true;
		}
		if ((tempGoodsBaseVo.type == 8 || tempGoodsBaseVo.type == 13) && (tempGoodsBaseVo.series == series || series == 0) && ObjectManager.GetInstance().goodsBuffModel.GetBuffVo(GoodsBuffType.Instrument_Speed_Up, series) == null && tempGoodsVo.BuffValue > 0 && tempGoodsVo.BuffStarTime > 0)
		{
			if (tempGoodsVo.BuffStarTime > num)
			{
				tempGoodsVo.BuffStarTime = num;
			}
			int num2 = (int)(num - tempGoodsVo.BuffStarTime) * (tempGoodsVo.BuffValue - 1);
			tempGoodsVo.BuffTotalTime += num2;
			if (tempGoodsVo.BuffTotalTime < 0)
			{
				tempGoodsVo.BuffTotalTime = 0;
			}
			tempGoodsVo.BuffValue = 0;
			tempGoodsVo.BuffStarTime = 0L;
			tempGoodsVo.BuffEndTime = 0L;
			result = true;
		}
		return result;
	}

	private bool AddCDBuffRefres(GameGoodsVo tempGoodsVo, IGoodsBaseVo tempGoodsBaseVo, int series)
	{
		bool result = false;
		long num = ServerTimeManager.CurrentTime();
		if (tempGoodsVo.BuffTotalTime < 0)
		{
			tempGoodsVo.BuffTotalTime = 0;
			result = true;
		}
		if (IGoodsBaseVo.IsPassiveCreator(tempGoodsBaseVo.type) && (tempGoodsBaseVo.series == series || series == 0))
		{
			if (tempGoodsVo.BuffValue > 0 && tempGoodsVo.BuffStarTime > 0 && tempGoodsVo.BuffEndTime <= 0)
			{
				if (tempGoodsVo.BuffStarTime > num)
				{
					tempGoodsVo.BuffStarTime = num;
				}
				int num2 = (int)(num - tempGoodsVo.BuffStarTime) * (tempGoodsVo.BuffValue - 1);
				tempGoodsVo.BuffTotalTime += num2;
				if (tempGoodsVo.BuffTotalTime < 0)
				{
					tempGoodsVo.BuffTotalTime = 0;
				}
				result = true;
			}
			IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(tempGoodsVo.goodsID);
			GoodsBuffVo buffVo = ObjectManager.GetInstance().goodsBuffModel.GetBuffVo(GoodsBuffType.PassiveCD_Speed_Up, series);
			if (buffVo != null && passiveProduceById != null)
			{
				int buffValue = buffVo.buffValue;
				int cDTime = passiveProduceById.GetCDTime(tempGoodsVo.PassiveCDIndex);
				if (buffVo.activityID == 1550)
				{
					buffValue = ObjectManager.GetInstance().feverFlambeV2Model.GetPassGeneratorCDBuffValueByCDTime(cDTime);
				}
				else if (buffVo.activityID == 1560)
				{
					buffValue = ObjectManager.GetInstance().feverRelayV2Model.GetPassGeneratorCDBuffValueByCDTime(cDTime);
				}
				else if (buffVo.activityID == 1551)
				{
					buffValue = ObjectManager.GetInstance().feverFlambeStageModel.GetPassGeneratorCDBuffValueByCDTime(cDTime);
				}
				else if (buffVo.activityID == 1910)
				{
					buffValue = ObjectManager.GetInstance().feverFlambeV3Model.GetPassGeneratorCDBuffValueByCDTime(cDTime);
				}
				tempGoodsVo.BuffValue = buffValue;
				tempGoodsVo.BuffStarTime = num;
				tempGoodsVo.BuffEndTime = 0L;
				result = true;
			}
		}
		return result;
	}

	private bool RemoveCDBuffRefres(GameGoodsVo tempGoodsVo, IGoodsBaseVo tempGoodsBaseVo, int series)
	{
		bool result = false;
		long num = ServerTimeManager.CurrentTime();
		if (tempGoodsVo.BuffTotalTime < 0)
		{
			tempGoodsVo.BuffTotalTime = 0;
			result = true;
		}
		if (IGoodsBaseVo.IsPassiveCreator(tempGoodsBaseVo.type) && (tempGoodsBaseVo.series == series || series == 0) && ObjectManager.GetInstance().goodsBuffModel.GetBuffVo(GoodsBuffType.PassiveCD_Speed_Up, series) == null && tempGoodsVo.BuffValue > 0 && tempGoodsVo.BuffStarTime > 0)
		{
			if (tempGoodsVo.BuffStarTime > num)
			{
				tempGoodsVo.BuffStarTime = num;
			}
			int num2 = (int)(num - tempGoodsVo.BuffStarTime) * (tempGoodsVo.BuffValue - 1);
			tempGoodsVo.BuffTotalTime += num2;
			if (tempGoodsVo.BuffTotalTime < 0)
			{
				tempGoodsVo.BuffTotalTime = 0;
			}
			tempGoodsVo.BuffValue = 0;
			tempGoodsVo.BuffStarTime = 0L;
			tempGoodsVo.BuffEndTime = 0L;
			result = true;
		}
		return result;
	}

	private void RefreshCDBuff()
	{
		GameGoodsVo gameGoodsVo = null;
		IGoodsBaseVo goodsBaseVo = null;
		bool flag = false;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(item.Key))
			{
				continue;
			}
			gameGoodsVo = item.Value;
			if (gameGoodsVo != null && gameGoodsVo.goodsID > 0 && gameGoodsVo.GoodsState != GameGoodsState.Bubble && !IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
				if (goodsBaseVo != null && IGoodsBaseVo.IsPassiveCreator(goodsBaseVo.type) && RemoveCDBuffRefres(gameGoodsVo, goodsBaseVo, goodsBaseVo.series))
				{
					flag = true;
				}
			}
		}
		if (flag)
		{
			SaveLevelMapData();
		}
		bool flag2 = false;
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			gameGoodsVo = item2.Value;
			if (gameGoodsVo != null && gameGoodsVo.goodsID > 0)
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
				if (goodsBaseVo != null && IGoodsBaseVo.IsPassiveCreator(goodsBaseVo.type) && RemoveCDBuffRefres(gameGoodsVo, goodsBaseVo, goodsBaseVo.series))
				{
					flag2 = true;
				}
			}
		}
		if (flag2)
		{
			SaveBagMapData();
		}
	}

	public Dictionary<string, int> VerifyGeneratorAndMachine()
	{
		if (mGeneratorUUIDDic == null || mGeneratorUUIDDic.Count == 0)
		{
			return null;
		}
		_ = GameConst.GAME_MODE;
		Dictionary<string, int> dictionary = new Dictionary<string, int>(mGeneratorUUIDDic);
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (item.Value != null && dictionary.ContainsKey(item.Value.UUID))
			{
				dictionary.Remove(item.Value.UUID);
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			if (item2.Value != null && dictionary.ContainsKey(item2.Value.UUID))
			{
				dictionary.Remove(item2.Value.UUID);
			}
		}
		foreach (KeyValuePair<int, List<GameGoodsVo>> item3 in ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagGeneratorStorageDic())
		{
			List<GameGoodsVo> value = item3.Value;
			if (value == null || value.Count <= 0)
			{
				continue;
			}
			for (int i = 0; i < value.Count; i++)
			{
				if (value[i] != null && value[i].goodsID > 0 && dictionary.ContainsKey(value[i].UUID))
				{
					dictionary.Remove(value[i].UUID);
				}
			}
		}
		_ = GameConst.GAME_MODE;
		return dictionary;
	}

	private void CheckGeneratorUUID()
	{
		if (!mInitGoodsUniquIDList)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (item.Value == null || item.Value.goodsID <= 0)
			{
				continue;
			}
			if (item.Value.UUID.IsNullOrEmpty())
			{
				item.Value.SetUUID();
			}
			if (!IGoodsBaseVo.IsDisabled(item.Value.GoodsState))
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item.Value.goodsID);
				if (goodsBaseVo != null && goodsBaseVo.activityType <= 0 && (IGoodsBaseVo.IsCreator(goodsBaseVo.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVo.type)) && !mGeneratorUUIDDic.ContainsKey(item.Value.UUID))
				{
					mGeneratorUUIDDic.Add(item.Value.UUID, 1);
				}
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			if (item2.Value == null || item2.Value.goodsID <= 0)
			{
				continue;
			}
			if (item2.Value.UUID.IsNullOrEmpty())
			{
				item2.Value.SetUUID();
			}
			if (!IGoodsBaseVo.IsDisabled(item2.Value.GoodsState))
			{
				goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item2.Value.goodsID);
				if (goodsBaseVo != null && goodsBaseVo.activityType <= 0 && (IGoodsBaseVo.IsCreator(goodsBaseVo.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVo.type)) && !mGeneratorUUIDDic.ContainsKey(item2.Value.UUID))
				{
					mGeneratorUUIDDic.Add(item2.Value.UUID, 1);
				}
			}
		}
		foreach (KeyValuePair<int, List<GameGoodsVo>> item3 in ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagGeneratorStorageDic())
		{
			List<GameGoodsVo> value = item3.Value;
			if (value == null || value.Count <= 0)
			{
				continue;
			}
			for (int i = 0; i < value.Count; i++)
			{
				if (value[i] != null && value[i].goodsID > 0)
				{
					if (value[i].UUID.IsNullOrEmpty())
					{
						value[i].SetUUID();
					}
					goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(value[i].goodsID);
					if (goodsBaseVo != null && goodsBaseVo.activityType <= 0 && (IGoodsBaseVo.IsCreator(goodsBaseVo.type) || IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVo.type)) && !mGeneratorUUIDDic.ContainsKey(value[i].UUID))
					{
						mGeneratorUUIDDic.Add(value[i].UUID, 1);
					}
				}
			}
		}
		SaveGeneratorUUIDData();
	}

	public void AddGeneratorUUID(string uniquID)
	{
		if (mGeneratorUUIDDic == null)
		{
			mGeneratorUUIDDic = new Dictionary<string, int>();
		}
		if (!mGeneratorUUIDDic.ContainsKey(uniquID))
		{
			mGeneratorUUIDDic.Add(uniquID, 1);
			SaveGeneratorUUIDData();
		}
	}

	public void RemoveGeneratorUUID(string uniquID)
	{
		if (mGeneratorUUIDDic != null && mGeneratorUUIDDic.Count != 0 && mGeneratorUUIDDic.ContainsKey(uniquID))
		{
			mGeneratorUUIDDic.Remove(uniquID);
			SaveGeneratorUUIDData();
		}
	}

	public void RemoveAllGeneratorUUID()
	{
		mGeneratorUUIDDic = new Dictionary<string, int>();
		SaveGeneratorUUIDData();
	}

	public void AddAdAnalytics(int scene, int count)
	{
		if (mAdShowAnalyticsDic == null)
		{
			mAdShowAnalyticsDic = new Dictionary<int, int>();
		}
		if (mAdShowAnalyticsDic.ContainsKey(scene))
		{
			mAdShowAnalyticsDic[scene] += count;
		}
		else
		{
			mAdShowAnalyticsDic.Add(scene, count);
		}
		SaveGameAdAnalytics();
	}

	public void AdShowAnalytics()
	{
		if (mAdShowAnalyticsDic != null && mAdShowAnalyticsDic.Count > 0)
		{
			foreach (KeyValuePair<int, int> item in mAdShowAnalyticsDic)
			{
				if (item.Value > 0)
				{
					Dictionary<string, object> dictionary = new Dictionary<string, object>();
					dictionary.Add("녡屣㨆\0逞\ud97a", 1);
					dictionary.Add("숎끥掸攏杫!\u0092厑显䥽", GetSceneNameByID(item.Key));
					dictionary.Add("匧橯ā讹赴", item.Value);
					AnalyticInit.OnEvent("划摇\ud9cfŐ", dictionary);
				}
			}
			mAdShowAnalyticsDic.Clear();
		}
		if (mActivityAdShowAnalyticsDic == null || mActivityAdShowAnalyticsDic.Count <= 0)
		{
			return;
		}
		foreach (KeyValuePair<int, int> item2 in mActivityAdShowAnalyticsDic)
		{
			if (item2.Value > 0)
			{
				Dictionary<string, object> dictionary2 = new Dictionary<string, object>();
				dictionary2.Add("녡屣㨆\0逞\ud97a", 1);
				dictionary2.Add("숎끥掸攏杫!\u0092厑显䥽", GetSceneNameByID(item2.Key));
				dictionary2.Add("匧橯ā讹赴", item2.Value);
				AnalyticInit.OnEvent("划摇\ud9cfŐ", dictionary2);
			}
		}
		mActivityAdShowAnalyticsDic.Clear();
	}

	public void AdClickAnalytics(int scene)
	{
		AdShowAnalytics();
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("녡屣㨆\0逞\ud97a", 2);
		dictionary.Add("숎끥掸攏杫!\u0092厑显䥽", GetSceneNameByID(scene));
		dictionary.Add("匧橯ā讹赴", 1);
		AnalyticInit.OnEvent("划摇\ud9cfŐ", dictionary);
	}

	public void BagAnalytics(string unlockType, int cost)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숄끥掬欅杘=\u0092厑医橴ā证腥", unlockType);
		dictionary.Add("숄끥掬欅杘=\u0092厑숙끙溶甚彀\r¾厽뻱", cost);
		dictionary.Add("숋끥憻洌杓\r\u008a厉刟燯\ud9c7ŀ", mGameBagOpenNum);
		dictionary.Add("숏끥疾渐杙\rÚ叙숁끕榺洂汫&ª厩欷㺋", mGameBagBuyNum_diamond);
		dictionary.Add("숅끥徺甆杝<\u0082厁숉끖璶椊湟\rÖ叕듘\u00af赴", mGameBagBuyNum_coin);
		dictionary.Add("순끥犵攝杫4Î反숄끥掬欅敘=\u0092厑녟剴㸼\0連\ud975", mGameBagBuyNum_lv);
		dictionary.Add("숋끥疰渌杄\rÚ叙숁끕榺洂汫&ª厩欷㺋", mGameBagBuyNum_iap);
		AnalyticInit.OnEvent("匣機ā讅驧", dictionary);
		if (unlockType == "뻮\u00af赴")
		{
			AnalyticInit.OnUAEvent(UAEventType.ITEM, "换u4끟d옳㯏");
		}
	}

	public void GridFullAnalytics()
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		int num = 0;
		Dictionary<int, GameGoodsVo>.Enumerator enumerator = mGameLevelMap.GetEnumerator();
		while (enumerator.MoveNext())
		{
			if (enumerator.Current.Key != 0 && Singleton<GameLevelManager>.Instance.GridUnlock(enumerator.Current.Key))
			{
				GameGoodsVo value = enumerator.Current.Value;
				if (value == null)
				{
					num++;
				}
				else if (value.goodsID <= 0)
				{
					num++;
				}
				else if (!IGoodsBaseVo.CannotDrag(value.GoodsState))
				{
					num++;
				}
			}
		}
		dictionary.Add("숂끥殺攃村1²厱숋끘徶愌牆6\u0082厁匩橯ā讹赴", num);
		AnalyticInit.OnEvent("숂끥殺攃村1²厱숋끘徶昌牆6\u0082厁匭橬ā讕鑤", dictionary);
	}

	public void SetDoingMainOrder()
	{
		List<SingleDynamicOrder> list = new List<SingleDynamicOrder>();
		_ = ObjectManager.GetInstance().restaurantLevelModel.CurRestaurantID;
		List<SingleDynamicOrder> orders = ObjectManager.GetInstance().gameOrdersModel.GetOrders2(onlyShowingOrder: true);
		for (int i = 0; i < orders.Count; i++)
		{
			if (orders[i].mainOrderID <= 0 || !orders[i].IsUnlock())
			{
				continue;
			}
			List<BaseData2VO> deliverables = orders[i].GetDeliverables();
			for (int j = 0; j < deliverables.Count; j++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(deliverables[j].id);
				if (goodsBaseVoById != null && goodsBaseVoById.productionType == 1)
				{
					list.Add(orders[i]);
					break;
				}
			}
		}
		if (list.Count > 0)
		{
			bool flag = false;
			if (mDoingMainOrder == null)
			{
				flag = true;
			}
			if (!flag && list.Count != mDoingMainOrder.MainOrderId.Count)
			{
				flag = true;
			}
			if (!flag)
			{
				for (int k = 0; k < list.Count; k++)
				{
					if (!mDoingMainOrder.MainOrderId.Contains(list[k].mainOrderID))
					{
						flag = true;
						break;
					}
				}
			}
			if (flag)
			{
				mDoingMainOrder = new MainOrderMachineVo();
				mDoingMainOrder.SetMaterials(list);
				MainOrderMachineAnalytics(6, null, 0);
				SaveMainOrderAnalytics();
			}
		}
		else if (mDoingMainOrder.MainOrderId.Count > 0)
		{
			mDoingMainOrder = new MainOrderMachineVo();
			SaveMainOrderAnalytics();
		}
	}

	public void MainOrderMachineAnalytics(int actionType, GameGoodsVo machine, int goodsId)
	{
		if (mDoingMainOrder == null || mDoingMainOrder.MainOrderId.Count <= 0)
		{
			return;
		}
		if (actionType == 6)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥徴漌杝<\u0082厁수끞於琙牫5\u009a厙", 1);
			dictionary.Add("숋끥徴漌杝<\u0082厁恲d4끲a\udc3b㣌", mDoingMainOrder.MainOrderId.ToJson((Formatting)0));
			AnalyticInit.OnEvent("숋끥徴漌杝<\u0082厁수끞憼挙牫?\u008a厉刟熟\ud9c0ő", dictionary);
		}
		if (machine == null)
		{
			return;
		}
		Dictionary<string, object> dictionary2 = new Dictionary<string, object>();
		bool flag = false;
		switch (actionType)
		{
		case 1:
			if (machine.MakingGoodsID > 0 && mDoingMainOrder.RecipeIds.Contains(machine.MakingGoodsID))
			{
				dictionary2.Add("숋끥徴漌杝<\u0082厁수끞犼愙牫6Î反뻻", 1);
				flag = true;
			}
			else if (!mDoingMainOrder.Materials.Contains(goodsId))
			{
				mDoingMainOrder.PutinErrorNum++;
				dictionary2.Add("숋끥徴漌杝<\u0082厁수끞犼爙牫7Î反愽䢊", mDoingMainOrder.PutinErrorNum);
				flag = true;
			}
			else if (machine.MakingGoodsID > 0)
			{
				dictionary2.Add("숋끥徴漌杝<\u0082厁수끞犼愙牫6Î反뻻", 0);
				flag = true;
			}
			break;
		case 2:
			if (!mDoingMainOrder.Materials.Contains(goodsId))
			{
				mDoingMainOrder.TakeoutNum++;
				dictionary2.Add("숋끥徴漌杝<\u0082厁수끞憼欙牫&\u008a厉숞끕澬搟敓=Â叁뻯", mDoingMainOrder.TakeoutNum);
				flag = true;
			}
			break;
		case 3:
			if (mDoingMainOrder.RecipeIds.Contains(goodsId))
			{
				dictionary2.Add("숋끥徴漌杝<\u0082厁수끞沼愙牫\"¶厵뻥", 1);
				flag = true;
			}
			break;
		case 4:
			if (mDoingMainOrder.RecipeIds.Contains(goodsId))
			{
				int num = 1;
				if (machine.CardTotalNum > 0)
				{
					num = 4;
				}
				else if (machine.AdTotalTimes > 0)
				{
					num = 2;
				}
				else if (machine.DiamondTotalNum > 0)
				{
					num = 3;
				}
				dictionary2.Add("숋끥徴漌杝<\u0082厁恲d4끲a\ud931㣌", num);
				flag = true;
			}
			break;
		case 5:
			if (mDoingMainOrder.RecipeIds.Contains(goodsId))
			{
				dictionary2.Add("숋끥徴漌杝<\u0082厁수끞憼欙牫&\u008a厉숞끕玬栟敐;Ò发", 1);
				flag = true;
				mDoingMainOrder.IsFinish = true;
			}
			break;
		}
		if (flag)
		{
			dictionary2.Add("숋끥徴漌杝<\u0082厁恲d4끲a\udc3b㣌", mDoingMainOrder.MainOrderId.ToJson((Formatting)0));
			AnalyticInit.OnEvent("숋끥徴漌杝<\u0082厁수끞憼挙牫?\u008a厉刟熟\ud9c0ő", dictionary2);
			SaveMainOrderAnalytics();
		}
	}

	public void SyncServerData()
	{
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(GameBasicDataServerKey);
		if (serverItem.IsNotNullAndEmpty())
		{
			string[] array = serverItem.Split('|');
			if (array.Length != 0)
			{
				mGameBagOpenNum = array[0].ToInt();
			}
			if (array.Length > 1)
			{
				mGameBagBuyNum_diamond = array[1].ToInt();
			}
			if (array.Length > 2 && !string.IsNullOrEmpty(array[2]))
			{
				mUnlockGoodsList = ListFromJson<int>(array[2]);
			}
			if (array.Length > 3 && !string.IsNullOrEmpty(array[3]))
			{
				try
				{
					List<int> list = ListFromJson<int>(array[3]);
					if (list == null || list.Count <= 0)
					{
						_TemporarySet(new Stack<int>());
					}
					else
					{
						_TemporarySet(new Stack<int>());
						for (int num = list.Count - 1; num >= 0; num--)
						{
							_TemporaryPush(list[num]);
						}
					}
				}
				catch
				{
					Log.E("䬙ឪ巔囌\ue35c噦닠\u0a31솱贗衦ᕰ捰癣\uee8d");
					_TemporarySet(new Stack<int>());
				}
			}
			if (array.Length > 4 && !string.IsNullOrEmpty(array[4]))
			{
				mProduceNumberDic = DicFromJson<int, int>(array[4]);
			}
			if (array.Length > 5)
			{
				mGameBagBuyNum_lv = array[5].ToInt();
			}
			if (array.Length > 6)
			{
				mGameBagBuyNum_coin = array[6].ToInt();
			}
			if (array.Length > 7)
			{
				mGameBagBuyNum_iap = array[7].ToInt();
			}
			SaveBagInfoBag();
			SaveTemporaryData();
			SaveUnlockGoodsList();
			SaveProduceNumber();
		}
		string serverItem2 = Singleton<ServerManager>.Instance.GetServerItem(GameInitConfigKey);
		if (!string.IsNullOrEmpty(serverItem2))
		{
			try
			{
				List<IGameInitVo> list2 = JsonConvert.DeserializeObject<List<IGameInitVo>>(serverItem2);
				if (list2 != null && list2.Count > 0)
				{
					SerializableDataMap<int, IGameInitVo> serializableDataMap = new SerializableDataMap<int, IGameInitVo>("녧繲㜼\0郴\ud972");
					serializableDataMap.list = list2;
					serializableDataMap.InitMap();
					StaticDataBase<StaticDataManager>.GetInstance().GameInitList = serializableDataMap;
				}
			}
			catch
			{
				SaveGameInitMap();
			}
		}
		else
		{
			SaveGameInitMap();
		}
		string serverItem3 = Singleton<ServerManager>.Instance.GetServerItem(GameGridUnlockServerKey);
		if (serverItem3.IsNotNullAndEmpty())
		{
			mGameGridUnlockDic = DicFromJson<int, int>(serverItem3);
			SaveUnlockGridData();
		}
		mInitGoodsUniquIDList = false;
		mGeneratorUUIDDic = new Dictionary<string, int>();
		string serverItem4 = Singleton<ServerManager>.Instance.GetServerItem(GeneratorUUIDDataKey);
		if (!string.IsNullOrEmpty(serverItem4))
		{
			mGeneratorUUIDDic = JsonConvert.DeserializeObject<Dictionary<string, int>>(serverItem4);
		}
		if (mGeneratorUUIDDic.Count == 0)
		{
			mInitGoodsUniquIDList = true;
		}
		string serverItem5 = Singleton<ServerManager>.Instance.GetServerItem(GameLevelMapServerKey);
		if (serverItem5.IsNotNullAndEmpty())
		{
			mGameLevelMap = new Dictionary<int, GameGoodsVo>();
			List<List<object>> list3 = serverItem5.FromJson<List<List<object>>>();
			for (int i = 0; i < list3.Count; i++)
			{
				if (list3[i] != null && list3[i].Count == 2)
				{
					int key = Convert.ToInt32(list3[i][0]);
					GameGoodsVo gameGoodsVoByString = Singleton<GameLevelManager>.Instance.GetGameGoodsVoByString(list3[i][1].ToString());
					mGameLevelMap[key] = gameGoodsVoByString;
				}
			}
			SaveLevelMapData(bforce: true);
		}
		mGameBagMap = new Dictionary<int, GameGoodsVo>();
		string serverItem6 = Singleton<ServerManager>.Instance.GetServerItem(GameBagMapServerKey);
		if (serverItem6.IsNotNullAndEmpty())
		{
			List<string> list4 = serverItem6.FromJson<List<string>>();
			for (int j = 0; j < list4.Count; j++)
			{
				if (list4[j] != null)
				{
					GameGoodsVo gameGoodsVoByString2 = Singleton<GameLevelManager>.Instance.GetGameGoodsVoByString(list4[j]);
					mGameBagMap.Add(j, gameGoodsVoByString2);
				}
			}
			SaveBagMapData();
		}
		CheckChangeBagGoodsState();
		string serverItem7 = Singleton<ServerManager>.Instance.GetServerItem(GameLimitBagInfoKey);
		if (serverItem7.IsNotNullAndEmpty())
		{
			string[] array2 = serverItem7.Split('|');
			if (array2.Length != 0)
			{
				mGameBagOpenLimitNum = array2[0].ToInt();
			}
			if (array2.Length > 1)
			{
				mGameBagLimitEndTimeStamp = array2[1].ToInt();
			}
			if (array2.Length > 2)
			{
				mGameBagOpenLimitStartIndex = array2[2].ToInt();
			}
			if (array2.Length > 3)
			{
				mGameBagOpenLimitEndIndex = array2[3].ToInt();
			}
			SaveLimitBagInfoBag();
		}
		CheckGeneratorUUID();
		InitUnlockGrid();
		RefreshGridNum = true;
		GameLevelDefine.GeneratorCountAnalytic();
	}

	public void SaveGameLevelToServer()
	{
		SaveLevelMapToServer();
		SaveBagMapToServer();
		SaveBasicDataToServer();
		SaveGameGridUnlockToSerter();
		SaveGeneratorUUIDData();
		SaveLimitBagInfoBag();
		SaveGameInitMap();
	}

	private void SaveLevelMapToServer()
	{
		List<List<object>> list = new List<List<object>>();
		List<object> list2 = null;
		Dictionary<int, GameGoodsVo>.Enumerator enumerator = mGameLevelMap.GetEnumerator();
		while (enumerator.MoveNext())
		{
			GameGoodsVo value = enumerator.Current.Value;
			if (value != null && value.goodsID > 0)
			{
				list2 = new List<object>();
				list2.Add(enumerator.Current.Key);
				string stringByGameGoodsVo = Singleton<GameLevelManager>.Instance.GetStringByGameGoodsVo(value);
				list2.Add(stringByGameGoodsVo);
				list.Add(list2);
			}
		}
		string value2 = list.ToJson((Formatting)0);
		Singleton<ServerManager>.Instance.SaveServerItem(GameLevelMapServerKey, value2);
		updateServerDataCacheDic(GameLevelMapServerKey, value2, bRefresh: true);
	}

	private void SaveBagMapToServer()
	{
		List<object> list = new List<object>();
		Dictionary<int, GameGoodsVo>.Enumerator enumerator = mGameBagMap.GetEnumerator();
		GameGoodsVo gameGoodsVo = null;
		while (enumerator.MoveNext())
		{
			gameGoodsVo = enumerator.Current.Value;
			if (gameGoodsVo != null && gameGoodsVo.goodsID > 0)
			{
				string stringByGameGoodsVo = Singleton<GameLevelManager>.Instance.GetStringByGameGoodsVo(gameGoodsVo);
				list.Add(stringByGameGoodsVo);
			}
		}
		string value = list.ToJson((Formatting)0);
		Singleton<ServerManager>.Instance.SaveServerItem(GameBagMapServerKey, value);
		updateServerDataCacheDic(GameBagMapServerKey, value, bRefresh: true);
	}

	private void SaveBasicDataToServer()
	{
		string text = ListToJson(mUnlockGoodsList);
		List<int> list = mTemporaryItemVos.ToList();
		List<int> list2 = new List<int>();
		for (int i = 0; i < list.Count; i++)
		{
			list2.Add(list[i]);
		}
		string text2 = ListToJson(list2);
		string text3 = DicToJson(mProduceNumberDic);
		string value = string.Format("숖뀊綤簗筏cú叹숖뀈綤簗筏aú叹숖뀎綤簗筏gú叹类64끼}\ue365哕", new object[8] { mGameBagOpenNum, mGameBagBuyNum_diamond, text, text2, text3, mGameBagBuyNum_lv, mGameBagBuyNum_coin, mGameBagBuyNum_iap });
		Singleton<ServerManager>.Instance.SaveServerItem(GameBasicDataServerKey, value);
		updateServerDataCacheDic(GameBasicDataServerKey, value, bRefresh: true);
	}

	private void SaveGameGridUnlockToSerter()
	{
		string value = DicToJson(mGameGridUnlockDic);
		Singleton<ServerManager>.Instance.SaveServerItem(GameGridUnlockServerKey, value);
		updateServerDataCacheDic(GameGridUnlockServerKey, value, bRefresh: true);
	}

	public override void SaveDataToDB()
	{
		SaveLevelMapDataLogic();
		SaveGoodsDeleteEvent();
	}

	public void SaveLevelMapData(bool bforce = false)
	{
		SaveData = true;
	}

	private void SaveGameInitMap()
	{
		try
		{
			string value = JsonConvert.SerializeObject((object)StaticDataBase<StaticDataManager>.GetInstance().GameInitList.list);
			SaveItem(GameInitConfigKey, value);
			Singleton<ServerManager>.Instance.SaveServerItem(GameInitConfigKey, value);
		}
		catch
		{
			Log.E("錗\u035b鿄溢珿梊젺Ⲓ䴹ፘ㆓┺汻\u001c곉\udec8");
		}
	}

	private void SaveLevelMapDataLogic()
	{
		try
		{
			string value = JsonConvert.SerializeObject((object)mGameLevelMap);
			SaveItem(GameLevelMapKey, value);
		}
		catch
		{
			Log.E("錕\u035b퐒抳獄攼잶\u302b녊\u0653ᵰ\0짖哛");
			GameMapToJsonErrorAnalytic();
		}
		Singleton<ServerManager>.Instance.serverModel.SetServerPrefsChange(value: true);
	}

	private void SaveBagMapData()
	{
		try
		{
			string value = JsonConvert.SerializeObject((object)mGameBagMap);
			SaveItem(GameBagMapKey, value);
			RemoveItem("숯끻䆔䜰䝫\u0010\n匉숯끳䲍䤰役\r6匵䉓T4끄C\u2008\u1ae9");
		}
		catch
		{
			Log.E("鏒\u035b\uec15扰獄攼잶〈녊\u0653ᵰ\0짖哛");
			GameBagToJsonErrorAnalytic();
		}
		Singleton<ServerManager>.Instance.serverModel.SetServerPrefsChange(value: true);
	}

	private void SaveBasicData()
	{
		SaveBagInfoBag();
		SaveTemporaryData();
		SaveUnlockGoodsList();
		SaveProduceNumber();
		SaveUnlockGridData();
	}

	private void SaveBagInfoBag()
	{
		string value = string.Format("숖뀊綤簗筏cú叹숖뀈綤簗筏aú叹ꋞê赴", new object[5] { mGameBagOpenNum, mGameBagBuyNum_diamond, mGameBagBuyNum_lv, mGameBagBuyNum_coin, mGameBagBuyNum_iap });
		SaveItem(GameBasicBagInfoKey, value);
		Singleton<ServerManager>.Instance.serverModel.SetServerPrefsChange(value: true);
	}

	private void SaveLimitBagInfoBag()
	{
		string value = string.Format("숖뀊綤簗筏cú叹类24끼}ﵡ哕", new object[4] { mGameBagOpenLimitNum, mGameBagLimitEndTimeStamp, mGameBagOpenLimitStartIndex, mGameBagOpenLimitEndIndex });
		SaveItem(GameLimitBagInfoKey, value);
		Singleton<ServerManager>.Instance.SaveServerItem(GameLimitBagInfoKey, value);
		Singleton<ServerManager>.Instance.serverModel.SetServerPrefsChange(value: true);
	}

	private void SaveTemporaryData()
	{
		string value = StackToJson(mTemporaryItemVos);
		SaveItem(GameNewTemporaryKey, value);
		RemoveItem(GameBasicTemporaryKey);
		Singleton<ServerManager>.Instance.serverModel.SetServerPrefsChange(value: true);
	}

	private void SaveUnlockGoodsList()
	{
		string value = ListToJson(mUnlockGoodsList);
		SaveItem(GameBasicUnlockGoodsKey, value);
		Singleton<ServerManager>.Instance.serverModel.SetServerPrefsChange(value: true);
	}

	private void SaveProduceNumber()
	{
		string value = DicToJson(mProduceNumberDic);
		SaveItem(GameBasicProduceNumberKey, value);
		Singleton<ServerManager>.Instance.serverModel.SetServerPrefsChange(value: true);
	}

	private void SaveUnlockGridData()
	{
		string value = DicToJson(mGameGridUnlockDic);
		SaveItem(GameGridUnlockKey, value);
		Singleton<ServerManager>.Instance.serverModel.SetServerPrefsChange(value: true);
	}

	private void SaveBubbleDropNum()
	{
		SaveItem(GameBubbleDropNumKey, string.Format("숖뀊綤簗筏cú叹ꋞò赴", mBubbleDropNum, mLastBubbleDrop, mLastBubbleBuyGoodsID));
	}

	private void SaveGameAdAnalytics()
	{
		string value = DicToJson(mAdShowAnalyticsDic);
		SaveItem(GameAdShowAnalyticsKey, value);
		string value2 = DicToJson(mActivityAdShowAnalyticsDic);
		SaveItem(GameActivityAdShowAnalyticsKey, value2);
	}

	private void SaveMainOrderAnalytics()
	{
		string value = JsonConvert.SerializeObject((object)mDoingMainOrder);
		SaveItem(GameDoingMainOrderKey, value);
	}

	private void SaveDynamicBoxDropData()
	{
		string value = JsonConvert.SerializeObject((object)mDynamicBoxDropDic);
		SaveItem(GameDynamicBoxDropKey, value);
	}

	private void SaveGeneratorUUIDData()
	{
		string value = JsonConvert.SerializeObject((object)mGeneratorUUIDDic);
		SaveItem(GeneratorUUIDDataKey, value);
		Singleton<ServerManager>.Instance.SaveServerItem(GeneratorUUIDDataKey, value);
	}

	private void TimeUpdate()
	{
		mSendEventInterval++;
		if (mSendEventInterval > 900)
		{
			mSendEventInterval = 0;
			SendGeneratorSpeedEvents();
			SendMachineMakingEvent();
		}
	}

	public void AddGeneratorSpeedEvent(Dictionary<string, object> analyData)
	{
		if (mGeneratorSpeedEvents == null)
		{
			mGeneratorSpeedEvents = new List<Dictionary<string, object>>();
		}
		mGeneratorSpeedEvents.Add(analyData);
		if (mGeneratorSpeedEvents.Count >= 40)
		{
			SendGeneratorSpeedEvents();
		}
		else
		{
			SaveGeneratorSpeedEvent();
		}
	}

	public void SendGeneratorSpeedEvents()
	{
		if (mGeneratorSpeedEvents.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숏끥犾愐杚7Î反숵끕斫收瑇\"\u009a厙숵끏璩愶摐3Ö叕", mGeneratorSpeedEvents.ToArray());
			AnalyticInit.OnEvent("숏끥犾愐杚7Î反숵끕斫收瑇\"\u009a厙扤u4끟c\udb22㫚", dictionary);
			mGeneratorSpeedEvents.Clear();
			SaveGeneratorSpeedEvent();
		}
	}

	private void SaveGeneratorSpeedEvent()
	{
		string value = JsonConvert.SerializeObject((object)mGeneratorSpeedEvents);
		SaveItem(GeneratorSpeedEventKey, value);
	}

	public void AddMachineMakingEvent(Dictionary<string, object> analyData)
	{
		if (mMachineMakingEvents == null)
		{
			mMachineMakingEvents = new List<Dictionary<string, object>>();
		}
		mMachineMakingEvents.Add(analyData);
		if (mMachineMakingEvents.Count >= 30)
		{
			SendMachineMakingEvent();
		}
		else
		{
			SaveMachineMakingEvent();
		}
	}

	public void SendMachineMakingEvent()
	{
		if (mMachineMakingEvents.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숄끥犰甅杇&Î反숞끟憷琟浫6\u008a厉뻽", mMachineMakingEvents.ToArray());
			AnalyticInit.OnEvent("숄끥犰甅杇&Î反숞끟犷爟浫3Î反", dictionary);
			mMachineMakingEvents.Clear();
			SaveMachineMakingEvent();
		}
	}

	private void SaveMachineMakingEvent()
	{
		string value = JsonConvert.SerializeObject((object)mMachineMakingEvents);
		SaveItem(MachineMakingEventKey, value);
	}

	public void LevelDeleteGoods(GameGoodsVo _gameVo, IGoodsBaseVo _BaseVo, int _gridID, string _from, string _method)
	{
		if (_gameVo != null && _BaseVo != null && (IGoodsBaseVo.IsCreator(_BaseVo.type) || IGoodsBaseVo.IsPermanentlyInstrument(_BaseVo.type)))
		{
			GoodsDeleteAnalyticVo goodsDeleteAnalyticVo = new GoodsDeleteAnalyticVo();
			goodsDeleteAnalyticVo.id = _gameVo.goodsID;
			goodsDeleteAnalyticVo.uuid = _gameVo.UUID;
			goodsDeleteAnalyticVo.gridID = _gridID;
			goodsDeleteAnalyticVo.from = _from;
			goodsDeleteAnalyticVo.method = _method;
			ObjectManager.GetInstance().gameLevelModel.AddGoodsDeleteEvent(goodsDeleteAnalyticVo);
		}
	}

	public void AddGoodsDeleteEvent(GoodsDeleteAnalyticVo analyData)
	{
		if (mGoodsDeleteDic == null)
		{
			mGoodsDeleteDic = new Dictionary<string, GoodsDeleteAnalyticVo>();
		}
		if (analyData != null)
		{
			mGoodsDeleteDic[analyData.uuid] = analyData;
			if (mGoodsDeleteDic.Count >= 30)
			{
				SendGoodsDeleteEvent();
			}
			else
			{
				SaveData = true;
			}
		}
	}

	private void SendGoodsDeleteEvent()
	{
		if (mGoodsDeleteDic != null && mGoodsDeleteDic.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숅끥玾弆杛6Ò发숏끟徵搐摀7\u0082厁룪ë赴", mGoodsDeleteDic.Values.ToArray());
			AnalyticInit.OnEvent("숋끥沴椌杝<¶厵숍끟撆猎湛=\u0096厕晟d4끬g唨㻍", dictionary);
			mGoodsDeleteDic.Clear();
			SaveGoodsDeleteEvent();
		}
	}

	private void SaveGoodsDeleteEvent()
	{
		string value = JsonConvert.SerializeObject((object)mGoodsDeleteDic);
		SaveItem(MainlineGoodsDeleteKey, value);
	}

	public string GetSceneNameByID(int id)
	{
		return id switch
		{
			4 => "숟끌澆挠牚>Â叁녫剟✼\0逝\ud96f", 
			5 => "숍끌斆爎牑<\u009a厙수끎梶攙慫1¦厥北橴ā讍Ꝥ", 
			6 => "숍끌斆爎牑<\u009a厙恡t4끲a\udc31㣌", 
			7 => "숉끌殆弊牛=²厱숏끊疼瀐獐\rÚ叙", 
			8 => "숟끌澆挠牚>Â叁숟끥治攠歖0¶厵", 
			_ => "", 
		};
	}

	public override void ReloadModel()
	{
		Singleton<GameLevelManager>.Instance.InitDynamicBoxConfig();
		Singleton<GameLevelManager>.Instance.InitMachineConfig();
		if (ObjectManager.GetInstance().userDataModel.IsFirstEnterGame)
		{
			mGameGridUnlockDic = new Dictionary<int, int>();
			mGameLevelMap = new Dictionary<int, GameGoodsVo>();
			List<IGameInitVo> list = StaticDataBase<StaticDataManager>.GetInstance().GameInitList.list;
			GameGoodsVo gameGoodsVo = null;
			for (int i = 0; i < list.Count; i++)
			{
				gameGoodsVo = new GameGoodsVo();
				gameGoodsVo.goodsID = list[i].goodsID;
				gameGoodsVo.GoodsState = Singleton<GameLevelManager>.Instance.GetGameGoodsState(list[i].status);
				mGameLevelMap[list[i].gridID] = gameGoodsVo;
				if (ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel() < list[i].unlockLv)
				{
					continue;
				}
				if (mGameGridUnlockDic.ContainsKey(list[i].gridID))
				{
					if (mGameGridUnlockDic[list[i].gridID] != 1)
					{
						mGameGridUnlockDic[list[i].gridID] = 1;
					}
				}
				else
				{
					mGameGridUnlockDic.Add(list[i].gridID, 1);
				}
			}
			SaveUnlockGridData();
			SaveLevelMapDataLogic();
			SaveGameInitMap();
		}
		CheckGridUnlock();
		Singleton<GameLevelManager>.Instance.InitGridLock();
	}

	private void GameMapAnalytic()
	{
		List<GameGoodsAnalyticVo> list = new List<GameGoodsAnalyticVo>();
		GameGoodsAnalyticVo gameGoodsAnalyticVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			gameGoodsAnalyticVo = GameLevelDefine.GetGameGoodsAnalyticVo(item.Key, item.Value);
			if (gameGoodsAnalyticVo != null)
			{
				list.Add(gameGoodsAnalyticVo);
			}
		}
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟炵弶癙3Æ叅判皟\ud9c4ŀ", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵湶e4끟o尳䛘", dictionary);
		}
	}

	private void GameMapErrorAnalytic(string dataString)
	{
		List<GameGoodsErrorAnalyticVo> list = GameLevelDefine.SplitStringByLength(dataString, 2000);
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟炵弶癙3Æ叅숵끈玫琶敘;Ò发", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵숵끟炵弶癙3Æ叅匡橲ā讽該", dictionary);
		}
	}

	private void GameMapToJsonErrorAnalytic()
	{
		List<GameGoodsAnalyticVo> list = new List<GameGoodsAnalyticVo>();
		GameGoodsAnalyticVo gameGoodsAnalyticVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			gameGoodsAnalyticVo = GameLevelDefine.GetGameGoodsAnalyticVo(item.Key, item.Value);
			if (gameGoodsAnalyticVo != null)
			{
				list.Add(gameGoodsAnalyticVo);
			}
		}
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟炵弶癙3Æ叅숏끛犯爐獫7Î反橯r4끬k갡䋜", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵숵끟炵弶癙3Æ叅숏끛犯爐獫7Î反愽䢊", dictionary);
		}
	}

	private void GameBagAnalytic()
	{
		List<GameGoodsAnalyticVo> list = new List<GameGoodsAnalyticVo>();
		GameGoodsAnalyticVo gameGoodsAnalyticVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameBagMap)
		{
			gameGoodsAnalyticVo = GameLevelDefine.GetGameGoodsAnalyticVo(item.Key, item.Value);
			if (gameGoodsAnalyticVo != null)
			{
				list.Add(gameGoodsAnalyticVo);
			}
		}
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟枵弶癖3¢厡判皟\ud9c4ŀ", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵捶e4끟d尳㯏", dictionary);
		}
	}

	private void GameBagErrorAnalytic(string dataString)
	{
		List<GameGoodsErrorAnalyticVo> list = GameLevelDefine.SplitStringByLength(dataString, 2000);
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟枵弶癖3¢厡숵끈玫琶敘;Ò发", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵숵끟枵弶癖3¢厡匡橲ā讽該", dictionary);
		}
	}

	private void GameBagToJsonErrorAnalytic()
	{
		List<GameGoodsAnalyticVo> list = new List<GameGoodsAnalyticVo>();
		GameGoodsAnalyticVo gameGoodsAnalyticVo = null;
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameBagMap)
		{
			gameGoodsAnalyticVo = GameLevelDefine.GetGameGoodsAnalyticVo(item.Key, item.Value);
			if (gameGoodsAnalyticVo != null)
			{
				list.Add(gameGoodsAnalyticVo);
			}
		}
		if (list.Count > 0)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥沾攌杙7¶厵숵끟枵弶癖3¢厡숏끛犯爐獫7Î反橯r4끬k갡䋜", list.ToArray());
			AnalyticInit.OnEvent("숋끥沾攌杙7¶厵숵끟枵弶癖3¢厡숏끛犯爐獫7Î反愽䢊", dictionary);
		}
	}

	public void DebugAddAllGeneratorAndMachineInBag(List<BaseData3VO> gameGoodsVos)
	{
		int num = mGameBagOpenNum + mGameBagOpenLimitNum;
		int count = gameGoodsVos.Count;
		if (num < count)
		{
			ObjectManager.GetInstance().gameLevelModel.AddBagOpenNum(count - num);
		}
		ClearBagGoodsVo();
		for (int i = 0; i < count; i++)
		{
			GameGoodsVo gameGoodsVo = new GameGoodsVo();
			gameGoodsVo.goodsID = gameGoodsVos[i].id;
			gameGoodsVo.GoodsState = GameGoodsState.Normal;
			mGameBagMap.Add(i, gameGoodsVo);
		}
		SaveBagMapData();
	}

	public void DebugFullSetGameBagMap()
	{
		int num = mGameBagOpenNum + mGameBagOpenLimitNum;
		GameGoodsVo value = CreateNewGoods();
		ClearBagGoodsVo();
		for (int i = 0; i < num; i++)
		{
			mGameBagMap.Add(i, value);
		}
		SaveBagMapData();
	}

	public GameGoodsVo CreateNewGoods()
	{
		return new GameGoodsVo
		{
			goodsID = 101612,
			GoodsState = GameGoodsState.Normal
		};
	}

	public void ClearBagGoodsVo()
	{
		mGameBagMap.Clear();
		SaveBagMapData();
	}

	public void DebugGameMapErrorAnalytic()
	{
		string item = GetItem(GameLevelMapKey);
		GameMapErrorAnalytic(item);
	}

	public void DebugGameMapToJsonErrorAnalytic()
	{
		GameMapToJsonErrorAnalytic();
	}

	public void DebugGameBagErrorAnalytic()
	{
		string item = GetItem(GameBagMapKey);
		GameBagErrorAnalytic(item);
	}

	public void DebugGameBagToJsonErrorAnalytic()
	{
		GameBagToJsonErrorAnalytic();
	}

	public void DebugCompleteBaseProduce()
	{
		if (GameConst.GAME_MODE == GameConstMode.RELEASE)
		{
			return;
		}
		List<ILevelBaseProduceVO> list = StaticDataBase<StaticDataManager>.GetInstance().GoodsBaseProduceList.list;
		if (list != null && list.Count != 0)
		{
			if (mProduceNumberDic == null)
			{
				mProduceNumberDic = new Dictionary<int, int>();
			}
			for (int i = 0; i < list.Count; i++)
			{
				mProduceNumberDic[list[i].seriesID] = list[i].GetProduceList.Count;
				SaveProduceNumber();
			}
		}
	}

	public bool CheckGeneratorCollectionOpen()
	{
		foreach (KeyValuePair<int, GameGoodsVo> item3 in mGameLevelMap)
		{
			if (item3.Value != null && item3.Value.goodsID > 0 && !IGoodsBaseVo.IsDisabled(item3.Value.GoodsState))
			{
				BagItemShowVo item = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(item3.Value.goodsID);
				if (item != null && ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(item.unlockRestaurant))
				{
					return true;
				}
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item4 in mGameBagMap)
		{
			if (item4.Value != null && item4.Value.goodsID > 0 && !IGoodsBaseVo.IsDisabled(item4.Value.GoodsState))
			{
				BagItemShowVo item2 = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(item4.Value.goodsID);
				if (item2 != null && ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(item2.unlockRestaurant))
				{
					return true;
				}
			}
		}
		return false;
	}

	public List<GameGoodsVo> GetAllCollectGeneratorFromLevel()
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameLevelMap)
		{
			if (item2.Value != null && item2.Value.goodsID > 0 && !IGoodsBaseVo.IsDisabled(item2.Value.GoodsState))
			{
				BagItemShowVo item = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(item2.Value.goodsID);
				if (item != null && ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(item.unlockRestaurant))
				{
					list.Add(item2.Value);
				}
			}
		}
		return list;
	}

	public List<GameGoodsVo> GetAllCollectGeneratorFromBag()
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		bool flag = false;
		List<int> list2 = new List<int>();
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			if (item2.Value != null && item2.Value.goodsID > 0 && !IGoodsBaseVo.IsDisabled(item2.Value.GoodsState))
			{
				BagItemShowVo item = StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(item2.Value.goodsID);
				if (item != null && ObjectManager.GetInstance().restaurantLevelModel.RestaurantIsUnLock(item.unlockRestaurant))
				{
					list.Add(item2.Value);
					list2.Add(item2.Key);
					flag = true;
				}
			}
		}
		foreach (int item3 in list2)
		{
			mGameBagMap.Remove(item3);
		}
		if (flag)
		{
			SaveBagMapData();
		}
		return list;
	}

	public bool CheckGeneratorCollectionGuideOpenInLevel()
	{
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (item.Value != null && item.Value.goodsID > 0 && !IGoodsBaseVo.IsDisabled(item.Value.GoodsState) && StaticDataBase<StaticDataManager>.GetInstance().BagItemShowMap.GetItem(item.Value.goodsID) != null && ObjectManager.GetInstance().bagGeneratorStorageModel.CheckShowGuideGoods(item.Value.goodsID, 1))
			{
				return true;
			}
		}
		return false;
	}

	public int GetLevelGridIdByUId(string uuid)
	{
		throw new NotImplementedException();
	}

	public void RemoveGoodsInLevel(int goodsID)
	{
		bool flag = false;
		int[] array = mGameLevelMap.Keys.ToArray();
		foreach (int num in array)
		{
			if (mGameLevelMap.ContainsKey(num) && Singleton<GameLevelManager>.Instance.GridUnlock(num))
			{
				GameGoodsVo gameGoodsVo = mGameLevelMap[num];
				if (gameGoodsVo != null && !IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState) && goodsID == gameGoodsVo.goodsID)
				{
					mGameLevelMap[num] = null;
					RefreshGridNum = true;
					flag = true;
					break;
				}
			}
		}
		if (flag)
		{
			SaveLevelMapData();
		}
	}

	public void RemoveGoodsInBag(int goodsID)
	{
		if (goodsID <= 0)
		{
			return;
		}
		bool flag = false;
		int[] array = mGameBagMap.Keys.ToArray();
		foreach (int key in array)
		{
			if (mGameBagMap.ContainsKey(key))
			{
				GameGoodsVo gameGoodsVo = mGameBagMap[key];
				if (gameGoodsVo != null && goodsID == gameGoodsVo.goodsID)
				{
					mGameBagMap[key] = null;
					flag = true;
					break;
				}
			}
		}
		if (flag)
		{
			CheckGameBagLimitOpenNum();
			SaveBagMapData();
			EventManager.GetInstance().DispatchEvent(100047);
		}
	}

	public int GetStackTotal()
	{
		return ObjectManager.GetInstance().commonFieldStorageModel.GetStorageField(GameLevelFiled, StackTotalKey, 0);
	}

	public void AddStackTotal(int delta)
	{
		ObjectManager.GetInstance().commonFieldStorageModel.AddStorageField(GameLevelFiled, StackTotalKey, delta, 0);
	}

	public int GetStackID()
	{
		int storageField = ObjectManager.GetInstance().commonFieldStorageModel.GetStorageField(GameLevelFiled, StackIDKey, 1);
		ObjectManager.GetInstance().commonFieldStorageModel.AddStorageField(GameLevelFiled, StackIDKey, 1, 0);
		return storageField;
	}

	public string GetStackGoods()
	{
		List<GameGoodsVo> list = new List<GameGoodsVo>();
		foreach (KeyValuePair<int, GameGoodsVo> item in mGameLevelMap)
		{
			if (item.Value != null && item.Value.goodsID > 0 && item.Value.StackID > 0 && item.Value.GoodsUses > 0)
			{
				list.Add(item.Value);
			}
		}
		foreach (KeyValuePair<int, GameGoodsVo> item2 in mGameBagMap)
		{
			if (item2.Value != null && item2.Value.goodsID > 0 && item2.Value.StackID > 0 && item2.Value.GoodsUses > 0)
			{
				list.Add(item2.Value);
			}
		}
		StringBuilder stringBuilder = new StringBuilder();
		for (int i = 0; i < list.Count; i++)
		{
			GameGoodsVo gameGoodsVo = list[i];
			if (gameGoodsVo != null)
			{
				if (i > 0)
				{
					stringBuilder.Append(',');
				}
				stringBuilder.Append(gameGoodsVo.StackID).Append('|').Append(gameGoodsVo.goodsID)
					.Append('|')
					.Append(gameGoodsVo.GoodsUses);
			}
		}
		return stringBuilder.ToString();
	}
}
