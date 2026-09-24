using System;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
using TLF;
using UniRx.Async;
using UnityEngine;

public class ItemDataModel : BaseModel
{
	private static int MultiplierKey = 30;

	private static int AddendKey = 168;

	private static readonly string itemMapKey = "숧끮䆜倨䥫\u001f\n匉医橄ā譑륁";

	private readonly string itemCDTimeServerKey = "숧끮䒜吨䥫\u0011\u0016匕숵끷劜嘶䥧\u0017N卍䉅R4끄C\u2008\u1ae9";

	private readonly string UseItemDataKey = "숵끩䖜䴶啽\u0006\u001a匙숾끾䮘䔿彵\r2匱뻅";

	private readonly string InfinteEnergyKey = "숣끴䖟弤䥺\u0006\u001a匙숸끴徜䐹䕳\v\u0082厁頊k赴";

	private InfiniteEnergyVo mInfinteEnergy;

	public ItemUseDataVo mItemUseDataVo;

	public Dictionary<int, ItemMapVO> itemMap;

	public int LightingCDMax;

	public int LightingCDTime;

	private HashSet<int> _dirtyItemsForUI = new HashSet<int>();

	private bool _needDispatchThisFrame;

	private List<Dictionary<string, object>> mItemGetEventList = new List<Dictionary<string, object>>();

	private int mSendItemGetEventInterval = -1;

	private int SEND_ITEM_GET_EVENT_CD = 10;

	private int mSendGoodsEventInterval;

	private int SEND_GOODS_EVENT_CD = 8;

	private int mSendPurchaseEventInterval;

	private int SEND_PURCHASE_EVENT_CD = 10;

	private int mAdLimitRefreshInterval;

	private int AD_LIMIT_REFRESH_CD = 10;

	private int BubbleDropOpenType;

	public int BubbleDropMax;

	public int BubbleCDTime;

	public int BubbleTotalMax;

	private int AdShareMax;

	private int AdShareRecover;

	private int AdShareCDTime;

	public int AdShareTotalMax;

	private int AdEnergyMax;

	private int AdEnergyRecover;

	private int AdEnergyCDTime;

	public int AdRecoverEnergy = 25;

	public int AdEnergyTotalMax;

	private string lastSaveItemMap;

	private Dictionary<int, string> ItemGetTypeDic;

	private Dictionary<int, string> ItemUseTypeDic;

	public int LightingCDMaxWithBuff
	{
		get
		{
			WeekPassBuffData buffData = ObjectManager.GetInstance().weekPassModel.GetBuffData();
			if (buffData != null)
			{
				return LightingCDMax + buffData.energyLimitBuff;
			}
			return LightingCDMax;
		}
	}

	public int LightingCDTimeWithBuff
	{
		get
		{
			WeekPassBuffData buffData = ObjectManager.GetInstance().weekPassModel.GetBuffData();
			if (buffData != null)
			{
				return (int)((float)LightingCDTime * (1f - buffData.energyRecoverBuff));
			}
			return LightingCDTime;
		}
	}

	public int SetInfiniteRemainingTime
	{
		get
		{
			return mInfinteEnergy.RemainingTime;
		}
		set
		{
			mInfinteEnergy.RemainingTime = value;
			mInfinteEnergy.StartTime = ServerTimeManager.CurrentTime();
			SaveInfinte();
		}
	}

