using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using Newtonsoft.Json;
using TLF;
using UnityEngine;

public static class MergeFishing
{
	public static class ConfigHelper
	{
		public static SerializableDataMap<int, IThemeVO> themeMap = new SerializableDataMap<int, IThemeVO>("晴h4끭g갛㻌");

		public static SerializableDataMap<int, IFishVO> fishMap = new SerializableDataMap<int, IFishVO>("녦繩㬈\0途\ud992");

		public static SerializableDataMap<int, int, IFishTankVO> fishTankMap = new SerializableDataMap<int, int, IFishTankVO>("녦繩㬈\0途\ud992", "划擫\ud9dbņ");

		public static SerializableDataMap<int, IFishSequenceVO> fishSequenceMap = new SerializableDataMap<int, IFishSequenceVO>("漻䉼");

		public static SerializableDataMap<int, IStageRewardVO> stageRewardMap = new SerializableDataMap<int, IStageRewardVO>("漻䉼");

		public static SerializableDataList<IIndependentGoodsBaseVo> fishGoodsList = new SerializableDataList<IIndependentGoodsBaseVo>();

		public static SerializableDataMap<int, IIndependentGoodsMergeVo> fishGoodsMergeMap = new SerializableDataMap<int, IIndependentGoodsMergeVo>("瑧o4끤u휛䳬");

		public static SerializableDataMap<int, IIndependentGoodsCollectVo> fishGoodsCollectMap = new SerializableDataMap<int, IIndependentGoodsCollectVo>("瑧o4끤u휛䳬");

		public static SerializableDataMap<int, IIndependentProduceVo> fishGoodsProduceMap = new SerializableDataMap<int, IIndependentProduceVo>("瑧o4끤u휛䳬");

		public static SerializableDataList<IIndependentDropConfigVo> fishDropList = new SerializableDataList<IIndependentDropConfigVo>();

		public static SerializableDataMap<int, IGameInitVo> fishGameInitMap = new SerializableDataMap<int, IGameInitVo>("녧繲㜼\0郴\ud972");

		public static void Init(EThemeId themeId)
		{
			_InitThemeConfig();
			_InitFishConfig(themeId);
			_InitFishTankConfig(themeId);
			_InitFishSequenceConfig(themeId);
			_InitStageRewardConfig(themeId);
			_InitGameGoodsConfig(themeId);
			_InitGameInitConfig(themeId);
			_InitGameDropConfig(themeId);
			_InitGoodsCollectConfig(themeId);
			_InitGoodsMergeConfig(themeId);
			_InitGoodsProduceConfig(themeId);
		}

		private static void _InitThemeConfig()
		{
			StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(ConfigName.GetConfigName(EThemeId.Base, EConfigId.Theme), themeMap, clean: true);
			if (themeMap.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆吤牚;Ö叕숏끟溴昐桷=¾厽쉊끝旣测楀:\u009a厙숚끷榸猛攚>ª厩숅뀔璚\u2006瑁<Ö叕勑⏷\ud9c1Ą");
			}
		}

