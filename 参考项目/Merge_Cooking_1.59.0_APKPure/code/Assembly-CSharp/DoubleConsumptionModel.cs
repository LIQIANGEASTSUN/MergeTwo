using System.Collections.Generic;
using Newtonsoft.Json;
using TLF;

public class DoubleConsumptionModel : BaseModel
{
	private static readonly string mDoubleConsumptionKey = "숈끕徬䌉䑘7\u0082厁숟끔璪椠潙\"Ö叕녯剮ᡐ\0逩\ud97b";

	private DoubleConsumptionVo mDoubleConsumptionVo;

	private int mGeneratorDoubleConsumeSwitch;

	private int mFourtimesDropSwitch;

	private bool mIsFirstSwitchFourOnInfinite = true;

	public bool DoubleConsumptionState
	{
		get
		{
			if (!mDoubleConsumptionVo.FunctionOpenState)
			{
				return false;
			}
			return mDoubleConsumptionVo.OpenState;
		}
	}

	public bool FunctionOpenState => mDoubleConsumptionVo.FunctionOpenState;

	public bool SwitchOpenState => mDoubleConsumptionVo.OpenState;

	public bool IsOpenHelpView => mDoubleConsumptionVo.IsOpenHelpView;

	public bool IsOpenSoftSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_DoubleConsumption);

	public bool IsOpenHardSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_DoubleConsumption);

	public bool FourtimesDropState
	{
		get
		{
			if (!mDoubleConsumptionVo.FourtimesFunctionState)
			{
				return false;
			}
			return mDoubleConsumptionVo.FourtimesOpenState;
		}
	}

	public bool FourtimesFunctionState => mDoubleConsumptionVo.FourtimesFunctionState;

	public bool FourtimesOpenState => mDoubleConsumptionVo.FourtimesOpenState;

	public bool IsOpenFourtimesHelp => mDoubleConsumptionVo.IsOpenFourtimesHelp;

	public bool IsOpenFourtimesSoftSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_FourtimesDrop);

	public bool IsOpenFourtimesHardSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_FourtimesDrop);

	public bool IsFirstSwitchFourOnInfinite
	{
		get
		{
			if (ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState() && FourtimesFunctionState)
			{
				return mIsFirstSwitchFourOnInfinite;
			}
			return false;
		}
	}

	public bool EighttimesFunctionState => mDoubleConsumptionVo.EighttimesFunctionState;

	public bool EighttimesOpenState => mDoubleConsumptionVo.EighttimesOpenState;

	public bool IsOpenEighttimesHelp => mDoubleConsumptionVo.IsOpenEighttimesHelp;

	public override void InitModel(bool timingSave = false)
	{
		base.InitModel(timingSave);
		mDoubleConsumptionVo = new DoubleConsumptionVo();
		string item = GetItem(mDoubleConsumptionKey);
		if (!string.IsNullOrEmpty(item))
		{
			mDoubleConsumptionVo = JsonConvert.DeserializeObject<DoubleConsumptionVo>(item);
		}
		mIsFirstSwitchFourOnInfinite = true;
		InitGeneratorConsumeSwitch();
		InitFourtimesDropSwitch();
		CheckManytimesAndInfinite();
		CheckInfiniteEnergyState();
		EventManager.GetInstance().AddEventListener(202088, CloseInfiniteEnergy);
	}

	public bool IsOpenManytimesDrop()
	{
		if (!DoubleConsumptionState && !FourtimesDropState)
		{
			return EighttimesOpenState;
		}
		return true;
	}

	public ConsumptionRate GetCurrentDropRate()
	{
		if (EighttimesOpenState)
		{
			return ConsumptionRate.Eighttimes;
		}
		if (FourtimesDropState)
		{
			return ConsumptionRate.Fourtimes;
		}
		if (DoubleConsumptionState)
		{
			return ConsumptionRate.Double;
		}
		return ConsumptionRate.None;
	}

	public bool CanOpenDoubleConsumption()
	{
		if (CheckDoubleNewGuide())
		{
			return true;
		}
		if (mDoubleConsumptionVo.FunctionOpenState)
		{
			if (!ObjectManager.GetInstance().timelimitMultModel.IsIn2Activity())
			{
				return false;
			}
			if (!MonoSingleton<ConditionManager>.Instance.IsLegal(96))
			{
				return false;
			}
		}
		else if (!MonoSingleton<ConditionManager>.Instance.IsLegal(96))
		{
			return false;
		}
		if (!IsOpenSoftSwitch)
		{
			return false;
		}
		if (!IsOpenHardSwitch)
		{
			return false;
		}
		return true;
	}

	public void JudgeHardCloseActivity()
	{
		bool flag = false;
		if (DoubleConsumptionState && !IsOpenHardSwitch && mDoubleConsumptionVo != null)
		{
			mDoubleConsumptionVo.FunctionOpenState = false;
			mDoubleConsumptionVo.OpenState = false;
			flag = true;
		}
		if (FourtimesDropState && !IsOpenFourtimesHardSwitch && mDoubleConsumptionVo != null)
		{
			mDoubleConsumptionVo.FourtimesFunctionState = false;
			mDoubleConsumptionVo.FourtimesOpenState = false;
			flag = true;
		}
		if (flag)
		{
			SaveModelData();
			EventManager.GetInstance().DispatchEvent(200015);
		}
	}

	public bool CanPopOpenView()
	{
		return CanOpenDoubleConsumption();
	}

	public bool OpenDoubleDropView()
	{
		if (ObjectManager.GetInstance().timelimitMultModel != null)
		{
			ObjectManager.GetInstance().timelimitMultModel.Close2Mult();
		}
		mDoubleConsumptionVo.FunctionOpenState = true;
		DoubleDropAnalytic("녵塮㰶\0逛\ud973");
		SaveModelData();
		ViewManager.Instance.ShowView<DoubleDropOpenView_newLogic>(null, ViewManager.ViewLayer.POP, animate: true);
		EventManager.GetInstance().DispatchEvent(200015);
		return true;
	}

	public void SetDoubleConsumptionState(bool state, bool isSave = true)
	{
		if (mDoubleConsumptionVo != null && mDoubleConsumptionVo.FunctionOpenState)
		{
			if (state)
			{
				DoubleDropAnalytic("刖棻\ud9c7Ś");
			}
			mDoubleConsumptionVo.OpenState = state;
			if (isSave)
			{
				SaveModelData();
				EventManager.GetInstance().DispatchEvent(200015);
			}
		}
	}

	public void SetDoubleLimitedState(bool state)
	{
		mDoubleConsumptionVo.FunctionOpenState = state;
		mDoubleConsumptionVo.OpenState = state;
		SetTimelimitOpenRate(ConsumptionRate.None);
		SaveModelData();
	}

	public void SetOpenHelpState(bool state)
	{
		mDoubleConsumptionVo.IsOpenHelpView = state;
		SaveModelData();
	}

	public void SetInfiniteEnergyOpenRate(ConsumptionRate rate, bool isSave = true)
	{
		mDoubleConsumptionVo.InfiniteEnergyOpenRate = (int)rate;
		if (isSave)
		{
			SaveModelData();
		}
	}

	public ConsumptionRate GetInfiniteEnergyOpenRate()
	{
		return (ConsumptionRate)mDoubleConsumptionVo.InfiniteEnergyOpenRate;
	}

	public void SetTimelimitOpenRate(ConsumptionRate rate, bool isSave = false)
	{
		mDoubleConsumptionVo.TimelimitOpenRate = (int)rate;
		if (isSave)
		{
			SaveModelData();
		}
	}

	public ConsumptionRate GetTimelimitOpenRate()
	{
		return (ConsumptionRate)mDoubleConsumptionVo.TimelimitOpenRate;
	}

	private void InitGeneratorConsumeSwitch()
	{
		IABTestConfigKey1 item = StaticDataBase<StaticDataManager>.GetInstance().abTestConfigKey1Map.GetItem("숏끟璷漐䝆3Ö叕숟끾斶䌠牖>\u009a厙녯婮☈\0逕\ud96f");
		if (item != null && item.value.IsNotNullAndEmpty())
		{
			mGeneratorDoubleConsumeSwitch = item.value.ToInt();
		}
	}

	public int GetGeneratorConsume(int dropRate)
	{
		return -1;
	}

	public void DoubleDropAnalytic(string action)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숉끥澸渊杀;Â叁", action);
		dictionary.Add("숃끥禬瀄杫&ê叩뻹", "带兊");
		AnalyticInit.OnEvent("숅끥沽攆杁0¶厵獟e4끥t䈵䯑", dictionary);
	}

	public bool CanOpenFourtimesDrop()
	{
		if (CheckFourNewGuide())
		{
			return true;
		}
		if (mFourtimesDropSwitch == 0)
		{
			return false;
		}
		if (mDoubleConsumptionVo.FourtimesFunctionState)
		{
			if (!ObjectManager.GetInstance().timelimitMultModel.IsIn4Activity())
			{
				return false;
			}
			if (!MonoSingleton<ConditionManager>.Instance.IsLegal(126))
			{
				return false;
			}
			if (ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
			{
				return false;
			}
		}
		else
		{
			if (!MonoSingleton<ConditionManager>.Instance.IsLegal(126))
			{
				return false;
			}
			if (ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
			{
				return false;
			}
		}
		if (!IsOpenFourtimesSoftSwitch)
		{
			return false;
		}
		if (!IsOpenFourtimesHardSwitch)
		{
			return false;
		}
		return true;
	}

	public void ResetFirstSwitchFourOnInfinite()
	{
		mIsFirstSwitchFourOnInfinite = false;
	}

	public bool CanPopFourtimesOpenView()
	{
		return CanOpenFourtimesDrop();
	}

	public bool OpenFourtimesDropView()
	{
		if (ObjectManager.GetInstance().timelimitMultModel != null)
		{
			ObjectManager.GetInstance().timelimitMultModel.Close4Mult();
		}
		mDoubleConsumptionVo.FourtimesFunctionState = true;
		DoubleDropAnalytic("숅끔徵㐆畗9\u0082厁");
		SaveModelData();
		ViewManager.Instance.ShowView<FourtimesDropOpenView_newLogic>(null, ViewManager.ViewLayer.POP, animate: true);
		EventManager.GetInstance().DispatchEvent(200015);
		return true;
	}

	public void SetFourtimesDropState(bool state, bool isSave = true)
	{
		if (mDoubleConsumptionVo != null && mDoubleConsumptionVo.FourtimesFunctionState)
		{
			if (state)
			{
				DoubleDropAnalytic("녯汰㴤\0郤\ud950");
			}
			mDoubleConsumptionVo.FourtimesOpenState = state;
			if (isSave)
			{
				SaveModelData();
				EventManager.GetInstance().DispatchEvent(200015);
			}
		}
	}

	public void SetFourtimesLimitedState(bool state)
	{
		mDoubleConsumptionVo.FourtimesFunctionState = state;
		if (state)
		{
			SetTimelimitOpenRate(GetCurrentDropRate());
			mDoubleConsumptionVo.FourtimesOpenState = state;
		}
		else
		{
			if (FourtimesOpenState)
			{
				mDoubleConsumptionVo.FourtimesOpenState = false;
				if (GetTimelimitOpenRate() == ConsumptionRate.Double)
				{
					SetDoubleConsumptionState(state: true, isSave: false);
				}
				else
				{
					SetDoubleConsumptionState(state: false, isSave: false);
				}
			}
			SetTimelimitOpenRate(ConsumptionRate.None);
		}
		SaveModelData();
	}

	public void SetFourtimesHelpState(bool state)
	{
		mDoubleConsumptionVo.IsOpenFourtimesHelp = state;
		SaveModelData();
	}

	private void InitFourtimesDropSwitch()
	{
		IABTestConfigKey1 item = StaticDataBase<StaticDataManager>.GetInstance().abTestConfigKey1Map.GetItem("숏끟璷漐䝆3Ö叕숋끫疬瀌牐 Ú叙숝끟掊栞汝&\u0092厑");
		if (item != null && item.value.IsNotNullAndEmpty())
		{
			mFourtimesDropSwitch = item.value.ToInt();
		}
	}

	private void CheckManytimesAndInfinite()
	{
		bool flag = false;
		if (EighttimesOpenState && ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
		{
			SetDoubleConsumptionState(state: true, isSave: false);
			SetEighttimesDropState(state: false, isSave: false);
			SetFourtimesDropState(state: false, isSave: false);
			SetInfiniteEnergyOpenRate(ConsumptionRate.Eighttimes, isSave: false);
			flag = true;
		}
		else if (FourtimesDropState && ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
		{
			SetDoubleConsumptionState(state: true, isSave: false);
			SetFourtimesDropState(state: false, isSave: false);
			SetFourtimesDropState(state: false, isSave: false);
			SetInfiniteEnergyOpenRate(ConsumptionRate.Fourtimes, isSave: false);
			flag = true;
		}
		if (flag)
		{
			SaveModelData();
			EventManager.GetInstance().DispatchEvent(200015);
		}
	}

	private void CheckInfiniteEnergyState()
	{
		ConsumptionRate infiniteEnergyOpenRate = GetInfiniteEnergyOpenRate();
		if ((infiniteEnergyOpenRate == ConsumptionRate.Fourtimes || infiniteEnergyOpenRate == ConsumptionRate.Eighttimes) && !ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
		{
			CloseInfiniteEnergy();
		}
	}

	private void CloseInfiniteEnergy()
	{
		bool flag = false;
		if (SwitchOpenState)
		{
			if (GetInfiniteEnergyOpenRate() == ConsumptionRate.Eighttimes)
			{
				if (EighttimesFunctionState)
				{
					SetDoubleConsumptionState(state: false, isSave: false);
					SetEighttimesDropState(state: true, isSave: false);
					SetFourtimesDropState(state: false, isSave: false);
					SetInfiniteEnergyOpenRate(ConsumptionRate.None, isSave: false);
					GameLevelDefine.ClearOrderNeedLowLevelGoods();
					flag = true;
				}
				else if (FourtimesFunctionState)
				{
					SetDoubleConsumptionState(state: false, isSave: false);
					SetFourtimesDropState(state: true, isSave: false);
					SetEighttimesDropState(state: false, isSave: false);
					SetInfiniteEnergyOpenRate(ConsumptionRate.None);
					GameLevelDefine.ClearOrderNeedLowLevelGoods();
					flag = true;
				}
			}
			else if (GetInfiniteEnergyOpenRate() == ConsumptionRate.Fourtimes)
			{
				SetDoubleConsumptionState(state: false, isSave: false);
				SetFourtimesDropState(state: true, isSave: false);
				SetEighttimesDropState(state: false, isSave: false);
				SetInfiniteEnergyOpenRate(ConsumptionRate.None);
				GameLevelDefine.ClearOrderNeedLowLevelGoods();
				flag = true;
			}
		}
		if (flag)
		{
			SaveModelData();
			EventManager.GetInstance().DispatchEvent(200015);
			EventManager.GetInstance().DispatchEvent(200016);
		}
	}

	public void SetEighttimesFunctionState(bool state)
	{
		if (state && ObjectManager.GetInstance().timelimitMultModel != null)
		{
			ObjectManager.GetInstance().timelimitMultModel.Close8Mult();
		}
		mDoubleConsumptionVo.EighttimesFunctionState = state;
		if (!state && EighttimesOpenState)
		{
			mDoubleConsumptionVo.EighttimesOpenState = false;
			SetFourtimesDropState(state: true, isSave: false);
			EventManager.GetInstance().DispatchEvent(200015);
			EventManager.GetInstance().DispatchEvent(200016);
		}
		SaveModelData();
	}

	public void SetEighttimesDropState(bool state, bool isSave = true)
	{
		if (mDoubleConsumptionVo != null && EighttimesFunctionState)
		{
			if (state)
			{
				DoubleDropAnalytic("녯汰㴤\0部\ud954");
			}
			mDoubleConsumptionVo.EighttimesOpenState = state;
			if (isSave)
			{
				SaveModelData();
				EventManager.GetInstance().DispatchEvent(200015);
			}
		}
	}

	public void SetEighttimesHelpState(bool state)
	{
		mDoubleConsumptionVo.IsOpenEighttimesHelp = state;
		SaveModelData();
	}

	public void SetEightTimeslimitedState(bool state)
	{
		mDoubleConsumptionVo.EighttimesFunctionState = state;
		if (state)
		{
			SetTimelimitOpenRate(GetCurrentDropRate());
			mDoubleConsumptionVo.EighttimesOpenState = true;
		}
		else
		{
			if (EighttimesOpenState)
			{
				mDoubleConsumptionVo.EighttimesOpenState = false;
				switch (GetTimelimitOpenRate())
				{
				case ConsumptionRate.Fourtimes:
					SetFourtimesDropState(state: true, isSave: false);
					break;
				case ConsumptionRate.Double:
					SetDoubleConsumptionState(state: true, isSave: false);
					break;
				default:
					SetDoubleConsumptionState(state: false, isSave: false);
					break;
				}
			}
			SetTimelimitOpenRate(ConsumptionRate.None);
		}
		SaveModelData();
	}

	private void SaveModelData()
	{
		string value = JsonConvert.SerializeObject((object)mDoubleConsumptionVo);
		SaveItem(mDoubleConsumptionKey, value);
		Singleton<ServerManager>.Instance.SaveServerItem(mDoubleConsumptionKey, value);
	}

	public void SyncServerDataToLocal()
	{
		mDoubleConsumptionVo = new DoubleConsumptionVo();
		string serverItem = Singleton<ServerManager>.Instance.GetServerItem(mDoubleConsumptionKey);
		if (!string.IsNullOrEmpty(serverItem))
		{
			try
			{
				mDoubleConsumptionVo = JsonConvert.DeserializeObject<DoubleConsumptionVo>(serverItem);
			}
			catch
			{
				Log.E("䮹ឪ\udb15ᝨ\ue367俉똧퍶\u1de2뾇肩ȑ");
				mDoubleConsumptionVo = new DoubleConsumptionVo();
			}
		}
		string value = JsonConvert.SerializeObject((object)mDoubleConsumptionVo);
		SaveItem(mDoubleConsumptionKey, value);
		InitGeneratorConsumeSwitch();
		InitFourtimesDropSwitch();
		EventManager.GetInstance().DispatchEvent(200015);
	}

	public void SwitchNextMultiDrop()
	{
		bool flag = false;
		switch (GetCurrentDropRate())
		{
		case ConsumptionRate.Eighttimes:
			SetDoubleConsumptionState(state: false, isSave: false);
			SetFourtimesDropState(state: false, isSave: false);
			SetEighttimesDropState(state: false, isSave: false);
			GameLevelDefine.ClearOrderNeedLowLevelGoods();
			DoubleDropAnalytic("匧橬ā词靥");
			flag = true;
			break;
		case ConsumptionRate.Fourtimes:
			if (EighttimesFunctionState && !ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
			{
				if (!EighttimesOpenState)
				{
					SetDoubleConsumptionState(state: false, isSave: false);
					SetFourtimesDropState(state: false, isSave: false);
					SetEighttimesDropState(state: true, isSave: false);
					GameLevelDefine.ClearOrderNeedLowLevelGoods();
					flag = true;
				}
			}
			else
			{
				SetDoubleConsumptionState(state: false, isSave: false);
				SetFourtimesDropState(state: false, isSave: false);
				SetEighttimesDropState(state: false, isSave: false);
				GameLevelDefine.ClearOrderNeedLowLevelGoods();
				flag = true;
			}
			break;
		case ConsumptionRate.Double:
			if (FourtimesFunctionState && !ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
			{
				if (!FourtimesOpenState)
				{
					SetDoubleConsumptionState(state: false, isSave: false);
					SetFourtimesDropState(state: true, isSave: false);
					SetEighttimesDropState(state: false, isSave: false);
					GameLevelDefine.ClearOrderNeedLowLevelGoods();
					flag = true;
				}
			}
			else
			{
				SetDoubleConsumptionState(state: false, isSave: false);
				SetFourtimesDropState(state: false, isSave: false);
				SetEighttimesDropState(state: false, isSave: false);
				GameLevelDefine.ClearOrderNeedLowLevelGoods();
				DoubleDropAnalytic("匧橬ā词靥");
				flag = true;
			}
			break;
		default:
			if (FunctionOpenState && !SwitchOpenState)
			{
				SetDoubleConsumptionState(state: true, isSave: false);
				SetFourtimesDropState(state: false, isSave: false);
				SetEighttimesDropState(state: false, isSave: false);
				GameLevelDefine.ClearOrderNeedLowLevelGoods();
				flag = true;
			}
			break;
		}
		if (flag)
		{
			SaveModelData();
			EventManager.GetInstance().DispatchEvent(200015);
		}
	}

	public void SetEnergyRate(ConsumptionRate rate)
	{
		bool flag = false;
		switch (rate)
		{
		case ConsumptionRate.None:
			SetDoubleConsumptionState(state: false, isSave: false);
			SetFourtimesDropState(state: false, isSave: false);
			SetEighttimesDropState(state: false, isSave: false);
			flag = true;
			break;
		case ConsumptionRate.Double:
			if (FunctionOpenState)
			{
				SetDoubleConsumptionState(state: true, isSave: false);
				SetFourtimesDropState(state: false, isSave: false);
				SetEighttimesDropState(state: false, isSave: false);
				flag = true;
			}
			break;
		case ConsumptionRate.Fourtimes:
			if (FourtimesFunctionState)
			{
				SetDoubleConsumptionState(state: false, isSave: false);
				SetFourtimesDropState(state: true, isSave: false);
				SetEighttimesDropState(state: false, isSave: false);
				flag = true;
			}
			break;
		case ConsumptionRate.Eighttimes:
			if (EighttimesFunctionState)
			{
				SetDoubleConsumptionState(state: false, isSave: false);
				SetFourtimesDropState(state: false, isSave: false);
				SetEighttimesDropState(state: true, isSave: false);
				flag = true;
			}
			break;
		}
		if (flag)
		{
			SaveModelData();
			GameLevelDefine.ClearOrderNeedLowLevelGoods();
			EventManager.GetInstance().DispatchEvent(200015);
		}
	}

	private bool CheckDoubleNewGuide()
	{
		bool result = false;
		if (mDoubleConsumptionVo.FunctionOpenState && !mDoubleConsumptionVo.FourtimesFunctionState && !ObjectManager.GetInstance().timelimitMultModel.IsIn2Activity() && !MonoSingleton<GuideManager>.Instance.GetGuideModel.IsFinish(211))
		{
			result = true;
		}
		return result;
	}

	private bool CheckFourNewGuide()
	{
		if (ObjectManager.GetInstance().itemDataModel.GetInfiniteEnergyState())
		{
			return false;
		}
		bool result = false;
		if (mDoubleConsumptionVo.FourtimesFunctionState && !ObjectManager.GetInstance().timelimitMultModel.IsIn4Activity() && !MonoSingleton<GuideManager>.Instance.GetGuideModel.IsFinish(212))
		{
			result = true;
		}
		return result;
	}
}