	public static Dictionary<int, ItemMapVO> GetCacheItemData()
	{
		Dictionary<int, ItemMapVO> result = new Dictionary<int, ItemMapVO>();
		string text = PlayerPrefs.GetString(itemMapKey);
		if (!string.IsNullOrEmpty(text))
		{
			try
			{
				result = JsonUtility.FromJson<Serialization<int, ItemMapVO>>(text).ToDictionary();
			}
			catch (Exception)
			{
				Log.E("䯢ឪ훛灓\ue32e！\ua8e2㘿៲");
			}
		}
		return result;
	}

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		AddendKey = Random.Range(1, 1000);
		MultiplierKey = Random.Range(1, 10) * 10;
		EventManager.GetInstance().AddEventListener<bool>(100057, OnUpdateEnergyTime);
		InitEnergyCDConfig();
		InitBubbleCDConfig();
		InitAdShareCDConfig();
		InitAdEnergyCDConfig();
		itemMap = new Dictionary<int, ItemMapVO>();
		string item = GetItem(itemMapKey);
		if (!string.IsNullOrEmpty(item))
		{
			try
			{
				itemMap = DicFromJson<int, ItemMapVO>(item);
			}
			catch (Exception)
			{
				Log.E("䯢ឪ훛灓\ue32e！\ua8e2㘿៲");
			}
			foreach (KeyValuePair<int, ItemMapVO> item4 in itemMap)
			{
				item4.Value.EncryptNumber(item4.Value.num);
			}
		}
		else
		{
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1009, BubbleDropMax, needNotice: true, 0, initialize: true);
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1010, AdShareMax, needNotice: true, 0, initialize: true);
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1011, AdEnergyMax, needNotice: true, 0, initialize: true);
		}
		mInfinteEnergy = new InfiniteEnergyVo();
		string item2 = GetItem(InfinteEnergyKey);
		if (!string.IsNullOrEmpty(item2))
		{
			try
			{
				mInfinteEnergy = JsonConvert.DeserializeObject<InfiniteEnergyVo>(item2);
			}
			catch (Exception)
			{
				Log.E("䮷ឪ꿛卓\ue32eﾲ䭆Უ릛换4끦h弤⋆");
			}
		}
		mItemUseDataVo = new ItemUseDataVo();
		string item3 = GetItem(UseItemDataKey);
		if (!string.IsNullOrEmpty(item3))
		{
			try
			{
				mItemUseDataVo = JsonConvert.DeserializeObject<ItemUseDataVo>(item3);
			}
			catch (Exception)
			{
				Log.E("䯢ឪ훛罓\ue32e！\ua8e2᰿\uf1c8旻欯");
			}
		}
		RefreshInfinteEnergy();
		EventManager.GetInstance().AddEventListener(100002, TimeUpdate);
		EventManager.GetInstance().AddEventListener(100197, ReloadItemConfig);
	}

	private void OnUpdateEnergyTime(bool result)
	{
		if (result)
		{
			RefreshCDTime();
			RefreshInfinteEnergy();
		}
	}

	public void RefreshCDTime(bool refreshEnergy = true)
	{
		if (refreshEnergy)
		{
			RefreshEnergyTime();
		}
		RefreshBubbleCDTime();
		RefreshAdShareCDTime();
		RefreshAdEnergyCDTime();
	}

	private void RefreshEnergyTime()
	{
		ItemMapVO itemByID = GetItemByID(1004);
		if (itemByID == null)
		{
			return;
		}
		long itemNum = GetItemNum(1004);
		if (itemNum < LightingCDMaxWithBuff && itemByID.GetCDStartTime() != 0L && ServerTimeManager.CurrentTime() != 0L)
		{
			long num = ServerTimeManager.CurrentTime() - itemByID.GetCDStartTime();
			if (num < 0)
			{
				itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
				num = 0L;
			}
			float num2 = Mathf.Min((float)((int)(num / LightingCDTimeWithBuff) + itemNum), (float)LightingCDMaxWithBuff);
			num2 -= (float)itemNum;
			if (num2 != 0f)
			{
				if (num2 + (float)itemNum >= (float)LightingCDMaxWithBuff)
				{
					itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
				}
				else
				{
					long num3 = num - (int)num2 * LightingCDTimeWithBuff;
					if (num3 < 0)
					{
						num3 = 0L;
					}
					itemByID.SetCDStartTime(ServerTimeManager.CurrentTime() - num3);
				}
				ChangeItemNum(1004, (int)num2, needNotice: true, 1);
				ObjectManager.GetInstance().orderWaveRewardRecordModel.RecordHistoryWaveData_TimeFreeAddEnergy((int)num2);
			}
		}
		itemNum = GetItemNum(1004);
		if (itemNum < LightingCDMaxWithBuff && itemByID.GetCDStartTime() == 0L && ServerTimeManager.CurrentTime() != 0L)
		{
			itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
			EventManager.GetInstance().DispatchEvent(100058, arg: true);
		}
	}

	private void RefreshBubbleCDTime()
	{
		if (BubbleDropOpenType == 1)
		{
			if (ObjectManager.GetInstance().userDataModel.IsRefreshBubbleLimit)
			{
				long nOriginalChgNum = BubbleDropMax - GetItemNum(1009);
				ChangeItemNum(1009, nOriginalChgNum, needNotice: true, 0, initialize: true);
				ObjectManager.GetInstance().userDataModel.IsRefreshBubbleLimit = false;
			}
		}
		else
		{
			OldRereshBubbleTime();
		}
	}

	private void OldRereshBubbleTime()
	{
		ItemMapVO itemByID = GetItemByID(1009);
		long itemNum = GetItemNum(1009);
		if (itemByID == null)
		{
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1009, BubbleDropMax, needNotice: true, 0);
			itemByID = GetItemByID(1009);
		}
		if (itemByID != null && itemNum < BubbleDropMax && itemByID.GetCDStartTime() != 0L && ServerTimeManager.CurrentTime() != 0L)
		{
			long num = ServerTimeManager.CurrentTime() - itemByID.GetCDStartTime();
			if (num < 0)
			{
				itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
				num = 0L;
			}
			float num2 = Mathf.Min((float)((int)(num / BubbleCDTime) + itemNum), (float)BubbleDropMax);
			num2 -= (float)itemNum;
			if (num2 != 0f)
			{
				if (num2 + (float)itemNum >= (float)BubbleDropMax)
				{
					itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
				}
				else
				{
					long num3 = num - (int)num2 * BubbleCDTime;
					if (num3 < 0)
					{
						num3 = 0L;
					}
					itemByID.SetCDStartTime(ServerTimeManager.CurrentTime() - num3);
				}
				ChangeItemNum(1009, (int)num2, needNotice: true, 0);
			}
		}
		itemNum = GetItemNum(1009);
		if (itemByID != null && itemNum < BubbleDropMax && itemByID.GetCDStartTime() == 0L && ServerTimeManager.CurrentTime() != 0L)
		{
			itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
		}
	}

	private void RefreshAdShareCDTime()
	{
		ItemMapVO itemByID = GetItemByID(1010);
		long itemNum = GetItemNum(1010);
		if (itemByID == null)
		{
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1010, AdShareMax, needNotice: true, 0);
			itemByID = GetItemByID(1010);
		}
		if (itemByID != null && itemNum < AdShareMax && itemByID.GetCDStartTime() != 0L && ServerTimeManager.CurrentTime() != 0L)
		{
			long num = ServerTimeManager.CurrentTime() - itemByID.GetCDStartTime();
			if (num < 0)
			{
				itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
				num = 0L;
			}
			float num2 = Mathf.Min((float)((int)(num / AdShareCDTime) * AdShareRecover + itemNum), (float)AdShareMax);
			num2 -= (float)itemNum;
			if (num2 != 0f)
			{
				if (num2 + (float)itemNum >= (float)AdShareMax)
				{
					itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
				}
				else
				{
					long num3 = num - (int)(num2 / (float)AdShareRecover) * AdShareCDTime;
					if (num3 < 0)
					{
						num3 = 0L;
					}
					itemByID.SetCDStartTime(ServerTimeManager.CurrentTime() - num3);
				}
				ChangeItemNum(1010, (int)num2, needNotice: true, 0);
			}
		}
		itemNum = GetItemNum(1010);
		if (itemByID != null && itemNum < AdShareMax && itemByID.GetCDStartTime() == 0L && ServerTimeManager.CurrentTime() != 0L)
		{
			itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
		}
	}

	private void RefreshAdEnergyCDTime()
	{
		ItemMapVO itemByID = GetItemByID(1011);
		long itemNum = GetItemNum(1011);
		if (itemByID == null)
		{
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1011, AdEnergyMax, needNotice: true, 0);
			itemByID = GetItemByID(1011);
		}
		if (itemByID != null && itemNum < AdEnergyMax && itemByID.GetCDStartTime() != 0L && ServerTimeManager.CurrentTime() != 0L)
		{
			long num = ServerTimeManager.CurrentTime() - itemByID.GetCDStartTime();
			if (num < 0)
			{
				itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
				num = 0L;
			}
			float num2 = Mathf.Min((float)((int)(num / AdEnergyCDTime) * AdEnergyRecover + itemNum), (float)AdEnergyMax);
			num2 -= (float)itemNum;
			if (num2 != 0f)
			{
				if (num2 + (float)itemNum >= (float)AdEnergyMax)
				{
					itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
				}
				else
				{
					long num3 = num - (int)(num2 / (float)AdEnergyRecover) * AdEnergyCDTime;
					if (num3 < 0)
					{
						num3 = 0L;
					}
					itemByID.SetCDStartTime(ServerTimeManager.CurrentTime() - num3);
				}
				ChangeItemNum(1011, (int)num2, needNotice: true, 0);
			}
		}
		itemNum = GetItemNum(1011);
		if (itemByID != null && itemNum < AdEnergyMax && itemByID.GetCDStartTime() == 0L && ServerTimeManager.CurrentTime() != 0L)
		{
			itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
		}
	}

	public void RefreshInfinteEnergy()
	{
		if (mInfinteEnergy.InfiniteEnergyState)
		{
			int num = (int)(ServerTimeManager.CurrentTime() - mInfinteEnergy.StartTime);
			if (num > 0)
			{
				mInfinteEnergy.RemainingTime -= num;
				mInfinteEnergy.StartTime = ServerTimeManager.CurrentTime();
			}
			if (mInfinteEnergy.RemainingTime <= 0)
			{
				CloseInfiniteEnergy();
				EventManager.GetInstance().DispatchEvent(100193);
			}
			else
			{
				SaveInfinte();
			}
		}
	}

	private void InitEnergyCDConfig()
	{
		string configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("수끔劼攙敓+N卍녣䝯㘂\0逩\ud970");
		if (configConstant == null)
		{
			Log.E("跊ʡ궻湨卄攼젺Ⲓ埣㯕擀梆\u1938ｪ졄\udbce谔Მ쳐渕ⴄ割\u009a叻숓끈掾演敦7\u0092厑슉끟炫渔瘔Ö닆ヅ수끔劼攙敓+N卍녣䝯㘂\0逪\ud970");
			return;
		}
		string[] array = configConstant.Split('|');
		if (array.Length != 2)
		{
			Log.E("跊ʡ궻湨卄攼젺Ⲓ埣㯕擀梆\u1938ｪ졄\udbce谔Მ쳐渕ⴄ割\u009a叻숓끈掾演敦7\u0092厑슉끟炫渔瘔Ö닆ヅ");
			return;
		}
		int.TryParse(array[0], out LightingCDMax);
		int.TryParse(array[1], out LightingCDTime);
	}

	private void InitBubbleCDConfig()
	{
		string configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏䒻爉䉘7\u0016匕숚끊咖礛潑<V单搤䭽");
		BubbleDropOpenType = configConstant.ToInt();
		if (BubbleDropOpenType == 1)
		{
			IEnergyTagVO energyTagConfig = ObjectManager.GetInstance().userTagModel.GetEnergyTagConfig();
			if (energyTagConfig != null)
			{
				BubbleDropMax = energyTagConfig.mainBubbleLimit;
			}
		}
		string configConstant2 = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숈끏䒻爉托7\u0016匕匫橰ā讅땸");
		if (configConstant2.IsNullOrEmpty())
		{
			Log.E("谞⺅턒炳㬠河㦪㘟厫\u1058쟔ᤛ콚挟뾾옢䧷䔣\uf336ⵧ\uef0c庝䒦ᶤ깚\u1733\ud7a7扛ꄔ0Ú匫숮끖炼䴯扆=Æ叅녡䕸\ud7ae瘀\uf51f멣");
			return;
		}
		string[] array = configConstant2.Split('|');
		if (array.Length != 3)
		{
			Log.E("谞⺅턒炳㬠河㦪㘟厏ᕊ犷\u1928콚置꽁웑㽳");
			return;
		}
		if (BubbleDropOpenType == 0)
		{
			int.TryParse(array[0], out BubbleDropMax);
		}
		int.TryParse(array[1], out BubbleCDTime);
		int.TryParse(array[2], out BubbleTotalMax);
	}

	private void InitAdShareCDConfig()
	{
		string configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숂끞斊䌃䅕 \u009a厙匫橮ā讥鹧");
		if (configConstant.IsNullOrEmpty())
		{
			Log.E("谀⺅\ue712䪳㭅凹⼃ݸ匐⽔ꇀ㢆䴭閽Ｕ\u0dbf匭㡒维\u20cc켽本⧅匰숂끞斊䌃䅕 \u009a厙숃끔蒿瀄潓r㬗㘖៲");
			return;
		}
		string[] array = configConstant.Split('|');
		if (array.Length != 4)
		{
			Log.E("谀⺅\ue712䪳㭅凹⼃ݸ厅⽔燎历䴸３\u0096匠숏끛溫昐桷=¾厽\u1069譧4ᠼ弑♋孇");
			return;
		}
		int.TryParse(array[0], out AdShareMax);
		int.TryParse(array[1], out AdShareRecover);
		int.TryParse(array[2], out AdShareCDTime);
		int.TryParse(array[3], out AdShareTotalMax);
	}

	private void InitAdEnergyCDConfig()
	{
		string configConstant = StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숄끞果礅䅑 ¢厡녃幯㔲\0逗\ud975");
		if (configConstant.IsNullOrEmpty())
		{
			Log.E("趟ʡ瞦\uef21卹鄼쩩\ud8bc埚㯕ⳕꅓ᧻鄺➹㼖ꕊቄ韩湋ॵ6\u001a匙숓끈溾昔敷=¾厽녩䕧\ud7ae瘀\uf51f멣");
			return;
		}
		string[] array = configConstant.Split('|');
		if (array.Length != 5)
		{
			Log.E("趟ʡ瞦\uef21卹鄼쩩\ud8bc㴯끻犽朰ౚ7Î反숄끹架\u2005祒;¢厡㫊ꄆ䳳\u02db");
			return;
		}
		int.TryParse(array[0], out AdEnergyMax);
		int.TryParse(array[1], out AdEnergyRecover);
		int.TryParse(array[2], out AdEnergyCDTime);
		int.TryParse(array[3], out AdRecoverEnergy);
		int.TryParse(array[4], out AdEnergyTotalMax);
	}

	public void ReloadItemConfig()
	{
		StaticDataBase<StaticDataManager>.GetInstance().ReplaceConfigData();
		ObjectManager.GetInstance().taskPassModel.ResetAdType();
		ObjectManager.GetInstance().taskPassModelV2.ResetAdType();
		ObjectManager.GetInstance().taskThemePassModel.ResetAdType();
		ObjectManager.GetInstance().taskThemePassModelV2.ResetAdType();
		ObjectManager.GetInstance().linkGiftModel.CheckConfig();
		ObjectManager.GetInstance().shopDataModel.RefreshGeneratorGiftData();
		Singleton<GameLevelManager>.Instance.ReloadConfig();
		InitBubbleCDConfig();
		InitAdShareCDConfig();
		InitAdEnergyCDConfig();
		if (!ObjectManager.GetInstance().userDataModel.IsInitialUserData)
		{
			long nOriginalChgNum = BubbleDropMax - GetItemNum(1009);
			ChangeItemNum(1009, nOriginalChgNum, needNotice: true, 0, initialize: true);
			long nOriginalChgNum2 = AdShareMax - GetItemNum(1010);
			ChangeItemNum(1010, nOriginalChgNum2, needNotice: true, 0, initialize: true);
			long nOriginalChgNum3 = AdEnergyMax - GetItemNum(1011);
			ChangeItemNum(1011, nOriginalChgNum3, needNotice: true, 0, initialize: true);
		}
		long num = BubbleDropMax - GetItemNum(1009);
		if (num < 0)
		{
			ChangeItemNum(1009, num, needNotice: true, 0, initialize: true);
		}
		long num2 = AdShareMax - GetItemNum(1010);
		if (num2 < 0)
		{
			ChangeItemNum(1010, num2, needNotice: true, 0, initialize: true);
		}
		long num3 = AdEnergyMax - GetItemNum(1011);
		if (num3 < 0)
		{
			ChangeItemNum(1011, num3, needNotice: true, 0, initialize: true);
		}
	}

	public bool CanEnergyByAd()
	{
		if (ObjectManager.GetInstance().adStrateryModel.IsAdBlack(AdStratery.AdScenePos.MAIN_ENERGY))
		{
			return false;
		}
		if (ObjectManager.GetInstance().itemDataModel.GetItemNum(1011) <= 0)
		{
			return false;
		}
		if (ObjectManager.GetInstance().userDataModel.userDataVo.AdEnergyTotal >= ObjectManager.GetInstance().itemDataModel.AdEnergyTotalMax)
		{
			return false;
		}
		return true;
	}

	public int GetEnergyUseTotal()
	{
		if (mItemUseDataVo != null)
		{
			return mItemUseDataVo.UseEnergyTotal;
		}
		return 0;
	}

	public void AddEnergyUse(int num)
	{
		if (mItemUseDataVo != null)
		{
			mItemUseDataVo.UseEnergyTotal += num;
			SaveItemUse();
		}
	}

	public void ResetEnergyUse()
	{
		if (mItemUseDataVo != null)
		{
			mItemUseDataVo.UseEnergyTotal = 0;
			SaveItemUse();
		}
	}

	public void SyncServerData(object data, bool needNotice = false)
	{
		if (data is Dictionary<int, int>)
		{
			data = data.ToJson((Formatting)0);
		}
		long timeStamp = TimeManager.Instance.GetTimeStamp(isSecond: false);
		string text = data.ToString();
		if (!string.IsNullOrEmpty(text))
		{
			Dictionary<int, int> dictionary = new Dictionary<int, int>();
			try
			{
				dictionary = text.FromJson<Dictionary<int, int>>();
			}
			catch (Exception ex)
			{
				Log.E(ex.Message);
				Log.E(string.Format("䭛ឪ\uded4烌\ue35c嘁\ua8e2㘳ꆗǀ盀潇湧逥ꞌ㎋勡㏗\ud992ɉ", text));
				return;
			}
			foreach (KeyValuePair<int, int> item in dictionary)
			{
				SetItemNum(item.Key, item.Value);
				if (needNotice)
				{
					_registerItemEvent(item.Key);
				}
			}
			foreach (KeyValuePair<int, ItemMapVO> item2 in itemMap)
			{
				if (!dictionary.ContainsKey(item2.Key))
				{
					SetItemNum(item2.Key, 0L);
				}
			}
		}
		SaveItemMap();
		TimeManager.Instance.GetTimeStamp(isSecond: false);
		mInfinteEnergy = new InfiniteEnergyVo();
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(InfinteEnergyKey);
		if (!string.IsNullOrEmpty(serverItem))
		{
			try
			{
				mInfinteEnergy = JsonConvert.DeserializeObject<InfiniteEnergyVo>(serverItem);
			}
			catch (Exception)
			{
				Log.E("䮹ឪÛ桓\ue32e｟⦋ר\ua7f1䙪떊曲\ue056'\u009e可");
			}
		}
		long serverExp = Singleton<ServerManager>.Instance.serverModel.GetServerExp();
		if (serverExp >= 0)
		{
			SetItemNum(1001, serverExp);
		}
	}

	public void SaveItemToServer(int itemId, long changeNum)
	{
		Dictionary<int, long> dictionary = new Dictionary<int, long>();
		dictionary.Add(itemId, changeNum);
		Singleton<ServerManager>.Instance.UpdateDataToServer("匭橴ā讵鵳", dictionary);
	}

	public object GetItemDataToServer()
	{
		Dictionary<int, long> dictionary = new Dictionary<int, long>();
		Dictionary<int, long> dictionary2 = new Dictionary<int, long>();
		foreach (KeyValuePair<int, ItemMapVO> item in itemMap)
		{
			if (!Enumerable.Contains(dictionary.Keys, item.Key))
			{
				dictionary.Add(item.Key, GetItemNum(item.Key));
			}
			if (item.Value.GetCDStartTime() > 0)
			{
				if (!dictionary2.ContainsKey(item.Key))
				{
					dictionary2.Add(item.Key, item.Value.GetCDStartTime());
				}
				else
				{
					dictionary2[item.Key] = item.Value.GetCDStartTime();
				}
			}
		}
		if (dictionary2.Count > 0)
		{
			Singleton<ServerManager>.Instance.SaveServerItem(itemCDTimeServerKey, DicToJson(dictionary2));
		}
		AnalyticInit.GetLocalDataAnalytic(1);
		return dictionary;
	}

	public void DataConflictChange(object data)
	{
		string text = data.ToString();
		if (string.IsNullOrEmpty(text))
		{
			return;
		}
		Dictionary<int, long> dictionary = new Dictionary<int, long>();
		foreach (KeyValuePair<int, long> item in text.FromJson<Dictionary<int, long>>())
		{
			if (Enumerable.Contains(itemMap.Keys, item.Key))
			{
				long itemNum = GetItemNum(item.Key);
				if (itemNum >= 0 && itemNum != item.Value)
				{
					dictionary.Add(item.Key, itemNum - item.Value);
				}
			}
			else
			{
				SetItemNum(item.Key, item.Value);
			}
		}
		Singleton<ServerManager>.Instance.UpdateDataToServer("匭橴ā讵鵳", dictionary);
	}

	public void SaveItemMap(bool bforce = false)
	{
		SaveData = true;
	}

	public void SaveInfinte(bool bforce = false)
	{
		SaveData = true;
	}

	public void SaveItemUse(bool bforce = false)
	{
		SaveData = true;
	}

	public override void SaveDataToDB()
	{
		SaveItemMapData();
		SaveInfinteEnergy();
		SaveItemUseData();
	}

	public void SaveItemMapData()
	{
		if (itemMap == null)
		{
			return;
		}
		Dictionary<int, ItemVO> dictionary = new Dictionary<int, ItemVO>();
		Dictionary<int, ItemMapVO>.Enumerator enumerator = itemMap.GetEnumerator();
		ItemMapVO itemMapVO = null;
		while (enumerator.MoveNext())
		{
			itemMapVO = enumerator.Current.Value;
			long num = itemMapVO.DecryptNumber();
			if (dictionary.ContainsKey(itemMapVO.id))
			{
				dictionary[itemMapVO.id].num = num;
				dictionary[itemMapVO.id].mCdStartTime = itemMapVO.mCdStartTime;
				continue;
			}
			dictionary.Add(itemMapVO.id, new ItemVO
			{
				id = itemMapVO.id,
				num = num,
				mCdStartTime = itemMapVO.mCdStartTime
			});
		}
		string text = DicToJson(dictionary);
		if (GameConst.GAME_MODE != GameConstMode.RELEASE)
		{
			DicToJson(itemMap);
		}
		if (lastSaveItemMap == null || text != lastSaveItemMap)
		{
			lastSaveItemMap = text;
			SaveItem(itemMapKey, text);
		}
	}

	public void SaveInfinteEnergy()
	{
		if (mInfinteEnergy != null)
		{
			string value = JsonConvert.SerializeObject((object)mInfinteEnergy);
			SaveItem(InfinteEnergyKey, value);
			Singleton<ServerManager>.Instance.SaveServerItem(InfinteEnergyKey, value);
		}
	}

	public void SaveItemUseData()
	{
		if (mItemUseDataVo != null)
		{
			string value = JsonConvert.SerializeObject((object)mItemUseDataVo);
			SaveItem(UseItemDataKey, value);
		}
	}

	public ItemMapVO GetItemByID(int itemID)
	{
		ItemMapVO value = null;
		if (itemMap == null)
		{
			return null;
		}
		itemMap.TryGetValue(itemID, out value);
		return value;
	}

	public void SetItemNum(int id, long num, bool delay = false)
	{
		if (itemMap != null)
		{
			if (!itemMap.ContainsKey(id))
			{
				itemMap[id] = new ItemMapVO();
			}
			itemMap[id].id = id;
			itemMap[id].EncryptNumber(num);
			SaveItemMap(!delay);
		}
	}

	public long GetItemNum(int itemID)
	{
		long result = 0L;
		if (itemMap == null)
		{
			return result;
		}
		ItemMapVO value = null;
		if (itemMap.TryGetValue(itemID, out value))
		{
			result = value.DecryptNumber();
		}
		return result;
	}

	public string GetItemFormat(EItemID eItemId)
	{
		long itemNum = GetItemNum((int)eItemId);
		if (itemNum > 99999 && itemNum <= 9999999)
		{
			return itemNum / 1000 + "뻗";
		}
		if (itemNum > 9999999)
		{
			return itemNum / 1000000 + "뻑";
		}
		return itemNum.ToString();
	}

	public string GetNumFormat(int num)
	{
		if (num > 99999 && num <= 9999999)
		{
			return num / 1000 + "뻗";
		}
		if (num > 9999999)
		{
			return num / 1000000 + "뻑";
		}
		return num.ToString();
	}

	public string GetNumFormat(long num)
	{
		if (num > 99999 && num <= 9999999)
		{
			return num / 1000 + "뻗";
		}
		if (num > 9999999)
		{
			return num / 1000000 + "뻑";
		}
		return num.ToString();
	}

	private void _registerItemEvent(int itemID)
	{
		_dirtyItemsForUI.Add(itemID);
		_needDispatchThisFrame = true;
	}

	public void UpdateItemEvents()
	{
		if (!_needDispatchThisFrame)
		{
			return;
		}
		foreach (int item in _dirtyItemsForUI)
		{
			EventManager.GetInstance().DispatchEvent(100014, item);
		}
		_dirtyItemsForUI.Clear();
		_needDispatchThisFrame = false;
	}

	public long ChangeItemNum(int itemID, long nOriginalChgNum, bool needNotice, int eventFrom, bool initialize = false, int generatorSeries = 0, int sellGoodsID = 0)
	{
		if (nOriginalChgNum == 0L)
		{
			return GetItemNum(itemID);
		}
		if (!judgeItemEnough(itemID, nOriginalChgNum, eventFrom))
		{
			return -1L;
		}
		if (StaticDataBase<StaticDataManager>.GetInstance().ItemMap.GetItem(itemID) == null)
		{
			return -1L;
		}
		long itemNum = GetItemNum(itemID);
		long num = itemNum + nOriginalChgNum;
		long num2 = nOriginalChgNum;
		if (itemID == 1001)
		{
			long upgradeNeedExp = ObjectManager.GetInstance().playerLevelModel.GetUpgradeNeedExp();
			if (num > upgradeNeedExp)
			{
				num = ObjectManager.GetInstance().playerLevelModel.GetOverflowSaveExp(num);
				num2 = num - itemNum;
			}
			if (nOriginalChgNum > 0)
			{
				ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.GetExp, nOriginalChgNum);
			}
		}
		SetItemNum(itemID, num);
		ItemMapVO itemByID = GetItemByID(itemID);
		switch (itemID)
		{
		case 1004:
			if (num < LightingCDMaxWithBuff && itemNum >= LightingCDMaxWithBuff)
			{
				itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
			}
			if (num >= LightingCDMaxWithBuff)
			{
				EventManager.GetInstance().DispatchEvent(100058, arg: false);
			}
			else
			{
				EventManager.GetInstance().DispatchEvent(100058, arg: true);
			}
			if (nOriginalChgNum > 0 && eventFrom != 2 && eventFrom != 47)
			{
				ObjectManager.GetInstance().timelimitMultModel.Activate2MultByEnergy(nOriginalChgNum);
				ObjectManager.GetInstance().timelimitMultModel.Activate4MultByEnergy(nOriginalChgNum);
				ObjectManager.GetInstance().timelimitMultModel.Activate8MultByEnergy(nOriginalChgNum);
			}
			if (nOriginalChgNum < 0 && !initialize && eventFrom != 9 && eventFrom != 10)
			{
				ObjectManager.GetInstance().userDataModel.UserCostPower(nOriginalChgNum, generatorSeries);
				ObjectManager.GetInstance().gameOrdersModel.RecordUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().orderWaveRewardRecordModel.RecordHistoryWaveData_useEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.CostEnergy, (int)(-nOriginalChgNum));
				ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.CostEnergy, (int)(-nOriginalChgNum));
				ObjectManager.GetInstance().taskPassModelV2.AddBattlePassTAEnergyInfo((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.CostEnergy, (int)(-nOriginalChgNum));
				ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.CostEnergy, (int)(-nOriginalChgNum));
				ObjectManager.GetInstance().taskThemePassModelV2.AddBattlePassTAEnergyInfo((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().dailyChallengeModel.SetChallengeTask(DailyTaskType.CostEnergy, (int)(-nOriginalChgNum));
				ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.CostEnergy, (int)(-nOriginalChgNum));
				ObjectManager.GetInstance().adGiftModel.AddEnergyCost((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().pigBankModel.UseEnergy2AddDiamond((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().raceWinnerOrderModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().newRaceModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().fiveRaceModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().timeLimited8MultModel.AddEnergyConsume(nOriginalChgNum);
				ObjectManager.GetInstance().puzzleModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().independentStageMergeModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().treasureCraftingModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().waveOrderAnalyseModel.RecordUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().feverFlambeV2Model.AddEnergyConsume((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().timelimitMultModel.AddEnergyConsume(nOriginalChgNum);
				ObjectManager.GetInstance().feverFlambeStageModel.AddEnergyConsume((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().feverFlambeV3Model.AddTokenByEnergy((int)(-nOriginalChgNum), null);
				ObjectManager.GetInstance().raceVsModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().raceVsV2Model.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().race1v1CodeModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().surprisedBoxModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().idnStageBasicModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().DiscoViewModel.UserCostEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().peakOrderModel.AddOrderUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().independentMiningModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().GauntletTreasureModel.AddTAEnergyInfo((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().BoostRaceTaskChainModel.AddTAEnergyInfo((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().ShopDailyLimitGiftModel.UserCostEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().threeChooseOneEnergyGift2Model.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().ccWildCardGiftPackModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().newTreasureHuntingGiftPackModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().independentFarmModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().festivalGiftV2Model.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().energyBackUpModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().fireHelperModel.ConsumeEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().idnStageModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().day3PackModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().orderReturnBackModel.BeforeRestartAddEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().airPlaneModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().ccNChoose1CardGiftModel.AddUseEnergy((int)(-nOriginalChgNum));
				ObjectManager.GetInstance().newTreasureHuntingV2Model.AddUseEnergy((int)(-nOriginalChgNum));
				EventManager.GetInstance().DispatchEvent(203133, 27, (int)(-nOriginalChgNum));
			}
			break;
		case 1002:
			ObjectManager.GetInstance().gameOrdersModel.ResetBuildTaskLimitOrdrState();
			break;
		}
		if (itemID == 1003 && nOriginalChgNum < 0 && !initialize && eventFrom != 9 && eventFrom != 10)
		{
			ObjectManager.GetInstance().userDataModel.UserCostDiamond(nOriginalChgNum);
			ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.CostDiamond, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.CostDiamond, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskPassModelV2.AddBattlePassTADiamondInfo((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.CostDiamond, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.CostDiamond, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskThemePassModelV2.AddBattlePassTADiamondInfo((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().dailyChallengeModel.SetChallengeTask(DailyTaskType.CostDiamond, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().diamondPassModel.ChangeDiamondPassScore((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().surpriseGiftModel.ChangeDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().surprisedBoxModel.AddOrderUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().orderWaveRewardRecordModel.RecordHistoryWaveData_useDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.CostDiamond, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().waveOrderAnalyseModel.RecordUseGem((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().DiscoViewModel.UserCostDiamond(-nOriginalChgNum);
			ObjectManager.GetInstance().ShopDailyLimitGiftModel.UserCostDiamond(-nOriginalChgNum);
			ObjectManager.GetInstance().peakOrderModel.AddOrderUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().threeChooseOneEnergyGift2Model.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().ccWildCardGiftPackModel.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().newTreasureHuntingGiftPackModel.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().independentFarmModel.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().festivalGiftV2Model.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().energyBackUpModel.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().fireHelperModel.ConsumeDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().idnStageModel.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().day3PackModel.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().airPlaneModel.AddUseDiamond((int)(-nOriginalChgNum), isRecordAll: true);
			ObjectManager.GetInstance().ccNChoose1CardGiftModel.AddUseDiamond((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().BoostRaceTaskChainModel.AddTADiamondInfo((int)(-nOriginalChgNum));
			ObjectManager.GetInstance().newTreasureHuntingV2Model.AddUseDiamond((int)(-nOriginalChgNum));
			EventManager.GetInstance().DispatchEvent(203133, 5, (int)(-nOriginalChgNum));
		}
		if (itemID == 1007 && nOriginalChgNum < 0 && !initialize && eventFrom != 9 && eventFrom != 10)
		{
			ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.UseCookingCard, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.UseCookingCard, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.UseCookingCard, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.UseCookingCard, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().dailyChallengeModel.SetChallengeTask(DailyTaskType.UseCookingCard, (int)(-nOriginalChgNum));
			ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.UseCookingCard, (int)(-nOriginalChgNum));
			EventManager.GetInstance().DispatchEvent(203133, 6, (int)(-nOriginalChgNum));
		}
		if (itemID == 1002 && nOriginalChgNum > 0 && !initialize)
		{
			ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.GetGold, (int)nOriginalChgNum);
			ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.GetGold, (int)nOriginalChgNum);
			ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.GetGold, (int)nOriginalChgNum);
			ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.GetGold, (int)nOriginalChgNum);
			ObjectManager.GetInstance().dailyChallengeModel.AddDailyChallengeScore((int)nOriginalChgNum);
			ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.GetGold, (int)nOriginalChgNum);
		}
		if (itemID == 1009 && num < BubbleDropMax && itemNum >= BubbleDropMax)
		{
			itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
		}
		if (itemID == 1010)
		{
			if (num < AdShareMax && itemNum >= AdShareMax)
			{
				itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
			}
			if (nOriginalChgNum < 0 && !initialize)
			{
				ObjectManager.GetInstance().userDataModel.AddAdShareTotal((int)(-nOriginalChgNum));
			}
		}
		if (itemID == 1011)
		{
			if (num < AdEnergyMax && itemNum >= AdEnergyMax)
			{
				itemByID.SetCDStartTime(ServerTimeManager.CurrentTime());
			}
			if (nOriginalChgNum < 0 && !initialize)
			{
				ObjectManager.GetInstance().userDataModel.AddAdEnergyTotal((int)(-nOriginalChgNum));
			}
		}
		if (num2 != 0L)
		{
			SaveItemToServer(itemID, num2);
		}
		if (needNotice)
		{
			_registerItemEvent(itemID);
		}
		EventManager.GetInstance().DispatchEvent(100015, itemID, nOriginalChgNum, eventFrom);
		if (!initialize)
		{
			EventManager.GetInstance().DispatchEvent(100016, itemID, nOriginalChgNum, eventFrom);
		}
		if (itemID == 1006 && nOriginalChgNum > 0 && !initialize)
		{
			EventManager.GetInstance().DispatchEvent(100112);
		}
		if (itemID == 1008 && nOriginalChgNum > 0 && !initialize && ObjectManager.GetInstance().starTreasureBoxModel.m_starTreasureBoxVO != null)
		{
			ObjectManager.GetInstance().starTreasureBoxModel.AddStarAmount(nOriginalChgNum);
		}
		logUAEvent(itemID, nOriginalChgNum);
		logEvent(itemID, nOriginalChgNum, eventFrom, sellGoodsID);
		if (nOriginalChgNum > 0 && (itemID == 1044 || itemID == 1046))
		{
			ObjectManager.GetInstance().mainRaceModel.AddScore((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1054)
		{
			ObjectManager.GetInstance().newRaceModel.AddScore((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == ObjectManager.GetInstance().fiveRaceModel.GetScoreItemId())
		{
			ObjectManager.GetInstance().fiveRaceModel.AddScore((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1048)
		{
			ObjectManager.GetInstance().championshipModel.AddScore((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1045)
		{
			if (ObjectManager.GetInstance().treasureHuntingModel.IsInActivity() || ObjectManager.GetInstance().treasureHuntingModel.isLastChance)
			{
				ObjectManager.GetInstance().treasureHuntingModel.AddUnlockItem((int)nOriginalChgNum, "숉끏玫攊灜3Ò发", isSave: true, isUpdate: false);
			}
			if (ObjectManager.GetInstance().newTreasureHuntingModel.IsInActivity() || ObjectManager.GetInstance().newTreasureHuntingModel.isLastChance)
			{
				ObjectManager.GetInstance().newTreasureHuntingModel.AddUnlockItem((int)nOriginalChgNum, "숉끏玫攊灜3Ò发", isSave: true, isUpdate: false);
			}
		}
		if (nOriginalChgNum > 0 && itemID == 1076 && (ObjectManager.GetInstance().newTreasureHuntingV2Model.IsInActivity() || ObjectManager.GetInstance().newTreasureHuntingV2Model.isLastChance))
		{
			string getType = string.Empty;
			switch (eventFrom)
			{
			case 8:
				getType = "匫橲ā讕鱲";
				break;
			case 28:
				getType = "숉끏玫攊灜3Ò发";
				break;
			case 99:
				getType = "北橴ā讝饥";
				break;
			}
			ObjectManager.GetInstance().newTreasureHuntingV2Model.AddUnlockItem((int)nOriginalChgNum, getType, isSave: true, isUpdate: false);
		}
		if (nOriginalChgNum > 0 && itemID == 1050)
		{
			ObjectManager.GetInstance().independentMergeModel.ChangePassExp((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1053)
		{
			ObjectManager.GetInstance().treasureCraftingModel.ChangePassExp((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1061)
		{
			ObjectManager.GetInstance().independentMiningModel.ChangePassExp((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == ObjectManager.GetInstance().luckyHuntModel.GetItemID())
		{
			ObjectManager.GetInstance().luckyHuntModel.RecordItemUpdate((int)nOriginalChgNum, eventFrom);
		}
		if (nOriginalChgNum > 0 && itemID == ObjectManager.GetInstance().puzzleModel.GetTokenItemID())
		{
			ObjectManager.GetInstance().puzzleModel.RecordItemUpdate((int)nOriginalChgNum, eventFrom);
		}
		if (itemID == 1052 && !initialize)
		{
			if (nOriginalChgNum > 0)
			{
				ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.GetTreasureCraftingCoin, nOriginalChgNum);
			}
			else
			{
				ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.CostTreasureCraftingCoin, nOriginalChgNum);
			}
		}
		if (itemID == 1060 && !initialize && nOriginalChgNum < 0)
		{
			ObjectManager.GetInstance().independentMiningModel.AddTaskCostToken((int)nOriginalChgNum);
		}
		if (itemID == 1062 && !initialize && nOriginalChgNum < 0)
		{
			ObjectManager.GetInstance().independentFarmModel.AddTaskCostToken((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1056)
		{
			ObjectManager.GetInstance().raceVsModel.AddPlayerScore((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1069)
		{
			ObjectManager.GetInstance().raceVsV2Model.AddPlayerScore((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1072)
		{
			ObjectManager.GetInstance().race1v1CodeModel.AddPlayerScore((int)nOriginalChgNum, eventFrom);
		}
		if (nOriginalChgNum > 0 && itemID == 1063)
		{
			ObjectManager.GetInstance().fireHelperModel.AddTokens((int)nOriginalChgNum);
		}
		if (nOriginalChgNum > 0 && itemID == 1059)
		{
			ObjectManager.GetInstance().peakOrderModel.AddScore((int)nOriginalChgNum);
		}
		return num;
	}

	public void SetInfiniteEnergy(int time, int goodsID = 0)
	{
		mInfinteEnergy.UnlimitedGoodsId = goodsID;
		if (mInfinteEnergy.InfiniteEnergyState)
		{
			mInfinteEnergy.RemainingTime += time;
			mInfinteEnergy.DurationTime += time;
		}
		else
		{
			mInfinteEnergy.InfiniteEnergyState = true;
			mInfinteEnergy.StartTime = ServerTimeManager.CurrentTime();
			mInfinteEnergy.RemainingTime = time;
			mInfinteEnergy.DurationTime = time;
			EventManager.GetInstance().DispatchEvent(100193);
		}
		SaveInfinte();
	}

	public void CloseInfiniteEnergy()
	{
		mInfinteEnergy.InfiniteEnergyState = false;
		mInfinteEnergy.StartTime = 0L;
		mInfinteEnergy.RemainingTime = 0;
		mInfinteEnergy.DurationTime = 0;
		UnlimitedEnergyEvent(mInfinteEnergy.UnlimitedGoodsId, mInfinteEnergy.UnlimitedEnergy);
		mInfinteEnergy.UnlimitedGoodsId = 0;
		mInfinteEnergy.UnlimitedEnergy = 0;
		SaveInfinte();
		EventManager.GetInstance().DispatchEvent(202088);
		Singleton<PopupManager>.Instance.ResetShowPopups(EPopupFromScene.S_InfiniteEnergyOver);
	}

	public bool GetInfiniteEnergyState()
	{
		if (mInfinteEnergy != null)
		{
			return mInfinteEnergy.InfiniteEnergyState;
		}
		return false;
	}

	public void AddUnlimitedCostEnergy(int num)
	{
		mInfinteEnergy.UnlimitedEnergy += num;
		SaveInfinte();
	}

	public void SetActivityEnergy(int num)
	{
		long itemNum = GetItemNum(1032);
		int num2 = num - (int)itemNum;
		ChangeItemNum(1032, num2, needNotice: true, 76, initialize: true);
	}

	public void ClearActivityEnergy()
	{
		long itemNum = GetItemNum(1032);
		if (itemNum > 0)
		{
			ChangeItemNum(1032, -itemNum, needNotice: true, 0, initialize: true);
		}
	}

	private void logEvent(int itemID, long nOriginalChgNum, int eventFrom, int goodsID = 0)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		string text = "";
		if (nOriginalChgNum > 0)
		{
			text = "숞끥徰期村?\u0082厁欷㺌";
			if (eventFrom > 0)
			{
				dictionary.Add("숏끥璾礐杀\rÖ叕搤䭽", GetItemGetType(eventFrom));
				if (eventFrom == 5 || eventFrom == 6)
				{
					dictionary.Add("숏끥循朐杘>\u0082厁息o4끳a尻㣌", goodsID);
				}
			}
			dictionary.Add("숏끥掾漐杀\r\u0092厑곕\u0083赴", nOriginalChgNum);
		}
		else if (nOriginalChgNum < 0)
		{
			text = "숞끥徰挟村?\u0082厁녯婮☈\0逕\ud96f";
			if (eventFrom > 0)
			{
				dictionary.Add("숙끥璬礚村\rÖ叕搤䭽", GetItemUseType(eventFrom));
				if (eventFrom == 9 || eventFrom == 10)
				{
					dictionary.Add("숄끥徬朅材=\u0082厁息o4끳a尻㣌", goodsID);
				}
			}
			dictionary.Add("숙끥掬漚村\r\u0092厑곕\u0083赴", -nOriginalChgNum);
		}
		if (nOriginalChgNum != 0L && eventFrom > 0)
		{
			dictionary.Add("숞끥徰琟村?\u0082厁ꃦû赴", itemID.ToString());
			if (text == "숞끥徰期村?\u0082厁欷㺌")
			{
				addItemGetEvent(text, dictionary, eventFrom);
			}
			else
			{
				AnalyticInit.OnEvent(text, dictionary);
			}
		}
	}

	private void addItemGetEvent(string eventName, Dictionary<string, object> analyData, int eventFrom)
	{
		if (!(eventName != "숞끥徰期村?\u0082厁欷㺌"))
		{
			if (mItemGetEventList == null)
			{
				mItemGetEventList = new List<Dictionary<string, object>>();
			}
			mItemGetEventList.Add(analyData);
			if (mSendItemGetEventInterval < 0 && eventFrom != 1)
			{
				mSendItemGetEventInterval = 0;
			}
			if (mItemGetEventList.Count > 10)
			{
				SendItemGetEvent();
			}
		}
	}

	private void TimeUpdate()
	{
		if (mSendItemGetEventInterval >= 0)
		{
			mSendItemGetEventInterval++;
			if (mSendItemGetEventInterval > SEND_ITEM_GET_EVENT_CD)
			{
				SendItemGetEvent();
			}
		}
		mSendGoodsEventInterval++;
		if (mSendGoodsEventInterval > SEND_GOODS_EVENT_CD)
		{
			mSendGoodsEventInterval = 0;
			GameLevelDefine.SendChessBoardGoodsEvent();
		}
		mSendPurchaseEventInterval++;
		if (mSendPurchaseEventInterval > SEND_PURCHASE_EVENT_CD)
		{
			mSendPurchaseEventInterval = 0;
			ShopManager.SendPurchaseEvent();
		}
		mAdLimitRefreshInterval++;
		if (mAdLimitRefreshInterval >= AD_LIMIT_REFRESH_CD)
		{
			RefreshCDTime(refreshEnergy: false);
		}
	}

	public void SendItemGetEvent()
	{
		mSendItemGetEventInterval = -1;
		if (mItemGetEventList != null && mItemGetEventList.Count >= 1)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숞끥徰期村?\u0082厁扥t4끤c倨㫉", mItemGetEventList.ToArray());
			AnalyticInit.OnEvent("숞끥徰期村?\u0082厁녥䝴㉐\0逢\ud969", dictionary);
			mItemGetEventList.Clear();
		}
	}

	private void logUAEvent(int itemID, long changeNum)
	{
		if (changeNum < 0)
		{
			switch (itemID)
			{
			case 1002:
				AnalyticInit.OnUAEvent(UAEventType.ITEM, "숞끕澪椟捫1Â叁뻲");
				break;
			case 1003:
				AnalyticInit.OnUAEvent(UAEventType.ITEM, "숞끕榪感捫6ª厩刟熇\ud9c5Ő");
				break;
			case 1007:
				AnalyticInit.OnUAEvent(UAEventType.ITEM, "숞끕澪漟捫1Â叁숍끓犷搎歷3Î反");
				break;
			}
		}
	}

	private void UnlimitedEnergyEvent(int goodsID, int amount)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숅끥玾弆杛6Ò发漻䉼", goodsID);
		dictionary.Add("숅끥徺攆杇&\u0082厁숍끟憫洎湍\r\u008a厉刟燯\ud9c7ŀ", amount);
		AnalyticInit.OnEvent("숋끥疭渌杄\rÚ叙숃끓撴弄汀7\u0096厕녥呮ℤ\0逩\ud97d", dictionary);
	}

	public bool judgeItemEnough(int itemID, long nOriginalChgNum, int eventFrom = 0)
	{
		if (GetItemNum(itemID) + nOriginalChgNum < 0)
		{
			ItemEnoughAnalytic(itemID, nOriginalChgNum, eventFrom);
			return false;
		}
		return true;
	}

	private void ItemEnoughAnalytic(int itemID, long nOriginalChgNum, int eventFrom = 0)
	{
		if (itemID == 1003 && eventFrom > 0)
		{
			ObjectManager.GetInstance().userDataModel.SetStuckspotNumByType(UserStuckspotType.OutofDiamond, 1);
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숙끥璬礚村\rÖ叕搤䭽", GetItemUseType(eventFrom));
			dictionary.Add("숃끥澽渄杕?Â叁녤剟㘲\0途\ud966", GameLevelDefine.Abs((int)nOriginalChgNum));
			int stuckspotNumByType = ObjectManager.GetInstance().userDataModel.GetStuckspotNumByType(UserStuckspotType.OutofDiamond);
			int stuckspotNumByType2 = ObjectManager.GetInstance().userDataModel.GetStuckspotNumByType(UserStuckspotType.None);
			dictionary.Add("숋끥枺漌杀7¢厡숞끃斆猟牝?\u009a厙", stuckspotNumByType);
			dictionary.Add("숆끥璸椇杘\rÖ叕듘\u00af赴", stuckspotNumByType2);
			AnalyticInit.OnEvent("숟끥暶䐠杀\u001d\u009e厝녩孡㰴\0途\ud96f", dictionary);
		}
	}

	public IItemVO GetIItemVOById(int id)
	{
		return StaticDataBase<StaticDataManager>.GetInstance().ItemMap.GetItem(id);
	}

	public List<BaseData3VO> GetRealRewardList(List<BaseData3VO> rewardList)
	{
		if (rewardList == null || rewardList.Count == 0)
		{
			return rewardList;
		}
		List<int> replaceHeads = ObjectManager.GetInstance().userDataModel.GetReplaceHeads();
		List<BaseData3VO> list = new List<BaseData3VO>();
		for (int i = 0; i < rewardList.Count; i++)
		{
			bool flag = false;
			if (rewardList[i].type == 3)
			{
				if (rewardList[i].id == 4)
				{
					if (ObjectManager.GetInstance().userHeadModel.IsHaveHead(rewardList[i].num) && replaceHeads.Contains(rewardList[i].num))
					{
						flag = true;
						IUserHeadVo headByTypeAndID = ObjectManager.GetInstance().userHeadModel.GetHeadByTypeAndID(UserHeadType.Head, rewardList[i].num);
						if (headByTypeAndID == null || headByTypeAndID.GetReplaceRewards() == null || headByTypeAndID.GetReplaceRewards().Count == 0)
						{
							continue;
						}
						list.AddRange(headByTypeAndID.GetReplaceRewards());
					}
				}
				else if (rewardList[i].id == 5 && ObjectManager.GetInstance().userHeadModel.IsHaveHeadFrame(rewardList[i].num) && replaceHeads.Contains(rewardList[i].num))
				{
					flag = true;
					IUserHeadVo headByTypeAndID2 = ObjectManager.GetInstance().userHeadModel.GetHeadByTypeAndID(UserHeadType.Frame, rewardList[i].num);
					if (headByTypeAndID2 == null || headByTypeAndID2.GetReplaceRewards() == null || headByTypeAndID2.GetReplaceRewards().Count == 0)
					{
						continue;
					}
					list.AddRange(headByTypeAndID2.GetReplaceRewards());
				}
			}
			if (!flag)
			{
				list.Add(rewardList[i]);
			}
		}
		return list;
	}

	public void AddRewardBaseData3(List<BaseData3VO> rewardList, bool notice, int eventFrom, bool isForbidSendGoodsEvent = false)
	{
		if (rewardList == null || rewardList.Count == 0)
		{
			return;
		}
		bool flag = false;
		for (int i = 0; i < rewardList.Count; i++)
		{
			if (rewardList[i].type == 1)
			{
				if (rewardList[i].id == 1037)
				{
					ObjectManager.GetInstance().dailyChallengeModel.AddDailyChallengeScore(rewardList[i].num);
					ObjectManager.GetInstance().cardTaskChainModel.OnItemDeltaChange(rewardList[i].id, rewardList[i].num, eventFrom);
				}
				else
				{
					ChangeItemNum(rewardList[i].id, rewardList[i].num, notice, eventFrom);
				}
			}
			else if (rewardList[i].type == 2)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(rewardList[i].id);
				if (goodsBaseVoById != null && goodsBaseVoById.type != 17 && goodsBaseVoById.activityType == 0)
				{
					if (goodsBaseVoById.type == 29)
					{
						ObjectManager.GetInstance().generatorTemporaryBagModel.AddTemporaryItem(rewardList[i].id, rewardList[i].num);
					}
					else
					{
						ObjectManager.GetInstance().gameLevelModel.AddTemporaryItem(rewardList[i].id, rewardList[i].num);
					}
					flag = true;
					GameLevelDefine.RestrictedGoodsAnalytic(rewardList[i].id, rewardList[i].num, eventFrom);
					GameLevelDefine.OnEventChessBoardGoods("뻕\u00af赴", rewardList[i].id, rewardList[i].num, eventFrom);
				}
			}
			else if (rewardList[i].type == 3)
			{
				if (rewardList[i].id == 1)
				{
					Singleton<GameLevelManager>.Instance.AddBagOpenNum(rewardList[i].num, eventFrom);
				}
				else if (rewardList[i].id == 13)
				{
					Singleton<GameLevelManager>.Instance.AddLimitBagOpenNum(rewardList[i].num);
				}
				else if (rewardList[i].id == 2)
				{
					ObjectManager.GetInstance().taskPassModel.ChangeTaskPassScore(rewardList[i].num);
					ObjectManager.GetInstance().taskPassModelV2.ChangeTaskPassScore(rewardList[i].num);
					ObjectManager.GetInstance().taskThemePassModel.ChangeTaskPassScore(rewardList[i].num);
					ObjectManager.GetInstance().taskThemePassModelV2.ChangeTaskPassScore(rewardList[i].num);
				}
				else if (rewardList[i].id == 4)
				{
					ObjectManager.GetInstance().userHeadModel.AddUserHead(rewardList[i].num);
				}
				else if (rewardList[i].id == 5)
				{
					ObjectManager.GetInstance().userHeadModel.AddUserHeadFrame(rewardList[i].num);
				}
				else if (rewardList[i].id == 20)
				{
					ObjectManager.GetInstance().userHeadModel.AddAvatorByGroup(rewardList[i].num);
				}
				else if (rewardList[i].id == 16)
				{
					ObjectManager.GetInstance().sceneActivityModel.AddActivityScore(rewardList[i].num);
				}
				else if (rewardList[i].id == 18)
				{
					ObjectManager.GetInstance().cardCollectionV2Model.AddPieceCount(rewardList[i].num);
					ObjectManager.GetInstance().cardCollectionV3Model.AddPieceCount(rewardList[i].num);
				}
				else if (rewardList[i].id == 21)
				{
					ObjectManager.GetInstance().energyBackUpModel.CacheRandomRewards(rewardList[i].id);
				}
				else if (rewardList[i].id == 22)
				{
					ObjectManager.GetInstance().orderPartCommitBuffModel.AddBuff(rewardList[i]);
				}
			}
			else if (rewardList[i].type == 5)
			{
				IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(rewardList[i].id);
				if (goodsBaseVoById2 != null && goodsBaseVoById2.type != 17)
				{
					GameLevelDefine.OnEventChessBoardGoods("뻕\u00af赴", rewardList[i].id, rewardList[i].num, eventFrom);
					flag = true;
				}
			}
			else if (rewardList[i].type == 6)
			{
				IGoodsBaseVo goodsBaseVoById3 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(rewardList[i].id);
				if (goodsBaseVoById3 != null && goodsBaseVoById3.type != 17)
				{
					GameLevelDefine.OnEventChessBoardGoods("뻕\u00af赴", rewardList[i].id, rewardList[i].num, eventFrom);
					flag = true;
				}
			}
			else if (rewardList[i].type == 7)
			{
				IGoodsBaseVo goodsBaseVoById4 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(rewardList[i].id);
				if (goodsBaseVoById4 != null && goodsBaseVoById4.type != 17)
				{
					GameLevelDefine.OnEventChessBoardGoods("뻕\u00af赴", rewardList[i].id, rewardList[i].num, eventFrom);
					flag = true;
				}
			}
			else if (rewardList[i].type == 8)
			{
				IGoodsBaseVo goodsBaseVoById5 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(rewardList[i].id);
				if (goodsBaseVoById5 != null && goodsBaseVoById5.type != 17)
				{
					GameLevelDefine.OnEventChessBoardGoods("뻕\u00af赴", rewardList[i].id, rewardList[i].num, eventFrom);
					flag = true;
				}
			}
			else if (rewardList[i].type == 9)
			{
				string getType = string.Empty;
				switch (eventFrom)
				{
				case 8:
					getType = "匫橲ā讕鱲";
					break;
				case 28:
					getType = "숉끏玫攊灜3Ò发";
					break;
				}
				ObjectManager.GetInstance().independentMergeModel.AddIndependentGoods(rewardList[i].id, rewardList[i].num, getType, null, isTotalDrop: false);
			}
			else if (rewardList[i].type == 10 || rewardList[i].type == 12)
			{
				ObjectManager.GetInstance().cardCollectionV2Model.AddCardItem(rewardList[i]);
				ObjectManager.GetInstance().cardCollectionV3Model.AddCardItem(rewardList[i]);
				ObjectManager.GetInstance().cardCollectionTempBagModel.AddTemporaryItem(rewardList[i].id, rewardList[i].num);
				ObjectManager.GetInstance().cardCollectionV2Model.AnalyticAddTemporaryItem(rewardList[i].id, rewardList[i].num, eventFrom);
				ObjectManager.GetInstance().cardCollectionV3Model.AnalyticAddTemporaryItem(rewardList[i].id, rewardList[i].num, eventFrom);
			}
			else if (rewardList[i].type == 11)
			{
				ObjectManager.GetInstance().mergeFishingGameModel.AddGoodsToTemporary(rewardList[i].id, rewardList[i].num, "숉끏玫攊灜3Ò发", null, isTotalDrop: false);
				EventManager.GetInstance().DispatchEvent(202055);
			}
			else if (rewardList[i].type == 13)
			{
				ObjectManager.GetInstance().mergeFishingV2GameModel.AddGoodsToTemporary(rewardList[i].id, rewardList[i].num, "숉끏玫攊灜3Ò发", null, isTotalDrop: false);
				EventManager.GetInstance().DispatchEvent(202065);
			}
			else if (rewardList[i].type == 14)
			{
				ObjectManager.GetInstance().treasureCraftingModel.AddTemporaryGoods(rewardList[i].id, rewardList[i].num, "숉끏玫攊灜3Ò发");
			}
			else if (rewardList[i].type == 15)
			{
				ObjectManager.GetInstance().independentStageMergeModel.AddIndependentGoods(rewardList[i].id, rewardList[i].num, "숉끏玫攊灜3Ò发", null, isTotalDrop: true, isTop: false, eventFrom);
			}
			else if (rewardList[i].type == 16)
			{
				string getType2 = string.Empty;
				switch (eventFrom)
				{
				case 8:
					getType2 = "匫橲ā讕鱲";
					break;
				case 28:
					getType2 = "숉끏玫攊灜3Ò发";
					break;
				}
				ObjectManager.GetInstance().independentBasicModel.AddIndependentGoods(rewardList[i].id, rewardList[i].num, getType2, null, isTotalDrop: false);
			}
			else if (rewardList[i].type == 17)
			{
				ObjectManager.GetInstance().idnStageBasicModel.AddIndependentGoods(rewardList[i].id, rewardList[i].num, "숉끏玫攊灜3Ò发", null, isTotalDrop: true, isTop: false, eventFrom);
			}
			else if (rewardList[i].type == 18)
			{
				ObjectManager.GetInstance().independentMiningModel.AddTemporaryGoods(rewardList[i].id, rewardList[i].num, "숉끏玫攊灜3Ò发");
			}
			else if (rewardList[i].type == 22)
			{
				string getType3 = "숉끏玫攊灜3Ò发";
				if (eventFrom == 160 || eventFrom == 155)
				{
					getType3 = "判皿\ud9d8Ň";
				}
				ObjectManager.GetInstance().idnStageModel.AddIndependentGoods(rewardList[i].id, rewardList[i].num, getType3, null, isTotalDrop: true, isTop: false, eventFrom);
			}
		}
		if (flag && !isForbidSendGoodsEvent)
		{
			EventManager.GetInstance().DispatchEvent(100018);
		}
	}

	public void FlyRewardView(CommonRewardFlyViewData flyData, bool isTaskChangeLayer = false)
	{
		ViewManager.ViewLayer viewLayer = ((!isTaskChangeLayer) ? ViewManager.ViewLayer.POP : ViewManager.ViewLayer.BACKGROUND);
		viewLayer = ((flyData.endIconType != RewardFlyIconType.Air_Plane) ? viewLayer : ViewManager.ViewLayer.BACKGROUND);
		ViewManager.GetInstance().ShowView<CommonRewardFlyViewLogic>(flyData, viewLayer);
	}

	public void FlyRewardView1(CommonRewardFlyViewData flyData, bool isTaskChangeLayer = false)
	{
		ViewManager.ViewLayer layer = ((!isTaskChangeLayer) ? ViewManager.ViewLayer.POP : ViewManager.ViewLayer.BACKGROUND);
		ViewManager.GetInstance().ShowView<CommonRewardFlyView1Logic>(flyData, layer);
	}

	public void FlyRewardViewV4(CommonRewardFlyViewData flyData, bool isTaskChangeLayer = false)
	{
		ViewManager.ViewLayer layer = ((!isTaskChangeLayer) ? ViewManager.ViewLayer.POP : ViewManager.ViewLayer.BACKGROUND);
		ViewManager.GetInstance().ShowView<CommonRewardFlyV4ViewLogic>(flyData, layer);
	}

	public void FlyRewardV2View(CommonRewardFlyViewData flyData, bool isTaskChangeLayer = false)
	{
		ViewManager.ViewLayer layer = ((!isTaskChangeLayer) ? ViewManager.ViewLayer.POP : ViewManager.ViewLayer.BACKGROUND);
		ViewManager.GetInstance().ShowView<CommonRewardFlyV2ViewLogic>(flyData, layer);
	}

	public void FlySingleRewardV4View(CommonRewardFlyViewData flyData, bool isTaskChangeLayer = false)
	{
		//IL_004e: Unknown result type (might be due to invalid IL or missing references)
		ViewManager.ViewLayer layer = ((!isTaskChangeLayer) ? ViewManager.ViewLayer.POP : ViewManager.ViewLayer.BACKGROUND);
		FlyConfigView res = Singleton<ResCacheManager>.Instance.GetRes<FlyConfigView>();
		if (Object.op_Implicit((Object)(object)res))
		{
			ViewManager.GetInstance().AddViewToLayer(((Component)res).gameObject, layer);
			Utils.PlayFlyAnimSync(flyData, isTaskChangeLayer, res);
			if ((Object)(object)flyData.flyTrans != (Object)null)
			{
				UniTaskExtensions.Forget(Utils.PlayFadeAnim(res, flyData.flyTrans));
			}
		}
	}

	public string GetItemGetType(int getType)
	{
		if (ItemGetTypeDic.TryGetValue(getType, out var value))
		{
			return value;
		}
		return getType.ToString();
	}

	public string GetItemUseType(int useType)
	{
		if (ItemUseTypeDic.TryGetValue(useType, out var value))
		{
			return value;
		}
		return useType.ToString();
	}

	public int GetAdRecoverEnergy()
	{
		if (ObjectManager.ObjectManager_INIT)
		{
			int aDEnergy = ObjectManager.GetInstance().userInitTagModel.GetADEnergy();
			if (aDEnergy > 0)
			{
				return aDEnergy;
			}
		}
		return AdRecoverEnergy;
	}

	public ItemDataModel()
	{
		Dictionary<int, string> dictionary = new Dictionary<int, string>();
		dictionary[1] = "수끔徼琙敓+\u0082厁숵끗暼父楆7\u009e厝볱÷赴";
		dictionary[2] = "수끔徼朙敓+\u0082厁녥䉭ㅐ\0逩\ud96b";
		dictionary[3] = "수끔徼愙敓+\u0082厁뻸";
		dictionary[4] = "숏끥憫甐捇&\u008a厉숞끛憷猟牫&\u008a厉숏끥犫搐歃3Î反";
		dictionary[5] = "숋끥枻漌捓\r¢厡숵끞沪氶潇7¶厵";
		dictionary[6] = "숅끥撻弆捕 \u0096厕숎끕玶攏杇\rÒ发恀䝴";
		dictionary[7] = "숅끥撻弆捕 \u0096厕晣o4끬g崱㻜";
		dictionary[8] = "수끥状弙捐7Î反녲䝥㈀\0途\ud95b";
		dictionary[9] = "숆끥斩爇捕+\u009a厙숟끖犯攠彄\rÎ反刣疿\ud9dfŐ";
		dictionary[10] = "숆끥斩爇捕+\u009a厙숚끖环弛录!Ò发녲䝥㈀\0途\ud95b";
		dictionary[11] = "숏끥憫甐捇&\u008a厉숞끛皷生牫>Þ叝숏끥犫搐灃3Î反";
		dictionary[12] = "숞끥抪漟捕 \u008e厍숏끥犫搐硃3Î反";
		dictionary[13] = "숂끥循會捛\"\u0082厁녥䉭ㅐ\0逩\ud96b";
		dictionary[14] = "숂끥循挃捛\"\u0082厁捯i4끟d大㯑";
		dictionary[15] = "숂끥循愃捛\"\u0082厁匠機ā试驹";
		dictionary[16] = "숏끥疽氐捒3Ú叙匐機ā讕齴";
		dictionary[17] = "숅끥禴弆捚7ê叩믢ï赴";
		dictionary[18] = "숞끥状猟捜7Î反";
		dictionary[19] = "숃끥沪攄捚5¶厵숏끛瞯愐坦7â叡娢䵼";
		dictionary[20] = "숃끥沪攄捚5¶厵숏끛瞯愐坦7â叡化橤ā讅Ꝥ";
		dictionary[21] = "숟끥榴圠捘&ª厩숸끌憼爹慑%\u008a厉뻸";
		dictionary[22] = "숟끥榴圠捘&ª厩숸끌憼爹慑%\u008a厉划摇\ud9ccŐ";
		dictionary[23] = "숆끥玐琇捘'Ò发化橡ā讕豤";
		dictionary[24] = "숋끥禽琌捝>ê叩룰÷赴";
		dictionary[25] = "숋끥禽琌捝>ê叩녡噳స\0途\ud96a";
		dictionary[26] = "숋끥禽朌捝>ê叩냕£赴";
		dictionary[27] = "숋끥禽朌捝>ê叩녩噦ఆ\0途\ud96a";
		dictionary[28] = "匧機ā謅념";
		dictionary[29] = "녣幟㈴\0逜\ud97a";
		dictionary[30] = "숋끥炭愌捇9Æ叅攡䲋";
		dictionary[31] = "숋끥徭戌捇9\u0082厁숎끃瞆椏畆3â叡显䥿";
		dictionary[32] = "숂끥循渃捛\"\u0082厁숋끈抴愌潘\r\u008e厍뻮";
		dictionary[33] = "숎끥玸猏捄3Ò发";
		dictionary[34] = "숃끥澽渄捕?Â叁匠橰ā词饳";
		dictionary[35] = "숟끥澻爠捍\rÂ叁橤e4끧k쀶䋜";
		dictionary[36] = "숟끥玻椠捍\rÒ发숏끝憵瘐湫%\u008a厉수끥状朙敐7Î反냕£赴";
		dictionary[37] = "숟끥涻甠捍\rº厹숵끎皰收汃3Þ叝숎끕枫椏彑 ¢厡渶䆌";
		dictionary[38] = "숏끥沮礐捑9¶厵숞끛榺琟彝$ª厩녹剟™\0逕\ud967";
		dictionary[39] = "숏끥沮礐捑9¶厵숞끛榺琟彝$ª厩匝機ā讅衹";
		dictionary[40] = "숏끥沮礐捑9¶厵숞끛榺琟彝$ª厩匝機ā讹鵤";
		dictionary[41] = "숎끥榸昏捫5ª厩뻨";
		dictionary[42] = "숃끥澽渄捕?Â叁匠橢ā讹饫";
		dictionary[43] = "숆끥徽瀇捅\"\u0082厁숵끉斪收慒 \u009a厙";
		dictionary[44] = "숆끥徽瀇捅\"\u0082厁煡s4끟r섳䧑";
		dictionary[45] = "숆끥徽瀇捅\"\u0082厁晡s4끟g䬾㻌";
		dictionary[46] = "숄끥涰愅捀;º厹숉끃澆猊捜=Â叁녥䙟㼦\0造\ud966";
		dictionary[47] = "숄끥枼礅捑 ¢厡숇끝疼礈彫0Ú叙医橤ā诅鑰";
		dictionary[48] = "숄끥枼礅捑 ¢厡숇끝撼弈彫3\u0096厕刢璋\ud9ccń";
		dictionary[49] = "숄끥涰愅捀;º厹숉끃澆猊捜=Â叁녥䙟㼦\0造\ud966";
		dictionary[50] = "수끥禺挙捕(ê叩숵끟玿猶桄3Ò发医橦ā讕詥";
		dictionary[51] = "수끥禺挙捕(ê叩숵끟玿猶桄3Ò发划擻\ud9f7ō";
		dictionary[52] = "수끥禺挙捕(ê叩숵끟玿猶桄3Ò发刟熯\ud9f7Ő";
		dictionary[53] = "숋끥於爌捇&\u009a厙숙끊暸爚彇\r\u009e厝欷㹽";
		dictionary[54] = "숋끥於爌捇&\u009a厙숙끊炸愚彇\rÆ叅뻥";
		dictionary[55] = "숋끥於爌捇&\u009a厙숙끊斸渚彇\r\u009a厙뻸";
		dictionary[56] = "숋끥於爌捇&\u009a厙숉끖撬爊彟+\u0096厕眳㪏";
		dictionary[57] = "녣幟⌈\0逞\ud97c";
		dictionary[58] = "숅끥梴眆捚&¦厥숎끟徲朏敕+\u0082厁냕£赴";
		dictionary[59] = "숅끥斴爆捀:\u009a厙숙끊暸爚彇\r\u009e厝欷㹽";
		dictionary[60] = "숅끥斴爆捀:\u009a厙숙끊炸愚彇\rÆ叅뻥";
		dictionary[61] = "숅끥斴爆捀:\u009a厙숙끊斸渚彇\r\u009a厙뻸";
		dictionary[62] = "숃끥徵朄捚9\u0082厁냕£赴";
		dictionary[63] = "숃끥徵朄捚9\u0082厁숵끜溭甶楖=¾厽뻯";
		dictionary[64] = "숚끥循猛捝<\u0082厁刖棻\ud9ddņ";
		dictionary[65] = "숋끥玩瀌捍\rÒ发漻䉶";
		dictionary[66] = "숋끥玩瀌捍\rÒ发숙끔斆爚楁\"\u009a厙";
		dictionary[67] = "숃끥澻弄捚5Â叁녣幯㸴\0逤\ud982";
		dictionary[68] = "숃끥澻弄捚5Â叁北橣ā诉靥";
		dictionary[69] = "숃끥澻弄捚5Â叁刟熟\ud9c4ő";
		dictionary[70] = "숋끥徫爌捗7\u0082厁匡橷ā诉饤";
		dictionary[73] = "숉끥皸椊捀;Þ叝숄끃枼礅瑑 ¢厡숋끞溰搌彙=¾厽刦碳\ud9f7ō";
		dictionary[74] = "숉끥皸椊捀;Þ叝숄끃枼礅瑑 ¢厡숃끗抸甄彚\r\u008e厍뻥";
		dictionary[75] = "숉끥皸椊捀;Þ叝숄끃枼礅瑑 ¢厡숃끗掸漄彚\r\u0092厑匪橳ā讵赥";
		dictionary[76] = "숉끥皸椊捀;Þ叝숄끃枼礅瑑 ¢厡숃끓憷氄彀;\u008a厉";
		dictionary[77] = "獣_4끥t쌵䯍";
		dictionary[78] = "浣_4끰n씻䗜";
		dictionary[79] = "녣䕟㰨\0逩\ud96e";
		dictionary[80] = "숅끥斫理捗9\u009a厙숍끏撩攎彆3\u0096厕";
		dictionary[81] = "숋끥禽弌捝>ê叩숆끒溸朇捘7¾厽뻹";
		dictionary[82] = "숃끥掾漄捒&\u0092厑核㽽";
		dictionary[83] = "숃끥疺猄捆1Ú叙수끎憬戙彚&\u008a厉恀䝽";
		dictionary[84] = "숃끥疺猄捆1Ú叙수끎憬戙彚&\u008a厉숙끟斆爚汁\"\u009a厙";
		dictionary[85] = "숏끥沴弐捐3¶厵删犛\ud9dbń";
		dictionary[86] = "숋끥沾漌捙7¶厵숵끘玠欶所3Ò发";
		dictionary[87] = "숋끥沾漌捙7¶厵换b4끟d줽㯐";
		dictionary[88] = "숋끥沾漌捙7¶厵숵끘掠栶扑*\u0092厑刘檃\ud9c9ő";
		dictionary[89] = "橣_4끵k尸䋍";
		dictionary[90] = "숃끥涫愄捗:º厹숅끥斾瘆湛6\u009a厙볕\u0083赴";
		dictionary[91] = "숋끥徽氌捆&\u0082厁刖棣\ud9cdŘ";
		dictionary[92] = "숃끥涫愄捗:º厹숏끥沴弐湐3¶厵划撇\ud9daŐ";
		dictionary[93] = "숃끥涫愄捗:º厹숏끥沴弐湐3¶厵化橯ā讹赤";
		dictionary[94] = "숋끥徽洌捆&\u0082厁숆끞斸瘇敫>\u009a厙扥l4끰c갡㫛";
		dictionary[95] = "숋끥徽洌捆&\u0082厁匥橴ā计鬳";
		dictionary[96] = "숚끥憬搛捓 \u008a厉녥䝟㈨\0途\ud95b";
		dictionary[97] = "숏끥沴弐捐3¶厵숚끒榶望獫0ª厩녲䝥㈀\0途\ud95b";
		dictionary[98] = "숋끥沾漌捙7¶厵숵끘涠瀶扗=º厹녥䅮㈈\0逕\ud956";
		dictionary[99] = "숂끥断眃捫 \u009a厙룥ó赴";
		dictionary[100] = "숋끥犴愌捝<Î反수끟憆爙捑%\u008a厉뻸";
		dictionary[101] = "숟끥犪椠捆\"Î反수끟憆爙獑%\u008a厉뻸";
		dictionary[102] = "숟끥犪椠捆\"Î反숅끟斆爆獒4\u009a厙";
		dictionary[103] = "숄끥新䴅捐;\u009a厙숏끈溾攐數;¾厽";
		dictionary[104] = "숋끥炭愌捇9Æ叅숞끉殆弟獕!²厱녲䝥㈀\0途\ud95b";
		dictionary[105] = "숂끥沺椃捑4¶厵수끟憆爙歑%\u008a厉뻸";
		dictionary[106] = "숄끥枼礅捑 ¢厡숁끟犼搂块3Î反숃끞劸攄彘+N卍刣疿\ud9dfŐ";
		dictionary[107] = "숉끥璺愊捫!Ö叕숵끊撪收浆7\u0096厕欷㹵";
		dictionary[108] = "숉끥斺琊捫!\u009a厙숇끙斶琈彄>\u009a厙뻹";
		dictionary[109] = "숉끥沺氊捫3¶厵숵끟涭瀶南=º厹別瞯\ud9c4ő";
		dictionary[110] = "숉끥斪䄊捑<\u009a厙순끎禰弝捝&ê叩숞끟溺刟獝=¾厽匡橷ā诉饤";
		dictionary[111] = "숏끥斴昐捆5\u009a厙숃끉徱猄楚5\u0082厁숏끛斾眐瑫 \u009a厙룥ó赴";
		dictionary[112] = "숏끥斴昐捆5\u009a厙숃끉徱眄楚5\u0082厁숂끓犾攃敀\rÎ反刣疿\ud9dfŐ";
		dictionary[113] = "숃끥枴愄捚;¢厡숙끟枆攚浀3¢厡";
		dictionary[114] = "숋끥徭挌捇9\u0082厁숄끛新眅桫 \u009a厙룥ó赴";
		dictionary[115] = "숄끥炶氅捑\rÆ叅숵끉瞷愶畆7â叡娢䵼";
		dictionary[116] = "숄끥炶氅捑\rÆ叅숵끉瞷愶畆7â叡녲դ扐\0郣\ud9e8";
		dictionary[117] = "숄끥炶氅捑\rÆ叅숵끉瞷愶畆7â叡녲դ慐\0郡\ud9e6";
		dictionary[118] = "숃끥璵攄捙;Ö叕숉끨犸攊摑\rÎ反刣疿\ud9dfŐ";
		dictionary[119] = "숅끥疿渆捆&Ú叙숅끹斶猆敟;\u009a厙숏끕梩攐彚\u0011¦厥攡䲌";
		dictionary[120] = "숅끥疿渆捆&Ú叙숅끹斶猆敟;\u009a厙녟味㈆\0逕\ud969";
		dictionary[121] = "숅끥疿渆捆&Ú叙숅끹斶猆敟;\u009a厙숃끓澷欄彀\u0006Â叁欷㹶";
		dictionary[122] = "숅끥疿渆捆&Ú叙숅끹斶猆敟;\u009a厙숁끎劶攂彑<N卍刣痯\ud9dcŚ";
		dictionary[123] = "숄끥炶氅捑\rÆ叅숵끉瞷愶畆7â叡녲դ恐\0郡\ud9e6";
		dictionary[124] = "숃끥璵琄捙;Ö叕숅끗於爆楆6\u009a厙扟r4끷c倢㫌";
		dictionary[125] = "숋끥徴琌捝<\u0082厁숵끉憲椶慗:\u008a厉숏끥犫搐湃3Î反";
		dictionary[126] = "숋끥徴琌捝<\u0082厁숵끉憲椶慗:\u008a厉숏끥斴弐湆5\u009a厙녲䝥㈀\0途\ud95b";
		dictionary[127] = "숋끥徴琌捝<\u0082厁숵끉憲椶慗:\u008a厉숟끥治攠湖0¶厵扟r4끷c倢㫌";
		dictionary[128] = "숋끥徴琌捝<\u0082厁숵끉憲椶慗:\u008a厉숂끥循爃湛\"\u0082厁匡橷ā诉饤";
		dictionary[129] = "숋끥徴琌捝<\u0082厁숵끉憲椶慗:\u008a厉수끥状弙湐7Î反녲䝥㈀\0途\ud95b";
		dictionary[130] = "수끥玭甙捑3Ò发숉끟暆琊牆3\u009e厝냤\u0083赴";
		dictionary[131] = "숋끥抪攌捚6\u008e厍숾끙憱猿慆7\u008a厉숵끈憼朶畇&\u008a厉뻹";
		dictionary[132] = "숋끥抪攌捚6\u008e厍숾끙憱猿慆7\u008a厉煵r4끟r\ud833䧑";
		dictionary[133] = "숎끥涸瀏捗=º厹숋끔澪渌敀;Â叁扟r4끷c倢㫌";
		dictionary[134] = "숋끥炭愌捇9Æ叅獳s4끦t\ud937䯍";
		dictionary[135] = "숋끥炭愌捇9Æ叅扳s4끰c\udf3b㫌";
		dictionary[136] = "숞끥斪䤟捕5\u009a厙숏끞犰朐湹7Î反匡橌ā讹酥";
		dictionary[137] = "숞끥斪䤟捕5\u009a厙숏끞沰甐湽>¶厵숋끎撫弌獀7\u0096厕녓剥㨊\0連\ud975";
		dictionary[138] = "숞끥斪䤟捕5\u009a厙숏끞沰甐湽>¶厵숋끎撫弌獀7\u0096厕参橩ā讅陬";
		dictionary[139] = "숄끥新䤅捐;\u009a厙숙끖憬琚汀 \u008a厉숹끞榆攺救 ª厩뻯";
		dictionary[140] = "숄끥新䤅捐;\u009a厙숙끖憬琚汀 \u008a厉숬끞憆氭敝<\u008a厉";
		dictionary[141] = "숟끥沩攠捎(¶厵";
		dictionary[142] = "숏끥犾愐捚7Î反숵끕掫礶瑆7\u0092厑뫦\u008b赴";
		dictionary[143] = "숏끥犫渐捀'Î反医橵ā讕譲";
		dictionary[144] = "숋끥徭猌捇9\u0082厁숄끌憼礅敫6\u008a厉";
		dictionary[145] = "숋끥徭猌捇9\u0082厁숄끌憼礅敫6\u008a厉녟味㈆\0逕\ud969";
		dictionary[146] = "숋끥徭猌捇9\u0082厁숄끌憼礅敫6\u008a厉숇끙溶猈彄7¾厽룦ë赴";
		dictionary[147] = "숃끥澽弄捇1Â叁刔暿\ud9d8ş";
		dictionary[148] = "숋끥徺挌捆6\u0082厁숏끖徵瀐潗&\u0082厁룥\u009f赴";
		dictionary[149] = "숋끥皫猌捗7Þ叝녟孲☰\0途\ud96f";
		dictionary[150] = "숋끥皫猌捗7Þ叝녟味㈆\0逕\ud969";
		dictionary[151] = "숄끥枼礅捑 ¢厡判皿\ud9f8Ň";
		dictionary[152] = "숄끥新䈅捐;\u009a厙숉끉犰朊慹7Î反뻹";
		dictionary[153] = "숎끥環意捚\u0001Ö叕숨끟榆挩杕!ª厩叉橥ā讝詥";
		dictionary[154] = "숟끥禵张捗9ê叩匓橨ā讕鵬";
		dictionary[155] = "숎끥炰意捚\rÆ叅攡䲋";
		dictionary[156] = "숂끥為椃捕?Æ叅녯幮㬈\0造\ud97e";
		dictionary[157] = "숋끥璾氌捁<Ö叕숞끎憆猟敆7\u008a厉숵끈憼朶畇&\u008a厉숏끥犫搐敃3Î反";
		dictionary[158] = "숋끥璾氌捁<Ö叕숞끎憆猟敆7\u008a厉숵끈犼朶留7Î反뻹";
		dictionary[159] = "숋끥禽匌捝>ê叩扨o4끐c䌱㫃";
		dictionary[160] = "숎끥炰意捚\rÆ叅獳s4끦t\ud937䯍";
		dictionary[161] = "숄끥憼清捐 \u008a厉숋끥犫攌歚9Î反刣疿\ud9dfŐ";
		dictionary[162] = "숏끥澷氐捃\u001aÂ叁숓끞掸欔楤3\u0092厑";
		dictionary[163] = "숎끥暰意捚\r\u009e厝娢䵵";
		dictionary[164] = "숏끥斷瘐捃\u001e\u009a厙녥塬㉎\0逛\ud973";
		dictionary[166] = "숄끥枼礅捑 ¢厡녂扡㠨\0造\ud982";
		dictionary[167] = "숎끥環意捚\u0001Ö叕숞끟炆氟村?Æ叅볦ë赴";
		dictionary[169] = "숋끥傽愌捍aF卅由㱳";
		dictionary[168] = "숃끥沸愄捆\u0002¶厵숞끟斊䜟湕5\u009a厙欷㺌";
		dictionary[169] = "숋끥傽愌捍aF卅由㱳";
		dictionary[170] = "숃끥沸愄捆\u0002¶厵显䥽";
		dictionary[171] = "숟끥榴删捘&ª厩룦·赴";
		dictionary[173] = "숋끥徭猌捇9\u0082厁숄끌憼礅敫6\u008a厉숋끉抭漌彆\r\u008e厍뻤";
		dictionary[174] = "숋끥皫猌捗7Þ叝숵끌痫渶彆=Ú叙뻸";
		dictionary[175] = "숋끥皫猌捗7Þ叝숵끌懫朶彇&\u008a厉뻹";
		dictionary[176] = "숋끥ㆫ瘌捗7É又숎끙玶琏ㅑ\rÒ发룦§赴";
		dictionary[177] = "숋끥ㆫ瘌捗7É又숎끙沶椏ㅑ\r¶厵듕\u009f赴";
		dictionary[178] = "숋끥ㆫ瘌捗7É又숎끙状漏ㅑ\rÎ反곥\u0083赴";
		dictionary[185] = "숉끥榺洊捫>ª厩숎끎於琏楫!\u009a厙숇끙斶琈彄>\u009a厙뻹";
		dictionary[186] = "숉끥榺洊捫>ª厩숎끎沼氏楫3¶厵숵끟涭瀶南=º厹뗕\u00af赴";
		dictionary[187] = "숅끥徺昆捛9\u0082厁숐끟犷攑牍\rÎ反刣疿\ud9dfŐ";
		dictionary[190] = "숏끥炾愐捙!Æ叅堨佰";
		dictionary[191] = "숃끥澽渄捕?Â叁扤_4끨c\udd3b㫆";
		ItemGetTypeDic = dictionary;
		ItemUseTypeDic = new Dictionary<int, string>
		{
			[1] = "수끥疩挙捛6Ú叙灥_4끯q尸䣛",
			[2] = "숆끥斩爇捕+\u009a厙医橬ā试蹰",
			[3] = "숏끥憫甐捇&\u008a厉숞끛皷生牫>Þ叝뻬",
			[4] = "숂끥循爃捛\"\u0082厁捡n4끟d嘧㯑",
			[5] = "숂끥循攃捛\"\u0082厁숍끟澫砎湍0Â叁刦碳\ud9f7ō",
			[6] = "숄끥枼礅捑 ¢厡刦碳\ud9f7ō",
			[7] = "숏끥憫甐捇&\u008a厉숞끛憷猟牫&\u008a厉뻷",
			[8] = "숋끥抻甌捓\r\u008e厍뻥",
			[9] = "숋끥枻漌捓\r¢厡숵끞沪氶潇7¶厵医橵ā讑陯",
			[10] = "숅끥撻弆捕 \u0096厕숎끕玶攏杇\rÒ发潬l4끵p堸䟇",
			[11] = "숋끥復甌捗9\u0082厁匪橬ā讍靫",
			[12] = "숟끥治攠捖0¶厵灟u4끬q就䣃",
			[13] = "수끥疩挙捛6Ú叙숚끥撪甛救7\u0096厕뻬",
			[14] = "숄끥犰甅捇&Î反숞끟炷攟浫!Æ叅刦碫\ud9cdń",
			[15] = "숂끥循爃捛\"\u0082厁숏끜徫爐敇:\u0082厁룥\u0083赴",
			[16] = "숞끥状猟捜7Î反",
			[17] = "숄끥犰甅捇&Î反숞끟憷爟浫1\u008a厉匠機ā试驹",
			[18] = "숂끥循挃捛\"\u0082厁捨e4끟d䈽㯐",
			[19] = "숋끥徭戌捇9\u0082厁숎끃瞆椏畆3â叡显䥿",
			[20] = "숂끥循渃捛\"\u0082厁숋끈抴愌潘\r\u008e厍뻮",
			[21] = "숟끥澻爠捍\rÂ叁橤e4끧k쀶䋜",
			[22] = "숟끥玻椠捍\rÒ发숏끝憵瘐湫%\u008a厉수끥状朙敐7Î反냕£赴",
			[23] = "숟끥涻甠捍\rº厹숵끎皰收汃3Þ叝숎끕枫椏彑 ¢厡渶䆌",
			[24] = "숟끥憻搠捍\r\u008a厉医橧ā讙酴",
			[25] = "숋끥復甌捗9\u0082厁숉끖撶氊湟\r\u0096厕朣䪈",
			[26] = "숟끥治攠捖0¶厵숆끏殷弇彛1²厱刢璋\ud9ccń",
			[27] = "수끥疩挙捛6Ú叙숚끥撪甛救7\u0096厕녰䙟㼦\0造\ud966",
			[28] = "숄끥犰甅捇&Î反숞끟炷攟浫!Æ叅숚끞沬焛敫6¶厵뻬",
			[29] = "숄끥涰愅捀;º厹숉끃澆猊捜=Â叁녥䙟㼦\0造\ud966",
			[30] = "숟끥掻栠捍\r\u0092厑숏끜犆朐敚7Î反녹兟㠢\0逓\ud964",
			[31] = "숚끥撪甛捑7\u0096厕수끥状弙灐7Î反刕林\ud9ceŗ",
			[32] = "숋끥於爌捇&\u009a厙숉끖撬爊彟+\u0096厕숈끍徆愉慁+\u0082厁恀䝴",
			[33] = "숅끥榺渆捛9ª厩숏끥澫爐杇&Â叁뻹",
			[34] = "숅끥玾弆捛6Ò发灲e4끴q夢䣍",
			[35] = "숟끥璭愠捆<Ö叕숵끖憼洶扐;\u008a厉숤끔施春潫 \u009a厙判皯\ud9daŜ",
			[36] = "숟끥璭愠捆<Ö叕숵끖憼洶扐;\u008a厉숤끔炽椥潫!Æ叅뻲",
			[37] = "숟끥璭愠捆<Ö叕숵끖憼洶扐;\u008a厉숹끔炽椺潫!Æ叅뻲",
			[38] = "숟끥璭愠捆<Ö叕숵끖炼丶扝3Æ叅숌끈玼栍彆7Ò发",
			[39] = "숉끥皸椊捀;Þ叝숏끃犆朐瑚7Î反匝機ā试驹",
			[40] = "숋끥沾漌捙7¶厵숵끘碠弶扖=æ句믢ï赴",
			[41] = "숃끥涫愄捗:º厹숋끥皻攌湐7Þ叝显䦌",
			[42] = "숃끥涫愄捗:º厹숅끥撫椆湘>\u0096厕숄끟涆愅捛 º厹뻰",
			[43] = "숃끥涫愄捗:º厹숅끥撫椆湘>\u0096厕숉끟璆漊捁!Ö叕뻱",
			[44] = "숋끥徽搌捆&\u0082厁룕ó赴",
			[45] = "숋끥徽氌捆&\u0082厁볘\u0083赴",
			[46] = "숏끥沴弐捐3¶厵删犛\ud9dbń",
			[47] = "숂끥枺攃捕<¢厡숏끏憪洐彆<\u008a厉뻹",
			[48] = "숋끥沾漌捙7¶厵숵끘斠愶扗>\u009a厙뻮",
			[49] = "숟끥犪椠捆\"Î反숅끟斆爆獒4\u009a厙",
			[50] = "숂끥沺椃捑4¶厵숏끟梆愐歌1¦厥럦§赴",
			[51] = "숂끥沺椃捑4¶厵숉끟憆爊歘7\u008a厉",
			[52] = "숅끥疿渆捆&Ú叙숅끹斶猆敟;\u009a厙숏끕梩攐彚\u0011¦厥攡䲌",
			[53] = "숅끥疿渆捆&Ú叙숅끹斶猆敟;\u009a厙녟噣㘶\0逢\ud978",
			[54] = "숄끥炰攅捐7Æ叅숄끞掼氅湀\r\u0092厑볗¿赴",
			[55] = "숋끥徴琌捝<\u0082厁숵끉憲椶慗:\u008a厉普_4끬g\ud933㻚",
			[56] = "숋끥抪攌捚6\u008e厍숾끙憱猿慆7\u008a厉숵끈枼匶畐;¢厡룥\u0083赴",
			[57] = "숃끥澽弄捇1Â叁刔暿\ud9d8ş",
			[58] = "숟끥禵张捗9ê叩匓橨ā讕鵬",
			[59] = "숄끥憼清捐 \u008a厉숒끥憼渓歗:\u008a厉椵䁽",
			[61] = "숏끥犿䘐捂7Î反숈끛㎴弉汑\u0004Ñ叐刖棻\ud9c7Ś",
			[62] = "숏끥炾愐捙!Æ叅堨佰"
		};
		base._002Ector();
	}
}
