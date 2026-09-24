using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Config;
using fat.rawdata;

namespace FAT
{
	public class ConfigMan : IGameModule, IConfigProvider
	{
		[CompilerGenerated]
		public sealed class _003CCoLoadAbMeta_003Ed__305 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public ConfigMan _003C_003E4__this;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CCoLoadAbMeta_003Ed__305(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003CCoLoadAll_003Ed__304 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public ConfigMan _003C_003E4__this;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CCoLoadAll_003Ed__304(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003C_FilterConfigByVersion_003Ed__286<T> : IEnumerable<T>, IEnumerable, IEnumerator<T>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public T _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IEnumerable<T> rawData;

			public IEnumerable<T> _003C_003E3__rawData;

			[NonSerialized]
			public Func<T, int> configVersionExtractor;

			public Func<T, int> _003C_003E3__configVersionExtractor;

			[NonSerialized]
			public int realVersion;

			public int _003C_003E3__realVersion;

			[NonSerialized]
			public IEnumerator<T> _003C_003E7__wrap1;

			T IEnumerator<T>.Current
			{
				[DebuggerHidden]
				get
				{
					return default(T);
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003C_FilterConfigByVersion_003Ed__286(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<T> IEnumerable<T>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[NonSerialized]
		public StringBuilder mLoadErrors;

		[NonSerialized]
		public List<string> mAbTags;

		[NonSerialized]
		public bool allConfProcessed;

		[NonSerialized]
		public int total_processed_conf_count;

		[NonSerialized]
		public int _totalConfCount;

		[NonSerialized]
		public int total_error_count;

		[NonSerialized]
		public readonly Dictionary<string, byte[]> s_confBytesCache;

		public int configVersion => 0;

		public Global globalConfig { get; set; }

		public IEnumerable<string> abTags => null;

		public bool IsAllConfigReady => false;

		public IEnumerable<ObjCoin> GetCoinConfigs()
		{
			return null;
		}

		public ObjItemConfig[] GetItemConfigs()
		{
			return null;
		}

		public IEnumerable<ObjRandomChest> GetRandomBoxConfigs()
		{
			return null;
		}

		public RandomReward GetRandomRewardConfigById(int randomRewardId)
		{
			return null;
		}

		public IEnumerable<ObjExpress> GetExpressConfigs()
		{
			return null;
		}

		public IEnumerable<ObjAvatar> GetObjAvatarConfigs()
		{
			return null;
		}

		public IEnumerable<ObjAvatarFrame> GetObjAvatarFrameConfigs()
		{
			return null;
		}

		public Global GetGlobalConfig()
		{
			return null;
		}

		public PMTAB GetPMTABConfig()
		{
			return null;
		}

		public ExpFix GetExpFixConfig()
		{
			return null;
		}

		public ToastConfig GetToastConfig(Toast toastType)
		{
			return null;
		}

		public IEnumerable<ObjBasic> GetObjBasicConfigs()
		{
			return null;
		}

		public IDictionary<int, ObjRplcItem> GetObjRplcItemConfigs()
		{
			return null;
		}

		public IEnumerable<ObjSeasonItem> GetObjSeasonItemConfigs()
		{
			return null;
		}

		public IEnumerable<ObjMergeItem> GetObjMergeItemConfigs(int targetVersion, out int realVersion)
		{
			realVersion = default(int);
			return null;
		}

		public IEnumerable<GuideMerge> GetGuideMergeConfigs()
		{
			return null;
		}

		public IEnumerable<GuideMergeAction> GetGuideMergeActionConfigs()
		{
			return null;
		}

		public IEnumerable<FaqConfig> GetFaqConfigs()
		{
			return null;
		}

		public IEnumerable<IAPProduct> GetIAPProductConfigs()
		{
			return null;
		}

		public bool TryGetIapFreeConfig(int freeId, out IAPFree freeConf)
		{
			freeConf = null;
			return false;
		}

		public IEnumerable<MergeLevel> GetMergeLevelConfigs()
		{
			return null;
		}

		public MergeLevel GetMergeLevelConfig(int level)
		{
			return null;
		}

		public IEnumerable<MergeItemCategory> GetMergeCategoryConfigs(int targetVersion, out int realVersion)
		{
			realVersion = default(int);
			return null;
		}

		public IEnumerable<MergeFixedOutput> GetMergeFixedOutputConfigs()
		{
			return null;
		}

		public IEnumerable<MergeFixedItem> GetMergeFixedOutputByItemConfigs()
		{
			return null;
		}

		public IDictionary<int, ObjTool> GetObjToolMap()
		{
			return null;
		}

		public IDictionary<int, ObjMergeTool> GetObjMergeToolMap()
		{
			return null;
		}

		public bool HasObjMergeToolConfig(int id)
		{
			return false;
		}

		public bool HasComMergeToolSourceConfig(int id)
		{
			return false;
		}

		public IDictionary<int, MergeMixCost> GetMergeMixCostMap()
		{
			return null;
		}

		public IDictionary<int, MergeTapCost> GetMergeTapCostMap()
		{
			return null;
		}

		public IDictionary<int, OrderBoxDetail> GetOrderBoxDetailMap()
		{
			return null;
		}

		public IDictionary<int, GallerySpecial> GetGallerySpecialMap()
		{
			return null;
		}

		public IDictionary<int, ItemReplace> GetItemReplaceMap()
		{
			return null;
		}

		public IEnumerable<MergeRule> GetMergeRuleConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeBox> GetComMergeBoxConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeSkill> GetComMergeSkillConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeBonus> GetComMergeBonusConfigs()
		{
			return null;
		}

		public IEnumerable<ComTapBonus> GetComTapBonusConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeChest> GetComMergeChestConfigs(int targetVersion, out int realVersion)
		{
			realVersion = default(int);
			return null;
		}

		public IEnumerable<ComMergeTapSource> GetComMergeClickSourceConfigs(int targetVersion, out int realVersion)
		{
			realVersion = default(int);
			return null;
		}

		public IEnumerable<ComMergeEatSource> GetComMergeEatSourceConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeAutoSource> GetComMergeAutoSourceConfigs()
		{
			return null;
		}

		public IDictionary<int, ComMergeAutoSource> GetComMergeAutoSourceMap()
		{
			return null;
		}

		public IEnumerable<ComMergeDying> GetComMergeDyingConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeTimeSkip> GetComMergeTimeSkipConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeFeature> GetComMergeFeatureConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeEat> GetComMergeEatConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeToolSource> GetComMergeToolSourceConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeOrderBox> GetComMergeOrderBoxConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeJumpCD> GetComMergeJumpCDConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeSpecialBox> GetComMergeSpecialBoxConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeChoiceBox> GetComMergeChoiceBoxConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeTokenMultiplier> GetComMergeTokenMultiplierConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeMixSource> GetComMergeMixSourceConfigs()
		{
			return null;
		}

		public IEnumerable<ComTrigAutoSource> GetComTrigAutoSourceConfigs()
		{
			return null;
		}

		public IDictionary<int, ComTrigAutoDetail> GetComTrigAutoDetailConfigs()
		{
			return null;
		}

		public IEnumerable<ComMergeActiveSource> GetComMergeActiveSourceConfigs()
		{
			return null;
		}

		public IDictionary<int, GalleryCategory> GetGalleryCategoryConfigs()
		{
			return null;
		}

		public IDictionary<int, MergeBoard> GetMergeBoardConfigs()
		{
			return null;
		}

		public MergeItemSeries GetMergeItemSeriesConfig(int id)
		{
			return null;
		}

		public MergeMainTileRwd GetMergeMainTileRwdConfig(int id)
		{
			return null;
		}

		public FrozenItem GetFrozenItemConfig(int id)
		{
			return null;
		}

		public FrozenItemDetail GetFrozenItemDetailConfig(int id)
		{
			return null;
		}

		public BoardOrderRate GetBoardOrderRateConfig(int id)
		{
			return null;
		}

		public IDictionary<int, AdSetting> GetAdSettingMap()
		{
			return null;
		}

		public AdSetting GetAdSettingById(int adsId)
		{
			return null;
		}

		public IDictionary<int, DropLimitItem> GetDropLimitItemMap()
		{
			return null;
		}

		public IDictionary<int, InventoryItem> GetInventoryItemConfig()
		{
			return null;
		}

		public InventoryItem GetInventoryItemConfigById(int bagGirdId)
		{
			return null;
		}

		public IDictionary<int, InventoryProducer> GetInventoryProducerConfig()
		{
			return null;
		}

		public InventoryProducer GetInventoryProducerConfigById(int bagGirdId)
		{
			return null;
		}

		public IDictionary<int, InventoryTool> GetInventoryToolConfig()
		{
			return null;
		}

		public MarketCommondity GetMarketCommondityConfigById(int goodsId)
		{
			return null;
		}

		public IDictionary<int, MarketIAP> GetMarketIAPConfig()
		{
			return null;
		}

		public IDictionary<int, MarketIncrease> GetMarketIncreaseConfig()
		{
			return null;
		}

		public MarketIncrease GetOneMarketIncreaseConfigByFilter(Func<MarketIncrease, bool> filterFunc, string tag = "")
		{
			return null;
		}

		public IDictionary<int, MarketWeight> GetMarketWeightConfig()
		{
			return null;
		}

		public MarketWeight GetOneMarketWeightConfigByFilter(Func<MarketWeight, bool> filterFunc, string tag = "")
		{
			return null;
		}

		public IDictionary<int, MarketDifficulty> GetMarketDifficultyConfig()
		{
			return null;
		}

		public MarketDifficulty GetOneMarketDifficultyConfigByFilter(Func<MarketDifficulty, bool> filterFunc, string tag = "")
		{
			return null;
		}

		public MarketIgnore GetMarketIgnoreConfigByFilter(Func<MarketIgnore, bool> filterFunc)
		{
			return null;
		}

		public IDictionary<int, MergeLevelRate> GetMergeLevelRateConfigMap()
		{
			return null;
		}

		public IEnumerable<RoundCoin> GetRoundCoinConfig()
		{
			return null;
		}

		public IEnumerable<RoundTool> GetRoundToolConfig()
		{
			return null;
		}

		public IEnumerable<RoundLifeTime> GetRoundLifeTimeConfig()
		{
			return null;
		}

		public IEnumerable<RoundScore> GetRoundScoreConfig()
		{
			return null;
		}

		public IDictionary<int, MergeDifficulty> GetMergeItemDifficultyConfigMap()
		{
			return null;
		}

		public IEnumerable<OrderCommon> GetOrderCommonConfigByFilter(Func<OrderCommon, bool> filterFunc, string tag = "")
		{
			return null;
		}

		public IEnumerable<OrderDetector> GetOrderDetectorConfigByFilter(Func<OrderDetector, bool> filterFunc, string tag = "")
		{
			return null;
		}

		public IEnumerable<OrderRandomer> GetOrderRandomerConfigByFilter(Func<OrderRandomer, bool> filterFunc, string tag = "")
		{
			return null;
		}

		public OrderRandomer GetOrderRandomerConf(int id)
		{
			return null;
		}

		public IEnumerable<OrderCategory> GetOrderCategoryConfigByFilter(Func<OrderCategory, bool> filterFunc, string tag = "")
		{
			return null;
		}

		public IDictionary<int, OrderCategory> GetOrderCategoryMap()
		{
			return null;
		}

		public IDictionary<string, OrderApiWhitelist> GetOrderApiWhiteListMap()
		{
			return null;
		}

		public IDictionary<int, OrderIgnore> GetOrderIgnoreConfigMap()
		{
			return null;
		}

		public MergeBoardOrder GetOneMergeBoardOrderByFilter(Func<MergeBoardOrder, bool> filterFunc, string tag = "")
		{
			return null;
		}

		public IDictionary<int, OrderDiff> GetOrderDiffConfigMap()
		{
			return null;
		}

		public IDictionary<int, OrderReward> GetOrderRewardConfigMap()
		{
			return null;
		}

		public IDictionary<int, NpcConfig> GetNpcConfigMap()
		{
			return null;
		}

		public IEnumerable<MergeCloud> GetMergeCloudConfigs()
		{
			return null;
		}

		public IDictionary<int, MergeBoardGrp> GetMergeBoardGrpConfigs()
		{
			return null;
		}

		public IEnumerable<BubbleSpawn> GetBubbleSpawnConfigs()
		{
			return null;
		}

		public AdsFeature GetAdsFeatureConfig(FeatureEntry featureType)
		{
			return null;
		}

		public IEnumerable<Language> GetLanguageConfigs()
		{
			return null;
		}

		public IEnumerable<PlayerGroup> GetPlayerGroupConfigs()
		{
			return null;
		}

		public IDictionary<int, MergeRuledOutput> GetMergeRuledOutputConfigs()
		{
			return null;
		}

		public IEnumerable<MergeGrid> GetMergeGridConfigs()
		{
			return null;
		}

		public IEnumerable<MergeGridArea> GetMergeGridAreaConfigs()
		{
			return null;
		}

		public IDictionary<int, ObjToken> GetObjTokenConfigs()
		{
			return null;
		}

		public IEnumerable<PlayerGroupRule> GetPlayerGroupRuleConfigs()
		{
			return null;
		}

		public IEnumerable<GameDiff> GetGameDiffConfigs()
		{
			return null;
		}

		public EventTime GetEventTimeConfig(int eventId)
		{
			return null;
		}

		public IEnumerable<EventTime> GetEventTimeConfigsByType(EventType eventType)
		{
			return null;
		}

		public Popup GetPopupConfig(int popupId)
		{
			return null;
		}

		public ObjTool GetObjToolConfig(int toolId)
		{
			return null;
		}

		public Shake GetShakeConfig(int objBasicId)
		{
			return null;
		}

		public MergeMainLvArea GetMergeMainLvArea(int id)
		{
			return null;
		}

		public EventCardRound GetEventCardRoundConfig(int id)
		{
			return null;
		}

		public EventCardAlbum GetEventCardAlbumConfig(int id)
		{
			return null;
		}

		public CardGroup GetCardGroupConfig(int id)
		{
			return null;
		}

		public IEnumerable<ObjCardPack> GetCardPackConfigs()
		{
			return null;
		}

		public IEnumerable<ObjCard> GetCardConfigs()
		{
			return null;
		}

		public RandomStar GetCardRandomStarConfig(int id)
		{
			return null;
		}

		public CardLimit GetCardLimitConfig(int id)
		{
			return null;
		}

		public IEnumerable<ObjCardJoker> GetCardJokerConfigs()
		{
			return null;
		}

		public StarExchange GetStarExchangeConfig(int id)
		{
			return null;
		}

		public EventFlashOrder GetEventFlashOrderConfig(int id)
		{
			return null;
		}

		public EventOrderDiffChoice GetEventOrderDiffChoiceConfig(int id)
		{
			return null;
		}

		public OrderDiffChoiceInfo GetOrderDiffChoiceInfoConfig(int id)
		{
			return null;
		}

		public EventOrderExtra GetEventOrderExtraConfig(int id)
		{
			return null;
		}

		public EventTreasure GetEventTreasureConfig(int id)
		{
			return null;
		}

		public EventTreasureGroupDetail GetEventTreasureGroupDetailConfig(int id)
		{
			return null;
		}

		public IEnumerable<SettingsCommunity> GetSettingsCommunity()
		{
			return null;
		}

		public EventTreasureGroup GetEventTreasureGroupConfig(int groupId)
		{
			return null;
		}

		public EventTreasureLevel GetEventTreasureLevelConfig(int levelId)
		{
			return null;
		}

		public EventTreasureReward GetEventTreasureRewardConfig(int rewardId)
		{
			return null;
		}

		public EventScore GetEventScoreConfig(int id)
		{
			return null;
		}

		public EventExtraScore GetEventExtraScoreConfig(int id)
		{
			return null;
		}

		public EventScoreDetail GetEventScoreDetail(int id)
		{
			return null;
		}

		public MicMilestone GetMicMilestoneConfig(int id)
		{
			return null;
		}

		public MicMilestoneDetail GetMicMilestoneDetailConfig(int id)
		{
			return null;
		}

		public MicMilestoneGroup GetMicMilestoneGroupConfig(int id)
		{
			return null;
		}

		public ComMergeTokenMultiplier GetComMergeTokenMultiplierConfig(int id)
		{
			return null;
		}

		public UserGradeGroup GetUserGradeGroupConfig(int id)
		{
			return null;
		}

		public GradeIndexMapping GetGradeIndexMappingConfig(int id)
		{
			return null;
		}

		public UserGrade GetUserGradeConfig(int id)
		{
			return null;
		}

		public IEnumerable<UserGrade> GetUserGradeConfigs()
		{
			return null;
		}

		public EventDecorate GetEventDecorateConfig(int id)
		{
			return null;
		}

		public EventDecorateGroup GetEventDecorateGroupConfig(int id)
		{
			return null;
		}

		public EventDecorateLevel GetEventDecorateLevelConfig(int id)
		{
			return null;
		}

		public EventDecorateInfo GetEventDecorateInfo(int id)
		{
			return null;
		}

		public EventMiniBoard GetEventMiniBoardConfig(int id)
		{
			return null;
		}

		public EventMiniBoardDetail GetEventMiniBoardDetailConfig(int id)
		{
			return null;
		}

		public EventMiniBoardDrop GetEventMiniBoardDropConfig(int id)
		{
			return null;
		}

		public EventMiniBoardMulti GetEventMiniBoardMultiConfig(int id)
		{
			return null;
		}

		public EventMiniBoardMultiGroup GetEventMiniBoardMultiGroupConfig(int id)
		{
			return null;
		}

		public EventMiniBoardMultiInfo GetEventMiniBoardMultiInfoConfig(int id)
		{
			return null;
		}

		public IEnumerable<EventMiniBoardMultiInfo> GetEventMiniBoardMultiInfoMapConfig()
		{
			return null;
		}

		public EventMiniBoardMultiDrop GetEventMiniBoardMultiDropConfig(int id)
		{
			return null;
		}

		public EventMine GetEventMineConfig(int id)
		{
			return null;
		}

		public EventMineGroup GetEventMineGroupConfig(int id)
		{
			return null;
		}

		public EventMineReward GetEventMineRewardConfig(int id)
		{
			return null;
		}

		public EventMineBoardDetail GetEventMineBoardDetail(int id)
		{
			return null;
		}

		public EventMineBoardRow GetEventMineBoardRow(int id)
		{
			return null;
		}

		public EventMineCart GetEventMineCartConfig(int id)
		{
			return null;
		}

		public EventMineCartDetail GetEventMineCartDetailConfig(int id)
		{
			return null;
		}

		public EventMineCartRowGrp GetEventMineCartRowGrpConfig(int id)
		{
			return null;
		}

		public EventMineCartRound GetEventMineCartRoundConfig(int id)
		{
			return null;
		}

		public EventMineCartReward GetEventMineCartRewardConfig(int id)
		{
			return null;
		}

		public EventMineCartDrop GetEventMineCartDropConfig(int id)
		{
			return null;
		}

		public EventMineCartOrderItem GetEventMineCartOrderItemConfig(int id)
		{
			return null;
		}

		public EventMineCartRow GetEventMineCartRowConfig(int id)
		{
			return null;
		}

		public EventFarmBoard GetEventFarmBoardConfig(int id)
		{
			return null;
		}

		public EventFarmBoardGroup GetEventFarmBoardGroupConfig(int id)
		{
			return null;
		}

		public EventFarmBoardDetail GetEventFarmBoardDetailConfig(int id)
		{
			return null;
		}

		public EventFarmRow GetEventFarmRowConfig(int id)
		{
			return null;
		}

		public EventFarmDrop GetEventFarmDropConfig(int id)
		{
			return null;
		}

		public EventFarmItemDrop GetEventFarmItemDropConfig(int id)
		{
			return null;
		}

		public EventFarmBoardAnimal GetEventFarmBoardAnimalConfig(int id)
		{
			return null;
		}

		public EventFarmBoardFarm GetEventFarmBoardFarmConfig(int id)
		{
			return null;
		}

		public EventZeroQuest GetEventZeroQuestConfig(int id)
		{
			return null;
		}

		public EventZeroQuestGroup GetEventZeroQuestGroupConfig(int id)
		{
			return null;
		}

		public EventZeroQuestRandom GetEventZeroQuestRandomConfig(int id)
		{
			return null;
		}

		public EventDiggingRound GetEventDiggingRoundConfig(int id)
		{
			return null;
		}

		public EventDigging GetEventDiggingConfig(int id)
		{
			return null;
		}

		public EventDiggingDetail GetEventDiggingDetail(int id)
		{
			return null;
		}

		public EventDiggingLevel GetEventDiggingLevel(int id)
		{
			return null;
		}

		public EventDiggingBoard GetEventDiggingBoard(int id)
		{
			return null;
		}

		public EventDiggingItem GetEventDiggingItem(int id)
		{
			return null;
		}

		public IEnumerable<MiniGameSheet> GetMiniGameMap()
		{
			return null;
		}

		public MiniGameBeadsLevel GetBeadsLevelConf(int level)
		{
			return null;
		}

		public IEnumerable<MiniGameBeadsLevel> GetBeadsLevels()
		{
			return null;
		}

		public MiniGameSlideMergeLevel GetSlideMergeLevel(int level)
		{
			return null;
		}

		public EventPachinkoRound GetPachinkoRoundByID(int id)
		{
			return null;
		}

		public EventPachinko GetEventPachinkoByID(int id)
		{
			return null;
		}

		public EventPachinkoDetail GetEventPachinkoDetailByID(int id)
		{
			return null;
		}

		public DropInfo GetPachinkoDropInfoByID(int id)
		{
			return null;
		}

		public EventPachinkoMilestone GetPachinkoMilestoneByID(int id)
		{
			return null;
		}

		public BumperInfo GetPachinkoBumperInfoByID(int id)
		{
			return null;
		}

		public List<PachinkoMultiple> GetPachinkoMultipleList()
		{
			return null;
		}

		public PachinkoMultiple GetPachinkoMultipleByID(int id)
		{
			return null;
		}

		public EventStamp GetEventStampConfig(int id)
		{
			return null;
		}

		public EventStampRound GetEventStampRoundConfig(int id)
		{
			return null;
		}

		public EventItemBingoRound GetEventItemBingoRoundConfig(int id)
		{
			return null;
		}

		public EventItemBingo GetEventItemBingoConfig(int id)
		{
			return null;
		}

		public EventItemBingoDetail GetEventItemBingoDetailConfig(int id)
		{
			return null;
		}

		public LevelGroups GetLevelGroupConfig(int id)
		{
			return null;
		}

		public GroupDetail GetGroupDetailConfig(int id)
		{
			return null;
		}

		public ItemBingoBoard GetItemBingoBoardConfig(int id)
		{
			return null;
		}

		public EventLine GetEventLineConfig(int id)
		{
			return null;
		}

		public EventLineRound GetEventLineRoundConfig(int id)
		{
			return null;
		}

		public EventLineDetail GetEventLineDetailConfig(int id)
		{
			return null;
		}

		public EventLineLevel GetEventLineLevelConfig(int id)
		{
			return null;
		}

		public EventLineBoard GetEventLineBoardConfig(int id)
		{
			return null;
		}

		public EventLineControl GetEventLineControlConfig(int id)
		{
			return null;
		}

		public EventLineReward GetEventLineRewardConfig(int id)
		{
			return null;
		}

		public EventScoreDuel GetEventScoreDuelConfig(int id)
		{
			return null;
		}

		public EventScoreDuelDetail GetEventScoreDuelDetailConfig(int id)
		{
			return null;
		}

		public EventScoreDuelSTG GetEventScoreDuelSTGConfig(int id)
		{
			return null;
		}

		public EventOrderRate GetEventOrderRateConfig(int id)
		{
			return null;
		}

		public EventOrderRateDetail GetEventOrderRateDetailConfig(int id)
		{
			return null;
		}

		public EventOrderRateBox GetEventOrderRateBoxConfig(int id)
		{
			return null;
		}

		public IEnumerable<EventOrderRateRandom> GetEventOrderRateRandomConfig()
		{
			return null;
		}

		public LoginSign GetLoginSignConfig()
		{
			return null;
		}

		public LoginSignPool GetLoginSignPoolConfig(int id)
		{
			return null;
		}

		public LoginSignTotal GetLoginSignTotalConfig(int id)
		{
			return null;
		}

		public EventMagicCard GetEventMagicCard(int id)
		{
			return null;
		}

		public MagicCardDetail GetMagicCardDetail(int id)
		{
			return null;
		}

		public MagicCardAlbum GetMagicCardAlbum(int id)
		{
			return null;
		}

		public MagicCardGroup GetMagicCardGroup(int id)
		{
			return null;
		}

		public EventWeeklyRaffleGrp GetEventWeeklyRaffleGroupConfig(int groupId)
		{
			return null;
		}

		public EventThreeSign GetEventThreeSignConfig(int id)
		{
			return null;
		}

		public EventThreeSignPool GetEventThreeSignPoolConfig(int id)
		{
			return null;
		}

		public EventOrderBonus GetEventOrderBonus(int id)
		{
			return null;
		}

		public EventOrderBonusGroup GetEventOrderBonusGroup(int id)
		{
			return null;
		}

		public EventOrderBonusDetail GetEventOrderBonusDetail(int id)
		{
			return null;
		}

		public EventRedeem GetEventRedeemConfig(int id)
		{
			return null;
		}

		public EventRedeemDetail GetEventRedeemDetailConfig(int id)
		{
			return null;
		}

		public EventRedeemMilestone GetEventRedeemMilestone(int id)
		{
			return null;
		}

		public EventRedeemGrp GetEventRedeemGrp(int id)
		{
			return null;
		}

		public EventRedeemReward GetEventRedeemReward(int id)
		{
			return null;
		}

		public EventBp GetEventBpConfig(int id)
		{
			return null;
		}

		public BpDetail GetBpDetailConfig(int id)
		{
			return null;
		}

		public BpMilestone GetBpMilestoneConfig(int id)
		{
			return null;
		}

		public BpPackInfo GetBpPackInfoConfig(int id)
		{
			return null;
		}

		public BpTask GetBpTaskConfig(int id)
		{
			return null;
		}

		public BpTaskGroup GetBpTaskGroupConfig(int id)
		{
			return null;
		}

		public EventFight GetEventFightById(int id)
		{
			return null;
		}

		public EventFightDetail GetEventFightDetailById(int id)
		{
			return null;
		}

		public EventFightLevel GetEventFightLevelById(int id)
		{
			return null;
		}

		public Monster GetMonsterById(int id)
		{
			return null;
		}

		public MonsterTalk GetMonsterTalkById(int id)
		{
			return null;
		}

		public EventAreaBoardGroup GetEventAreaBoardGroupConfig(int id)
		{
			return null;
		}

		public EventAreaBoard GetEventAreaBoardConfig(int id)
		{
			return null;
		}

		public EventAreaBoardDetail GetEventAreaBoardDetailConfig(int id)
		{
			return null;
		}

		public EventAreaBoardRow GetEventAreaBoardRowConfig(int id)
		{
			return null;
		}

		public EventAreaMilestone GetEventAreaMilestoneConfig(int id)
		{
			return null;
		}

		public EventAreaDrop GetEventAreaDropConfig(int id)
		{
			return null;
		}

		public EventWishBoard GetEventWishBoardConfig(int id)
		{
			return null;
		}

		public EventWishBoardGroup GetEventWishBoardGroupConfig(int id)
		{
			return null;
		}

		public EventWishBoardDetail GetEventWishBoardDetailConfig(int id)
		{
			return null;
		}

		public EventWishRow GetEventWishRowConfig(int id)
		{
			return null;
		}

		public EventWishMilestone GetEventWishMilestone(int id)
		{
			return null;
		}

		public EventWishDrop GetEventWishDropConfig(int id)
		{
			return null;
		}

		public EventWishBoardGroup GetEventWishBoardGroup(int id)
		{
			return null;
		}

		public EventWishBarReward GetCurWishBarRewardById(int id)
		{
			return null;
		}

		public EnergyBoost GetEnergyBoostConfig(int id)
		{
			return null;
		}

		public EventMonopoly GetEventMonopolyConfig(int id)
		{
			return null;
		}

		public EventMonopolyDetail GetEventMonopolyDetailConfig(int id)
		{
			return null;
		}

		public MonopolyStage GetMonopolyStageConfig(int id)
		{
			return null;
		}

		public MonopolyGrid GetMonopolyGridConfig(int id)
		{
			return null;
		}

		public MonopolyOrderItem GetMonopolyOrderItemConfig(int id)
		{
			return null;
		}

		public ObjToolConvert GetObjToolConvertConfig(int id)
		{
			return null;
		}

		public ObjToolConvert GetObjToolConvertConfigByConvertId(int convertId)
		{
			return null;
		}

		public IEnumerable<ObjSpin> GetObjSpinConfigs()
		{
			return null;
		}

		public ObjSpinGroup GetObjSpinGroup(int id)
		{
			return null;
		}

		public ObjSpinTheme GetObjSpinTheme(int id)
		{
			return null;
		}

		public EventMemory GetMemoryConfig(int id)
		{
			return null;
		}

		public EventMemoryRound GetMemoryRoundConfig(int id)
		{
			return null;
		}

		public MemoryDetail GetMemoryDetailConfig(int id)
		{
			return null;
		}

		public MemoryLevel GetMemoryLevelConfig(int id)
		{
			return null;
		}

		public MemoryBoard GetMemoryBoardConfig(int id)
		{
			return null;
		}

		public MemoryItem GetMemoryItemConfig(int id)
		{
			return null;
		}

		public IEnumerable<T> _ChooseVersionAndFilterConfig<T>(IEnumerable<T> rawData, int targetVersion, Func<T, int> configVersionExtractor, out int realVersion)
		{
			realVersion = default(int);
			return null;
		}

		public int _ChooseConfigVersion<T>(IEnumerable<T> rawData, int targetVersion, Func<T, int> configVersionExtractor)
		{
			return 0;
		}

		[IteratorStateMachine(typeof(_003C_FilterConfigByVersion_003Ed__286<>))]
		public IEnumerable<T> _FilterConfigByVersion<T>(IEnumerable<T> rawData, int realVersion, Func<T, int> configVersionExtractor)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCoLoadAll_003Ed__304))]
		public IEnumerator CoLoadAll()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCoLoadAbMeta_003Ed__305))]
		public IEnumerator CoLoadAbMeta()
		{
			return null;
		}

		public void InitTableRuntime()
		{
		}

		public float LoadingProgress()
		{
			return 0f;
		}

		public void SetAbTags(List<string> tags)
		{
		}

		public void _LoadRawData()
		{
		}

		void IGameModule.Reset()
		{
		}

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Startup()
		{
		}
	}
}
