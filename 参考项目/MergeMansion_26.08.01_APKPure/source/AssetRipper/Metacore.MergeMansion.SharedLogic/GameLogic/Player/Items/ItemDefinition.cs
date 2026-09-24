using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.ConfigPrefabs;
using GameLogic.MergeChains;
using GameLogic.Player.Director.Config;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Boosting;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Charges;
using GameLogic.Player.Items.Chest;
using GameLogic.Player.Items.Collectable;
using GameLogic.Player.Items.Consumption;
using GameLogic.Player.Items.Decay;
using GameLogic.Player.Items.Fishing;
using GameLogic.Player.Items.Leaderboard;
using GameLogic.Player.Items.Merging;
using GameLogic.Player.Items.MiniEvents;
using GameLogic.Player.Items.Order;
using GameLogic.Player.Items.OverrideSpawnChance;
using GameLogic.Player.Items.Persistent;
using GameLogic.Player.Items.Sink;
using GameLogic.Player.Items.Sinkable;
using GameLogic.Player.Items.Spawning;
using GameLogic.Player.Items.TimeContainer;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items
{
	[MetaSerializableDerived(1)]
	[MetaBlockedMembers(new int[] { 59, 60, 61, 62, 63, 56, 57 })]
	public class ItemDefinition : IGameConfigData<int>, IGameConfigData, IHasGameConfigKey<int>, IValidatable, IItemDefinition
	{
		[MetaMember(12, MetaMemberFlags.None)]
		[NonSerialized]
		public MergeFeatures _MergeFeatures;

		[MetaMember(13, MetaMemberFlags.None)]
		[NonSerialized]
		public ActivationFeatures _ActivationFeatures;

		[MetaMember(14, MetaMemberFlags.None)]
		[NonSerialized]
		public SpawnFeatures _SpawnFeatures;

		[MetaMember(15, MetaMemberFlags.None)]
		[NonSerialized]
		public DecayFeatures _DecayFeatures;

		[MetaMember(16, MetaMemberFlags.None)]
		[NonSerialized]
		public ChestFeatures _ChestFeatures;

		[MetaMember(17, MetaMemberFlags.None)]
		[NonSerialized]
		public CollectableFeatures _CollectableFeatures;

		[MetaMember(18, MetaMemberFlags.None)]
		[NonSerialized]
		public BoosterFeatures _BoosterFeatures;

		[MetaMember(19, MetaMemberFlags.None)]
		[NonSerialized]
		public BubbleFeatures _BubbleFeatures;

		[MetaMember(20, MetaMemberFlags.None)]
		[NonSerialized]
		public SinkFeatures _SinkFeatures;

		[MetaMember(21, MetaMemberFlags.None)]
		[NonSerialized]
		public ConsumableFeatures _ConsumableFeatures;

		[MetaMember(22, MetaMemberFlags.None)]
		[NonSerialized]
		public PortalFeatures _PortalFeatures;

		[MetaMember(23, MetaMemberFlags.None)]
		[NonSerialized]
		public ChargesFeatures _ChargesFeatures;

		[MetaMember(24, MetaMemberFlags.None)]
		[NonSerialized]
		public TimeContainerFeatures _TimeContainer;

		[MetaMember(34, MetaMemberFlags.None)]
		[NonSerialized]
		public LeaderboardFeatures _LeaderboardFeatures;

		[MetaMember(37, MetaMemberFlags.None)]
		[NonSerialized]
		public FishingRodFeatures _FishingRodFeatures;

		[MetaMember(38, MetaMemberFlags.None)]
		[NonSerialized]
		public WeightFeatures _WeightFeatures;

		[MetaMember(39, MetaMemberFlags.None)]
		[NonSerialized]
		public CameraFeatures _CameraFeatures;

		[MetaMember(40, MetaMemberFlags.None)]
		[NonSerialized]
		public SinkableFeatures _SinkableFeatures;

		[MetaMember(41, MetaMemberFlags.None)]
		[NonSerialized]
		public FramesFeatures _FramesFeatures;

		[MetaMember(43, MetaMemberFlags.None)]
		[NonSerialized]
		public PersistentFeatures _PersistentFeatures;

		[MetaMember(45, MetaMemberFlags.None)]
		[NonSerialized]
		public OverrideSpawnChanceFeatures _OverrideSpawnChanceFeatures;

		[MetaMember(48, MetaMemberFlags.None)]
		[NonSerialized]
		public AudioFeatures _AudioFeatures;

		[MetaMember(50, MetaMemberFlags.None)]
		[NonSerialized]
		public MiniEventFeatures _MiniEventFeatures;

		[MetaMember(54, MetaMemberFlags.None)]
		[NonSerialized]
		public OrderFeatures _OrderFeatures;

		[MetaMember(1, MetaMemberFlags.None)]
		public int ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string PoolTag { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string SkinName { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int LevelNumber { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public bool Movable { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public F64 CostInDiamonds { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public F64 AnchorPriceGems { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public F64 AnchorPriceCoins { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public F64 TimeSkipPriceGems { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public F64 UnlockOnBoardPriceGems { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public int ExperienceValue { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		public List<string> Tags { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixRef")]
		public MergeChainDef MergeChainDef { get; set; }

		[MetaMember(27, MetaMemberFlags.None)]
		public List<string> ConfirmableMergeResults { get; set; }

		[MetaMember(28, MetaMemberFlags.None)]
		public List<IDirectorAction> OnDiscoveredActions { get; set; }

		[MetaMember(29, MetaMemberFlags.None)]
		public bool ShowTutorialFingerOnDiscovery { get; set; }

		[MetaMember(30, MetaMemberFlags.None)]
		public List<string> AnalyticsMetaData { get; set; }

		[MetaMember(31, MetaMemberFlags.None)]
		public List<int> CombineInfoWithItem { get; set; }

		[MetaMember(32, MetaMemberFlags.None)]
		public ItemRarity Rarity { get; set; }

		[MetaMember(33, MetaMemberFlags.None)]
		public bool Unsellable { get; set; }

		[MetaMember(35, MetaMemberFlags.None)]
		public string ItemType { get; set; }

		[MetaMember(36, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> Rewards { get; set; }

		[MetaMember(42, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> UnlockRequirements { get; set; }

		[MetaMember(44, MetaMemberFlags.None)]
		public List<string> SpawnEffects { get; set; }

		[MetaMember(46, MetaMemberFlags.None)]
		public ConfigPrefabId CustomItemInfoPopupId { get; set; }

		[MetaMember(47, MetaMemberFlags.None)]
		public bool ShowCustomItemInfoPopupOnDiscovery { get; set; }

		[MetaMember(49, MetaMemberFlags.None)]
		public string OverrideLocalizationItemKey { get; set; }

		[MetaMember(51, MetaMemberFlags.None)]
		public string FullOverrideLocalizationItemKey { get; set; }

		[MetaMember(52, MetaMemberFlags.None)]
		public string SinkTag { get; set; }

		[MetaMember(53, MetaMemberFlags.None)]
		public int SinkPoints { get; set; }

		[MetaMember(55, MetaMemberFlags.None)]
		public List<int> OverrideProductionSource { get; set; }

		[MetaMember(58, MetaMemberFlags.None)]
		public string OverrideLocalizationItemCategory { get; set; }

		[MetaMember(64, MetaMemberFlags.None)]
		public ItemEffectFeatures _ItemEffectFeatures { get; set; }

		[MetaMember(65, MetaMemberFlags.None)]
		public OnFireFeatures _OnFireFeatures { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		[IgnoreDataMember]
		public IMergeFeatures MergeFeatures => null;

		[IgnoreDataMember]
		public IActivationFeatures ActivationFeatures => null;

		[IgnoreDataMember]
		public ISpawnFeatures SpawnFeatures => null;

		[IgnoreDataMember]
		public IDecayFeatures DecayFeatures => null;

		[IgnoreDataMember]
		public IChestFeatures ChestFeatures => null;

		[IgnoreDataMember]
		public ICollectableFeatures CollectableFeatures => null;

		[IgnoreDataMember]
		public IBoosterFeatures BoosterFeatures => null;

		[IgnoreDataMember]
		public IBubbleFeatures BubbleFeatures => null;

		[IgnoreDataMember]
		public ISinkFeatures SinkFeatures => null;

		[IgnoreDataMember]
		public IConsumableFeatures ConsumableFeatures => null;

		[IgnoreDataMember]
		public IPortalFeatures PortalFeatures => null;

		[IgnoreDataMember]
		public IChargesFeatures ChargesFeatures => null;

		[IgnoreDataMember]
		public ITimeContainerFeatures TimeContainerFeatures => null;

		[IgnoreDataMember]
		public IFishingRodFeatures FishingRodFeatures => null;

		[IgnoreDataMember]
		public ILeaderboardFeatures LeaderboardFeatures => null;

		[IgnoreDataMember]
		public IWeightFeatures WeightFeatures => null;

		[IgnoreDataMember]
		public ICameraFeatures CameraFeatures => null;

		[IgnoreDataMember]
		public ISinkableFeatures SinkableFeatures => null;

		[IgnoreDataMember]
		public IFramesFeatures FramesFeatures => null;

		[IgnoreDataMember]
		public IPersistentFeatures PersistentFeatures => null;

		[IgnoreDataMember]
		public IOverrideSpawnChanceFeatures OverrideSpawnChanceFeatures => null;

		[IgnoreDataMember]
		public IAudioFeatures AudioFeatures => null;

		[IgnoreDataMember]
		public IOrderFeatures OrderFeatures => null;

		[IgnoreDataMember]
		public IMiniEventFeatures MiniEventFeatures => null;

		[IgnoreDataMember]
		public IEnumerable<IDirectorAction> OnDiscovered => null;

		[IgnoreDataMember]
		public IItemEffectFeatures ItemEffectFeatures => null;

		[IgnoreDataMember]
		public IOnFireFeatures OnFireFeatures => null;

		[IgnoreDataMember]
		public string LocalizationItemKey => null;

		public bool HasUnlockRequirements => false;

		public ItemDefinition()
		{
		}

		public ItemDefinition(int configKey, string itemType, string poolTag, string skinName, int levelNumber, bool movable, F64 costInDiamonds, F64 anchorPriceGems, F64 anchorPriceCoins, F64 timeSkipPriceGems, F64 unlockOnBoardPriceGems, int experienceValue, MergeFeatures mergeFeatures, ActivationFeatures activationFeatures, SpawnFeatures spawnFeatures, DecayFeatures decayFeatures, ChestFeatures chestFeatures, CollectableFeatures collectableFeatures, BoosterFeatures boosterFeatures, BubbleFeatures bubbleFeatures, SinkFeatures sinkFeatures, ConsumableFeatures consumableFeatures, PortalFeatures portalFeatures, ChargesFeatures chargesFeatures, TimeContainerFeatures timeContainer, LeaderboardFeatures leaderboardFeatures, FishingRodFeatures fishingRodFeatures, WeightFeatures weightFeatures, CameraFeatures cameraFeatures, SinkableFeatures sinkableFeatures, FramesFeatures framesFeatures, PersistentFeatures persistentFeatures, OverrideSpawnChanceFeatures overrideSpawnChanceFeatures, AudioFeatures audioFeatures, OrderFeatures orderFeatures, List<string> tags, List<string> confirmableMergeResults, List<IDirectorAction> onDiscoveredActions, bool showTutorialFingerOnDiscovery, List<string> analyticsMetadata, List<int> combineInfoWithItem, ItemRarity rarity, bool unsellable, IEnumerable<PlayerReward> rewards, IEnumerable<PlayerRequirement> unlockRequirements, List<string> spawnEffects, ConfigPrefabId customItemInfoPopupId, bool showCustomItemInfoPopupOnDiscovery, string overrideLocalizationItemKey, MiniEventFeatures miniEventFeatures, string fullOverrideLocalizationItemKey, string overrideLocalizationItemCategory, string sinkTag, int sinkPoints, List<string> overrideProductionSource, ItemEffectFeatures itemEffectFeatures, MergeChainDef mergeChainDef, OnFireFeatures onFireFeatures, int experimentPriority)
		{
		}

		public static T ConvertDefaultToNull<T, K>(T item, K defaultValue) where T : class, K where K : class
		{
			return null;
		}

		public Currencies SellCurrency()
		{
			return default(Currencies);
		}

		public int GetItemSellPrice(SharedGlobals sharedGlobals)
		{
			return 0;
		}

		public IMergeChainDefinition GetMergeChain(IPlayer player)
		{
			return null;
		}

		public IMergeChainDefinition GetMergeChain(IMergeMansionGameConfig config)
		{
			return null;
		}

		public (Currencies, long) SellPrice(SharedGlobals sharedGlobals)
		{
			return default((Currencies, long));
		}

		public F64 AnchorPrice(Currencies currency)
		{
			return default(F64);
		}

		public F64 BubbleDiscount(IPlayer player, Currencies openCurrency, int openCost)
		{
			return default(F64);
		}

		public bool IsMaxLevel(IPlayer player)
		{
			return false;
		}

		public bool IsUnlockedMaxLevel(IPlayer player)
		{
			return false;
		}

		public bool HasUnlockRequirement(Type requirementType, out PlayerRequirement requirement)
		{
			requirement = null;
			return false;
		}

		public int GetItemValueRequirementForDailyTasksV2(IPlayer player)
		{
			return 0;
		}

		public int GetItemValueRewardForDailyTasksV2(IPlayer player)
		{
			return 0;
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public void ValidateHintLocId(GameConfigValidationResult validationResult)
		{
		}

		public void ValidateFallbackChest(IMergeMansionGameConfig configuration)
		{
		}

		public static MergeChainDef FixRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