		private static void _InitFishConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.Fish);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishMap.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishMap, clean: true);
			}
			if (fishMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishMap, clean: true);
			}
			if (fishMap.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆䘤牚;Ö叕숩끉暱椪楛<\u009e厝숌뀀棹䴍杝!¦厥숆끊瓷⸇慝!Ö叕숄끕榬猅䍀rª厩㑴רּ");
			}
		}

		private static void _InitFishTankConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.FishTank);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishTankMap.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishTankMap, clean: true);
			}
			if (fishTankMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishTankMap, clean: true);
			}
			if (fishTankMap.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆䘤牚;Ö叕숾끉殱䌿楕<²厱숃끔₿昄潓h\u0085厄숾끉殱䴿楕<²厱숆끊瓷⸇慝!Ö叕숄끕榬猅䍀rª厩㑴רּ");
			}
		}

		private static void _InitFishSequenceConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.FishSequence);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishSequenceMap.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishSequenceMap, clean: true);
			}
			if (fishSequenceMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishSequenceMap, clean: true);
			}
			if (fishSequenceMap.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆䘤牚;Ö叕숹끉疱攺楑#Ú叙숩끙暼椪湛<\u009e厝숌뀀棹匍杝!¦厥숏끋斬䴐敚1\u009a厙숆끊瓷⸇慝!Ö叕숄끕榬猅䍀rª厩㑴רּ");
			}
		}

		private static void _InitStageRewardConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.StageReward);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			stageRewardMap.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, stageRewardMap, clean: true);
			}
			if (stageRewardMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, stageRewardMap, clean: true);
			}
			if (stageRewardMap.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆匤牚;Ö叕숏끛瞾愐瑦7â叡숅끞榚朆牚4ª厩숞뀚斪刟㩕5\u009a厙수끍憸瀙敐\u001f\u008a厉숙끖䎰漚⹀|\u0012匑쉊끔₭か畝!\u0085厄");
			}
			Dictionary<string, string> curGroupByBaseTable = ObjectManager.GetInstance().abTest2Model.GetCurGroupByBaseTable(new List<string> { configName });
			stageRewardMap.AddReplaceItemByABTestGroup(configName, curGroupByBaseTable);
		}

		private static void _InitGameGoodsConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.FishGameGoods);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishGoodsList.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishGoodsList, clean: true);
			}
			if (fishGoodsList.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishGoodsList, clean: true);
			}
			if (fishGoodsList.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆䜤牚;Ö叕숭끗撼献慛=\u0096厕숌끕㪷\u200d䍝5í召숂끓澪搃晳=Â叁숙끶沰椚獀|¶厵숩끎滷琪獛'¾厽古橩ā讀謰");
			}
		}

		private static void _InitGameInitConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.FishGameInit);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishGameInitMap.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishGameInitMap, clean: true);
			}
			if (fishGameInitMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishGameInitMap, clean: true);
			}
			if (fishGameInitMap.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆䜤牚;Ö叕숣끗璼䌤慚;Ö叕숃끔₿昄潓h\u0085厄숭끉斱䤮楕?\u009a厙숧끓⺭氨湕\"½厼쉄끉疭湅楷=Ú叙녴ᔠ‼\0郠\ud9f5");
			}
		}

		private static void _InitGameDropConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.FishGameDrop);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishDropList.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishDropList, clean: true);
			}
			if (fishDropList.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishDropList, clean: true);
			}
			if (fishDropList.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆䜤牚;Ö叕숮끗炼䌯慆=Æ叅숃끔₿昄潓h\u0085厄숮끉炱䰯楆=Æ叅쉄끉玭瑅楘;Ò发숟끹₶椠⹚&\u0085厄ꨙº赴");
			}
		}

		private static void _InitGoodsCollectConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.FishGoodsCollect);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishGoodsCollectMap.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishGoodsCollectMap, clean: true);
			}
			if (fishGoodsCollectMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishGoodsCollectMap, clean: true);
			}
			if (fishGoodsCollectMap.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆䜤牚;Ö叕숙끕沽氚潷=¶厵숩끙暭椪敛<\u009e厝숌뀀棹䜍杝!¦厥숙끕沽氚潷=¶厵숧끙⺭氨敕\"½厼쉄끉疭湅楷=Ú叙녴ᔠ‼\0郠\ud9f5");
			}
		}

		private static void _InitGoodsMergeConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.FishGoodsMerge);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishGoodsMergeMap.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishGoodsMergeMap, clean: true);
			}
			if (fishGoodsMergeMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishGoodsMergeMap, clean: true);
			}
		}

		private static void _InitGoodsProduceConfig(EThemeId themeId)
		{
			string configName = ConfigName.GetConfigName(themeId, EConfigId.FishGoodsProduce);
			var (flag, text, text2) = ObjectManager.GetInstance().abTest2Model.GetABTestIdAndGroupByConfigFilename(configName);
			fishGoodsProduceMap.ClearList();
			if (flag)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName + "뻃" + text + "뻃" + text2, fishGoodsProduceMap, clean: true);
			}
			if (fishGoodsProduceMap.list.Count == 0)
			{
				StaticDataBase<StaticDataManager>.GetInstance().LoadStaticList(configName, fishGoodsProduceMap, clean: true);
			}
			if (fishGoodsProduceMap.list.Count == 0)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓澷渎栚\u0011Â叁숢끓炾攣晑>Æ叅숣뀔璆䜤牚;Ö叕숙끕澽搚潤 Â叁숩끙暼椪畛<\u009e厝숌뀀棹䜍杝!¦厥숙끕澽搚潤 Â叁숧끙⺼氨畕\"½厼쉄끉疭湅楷=Ú叙녴ᔠ‼\0郠\ud9f5");
			}
		}

		public static bool TryGetThemeVO(EThemeId themeId, out IThemeVO themeVO)
		{
			return themeMap.map.TryGetValue((int)themeId, out themeVO);
		}

		public static bool TryGetFishVO(int fishId, out IFishVO fishVO)
		{
			return fishMap.map.TryGetValue(fishId, out fishVO);
		}

		public static bool TryGetFishTankVO(int fishId, int star, out IFishTankVO fishTankVO)
		{
			return fishTankMap.TryGetItem(fishId, star, out fishTankVO);
		}

		public static bool TrygetFishSequenceVO(int id, out IFishSequenceVO fishSequenceVO)
		{
			return fishSequenceMap.map.TryGetValue(id, out fishSequenceVO);
		}

		public static bool RandomFishiSequence(out IFishSequenceVO fishSequence)
		{
			fishSequence = null;
			int count = fishSequenceMap.list.Count;
			if (count > 0)
			{
				fishSequence = fishSequenceMap.list[Random.Range(0, count)];
			}
			return fishSequence != null;
		}

		public static bool TryGetStageRewardVO(out List<IStageRewardVO> stageRewardVOs)
		{
			stageRewardVOs = new List<IStageRewardVO>(stageRewardMap.list);
			return stageRewardVOs.Count > 0;
		}

		public static bool ValidFishVOs(int[] fishIds)
		{
			foreach (int key in fishIds)
			{
				if (!fishMap.map.ContainsKey(key))
				{
					return false;
				}
			}
			return true;
		}

		public static bool ValidFishTankVOs(int[] fishIds)
		{
			foreach (int key in fishIds)
			{
				for (int j = 1; j <= 4; j++)
				{
					if (!fishTankMap.TryGetItem(key, j, out var _))
					{
						return false;
					}
				}
			}
			return true;
		}

		public static bool ValidFishAndTankVOs(int[] fishIds)
		{
			if (ValidFishVOs(fishIds))
			{
				return ValidFishTankVOs(fishIds);
			}
			return false;
		}
	}

	public enum EFishRarity
	{
		Common = 1,
		Rare,
		Epic
	}

	public enum EItemReason
	{
		Get_Stage_Reward = 111,
		Get_Weight_Reward
	}

	public enum EThemeId
	{
		Base = -1,
		None,
		Default
	}

	public enum EConfigId
	{
		None = 0,
		Theme = 1,
		Fish = 3,
		FishTank = 4,
		FishSequence = 5,
		StageReward = 6,
		FishGameGoods = 7,
		FishGameInit = 8,
		FishGameDrop = 9,
		FishGoodsCollect = 10,
		FishGoodsMerge = 11,
		FishGoodsProduce = 12
	}

	public enum EViewId
	{
		None,
		MainView,
		MainIcon,
		GameIcon,
		StartView,
		EndView,
		HelpView,
		StageRewardView,
		GiftView,
		FishInfoView
	}

	public enum EResId
	{
		None,
		Loading
	}

	public enum ELanguageId
	{
		None,
		Title,
		GameDesc,
		BeginDesc
	}

	public static class ConfigName
	{
		private static readonly Dictionary<EThemeId, Dictionary<EConfigId, string>> _configNameDict = new Dictionary<EThemeId, Dictionary<EConfigId, string>>
		{
			{
				EThemeId.Base,
				new Dictionary<EConfigId, string> { 
				{
					EConfigId.Theme,
					"숍끟榫猎䵑\u0014ª厩숍끓斷洎桠:\u009a厙뻹"
				} }
			},
			{
				EThemeId.Default,
				new Dictionary<EConfigId, string>
				{
					{
						EConfigId.Fish,
						"숍끟榫猎䵑\u0014ª厩숍끓玷栎桲;Ò发刖梫\ud9f7Œ"
					},
					{
						EConfigId.FishTank,
						"숍끟榫猎䵑\u0014ª厩숍끓玷栎桲;Ò发숁끛斷昂呫6\u009a厙"
					},
					{
						EConfigId.FishSequence,
						"숍끟榫猎䵑\u0014ª厩숍끓玷栎桲;Ò发숟끟推攠卑<\u0092厑刖梫\ud9f7Œ"
					},
					{
						EConfigId.StageReward,
						"숍끟榫猎䵑\u0014ª厩숍끓憷朎桧&\u008a厉숝끨撼弞敕 \u0096厕뷣\u00af赴"
					},
					{
						EConfigId.FishGameGoods,
						"숍끟榫猎䵑\u0014ª厩숍끓澷搎桳=Â叁숙끸撸攚獑\r\u0096厕뻺"
					},
					{
						EConfigId.FishGameInit,
						"숍끟榫猎䵑\u0014ª厩숍끓榷琎桽<ª厩刖梫\ud9f7Œ"
					},
					{
						EConfigId.FishGameDrop,
						"숍끟榫猎䵑\u0014ª厩숍끓澷瀎桰 Â叁숌끕德損䍝5\u0082厁欷㹾"
					},
					{
						EConfigId.FishGoodsCollect,
						"숍끟榫猎䵑\u0014ª厩숍끓澷搎桳=Â叁숆끹掶琇獘7\u0092厑刖梫\ud9f7Œ"
					},
					{
						EConfigId.FishGoodsMerge,
						"숍끟榫猎䵑\u0014ª厩숍끓澷搎桳=Â叁수끷徼搙獓7\u0082厁欷㹾"
					},
					{
						EConfigId.FishGoodsProduce,
						"숍끟榫猎䵑\u0014ª厩숍끓澷搎桤 Â叁敵c4끟f\ude37㷎"
					}
				}
			}
		};

		public static string GetConfigName(EThemeId themeId, EConfigId configId)
		{
			if (!_configNameDict.TryGetValue(themeId, out var value))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓澷琎栔\u001cÂ叁숟끜₶䌠⁚6\u0085厄숃끔䞿攄潓r\"匡숄끹架丅瑒;¢厡쉐끗梼救愔&¦厥숎끟ゐ紏洎)Å叄숅뀚榺朆ⱚ4ª厩녉٤⢚\0逭\ud933", themeId, configId));
				return string.Empty;
			}
			if (!value.TryGetValue(configId, out var value2))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓澷琎栔\u001cÂ叁숟끜₶䌠⁚6\u0085厄숃끔亿愄潓r>匽숭끟䏹漮浑&\u0012匑숍끜涰攎湺3º厹숂뀚断䤃㩑?\u009a厙쉚뀀₢捛摉~\u0085厄숃끔撿㨄潓\u001b\u0096厕ꋞþ赴", themeId, configId));
				return string.Empty;
			}
			return value2;
		}
	}

	public static class ViewName
	{
		private static readonly Dictionary<EThemeId, Dictionary<EViewId, string>> _viewNameDict = new Dictionary<EThemeId, Dictionary<EViewId, string>> { 
		{
			EThemeId.Default,
			new Dictionary<EViewId, string>
			{
				{
					EViewId.MainIcon,
					"숍끟榫猎䵑\u0014ª厩숍끓榷渎桹3ª厩숄끙斶昅䥫6\u009a厙"
				},
				{
					EViewId.GameIcon,
					"숍끟榫猎䵑\u0014ª厩숍끓涷攎桳3º厹숄끙斶昅䥫6\u009a厙"
				},
				{
					EViewId.MainView,
					"숍끟榫猎䵑\u0014ª厩숍끓榷渎桹3ª厩숝끓於昞噫6\u009a厙"
				},
				{
					EViewId.StartView,
					"숍끟榫猎䵑\u0014ª厩숍끓枷椎桶7¢厡숏끬撰攐湃\r\u0096厕뻺"
				},
				{
					EViewId.EndView,
					"숍끟榫猎䵑\u0014ª厩숍끓斷爎桻$\u009a厙숝끓於昞噫6\u009a厙"
				},
				{
					EViewId.HelpView,
					"숍끟榫猎䵑\u0014ª厩숍끓沷瀎桼7¶厵숝끓於昞噫6\u009a厙"
				},
				{
					EViewId.StageRewardView,
					"숍끟榫猎䵑\u0014ª厩숍끓憷朎桧&\u008a厉숝끨撼嘞敕 \u0096厕敩e4끟f씷㷎"
				},
				{
					EViewId.GiftView,
					"숍끟榫猎䵑\u0014ª厩숍끓暷琎桳;\u009e厝숝끓於昞噫6\u009a厙"
				},
				{
					EViewId.FishInfoView,
					"숍끟榫猎䵑\u0014ª厩숍끓玷栎桲;Ò发숅끔斿眆䥢;\u009a厙刖梫\ud9f7Œ"
				}
			}
		} };

		public static string GetViewName(EThemeId themeId, EViewId viewId)
		{
			if (!_viewNameDict.TryGetValue(themeId, out var value))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓澷琎栔\u001cÂ叁숟끜₶嘠⁚6\u0085厄쉊끟璮噋楳7Ö叕숤끟斮㨥楕?\u009a厙숏끎䦱搐⁙7*匩숗끁盩椘㨘rÞ叝숎끍㆐紏攎)É又", themeId, viewId));
				return string.Empty;
			}
			if (!value.TryGetValue(viewId, out var value2))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓澷琎栔\u001cÂ叁숟끜₶嘠⁚6\u0085厄쉊끟涮敋楺3º厹숞끽於真\u2062;\u009a厙숏끛璴栐与rÖ叕숣끗箼〤敐hò叱순뀖矹䤝絝7â叡匠樺ā评荽", themeId, viewId));
				return string.Empty;
			}
			return value2;
		}
	}

	public static class ResName
	{
		private static readonly Dictionary<EThemeId, Dictionary<EResId, string>> _resNameDict = new Dictionary<EThemeId, Dictionary<EResId, string>> { 
		{
			EThemeId.Default,
			new Dictionary<EResId, string> { 
			{
				EResId.Loading,
				"숌끓梆植畝!¦厥숆끝撆椇湛3\u0096厕显䥿"
			} }
		} };

		public static string GetResName(EThemeId themeId, EResId resId)
		{
			if (!_resNameDict.TryGetValue(themeId, out var value))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓澷琎栔\u001cÂ叁숟끜₶嘠⁚6\u0085厄쉊끟璮噋楳7Ö叕숤끟斮㨥楕?\u009a厙숏끎䦱搐⁙7*匩숗끁盩椘㨘rÞ叝숎끍㆐紏攎)É又", themeId, resId));
				return string.Empty;
			}
			if (!value.TryGetValue(resId, out var value2))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓澷琎栔\u001cÂ叁숟끜₶嘠⁚6\u0085厄쉊끟涮敋楺3º厹숞끽於真\u2062;\u009a厙숏끛璴栐与rÖ叕숣끗箼〤敐hò叱순뀖矹䤝絝7â叡匠樺ā评荽", themeId, resId));
				return string.Empty;
			}
			return value2;
		}
	}

	public static class LanguageKey
	{
		private static readonly Dictionary<EThemeId, Dictionary<ELanguageId, string>> _languageKeyDict = new Dictionary<EThemeId, Dictionary<ELanguageId, string>> { 
		{
			EThemeId.Default,
			new Dictionary<ELanguageId, string>
			{
				{
					ELanguageId.Title,
					"숞끼沆攟䡝&¶厵"
				},
				{
					ELanguageId.GameDesc,
					"숍끼斆弎䡕?\u009a厙뷘\u00af赴"
				},
				{
					ELanguageId.BeginDesc,
					"숏끼溆琐䡂7¾厽숄끊於猅佫6\u009a厙"
				}
			}
		} };

		public static string GetCurrentLanguageKey(ELanguageId languageId)
		{
			return GetLanguageKey(ObjectManager.GetInstance().mergeFishingModel.vo.themeId, languageId);
		}

		public static string GetLanguageKey(EThemeId themeId, ELanguageId languageId)
		{
			if (!_languageKeyDict.TryGetValue(themeId, out var value))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓澷琎栔\u001cÂ叁숟끜₶嘠⁚6\u0085厄쉊끟璮䱋楳7Ö叕숟끔斾䬠慕5\u009a厙쉊끃旣测敀:\u009a厙쉐끳綽ⱑ敏bú叹숄끖憸朅⁓'\u008a厉籥I4뀺}灣哕", themeId, languageId));
				return string.Empty;
			}
			if (!value.TryGetValue(languageId, out var value2))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓澷琎栔\u001cÂ叁숟끜₶嘠⁚6\u0085厄쉊끟涮敋楺3º厹숞끽溼期⁸3¾厽숏끛禾㨐畿7ê叩숏끎䦱搐⁙7*匩숗끁泩愘㨘r¶厵숋끝䦬搌湓7*匩勢㓗\ud992ŉ", themeId, languageId));
				return string.Empty;
			}
			return value2;
		}
	}

	public static class GuideInfo
	{
		private static readonly Dictionary<EThemeId, int> _guideIdDict = new Dictionary<EThemeId, int> { 
		{
			EThemeId.Default,
			166
		} };

		public static int GetGuideId(EThemeId themeId)
		{
			if (_guideIdDict.TryGetValue(themeId, out var value))
			{
				return value;
			}
			return -1;
		}

		public static List<int> GetAllGuideId()
		{
			return new List<int>(_guideIdDict.Values);
		}
	}

	public static class ResPack
	{
		private static readonly Dictionary<EThemeId, EPackActivityID> _resPackIdDict = new Dictionary<EThemeId, EPackActivityID> { 
		{
			EThemeId.Default,
			EPackActivityID.mergeFishing_def
		} };

		private static Dictionary<EPackActivityID, bool> _cachedResPackDownloadResultDict = new Dictionary<EPackActivityID, bool>();

		public static bool HasRes(EThemeId themeId, bool reCache = false)
		{
			if (EThemeId.Base == themeId)
			{
				return true;
			}
			if (!_resPackIdDict.TryGetValue(themeId, out var value))
			{
				return false;
			}
			if (_cachedResPackDownloadResultDict.TryGetValue(value, out var value2) && !reCache)
			{
				return value2;
			}
			if (value2)
			{
				return value2;
			}
			bool flag = MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(value);
			if (_cachedResPackDownloadResultDict.ContainsKey(value))
			{
				_cachedResPackDownloadResultDict[value] = flag;
			}
			else
			{
				_cachedResPackDownloadResultDict.Add(value, flag);
			}
			return flag;
		}

		public static void cachedResDownload()
		{
			foreach (EPackActivityID item in _cachedResPackDownloadResultDict.Keys.ToList())
			{
				if (!_cachedResPackDownloadResultDict[item])
				{
					bool value = MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(item);
					_cachedResPackDownloadResultDict[item] = value;
				}
			}
		}
	}

	public struct ServerRespConfig
	{
		public bool valid;

		public int openDayId;

		public int closeDayId;

		public int themeId;

		public long openTime;

		public long closeTime;

		public string originConfig;

		public static ActivityOpenDateConfig GetActivityServerRespConfig()
		{
			return MonoSingleton<ActivitySwitchManager>.Instance.GetActivityOpenDateConfig(ActivitySwitchConfigID.MergeFishing);
		}

		public static ServerRespConfig Parse()
		{
			int num = -1;
			int num2 = -1;
			int num3 = 1;
			try
			{
				ActivityOpenDateConfig activityServerRespConfig = GetActivityServerRespConfig();
				if (activityServerRespConfig == null)
				{
					return new ServerRespConfig
					{
						valid = false
					};
				}
				num3 = activityServerRespConfig.themeID;
				int startDayID = activityServerRespConfig.startDayID;
				long startTimeStamp = activityServerRespConfig.startTimeStamp;
				int endDayID = activityServerRespConfig.endDayID;
				long endTimeStamp = activityServerRespConfig.endTimeStamp;
				string configStr = activityServerRespConfig.configStr;
				if (Enum.IsDefined(typeof(EThemeId), num3))
				{
					_ = 1;
				}
				return new ServerRespConfig
				{
					valid = true,
					openDayId = startDayID,
					closeDayId = endDayID,
					themeId = num3,
					openTime = startTimeStamp,
					closeTime = endTimeStamp,
					originConfig = configStr
				};
			}
			catch
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓憷爎栔\u0002\u008a厉숹끟盹攺獑 Þ叝숙끨澼渚牄\u0011Â叁쉊끓犾潋晱 Î反숙뀀盹攚牑 Þ叝숋끩䒭愌牆&\u0016匕쉐끳綽ⱑ祏bú叹수끉䖼渙⁂7\u001a匙숓끾㪸笔摽6í召쉊끇旵测ㅀ:\u009a厙籥I4뀺}\uf162哕", num, num2, num3));
				return new ServerRespConfig
				{
					valid = false
				};
			}
		}

		public override string ToString()
		{
			return string.Format("숃끛箵〄癐hò叱숅뀖滹䐆組7¾厽숎끃㆐紏愎)É又숆뀚斺䐇ⱛ!\u009a厙숎끃㊐紏愎)Í双숂뀚断䤃ⱑ?\u009a厙쉙뀀₢潚摉~\u0085厄숾끟斷㨿灝?\u009a厙쉆뀎沤潇笔1¶厵숃끟㪍笄獙7í召᭧\u0e85", new object[6] { valid, openDayId, closeDayId, themeId, openTime, closeTime });
		}
	}

	public static class Debug
	{
		private static bool _openDebugInfo;

		private static bool _isSimulateGoFishing;

		public static int simulateFishId;

		private static bool _isSimulateFishWeight;

		public static int simulateFishWeight;

		private static bool _isSimulateOpenOpenActivity;

		public static ServerRespConfig simulateServerRespConfig;

		public static bool OpenDebug => GameConst.GAME_MODE != GameConstMode.RELEASE;

		public static bool OpenDebugInfo
		{
			get
			{
				if (OpenDebug)
				{
					return _openDebugInfo;
				}
				return false;
			}
			set
			{
				_openDebugInfo = value;
			}
		}

		public static bool isSimulateGoFishing
		{
			get
			{
				if (OpenDebug)
				{
					return _isSimulateGoFishing;
				}
				return false;
			}
			set
			{
				_isSimulateGoFishing = value;
			}
		}

		public static bool isSimulateFishWeight
		{
			get
			{
				if (OpenDebug)
				{
					return _isSimulateFishWeight;
				}
				return false;
			}
			set
			{
				_isSimulateFishWeight = value;
			}
		}

		public static bool isSimulateOpenOpenActivity
		{
			get
			{
				if (OpenDebug)
				{
					return _isSimulateOpenOpenActivity;
				}
				return false;
			}
			set
			{
				_isSimulateOpenOpenActivity = value;
			}
		}

		public static void CreateSimulateServerRespConfig(int durationDays, EThemeId themeId = EThemeId.Default)
		{
			DateTime dateTime = DateTime.ParseExact(DateTime.Today.ToString("숓끃撠搔祹\u001f\u0096厕"), "숓끃撠搔祹\u001f\u0096厕", CultureInfo.InvariantCulture, DateTimeStyles.AdjustToUniversal);
			int num = string.Format("숮뀊篣ㄯ笀/ò叱숗끾㫫䐘㩏`í召\u1a62අ", dateTime.Year, dateTime.Month, dateTime.Day).ToInt();
			long openTime = TimeManager.Instance.GetTimeStameByDateTime(dateTime) + ServerTimeManager.TimeDiff;
			DateTime dateTime2 = DateTime.ParseExact(DateTime.Today.AddDays(durationDays - 1).ToString("숓끃撠搔祹\u001f\u0096厕"), "숓끃撠搔祹\u001f\u0096厕", CultureInfo.InvariantCulture, DateTimeStyles.AdjustToUniversal);
			dateTime2 += new TimeSpan(0, 23, 59, 59);
			int num2 = string.Format("숮뀊篣ㄯ笀/ò叱숗끾㫫䐘㩏`í召\u1a62අ", dateTime2.Year, dateTime2.Month, dateTime2.Day).ToInt();
			long closeTime = TimeManager.Instance.GetTimeStameByDateTime(dateTime2) + ServerTimeManager.TimeDiff;
			simulateServerRespConfig = new ServerRespConfig
			{
				valid = true,
				openDayId = num,
				closeDayId = num2,
				themeId = (int)themeId,
				openTime = openTime,
				closeTime = closeTime,
				originConfig = string.Format("숟끓璴攠獘3Ö叕쉚뀚箢ㅛ㩉\rò叱匙橼ā诈荽", num, num2, themeId)
			};
		}
	}

	[Serializable]
	public class IFishVO
	{
		public int id;

		public string fishName;

		public string fishDesc;

		public int fishId;

		public EFishRarity fishRarity;

		public string fishPrefab;

		public string hookPrefab;

		public string lockIcon;

		public string breakthroughStar;

		public string weights;

		public string weightMaxRanges;

		public string weightChances;

		public string weightRewards;

		private int[] _cacheWeights;

		private float[] _cacheWeightMaxRanges;

		private float[] _cacheWeightChances;

		private List<BaseData3VO> _cacheWeightRewards;

		public int[] GetWeights()
		{
			if (_cacheWeights != null)
			{
				return _cacheWeights;
			}
			try
			{
				_cacheWeights = weights.Split(';').ToList().ConvertAll<int>(int.Parse)
					.ToArray();
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숙끼溰昚䥜\u001b¾厽쉄끬璖䉅潳7Ö叕숁끟犸漂牀:Î反숽끝枱栾畑;¢厡쉃끉擱㩄琔\u001b\u0096厕숗끁早爘‘r\u009a厙쉐끕ㆫ絑爔)É又뺼", id, ex.Message));
				_cacheWeights = new int[0];
			}
			return _cacheWeights;
		}

		public float[] GetWeightMaxRanges()
		{
			if (_cacheWeightMaxRanges != null)
			{
				return _cacheWeightMaxRanges;
			}
			try
			{
				_cacheWeightMaxRanges = weightMaxRanges.Split(';').ToList().ConvertAll<float>(float.Parse)
					.ToArray();
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숙끼溰昚䥜\u001b¾厽쉄끬璖坅潳7Ö叕숂끓憾砃敀\u001f\u008a厉숍끛⢷⤎剑!¥厤쉐끳ソ絑—)Å叄수뀚犼㨙ⱆ=Î反古橻ā诵줠", id, ex.Message));
				_cacheWeightMaxRanges = new float[0];
			}
			return _cacheWeightMaxRanges;
		}

		public float[] GetWeightChances()
		{
			if (_cacheWeightChances != null)
			{
				return _cacheWeightChances;
			}
			try
			{
				_cacheWeightChances = weightChances.Split(';').ToList().ConvertAll<float>(float.Parse)
					.ToArray();
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숙끼溰昚䥜\u001b¾厽쉄끬璖啅潳7Ö叕숋끝垫攌灐7b卡숞끝憱渟楷:\u008a厉쉂끟䦪摃挝r*匩쉚뀚₢敛㩉~\u0085厄수끈箶ㄙ爎rò叱匯嘸", id, ex.Message));
				_cacheWeightChances = new float[0];
			}
			return _cacheWeightChances;
		}

		public List<BaseData3VO> GetWeightRewards()
		{
			if (_cacheWeightRewards != null)
			{
				return _cacheWeightRewards;
			}
			try
			{
				_cacheWeightRewards = new List<BaseData3VO> { null };
				_cacheWeightRewards.AddRange(BaseData3VO.GetBaseData3VOList(weightRewards));
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숙끼溰昚䥜\u001b¾厽쉄끬璖䉅潳7Ö叕숁끟犸漂牀:Î反숽끝枱栾畑;¢厡숝끨撼猞瑕 \u0096厕숣뀓\u20f9笤⡐h\u0085厄쉊끇狵潋け Î反㉲:4끻3㐯ઈ", id, ex.Message));
				_cacheWeightRewards = new List<BaseData3VO>();
			}
			return _cacheWeightRewards;
		}

		public int GetWeightIndex(int weight)
		{
			int[] array = GetWeights();
			if (array.Length == 0)
			{
				return 0;
			}
			if (weight < array[0])
			{
				return 0;
			}
			for (int num = array.Length - 1; num >= 0; num--)
			{
				if (weight >= array[num])
				{
					return num + 1;
				}
			}
			return 0;
		}

		public int RandomWeight(int index)
		{
			int[] array = GetWeights();
			float[] array2 = GetWeightMaxRanges();
			if (index < 0 || index >= array.Length || index >= array2.Length)
			{
				return 0;
			}
			if (index == 0)
			{
				return Random.Range(0, array[0]);
			}
			int num = array[index - 1];
			int num2 = (int)((float)array[index] * array2[index]);
			num2 = Mathf.Clamp(num2, num, int.MaxValue);
			int num3 = Random.Range(num, num2);
			num3 = (num3 + 5) / 10 * 10;
			if (num3 >= num2)
			{
				num3 = (num2 / 10 - 1) * 10;
			}
			return num3;
		}

		public (bool, int, int, BaseData3VO) GoFishingWeight(int oldWeight)
		{
			float[] array = GetWeightChances();
			int weightIndex = GetWeightIndex(oldWeight);
			if (weightIndex >= array.Length)
			{
				return (false, oldWeight, weightIndex, null);
			}
			float num = array[weightIndex];
			float num2 = Random.Range(0f, 1f);
			bool flag = !MathTools.AlmostEqual(num, 0f) && num2 <= num;
			if (array.Length - 1 == weightIndex)
			{
				flag = false;
			}
			int num3 = (flag ? (weightIndex + 1) : weightIndex);
			int num4 = RandomWeight(num3);
			if (Debug.isSimulateGoFishing && Debug.isSimulateFishWeight)
			{
				num4 = Debug.simulateFishWeight;
				num3 = GetWeightIndex(num4);
				flag = num3 > weightIndex;
			}
			BaseData3VO item = GetWeightRewards().TryGet(weightIndex);
			return (flag, num4, num3, item);
		}

		public int GetKeyPointWeight(int index)
		{
			int[] array = GetWeights();
			if (index < 0)
			{
				index = 0;
			}
			else if (index >= array.Length)
			{
				index = array.Length - 1;
			}
			return array[index];
		}

		public BaseData3VO GetKeyPointRewards(int index)
		{
			if (index < 0)
			{
				index = 0;
			}
			else if (index >= weights.Length)
			{
				index = weights.Length - 1;
			}
			return GetWeightRewards().TryGet(index);
		}
	}

	[Serializable]
	public class IFishTankVO
	{
		public int id;

		public int fishId;

		public int star;

		public int point;

		public string produce;

		private List<BaseData3VO> _produces;

		public List<BaseData3VO> GetProduces()
		{
			if (_produces != null)
			{
				return _produces;
			}
			try
			{
				_produces = BaseData3VO.GetBaseData3VOList(produce);
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숄끮犸漅䥟\u0002Î反숏끏斺琐搚\u0015\u009a厙숎끈斶猏偁1\u009a厙숃뀓\u20f9笄⡐h\u0085厄쉊끇狵潋け Î反㉲:4끻3㐯ઈ", id, ex.Message));
				_produces = new List<BaseData3VO>();
			}
			return _produces;
		}

		public List<BaseData3VO> UnfoldAndRamdonProduces()
		{
			List<BaseData3VO> produces = GetProduces();
			if (produces.Count == 0)
			{
				return produces;
			}
			List<BaseData3VO> list = new List<BaseData3VO>();
			foreach (BaseData3VO item in produces)
			{
				if (item.num == 1)
				{
					list.Add(item);
					continue;
				}
				for (int i = 0; i < item.num; i++)
				{
					list.Add(new BaseData3VO
					{
						type = item.type,
						id = item.id,
						num = 1
					});
				}
			}
			_Shuffle(list);
			return list;
		}

		private void _Shuffle<BaseData3VO>(IList<BaseData3VO> list)
		{
			int num = list.Count;
			while (num > 1)
			{
				num--;
				int index = Random.Range(0, num + 1);
				BaseData3VO value = list[index];
				list[index] = list[num];
				list[num] = value;
			}
		}
	}

	[Serializable]
	public class IFishSequenceVO
	{
		public int id;

		public string sequence;

		public string cycleSequence;

		public string advancedSequence;

		public string advancedCycleSequence;

		private int[] _cacheSequence;

		private int[] _cacheCycleSequence;

		private int[] _cacheAdvancedSequence;

		private int[] _cacheAdvancedCycleSequence;

		public int[] GetSequence()
		{
			if (_cacheSequence != null)
			{
				return _cacheSequence;
			}
			try
			{
				_cacheSequence = sequence.Split(';').ToList().ConvertAll<int>(int.Parse)
					.ToArray();
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숙끼新焚䥜\u0001\u009a厙숉끟䞷攊畑|\"匡숛끩溼挜瑁7¾厽쉊뀒㫰⁋敽6í召쉆뀊犤片笔7Î反쉊끈緣⁋潏cú叹", id, ex.Message));
				_cacheSequence = new int[0];
			}
			return _cacheSequence;
		}

		public int[] GetCycleSequence()
		{
			if (_cacheCycleSequence != null)
			{
				return _cacheCycleSequence;
			}
			try
			{
				_cacheCycleSequence = cycleSequence.Split(';').ToList().ConvertAll<int>(int.Parse)
					.ToArray();
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숙끼新焚䥜\u0001\u009a厙숉끟䞷攊畑|\"匡숉끹厠攊瑘7R卑숄끏⢼⤅煗7¥厤쉐끳ソ絑—)Å叄수뀚犼㨙ⱆ=Î反古橻ā诵줠", id, ex.Message));
				_cacheCycleSequence = new int[0];
			}
			return _cacheCycleSequence;
		}

		public int[] GetAdvancedSequence()
		{
			if (_cacheAdvancedSequence != null)
			{
				return _cacheAdvancedSequence;
			}
			try
			{
				_cacheAdvancedSequence = advancedSequence.Split(';').ToList().ConvertAll<int>(int.Parse)
					.ToArray();
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숙끼新焚䥜\u0001\u009a厙숉끟䞷攊畑|\"匡순끻掽攝瑕<\u0092厑숛끩溼挜摁7¾厽쉊뀒㫰⁋敽6í召쉆뀊犤片笔7Î反쉊끈緣⁋潏cú叹", id, ex.Message));
				_cacheAdvancedSequence = new int[0];
			}
			return _cacheAdvancedSequence;
		}

		public int[] GetAdvancedCycleSequence()
		{
			if (_cacheAdvancedCycleSequence != null)
			{
				return _cacheAdvancedCycleSequence;
			}
			try
			{
				_cacheAdvancedCycleSequence = advancedCycleSequence.Split(';').ToList().ConvertAll<int>(int.Parse)
					.ToArray();
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숙끼新焚䥜\u0001\u009a厙숉끟䞷攊畑|\"匡순끻掽攝瑕<\u0092厑숉끹厠攊摘7R卑숄끏⢼⤅煗7¥厤쉐끳ソ絑—)Å叄수뀚犼㨙ⱆ=Î反古橻ā诵줠", id, ex.Message));
				_cacheAdvancedCycleSequence = new int[0];
			}
			return _cacheAdvancedCycleSequence;
		}

		public int GetFishId(int index)
		{
			int[] array = GetSequence();
			if (array.Length == 0)
			{
				return -1;
			}
			if (index < array.Length)
			{
				return array[index];
			}
			int[] array2 = GetCycleSequence();
			if (array2.Length == 0)
			{
				return -1;
			}
			return array2[(index - array.Length) % array2.Length];
		}

		public int GetAdvancedFishId(int index)
		{
			int[] array = GetAdvancedSequence();
			if (array.Length == 0)
			{
				return -1;
			}
			if (index < array.Length)
			{
				return array[index];
			}
			int[] array2 = GetAdvancedCycleSequence();
			if (array2.Length == 0)
			{
				return -1;
			}
			return array2[(index - array.Length) % array2.Length];
		}
	}

	[Serializable]
	public class IStageRewardVO : BaseVO
	{
		public static readonly IStageRewardVO Empty = new IStageRewardVO();

		public int id;

		public int stageId;

		public int point;

		public string reward;

		public string gfitBoxName;

		private List<BaseData3VO> _rewardsBySupportCC;

		private List<BaseData3VO> _rewardsByNonsupportCC;

		public List<BaseData3VO> _GetRewardsBySupportCC()
		{
			if (_rewardsBySupportCC != null)
			{
				return _rewardsBySupportCC;
			}
			try
			{
				_rewardsBySupportCC = BaseData3VO.GetBaseData3VOListConvert(reward, isCCActive: true);
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숋끩劭攌䥓7N卍숎끛⺫䜏睢\u001d½厼숏끎犋搐敃3Î反숥끸溠䌦獄7¾厽쉊뀒㫰⁋䍽6í召쉆뀊犤片笔7Î反쉊끈緣⁋潏cú叹", id, ex.Message));
				_rewardsBySupportCC = new List<BaseData3VO>();
			}
			return _rewardsBySupportCC;
		}

		public List<BaseData3VO> _GetRewardsByNonsupportCC()
		{
			if (_rewardsByNonsupportCC != null)
			{
				return _rewardsByNonsupportCC;
			}
			try
			{
				_rewardsByNonsupportCC = BaseData3VO.GetBaseData3VOListConvert(reward, isCCActive: false);
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숋끩劭攌䥓7N卍숎끛⺫䜏睢\u001d½厼숏끎犋搐敃3Î反숩끸玠攪獘=Ò发쉃끹擱㩄䌔\u001b\u0096厕숗끁早爘‘r\u009a厙쉐끕ㆫ絑爔)É又뺼", id, ex.Message));
				_rewardsByNonsupportCC = new List<BaseData3VO>();
			}
			return _rewardsByNonsupportCC;
		}

		public List<BaseData3VO> GetRewards(bool supportCCReward)
		{
			if (!supportCCReward)
			{
				return _GetRewardsByNonsupportCC();
			}
			return _GetRewardsBySupportCC();
		}
	}

	[Serializable]
	public class IThemeVO
	{
		public int themeId;

		public string suffix;

		public int dynamicGiftIndex;

		public string initialData = "";

		public string showFishIds;

		private int[] _showFishIds;

		public int[] GetShowFishIds()
		{
			if (_showFishIds != null)
			{
				return _showFishIds;
			}
			try
			{
				_showFishIds = showFishIds.Split(';').ToList().ConvertAll<int>(int.Parse)
					.ToArray();
			}
			catch (Exception ex)
			{
				Log.E(string.Format("숏끮嚱伐䥙7^卝숞끽澼真\u2e67:Â叁숂끓玪⠃䙽6Ò发숂뀚断䤃⥑?\u009a厙숑뀀⳹‒搄/µ厴숅끈₫笆敆h\u0085厄\ue829Ï赴", themeId, ex.Message));
				_showFishIds = new int[0];
			}
			return _showFishIds;
		}
	}

	public class Model : BaseModel
	{
		private readonly string _KEY = "숸끿䚞䤹䵱\r\u001e匝숤끲䮐䔥即\r2匱뻅";

		private VO _vo;

		public bool showFishConfigValid;

		private RandomRewardListData _cacheAnimRewardListData;

		public static SceneType LastScene = SceneType.MainView;

		public VO vo => _vo;

		public bool IsOpenSoftSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Soft, ActivityID.AID_MergeFishing);

		public bool IsOpenHardSwitch => MonoSingleton<ActivitySwitchManager>.Instance.IsOpenActivitySwitch(ActivitySwitchType.Switch_Hard, ActivityID.AID_MergeFishing);

		public override void InitModel(bool timingSave = false)
		{
			base.InitModel(timingSave);
			string item = GetItem(_KEY);
			_vo = BaseVO.DecodeToVO<VO>(item);
			if (_vo.themeId != EThemeId.None)
			{
				ConfigHelper.Init(_vo.themeId);
			}
			if (_vo.state.openStatus == EOpenStatus.Open)
			{
				showFishConfigValid = ConfigHelper.ValidFishAndTankVOs(_vo.fishTankPoolState.showFishIds);
			}
			EventManager.GetInstance().AddEventListener<ShopVO>(100179, _OnPurchaseSuccess);
			EventManager.GetInstance().AddEventListener(100009, _OnDownloadResSucceed);
			EventManager.GetInstance().AddEventListener(202039, _OnCardCollectionCloseActivity);
		}

		public void SyncServerDataToLocal()
		{
			string serverItem = Singleton<ServerManager>.Instance.GetServerItem(_KEY);
			try
			{
				VO vO = BaseVO.DecodeToVO<VO>(serverItem);
				_vo = vO;
			}
			catch (Exception)
			{
			}
			_SaveVO();
			if (_vo.themeId != EThemeId.None)
			{
				ConfigHelper.Init(_vo.themeId);
			}
			if (_vo.state.openStatus == EOpenStatus.Open)
			{
				showFishConfigValid = ConfigHelper.ValidFishAndTankVOs(_vo.fishTankPoolState.showFishIds);
			}
		}

		public void JudgeHardCloseActivity()
		{
			if (_vo != null && !IsOpenHardSwitch)
			{
				_vo.state.forceClose = true;
				_SaveVO();
			}
		}

		public override void SaveDataToDB()
		{
			_SaveVO();
		}

		public override void ReloadModel()
		{
			if (_vo.themeId != EThemeId.None)
			{
				ConfigHelper.Init(_vo.themeId);
			}
			if (_vo.state.openStatus == EOpenStatus.Open)
			{
				showFishConfigValid = ConfigHelper.ValidFishAndTankVOs(_vo.fishTankPoolState.showFishIds);
			}
		}

		private void _SaveVO()
		{
			if (_vo != null)
			{
				string value = JsonConvert.SerializeObject((object)_vo);
				SaveItem(_KEY, value);
				Singleton<ServerManager>.Instance.SaveServerItem(_KEY, value);
			}
		}

		public bool HasCurrentThemeRes()
		{
			return ResPack.HasRes(_vo.themeId);
		}

		public bool IsInActivity()
		{
			if (_vo == null)
			{
				return false;
			}
			if (EOpenStatus.Open != _vo.state.openStatus)
			{
				return false;
			}
			if (!ResPack.HasRes(_vo.themeId))
			{
				return false;
			}
			if (!showFishConfigValid)
			{
				return false;
			}
			return true;
		}

		public bool IsInActivityByMutexManager()
		{
			if (_vo == null)
			{
				return false;
			}
			return EOpenStatus.Open == _vo.state.openStatus;
		}

		public bool IsShowGameIcon()
		{
			return IsInActivity();
		}

		public bool IsShowRedPoint()
		{
			return true;
		}

		public int GetActivityTimedown()
		{
			if (_vo == null)
			{
				return 0;
			}
			if (EOpenStatus.Open != _vo.state.openStatus)
			{
				return 0;
			}
			if (_vo.state.forceClose)
			{
				return 0;
			}
			long num = Singleton<ServerManager>.Instance.ServerTime;
			if (num <= 0)
			{
				num = ServerTimeManager.CurrentTime();
			}
			return Mathf.Clamp((int)(_vo.state.closeTime - num), 0, int.MaxValue);
		}

		public ShowData GetShowData()
		{
			if (_vo == null)
			{
				return default;
			}
			return _vo.GetShowData();
		}

		public RandomRewardListData GetCacheAnimRewardListData()
		{
			if (_cacheAnimRewardListData == null)
			{
				_cacheAnimRewardListData = new RandomRewardListData();
			}
			return _cacheAnimRewardListData;
		}

		public IThemeVO GetCurrentTheme()
		{
			if (ConfigHelper.TryGetThemeVO(_vo.themeId, out var themeVO))
			{
				return themeVO;
			}
			return null;
		}

		public bool CheckOpenActivity()
		{
			if (_vo == null)
			{
				_vo = new VO();
			}
			if (EOpenStatus.Open == _vo.state.openStatus)
			{
				return false;
			}
			if (Singleton<ServerManager>.Instance.ServerTime <= 0)
			{
				return false;
			}
			if (!MonoSingleton<ConditionManager>.Instance.IsLegal(141))
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
			if (!MonoSingleton<ActivityMutexManager>.Instance.IsLegalActivityMutex(ActivityMutexID.AMID_MergeFish))
			{
				return false;
			}
			ServerRespConfig serverRespConfig = ServerRespConfig.Parse();
			if (Debug.isSimulateOpenOpenActivity)
			{
				serverRespConfig = Debug.simulateServerRespConfig;
			}
			if (!serverRespConfig.valid)
			{
				return false;
			}
			if (!Enum.IsDefined(typeof(EThemeId), serverRespConfig.themeId))
			{
				return false;
			}
			if (!ResPack.HasRes((EThemeId)serverRespConfig.themeId, reCache: true))
			{
				return false;
			}
			if (serverRespConfig.openTime == _vo.state.openTime)
			{
				return false;
			}
			if (serverRespConfig.closeTime <= Singleton<ServerManager>.Instance.ServerTime)
			{
				return false;
			}
			return true;
		}

		public bool OpenActivity()
		{
			if (!CheckOpenActivity())
			{
				return false;
			}
			ServerRespConfig serverRespConfig = ServerRespConfig.Parse();
			if (Debug.isSimulateOpenOpenActivity)
			{
				serverRespConfig = Debug.simulateServerRespConfig;
			}
			if (!serverRespConfig.valid)
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓撷攎桹=\u0096厕숚뀔䆖挛汑<\n匉숃끓₯ഄ瑀+\u0085㒄逞\u0652⻒䢼ꅄ攼늈㛚숄끙架㨅⁒;¢厡몼" + JsonConvert.SerializeObject((object)serverRespConfig));
				return false;
			}
			ConfigHelper.Init((EThemeId)serverRespConfig.themeId);
			if (!ConfigHelper.TryGetThemeVO((EThemeId)serverRespConfig.themeId, out var themeVO))
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓撷攎桹=\u0096厕숚뀔䆖挛汑<\n匉숃끓₯\ue004瑀+\u0085㚄껢ቄ샩⁒햬頟뾾匋숌끕㪷\u200d捝5í召" + JsonConvert.SerializeObject((object)serverRespConfig));
				return false;
			}
			if (!ConfigHelper.TryGetStageRewardVO(out var stageRewardVOs))
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓撷攎桹=\u0096厕숚뀔䆖挛汑<\n匉숃끓₯\ue004瑀+\u0085㚄꺵ቄϩ䵝햁欄⧋쉠봅뀚榺朆湚4ª厩Ὢሸ" + JsonConvert.SerializeObject((object)serverRespConfig));
				return false;
			}
			if (!ConfigHelper.RandomFishiSequence(out var fishSequence))
			{
				Log.E("숍끟榫猎䵑\u0014ª厩숍끓撷攎桹=\u0096厕숚뀔䆖挛汑<\n匉숃끓₯\ue004瑀+\u0085㚄周ᜀ鿩渗辻幅젺ⳕ숄끙架㨅⁒;¢厡몼" + JsonConvert.SerializeObject((object)serverRespConfig));
				return false;
			}
			if (!ConfigHelper.ValidFishVOs(themeVO.GetShowFishIds()))
			{
				return false;
			}
			if (!ConfigHelper.ValidFishTankVOs(themeVO.GetShowFishIds()))
			{
				return false;
			}
			showFishConfigValid = true;
			bool isOpenCollectCard = ObjectManager.GetInstance().cardCollectionV2Model.IsInActivity() || ObjectManager.GetInstance().cardCollectionV3Model.IsInActivity();
			_InitOpenActivity(serverRespConfig, themeVO, stageRewardVOs, fishSequence, isOpenCollectCard);
			TA.ActivityStatus(TA.EActivityStatus.Open);
			ObjectManager.GetInstance().mergeFishingGameModel.OpenMergeFishing();
			EventManager.GetInstance().DispatchEvent(202048);
			return true;
		}

		private void _InitOpenActivity(ServerRespConfig serverConfig, IThemeVO themeVO, List<IStageRewardVO> stageRewardVOs, IFishSequenceVO fishSequenceConfig, bool isOpenCollectCard)
		{
			int versionCode = _vo.versionCode;
			_vo.Reset();
			_vo.themeId = (EThemeId)serverConfig.themeId;
			_vo.state.openStatus = EOpenStatus.Open;
			_vo.state.forceClose = false;
			_vo.state.openDayId = serverConfig.openDayId;
			_vo.state.closeDayId = serverConfig.closeDayId;
			_vo.state.openTime = serverConfig.openTime;
			_vo.state.closeTime = serverConfig.closeTime;
			_vo.giftState.dynamicGiftIndex = themeVO.dynamicGiftIndex;
			_vo.giftState.purchase = false;
			_vo.giftState.purchaseCount = 0;
			_vo.stageState.index = 0;
			_vo.stageState.points = 0;
			_vo.stageState.claimPoints = 0;
			_vo.stageState.animPoints = 0;
			_vo.stageState.rewardVOs = stageRewardVOs;
			_vo.fishTankPoolState.fishTankStateDict.Clear();
			_vo.fishTankPoolState.showFishIds = themeVO.GetShowFishIds();
			for (int i = 0; i < _vo.fishTankPoolState.showFishIds.Length; i++)
			{
				int num = _vo.fishTankPoolState.showFishIds[i];
				_vo.fishTankPoolState.fishTankStateDict.Add(num, new FishTankState
				{
					fishId = num
				});
			}
			_vo.fishSequenceState.config = fishSequenceConfig;
			_vo.fishSequenceState.index = 0;
			_vo.fishSequenceState.advancedIndex = 0;
			_vo.taState.tokenCount = 0;
			_vo.taState.baseTokenCount = 0;
			_vo.guideState.firstGoFishingId = -1;
			_vo.cardCollectionState.Init(isOpenCollectCard);
			CompatibleFishiWeight(versionCode);
			_SaveVO();
		}

		private void CompatibleFishiWeight(int oldVersionCode)
		{
			foreach (int item in _vo.fishPoolState.fishStateDict.Keys.ToList())
			{
				if (ConfigHelper.TryGetFishVO(item, out var fishVO) && _vo.fishPoolState.fishStateDict.TryGetValue(item, out var value))
				{
					int[] weights = fishVO.GetWeights();
					int num = -1;
					if (weights.Length != 0)
					{
						num = weights[^1];
					}
					if (num != -1 && value.weight >= num)
					{
						_vo.fishPoolState.fishStateDict.Remove(item);
					}
				}
			}
		}

		public bool CheckCloseActivity()
		{
			if (_vo == null)
			{
				return false;
			}
			if (EOpenStatus.Open != _vo.state.openStatus)
			{
				return false;
			}
			if (Singleton<ServerManager>.Instance.ServerTime <= 0)
			{
				return false;
			}
			if (!ResPack.HasRes(_vo.themeId))
			{
				return false;
			}
			if (GetActivityTimedown() > 0)
			{
				return false;
			}
			return true;
		}

		public void CloseActivity()
		{
			_vo.state.openStatus = EOpenStatus.Close;
			TA.ActivityStatus(TA.EActivityStatus.Close);
			EventManager.GetInstance().DispatchEvent(202048);
			ObjectManager.GetInstance().mergeFishingGameModel.CloseMergeFishing();
			EventManager.GetInstance().DispatchEvent(203095, SevenDayTaskType.UseFishing);
			_SaveVO();
		}

		private void _OnDownloadResSucceed()
		{
			ResPack.cachedResDownload();
		}

		private void _OnPurchaseSuccess(ShopVO shopVO)
		{
			if (shopVO != null && shopVO.type == 124)
			{
				_vo.giftState.purchase = true;
				_vo.giftState.purchaseCount++;
				_SaveVO();
			}
		}

		private void _OnCardCollectionCloseActivity()
		{
			if (_vo != null && _vo.cardCollectionState.IsSupportReward())
			{
				_vo.cardCollectionState.StopSupportReward();
				_SaveVO();
			}
		}

		public void OnAddToken(int goodsId, int goodsLv, int goodsNum)
		{
			if (goodsId >= 100101 && goodsId <= 100199)
			{
				_vo.taState.tokenCount += goodsNum;
				_vo.taState.baseTokenCount += Math.Max(1, (int)Math.Pow(2.0, goodsLv - 1)) * goodsNum;
				_SaveVO();
			}
		}

		public void OnClickMainView()
		{
			if (Singleton<ServerManager>.Instance.ServerTime <= 0 && GetActivityTimedown() <= 0)
			{
				CommonNetErrorViewLogic.Show(new CommonNetErrorViewData
				{
					EnterCallback = () =>
					{
						Singleton<ServerManager>.Instance.GetTimeFromServer();
					},
					tipsKey = "숄끕璷弅捑1Ö叕순끟徫昝獑 \u0082厁匥橩ā讕鑤"
				});
				MonoSingleton<GuideManager>.Instance.FinishPlayingGuide();
			}
			else if (!ResPack.HasRes(_vo.themeId))
			{
				ViewManager.GetInstance().ShowTip("숅끟措攆牁 \u0092厑숃끍澸爄彀4Â叁划撇\ud9c4Ő");
				MonoSingleton<GuideManager>.Instance.FinishPlayingGuide();
			}
			else if (!IsInActivity())
			{
				MonoSingleton<GuideManager>.Instance.FinishPlayingGuide();
			}
			else
			{
				if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(178))
				{
					MonoSingleton<GuideManager>.Instance.FinishGuideByID(178);
				}
				OpenMainView();
			}
		}

		public void OpenStartView(bool autoPopup = false)
		{
			string viewName = ViewName.GetViewName(_vo.themeId, EViewId.StartView);
			new MergeFishingBeginViewData
			{
				isAutoPopup = autoPopup,
				isOver = false
			};
			ViewManager.Instance.ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
		}

		public void OpenEndView(bool autoPopup = false)
		{
			string viewName = ViewName.GetViewName(_vo.themeId, EViewId.EndView);
			MergeFishingBeginViewData data = new MergeFishingBeginViewData
			{
				isAutoPopup = autoPopup,
				isOver = true
			};
			ViewManager.Instance.ShowView(viewName, data, ViewManager.ViewLayer.POP, animate: true);
		}

		public void OpenHelpView()
		{
			string viewName = ViewName.GetViewName(_vo.themeId, EViewId.HelpView);
			ViewManager.Instance.ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
		}

		public void OpenMainView(bool auto = false)
		{
			LastScene = GameManager.GetInstance().Scene;
			string viewName = ViewName.GetViewName(_vo.themeId, EViewId.MainView);
			string resName = ResName.GetResName(_vo.themeId, EResId.Loading);
			CommonLoadingViewLogic.ShowCommonLoading(new CommonLoadingViewData
			{
				assignBg = resName,
				mEnterCallback = () =>
				{
					ViewManager.Instance.ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
				}
			});
		}

		public void OpenStageRewardView()
		{
			string viewName = ViewName.GetViewName(_vo.themeId, EViewId.StageRewardView);
			ViewManager.Instance.ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
		}

		public void OpenGiftView()
		{
			string viewName = ViewName.GetViewName(_vo.themeId, EViewId.GiftView);
			ViewManager.Instance.ShowView(viewName, null, ViewManager.ViewLayer.POP, animate: true);
		}

		public void OpenFishInfoView(int fishId = -1)
		{
			string viewName = ViewName.GetViewName(_vo.themeId, EViewId.FishInfoView);
			MergeFishingFishInfoViewData data = new MergeFishingFishInfoViewData
			{
				fishId = fishId
			};
			ViewManager.Instance.ShowView(viewName, data, ViewManager.ViewLayer.POP, animate: true);
		}

		private void _ClaimReward(BaseData3VO bd3VO, EItemReason itemReason)
		{
			_ClaimReward(new List<BaseData3VO> { bd3VO }.GetRandomRewardListData(), itemReason);
		}

		private void _ClaimReward(RandomRewardListData randomRewardListData, EItemReason itemReason)
		{
			ObjectManager.GetInstance().itemDataModel.AddRewardBaseData3(randomRewardListData.reward, notice: true, (int)itemReason);
		}

		public int GoFishing(int goodsId = -1, bool advanced = false)
		{
			if (_vo == null)
			{
				return -1;
			}
			if (!IsInActivity())
			{
				return -1;
			}
			int num = ((!advanced) ? _vo.fishSequenceState.GoFishingId() : _vo.fishSequenceState.GoFishingAdvancedId());
			if (num < 0)
			{
				return -1;
			}
			if (Debug.isSimulateGoFishing)
			{
				num = Debug.simulateFishId;
			}
			if (!ConfigHelper.TryGetFishVO(num, out var _))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓撷攎桹=\u0096厕숅뀔玞栆汲;Ò发습끔햾繑椔²㙜ㅛ逄䱆\uf794椅〘r\u009e匜숎끒箐』猎rò叱뫡", num));
				return -1;
			}
			var (flag, baseData3VO) = _vo.fishPoolState.GoFishing(num);
			if (flag && baseData3VO != null)
			{
				_ClaimReward(baseData3VO, EItemReason.Get_Weight_Reward);
			}
			bool flag2 = _vo.fishTankPoolState.AddFishTankPoints(num);
			_vo.stageState.AddStagePoints(flag2 ? 1 : 0);
			ShowData showData = _vo.GetShowData();
			_vo.stageState.index = showData.claimStageData.stageIndex;
			if (showData.upgradeClaimStage)
			{
				_cacheAnimRewardListData = showData.GetClaimRewardListData();
				_ClaimReward(_cacheAnimRewardListData, EItemReason.Get_Stage_Reward);
			}
			_vo.stageState.SyncClaimPoints();
			if (!Debug.isSimulateGoFishing)
			{
				if (!advanced)
				{
					_vo.fishSequenceState.GoFishingIndexStep();
				}
				else
				{
					_vo.fishSequenceState.GoFishingAdvancedIndexStep();
				}
			}
			if (-1 == _vo.guideState.firstGoFishingId)
			{
				_vo.guideState.firstGoFishingId = num;
			}
			if (-1 != goodsId)
			{
				TA.GetFish(_vo.fishPoolState.GetShowFishData(num), goodsId);
			}
			EventManager.GetInstance().DispatchEvent(202052, num);
			_SaveVO();
			return num;
		}

		public void SyncStageAnimPoints()
		{
			if (_vo != null)
			{
				_vo.stageState.SyncAnimPoints();
				_SaveVO();
			}
		}

		public bool CheckFishTankReward(int fishId)
		{
			if (_vo == null)
			{
				return false;
			}
			if (!IsInActivity())
			{
				return false;
			}
			if (!_vo.fishTankPoolState.TryGetFishTankState(fishId, out var fishTankState))
			{
				return false;
			}
			return fishTankState.CheckReward();
		}

		public bool TryClaimFishTankReward(int fishId, out BaseData3VO bd3VO)
		{
			bd3VO = null;
			if (!CheckFishTankReward(fishId))
			{
				return false;
			}
			if (!_vo.fishTankPoolState.TryGetFishTankState(fishId, out var fishTankState))
			{
				return false;
			}
			bd3VO = fishTankState.ClaimOnceReward();
			_SaveVO();
			return bd3VO != null;
		}

		public void OpenRewardFreeView(RandomRewardListData rndRewardData, Action closeCall = null)
		{
			bool flag = false;
			for (int i = 0; i < rndRewardData.reward.Count; i++)
			{
				int type = rndRewardData.reward[i].type;
				int id = rndRewardData.reward[i].id;
				switch (type)
				{
				case 2:
					flag = true;
					break;
				case 1:
					if (id == 1007)
					{
						flag = true;
					}
					break;
				}
			}
			ViewManager.GetInstance().ShowView<BuySuccessNormalGiftLogic>(new BuySuccessNormalGiftData
			{
				mRewards = rndRewardData.originReward,
				mChangeToRewardList = (rndRewardData.hasRandomGoodsReward ? rndRewardData.reward : null),
				RandomGoodsRewardIndexs = rndRewardData.RandomGoodsRewardIndexs,
				TitleName = "숝끓撆弞畛 \u0096厕숍끕璷甎捆3Ö叕숃끛玭弄汛<Ò发" + GameConst.GetLanguage(),
				ShowLbTips = true,
				CloseCall = closeCall,
				FromType = RewardFromType.MainScene,
				MainUIPlayBtnViewAniDuration = (flag ? 0.01f : (-1f))
			}, ViewManager.ViewLayer.POP, animate: true);
		}

		public void DebugLog()
		{
			_ = _vo;
		}

		public void DebugReset()
		{
			CloseActivity();
			_vo = new VO();
			_SaveVO();
			EventManager.GetInstance().DispatchEvent(202048);
		}

		public void DebugResetGuide()
		{
			foreach (int item in GuideInfo.GetAllGuideId())
			{
				IGuideVo guideDataById = MonoSingleton<GuideManager>.Instance.GetGuideDataById(item);
				if (guideDataById != null)
				{
					MonoSingleton<GuideManager>.Instance.ResetGuide(guideDataById.FileName);
				}
			}
		}

		public void DebugAddStagePoint(int point)
		{
			_vo.stageState.AddStagePoints(point);
			ShowData showData = _vo.GetShowData();
			if (showData.upgradeClaimStage)
			{
				_ClaimReward(showData.GetClaimRewardListData(), EItemReason.Get_Stage_Reward);
			}
			_vo.stageState.SyncClaimPoints();
			_SaveVO();
		}

		public void DebugSetStage(int index)
		{
			int num = 0;
			for (int i = 0; i < index; i++)
			{
				IStageRewardVO stageRewardVO = _vo.stageState.rewardVOs.TryGet(i);
				num += stageRewardVO.point;
			}
			_vo.stageState.points = (_vo.stageState.animPoints = (_vo.stageState.claimPoints = num));
			_vo.stageState.index = index;
			_SaveVO();
		}

		public void DebugReOpenActivity()
		{
			CloseActivity();
			_vo.state.openTime--;
			if (OpenActivity())
			{
				OpenStartView();
			}
		}

		public void DebugCloseActivity(bool timedown)
		{
			if (timedown)
			{
				_vo.state.closeTime = _vo.state.openTime - 1;
			}
			else
			{
				_vo.state.forceClose = true;
			}
			_SaveVO();
		}

		public void DebugCompleteCurState()
		{
			ShowStageData showStageData = _vo.stageState.GetShowStageData();
			_vo.stageState.AddStagePoints(showStageData.stageMaxPoint - showStageData.stagePoint);
			ShowData showData = _vo.GetShowData();
			if (showData.upgradeClaimStage)
			{
				_ClaimReward(showData.GetClaimRewardListData(), EItemReason.Get_Stage_Reward);
			}
			_vo.stageState.SyncClaimPoints();
			_SaveVO();
		}
	}

	public struct ShowGiftData
	{
		public ShopType shopType;

		public int dynamicGiftIndex;

		private IShopDynamicGift _shopDynamicGift;

		public IShopDynamicGift GetShowDynamicGift()
		{
			if (_shopDynamicGift == null)
			{
				_shopDynamicGift = MonoSingleton<DynamicRewardGiftManager>.Instance.GetDynamicGiftByTypeAndIndex(shopType, dynamicGiftIndex);
				if (_shopDynamicGift == null)
				{
					Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓梷漎栚\u0001¦厥숌끽憰琍着\u0016\u008a厉숏뀔梞漐慀\u0001¦厥숄끾榠挅睕?ª厩숞끓徿猟䜎r\u0082厁숮끕憩洯桍<\u008a厉숃끙\u209e椄楒&\u0085厄숟뀚ⲷ†獘>µ厴숚끒炶攛獠+Æ叅쉚뀚₢摛㩉~\u0085厄숇끔䞸椈祝1\"匡숄끎碐㨅晐7æ句勢㓗\ud988ŉ", shopType, dynamicGiftIndex));
				}
			}
			return _shopDynamicGift;
		}
	}

	public struct ShowFishTankData
	{
		public bool valid;

		public int fishId;

		public int fishStar;

		public int fishMaxStar;

		public int point;

		public int maxPoint;

		public bool reward;

		public string debugInfo;

		public float GetStageProgress()
		{
			return MathTools.SafeDivision(point, maxPoint);
		}

		public bool CheckReward()
		{
			return reward;
		}

		public bool IsLock()
		{
			if (point == 0)
			{
				return fishStar == 0;
			}
			return false;
		}

		public bool IsMaxStar()
		{
			return fishStar >= fishMaxStar;
		}

		public IFishVO GetFishVO()
		{
			if (!ConfigHelper.TryGetFishVO(fishId, out var fishVO))
			{
				fishVO = new IFishVO();
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓梷漎栚\u0001¦厥숙끼憰渚睜\u0006\u008a厉숞끾䞸攟歕|\"匡숙끼侰㨚瑜\u0004B十숙끜侰‚⁜\u0004B十숄끉泹Ⰵ楁>¶厵숙끜撰㨚⁜\u001b\u0096厕勡㏗\ud988ŉ", fishId));
			}
			return fishVO;
		}
	}

	public struct ShowFishWeightData
	{
		public int weight;

		public int weightIndex;

		public int maxWeight;

		public int keypointWeight;

		public BaseData3VO keypointReward;
	}

	public struct ShowFishData
	{
		public bool valid;

		public int fishId;

		public ShowFishWeightData weightData;

		public ShowFishWeightData previousWeightData;

		private IFishVO _cacheFishVO;

		public bool surpassMaxWeightHistory => weightData.maxWeight > previousWeightData.maxWeight;

		public bool surpassWeightKeypoint
		{
			get
			{
				if (weightData.weightIndex > previousWeightData.weightIndex)
				{
					return previousWeightData.weightIndex != 0;
				}
				return false;
			}
		}

		public IFishVO GetFishVO()
		{
			if (_cacheFishVO != null)
			{
				return _cacheFishVO;
			}
			if (!ConfigHelper.TryGetFishVO(fishId, out _cacheFishVO))
			{
				_cacheFishVO = new IFishVO();
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓梷漎栚\u0001¦厥숙끼憰琚睜\u0016\u008a厉숏뀔榞猐慀\u0014ª厩숌끳₷昍桛h\u0085厄숣끉澱嘤楚4Â叁숙뀚疰氚伔<Ú叙숌뀖棹䤍汝!¦厥녤Ժ⢮\0逭\ud932", fishId));
			}
			return _cacheFishVO;
		}
	}

	public struct ShowStageData
	{
		public bool valid;

		public int stageIndex;

		public int stageCount;

		public int stagePoint;

		public int stageMaxPoint;

		public int point;

		public string giftBoxName;

		public IStageRewardVO stageRewardVO;

		public float stageProgress => Mathf.Clamp01(MathTools.SafeDivision(stagePoint, stageMaxPoint));

		public float progress
		{
			get
			{
				float num = Mathf.Clamp01(MathTools.SafeDivision(1f, stageCount));
				return ((float)stageIndex + stageProgress) * num;
			}
		}

		public bool isLastStage => stageIndex == stageCount;
	}

	public struct ShowFishPoolData
	{
		public Dictionary<int, ShowFishData> fishDataDict;
	}

	public struct ShowFishTankPoolData
	{
		public List<ShowFishTankData> fishTankDatas;

		public Dictionary<int, ShowFishTankData> fishTankDataDict;
	}

	public class ShowGuideData
	{
		public int firstGoFishingId;
	}

	public struct ShowData
	{
		public ShowGiftData giftData;

		public ShowStageData stageData;

		public ShowStageData claimStageData;

		public ShowStageData animStageData;

		public ShowFishPoolData fishPoolData;

		public ShowFishTankPoolData fishTankPoolData;

		public ShowGuideData guideData;

		public List<IStageRewardVO> stageRewardVOs;

		public bool supporCardCollectionReward;

		public bool upgradeClaimStage => stageData.stageIndex > claimStageData.stageIndex;

		public bool hasUpgradeAnimation => stageData.stageIndex > animStageData.stageIndex;

		private List<IStageRewardVO> _GetRewardConfigVOList(ShowStageData stageDataA, ShowStageData stageDataB)
		{
			if (stageRewardVOs == null)
			{
				return new List<IStageRewardVO>();
			}
			List<IStageRewardVO> list = new List<IStageRewardVO>();
			for (int i = stageDataA.stageIndex; i < stageDataB.stageIndex; i++)
			{
				IStageRewardVO stageRewardVO = stageRewardVOs.TryGet(i);
				if (stageRewardVO != null)
				{
					list.Add(stageRewardVO);
				}
			}
			return list;
		}

		public RandomRewardListData GetClaimRewardListData()
		{
			bool supprotCCReward = supporCardCollectionReward;
			return _GetRewardConfigVOList(claimStageData, stageData).SelectMany((IStageRewardVO vo) => vo.GetRewards(supprotCCReward)).ToList().GetRandomRewardListData();
		}

		public RandomRewardListData GetAnimRewardListData()
		{
			bool openCC = supporCardCollectionReward;
			return _GetRewardConfigVOList(animStageData, stageData).SelectMany((IStageRewardVO vo) => vo.GetRewards(openCC)).ToList().GetRandomRewardListData();
		}
	}

	public static class TA
	{
		public enum EActivityStatus
		{
			Open = 1,
			Close
		}

		public enum EFishTokenGetType
		{
			None,
			OpenActivity,
			ConsumeEnergy,
			Purchase,
			Debug
		}

		public enum EGoodsGetType
		{
			None,
			Merge,
			Purchase
		}

		public static void GetGoods(int goodsId)
		{
			VO vo = ObjectManager.GetInstance().mergeFishingModel.vo;
			if (vo != null)
			{
				Dictionary<string, object> analyticDic = new Dictionary<string, object> { { "숞끥徰椟村?\u0082厁뻸", goodsId } };
				_SendEvent("숃끥榿渄杇:ª厩숏끥斾爐杀\u001f\u009a厙녧剥❼\0逝\ud96f", analyticDic);
			}
		}

		public static void GetFish(ShowFishData showFishData, int rodId)
		{
			VO vo = ObjectManager.GetInstance().mergeFishingModel.vo;
			if (vo != null)
			{
				List<int> values = vo.fishTankPoolState.showFishIds.Select((int id) => vo.fishTankPoolState.fishTankStateDict[id].totalPoints).ToList();
				string value = string.Join("뻠", values);
				Dictionary<string, object> analyticDic = new Dictionary<string, object>
				{
					{
						"숃끥徿眄杇:\u0082厁숂끓溾甃敀\r¾厽뻱",
						showFishData.weightData.weight
					},
					{
						"숃끥徿眄杇:\u0082厁숂끓犾愃敀\rÎ反显䥳",
						showFishData.weightData.weightIndex
					},
					{
						"숃끥徿眄杇:\u0082厁숂끓犾愃敀\rÎ反숏끑犻攐湒=Î反",
						showFishData.previousWeightData.weightIndex
					},
					{ "숃끥徿椄杇:\u0082厁뻸", showFishData.fishId },
					{ "숏끥禾瀐杀\u0006ê叩뻹", rodId },
					{ "숃끥徿渄杇:\u0082厁嬧乵", value }
				};
				_SendEvent("숃끥榿渄杇:ª厩숏끥榾猐杀\u0014ª厩뻴", analyticDic);
			}
		}

		public static void GetFishToken(int goodsId, int goodsLv, int goodsNum, string getTypeStr)
		{
			VO vo = ObjectManager.GetInstance().mergeFishingModel.vo;
			if (vo != null)
			{
				Dictionary<string, object> analyticDic = new Dictionary<string, object>
				{
					{ "숞끥徰椟村?\u0082厁뻸", goodsId },
					{ "숞끥亰生村?>匽뻱", goodsNum },
					{ "숞끥䲰攟村?6匵꿭\u00af赴", goodsLv },
					{ "숏끥禾瀐杀\u0006ê叩뻹", getTypeStr }
				};
				_SendEvent("숃끥榿渄杇:ª厩숏끥璾攐杀\u001bÖ叕뻱", analyticDic);
			}
		}

		public static void ActivityStatus(EActivityStatus status)
		{
			VO vo = ObjectManager.GetInstance().mergeFishingModel.vo;
			if (vo != null)
			{
				Dictionary<string, object> analyticDic = new Dictionary<string, object> { 
				{
					"숉끥澸渊杀;Â叁",
					(EActivityStatus.Open == status) ? "刖棻\ud9c7Ś" : "匧橬ā词靥"
				} };
				_SendEvent("숃끥榿渄杇:ª厩뻻", analyticDic);
			}
		}

		private static void _SendEvent(string eventName, Dictionary<string, object> analyticDic)
		{
			VO vo = ObjectManager.GetInstance().mergeFishingModel.vo;
			if (vo != null)
			{
				int count = ObjectManager.GetInstance().mergeFishingGameModel.GetTemporaryGoods().Count;
				analyticDic = analyticDic ?? new Dictionary<string, object>();
				analyticDic.AddRange(new Dictionary<string, object>
				{
					{
						"숟끥斺渠杆 \u009a厙숋끩疭洌瑆\u001cÚ叙",
						vo.stageState.points
					},
					{
						"숃끥县攄杇:R卑녱塵㴤\0逕\ud96d",
						vo.fishSequenceState.GetConfigId()
					},
					{ "숟끥斺渠杆 \u009a厙숏끳疭洐瑙\u001cÚ叙", count },
					{
						"숅끥沭䤆杀3¶厵녴䉥ᴴ\0逝\ud95f",
						vo.taState.tokenCount
					},
					{
						"숅끥沭䈆杀3¶厵숣끉涼两慀7º厹嬧乵",
						vo.taState.baseTokenCount
					},
					{
						"숂끥断弃村?\u009a厙漻䉼",
						(int)vo.themeId
					},
					{
						"숚끥徶琛村<\u0082厁냦\u008f赴",
						vo.state.openDayId
					}
				});
				AnalyticInit.OnEvent(eventName, analyticDic);
			}
		}
	}

	public enum EOpenStatus
	{
		None,
		Open,
		Close
	}

	public class OpenState
	{
		public EOpenStatus openStatus;

		public bool forceClose;

		public int openDayId;

		public int closeDayId;

		public long openTime;

		public long closeTime;
	}

	public class GiftState
	{
		public int dynamicGiftIndex = 1;

		public bool purchase;

		public int purchaseCount;

		public ShowGiftData GetShowGiftData()
		{
			return new ShowGiftData
			{
				shopType = ShopType.MergeFishing,
				dynamicGiftIndex = dynamicGiftIndex
			};
		}
	}

	public class FishState
	{
		public int fishId;

		public int weight;

		public int previousWeight;

		public int maxWeight;

		public int previousMaxWeight;

		public void SetWeight(int weight)
		{
			previousWeight = this.weight;
			this.weight = weight;
			previousMaxWeight = maxWeight;
			if (this.weight > maxWeight)
			{
				maxWeight = weight;
			}
		}

		public ShowFishData GetShowFishData()
		{
			if (!ConfigHelper.TryGetFishVO(fishId, out var fishVO))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓榷猎栚\u0014ª厩숋끩⺭䜌桀7½厼숂끎䚊椃敛%\u001e匝숋끒㪝\u200c獀3í召숂끓₪椃晢\u001d\u0085厄숟뀚ⲷ†獘>µ厴숂끓㪪\u2003晽6í召ꋞú赴", fishId));
				return new ShowFishData
				{
					valid = false
				};
			}
			int weightIndex = fishVO.GetWeightIndex(weight);
			int weightIndex2 = fishVO.GetWeightIndex(previousWeight);
			return new ShowFishData
			{
				valid = true,
				fishId = fishId,
				weightData = new ShowFishWeightData
				{
					weight = weight,
					weightIndex = weightIndex,
					maxWeight = maxWeight,
					keypointWeight = fishVO.GetKeyPointWeight(weightIndex),
					keypointReward = fishVO.GetKeyPointRewards(weightIndex)
				},
				previousWeightData = new ShowFishWeightData
				{
					weight = previousWeight,
					weightIndex = weightIndex2,
					maxWeight = previousMaxWeight,
					keypointWeight = fishVO.GetKeyPointWeight(weightIndex2),
					keypointReward = fishVO.GetKeyPointRewards(weightIndex2)
				}
			};
		}
	}

	public class FishTankState
	{
		public int fishId;

		public int totalPoints;

		public int stagePoints;

		public int stageIndex;

		public List<int> pendingRewardPool = new List<int>();

		public string pendingReward = string.Empty;

		public bool AddStagePoint(int point = 1)
		{
			stagePoints += point;
			totalPoints += point;
			if (!ConfigHelper.TryGetFishTankVO(fishId, stageIndex + 1, out var fishTankVO))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓榷猎栚\u0014ª厩숄끮璸愅桟\u0001Ö叕숫끟号琬瑐6R卑숺끝溼琻慛;¾厽숃뀚咿愄㩇:V单숥끑玏…渔;Ò发숆끏暵椇渘r\u009e厝숎끒箐』猎rò叱숙뀖柹攚絀3¢厡숏끔₽笐䥌h\u0085厄❣અ", fishId, stageIndex));
				return false;
			}
			if (stagePoints >= fishTankVO.point)
			{
				stagePoints -= fishTankVO.point;
				pendingRewardPool.Add(fishTankVO.star);
				if (stageIndex < 3)
				{
					stageIndex++;
					return true;
				}
			}
			return false;
		}

		public bool CheckReward()
		{
			if (pendingRewardPool.Count <= 0 && string.IsNullOrEmpty(pendingReward))
			{
				return false;
			}
			return true;
		}

		private string _GetStarReward(int star)
		{
			if (!ConfigHelper.TryGetFishTankVO(fishId, star, out var fishTankVO))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓榷猎栚\u0014ª厩숄끮璸愅桟\u0001Ö叕숭끟勷攮瑑&N卍숎끛暫椏眎r\u009e厝숋끒嚍伌獚9^卝쉊끓沪汋⁚'¶厵숃뀚䦿搄ⱇ:*匩쉚뀚₢獛㩉~\u0085厄쉐끛ㆫ絑琔)É又", fishId, star));
				return string.Empty;
			}
			return BaseData3VO.List2string(fishTankVO.UnfoldAndRamdonProduces());
		}

		public BaseData3VO ClaimOnceReward()
		{
			if (pendingRewardPool.Count <= 0 && string.IsNullOrEmpty(pendingReward))
			{
				return null;
			}
			if (pendingRewardPool.Count > 0 && string.IsNullOrEmpty(pendingReward))
			{
				int star = pendingRewardPool[0];
				pendingRewardPool.RemoveAt(0);
				pendingReward = _GetStarReward(star);
				if (string.IsNullOrEmpty(pendingReward))
				{
					return null;
				}
			}
			List<BaseData3VO> baseData3VOList = BaseData3VO.GetBaseData3VOList(pendingReward);
			BaseData3VO baseData3VO = baseData3VOList.TryGet(baseData3VOList.Count - 1);
			if (baseData3VO != null)
			{
				baseData3VOList.RemoveAt(baseData3VOList.Count - 1);
				pendingReward = BaseData3VO.List2string(baseData3VOList);
				return baseData3VO;
			}
			return null;
		}

		public ShowFishTankData GetShowFishTankData()
		{
			if (!ConfigHelper.TryGetFishTankVO(fishId, stageIndex + 1, out var fishTankVO))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓榷猎栚\u0014ª厩숄끮璸愅桟\u0001Ö叕숭끟号栮瑑&R卑숃끍咟愄潇:V单숋끑㪝\u200c湀3í召숂끓溪欃晠3¾厽숃끵滹甄噇r¾厽쉊끖珵桋汒;Ò发쉊끞緣ⱋ䥏bú叹숋끉䦭渌⁓7*匩쉐끟ㆡ絑搔)É又", fishId, stageIndex));
				return new ShowFishTankData
				{
					valid = false
				};
			}
			string debugInfo = string.Empty;
			if (Debug.OpenDebugInfo)
			{
				int count = BaseData3VO.GetBaseData3VOList(string.Join("뺧", pendingRewardPool.Select((int s) => _GetStarReward(s))) + "뺧" + pendingReward).Count;
				debugInfo = string.Format("酵䢼풏ぶ\uef93繨ò南싓뀰萶緔総儩É匸\u1fbd", JsonConvert.SerializeObject((object)pendingRewardPool), count);
			}
			return new ShowFishTankData
			{
				valid = true,
				fishId = fishId,
				fishStar = stageIndex,
				fishMaxStar = 3,
				point = stagePoints,
				maxPoint = (fishTankVO?.point ?? 0),
				reward = CheckReward(),
				debugInfo = debugInfo
			};
		}
	}

	public class FishSequenceState
	{
		public int index;

		public int advancedIndex;

		public IFishSequenceVO config;

		public int GetConfigId()
		{
			if (config == null)
			{
				return 0;
			}
			return config.id;
		}

		public int GoFishingId()
		{
			return config.GetFishId(index);
		}

		public int GoFishingAdvancedId()
		{
			return config.GetAdvancedFishId(advancedIndex);
		}

		public int GoFishingIndexStep()
		{
			return ++index;
		}

		public int GoFishingAdvancedIndexStep()
		{
			return ++advancedIndex;
		}
	}

	public class StageState
	{
		public int index;

		public int points;

		public int claimPoints;

		public int animPoints;

		public List<IStageRewardVO> rewardVOs = new List<IStageRewardVO>();

		private (int, int, int) _GetStageIndexAndLeftPoint(int pointCount)
		{
			int item = 0;
			int num = 0;
			int count = rewardVOs.Count;
			int num2 = 0;
			for (int i = 0; i < count; i++)
			{
				num = rewardVOs[i].point;
				if (pointCount < num)
				{
					item = i;
					break;
				}
				num2++;
				pointCount -= num;
			}
			if (num2 >= count)
			{
				item = count;
				num = 0;
			}
			return (item, pointCount, num);
		}

		private ShowStageData _GetShowStageData(int pointCount)
		{
			(int, int, int) tuple = _GetStageIndexAndLeftPoint(pointCount);
			int item = tuple.Item1;
			int item2 = tuple.Item2;
			int item3 = tuple.Item3;
			IStageRewardVO stageRewardVO = rewardVOs.TryGet(item);
			if (stageRewardVO == null)
			{
				stageRewardVO = rewardVOs.TryGet(rewardVOs.Count - 1);
			}
			ShowStageData result = new ShowStageData
			{
				valid = true,
				stageCount = rewardVOs.Count,
				stageIndex = item,
				stagePoint = item2,
				stageMaxPoint = item3,
				point = pointCount,
				stageRewardVO = (stageRewardVO ?? IStageRewardVO.Empty),
				giftBoxName = stageRewardVO.gfitBoxName
			};
			if (result.isLastStage)
			{
				stageRewardVO = rewardVOs.TryGet(rewardVOs.Count - 1);
				result.stagePoint = stageRewardVO.point;
				result.stageMaxPoint = stageRewardVO.point;
			}
			return result;
		}

		public ShowStageData GetShowStageData()
		{
			return _GetShowStageData(points);
		}

		public ShowStageData GetShowClaimStageData()
		{
			return _GetShowStageData(claimPoints);
		}

		public ShowStageData GetShowAnimStageData()
		{
			return _GetShowStageData(animPoints);
		}

		public void AddStagePoints(int pointCount)
		{
			points += pointCount;
		}

		public void SyncClaimPoints()
		{
			claimPoints = points;
		}

		public void SyncAnimPoints()
		{
			animPoints = points;
		}
	}

	public class FishPoolState
	{
		public Dictionary<int, FishState> fishStateDict = new Dictionary<int, FishState>();

		public bool TryGetFishState(int fishId, out FishState fishState)
		{
			return fishStateDict.TryGetValue(fishId, out fishState);
		}

		public (bool, BaseData3VO) GoFishing(int fishId)
		{
			if (!ConfigHelper.TryGetFishVO(fishId, out var fishVO))
			{
				Log.E(string.Format("숍끟榫猎䵑\u0014ª厩숍끓撷攎桹=\u0096厕숅뀔玞栆汲;Ò发습끔햾繑椔²㙜ㅛ逄䱆\uf794椅〘r\u009e匜숎끒箐』猎rò叱뫡", fishId));
				return (false, null);
			}
			if (!TryGetFishState(fishId, out var fishState))
			{
				fishState = new FishState
				{
					fishId = fishId
				};
				fishStateDict.Add(fishId, fishState);
			}
			var (item, weight, _, item2) = fishVO.GoFishingWeight(fishState.weight);
			fishState.SetWeight(weight);
			return (item, item2);
		}

		public ShowFishData GetShowFishData(int fishId)
		{
			if (!TryGetFishState(fishId, out var fishState))
			{
				return default;
			}
			return fishState.GetShowFishData();
		}

		public ShowFishPoolData GetShowFishPoolData()
		{
			return new ShowFishPoolData
			{
				fishDataDict = fishStateDict.ToDictionary((KeyValuePair<int, FishState> pair) => pair.Key, (KeyValuePair<int, FishState> pair) => pair.Value.GetShowFishData())
			};
		}
	}

	public class FishTankPoolState
	{
		public int[] showFishIds = new int[0];

		public Dictionary<int, FishTankState> fishTankStateDict = new Dictionary<int, FishTankState>();

		public bool TryGetFishTankState(int fishId, out FishTankState fishTankState)
		{
			return fishTankStateDict.TryGetValue(fishId, out fishTankState);
		}

		public bool AddFishTankPoints(int fishId, int point = 1)
		{
			if (!TryGetFishTankState(fishId, out var fishTankState))
			{
				fishTankState = new FishTankState
				{
					fishId = fishId
				};
				fishTankStateDict.Add(fishId, fishTankState);
			}
			return fishTankState.AddStagePoint();
		}

		public ShowFishTankData GetShowFishTankData(int fishId)
		{
			if (!TryGetFishTankState(fishId, out var fishTankState))
			{
				return new ShowFishTankData
				{
					valid = false
				};
			}
			return fishTankState.GetShowFishTankData();
		}

		public ShowFishTankPoolData GetShowFishTankPoolData()
		{
			return new ShowFishTankPoolData
			{
				fishTankDatas = fishTankStateDict.Values.Select((FishTankState _) => _.GetShowFishTankData()).ToList(),
				fishTankDataDict = fishTankStateDict.ToDictionary((KeyValuePair<int, FishTankState> _) => _.Key, (KeyValuePair<int, FishTankState> _) => _.Value.GetShowFishTankData())
			};
		}
	}

	public class TAState
	{
		public int tokenCount;

		public int baseTokenCount;
	}

	public class GuideState
	{
		public int firstGoFishingId = -1;

		public ShowGuideData GetShowGuideData()
		{
			return new ShowGuideData
			{
				firstGoFishingId = firstGoFishingId
			};
		}
	}

	public class CardCollectionState
	{
		[JsonProperty]
		private bool _supportReward;

		public void Init(bool open)
		{
			_supportReward = open;
		}

		public bool IsSupportReward()
		{
			return _supportReward;
		}

		public void StopSupportReward()
		{
			if (_supportReward)
			{
				_supportReward = false;
			}
		}
	}

	[Serializable]
	public class VO : BaseVO
	{
		public const int VERSION = 2;

		public int versionCode = 2;

		public EThemeId themeId = EThemeId.Default;

		public OpenState state = new OpenState();

		public GiftState giftState = new GiftState();

		public StageState stageState = new StageState();

		public FishSequenceState fishSequenceState = new FishSequenceState();

		public FishPoolState fishPoolState = new FishPoolState();

		public FishTankPoolState fishTankPoolState = new FishTankPoolState();

		public TAState taState = new TAState();

		public GuideState guideState = new GuideState();

		public CardCollectionState cardCollectionState = new CardCollectionState();

		public void Reset()
		{
			versionCode = 2;
			themeId = EThemeId.Default;
			state = new OpenState();
			giftState = new GiftState();
			stageState = new StageState();
			fishSequenceState = new FishSequenceState();
			fishTankPoolState = new FishTankPoolState();
		}

		public ShowData GetShowData()
		{
			return new ShowData
			{
				guideData = guideState.GetShowGuideData(),
				giftData = giftState.GetShowGiftData(),
				stageData = stageState.GetShowStageData(),
				claimStageData = stageState.GetShowClaimStageData(),
				animStageData = stageState.GetShowAnimStageData(),
				fishPoolData = fishPoolState.GetShowFishPoolData(),
				fishTankPoolData = fishTankPoolState.GetShowFishTankPoolData(),
				stageRewardVOs = stageState.rewardVOs,
				supporCardCollectionReward = cardCollectionState.IsSupportReward()
			};
		}
	}

	public const ShopType SHOP_TYPE = ShopType.MergeFishing;

	public const ActivitySwitchConfigID activitySwitchId = ActivitySwitchConfigID.MergeFishing;

	public const ActivityID activityId = ActivityID.AID_MergeFishing;

	public const int conditionId = 141;

	public const int FishTankMaxCount = 5;

	public const int FishTankStarMaxCount = 3;
}
