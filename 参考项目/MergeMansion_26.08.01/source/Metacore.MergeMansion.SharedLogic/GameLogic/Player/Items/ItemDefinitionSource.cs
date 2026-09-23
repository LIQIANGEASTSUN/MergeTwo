using System.Collections.Generic;
using GameLogic.ConfigPrefabs;
using GameLogic.MergeChains;
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
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items
{
	public class ItemDefinitionSource : IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string PoolTag;

		public string SkinName;

		public int LevelNumber;

		public bool Movable;

		public List<string> Tags;

		public MergeChainId MergeChain;

		public F64 CostInDiamonds;

		public F64 AnchorPriceGems;

		public F64 AnchorPriceCoins;

		public F64 TimeSkipPriceGems;

		public F64 UnlockOnBoardPriceGems;

		public int? ExperienceValue;

		public List<string> ConfirmableMergeResults;

		public List<string> DiscoveredActions;

		public bool ShowTutorialFingerOnDiscovery;

		public List<string> Durability;

		public List<string> TimeLimited;

		public List<string> CombineInfoWithItem;

		public ItemRarity Rarity;

		public bool Unsellable;

		public List<string> SpawnEffects;

		public ConfigPrefabId CustomItemInfoPopupId;

		public bool ShowCustomItemInfoPopupOnDiscovery;

		public string OverrideLocalizationItemKey;

		public string FullOverrideLocalizationItemKey;

		public string OverrideLocalizationItemCategory;

		public string SinkTag;

		public int SinkPoints;

		public List<string> OverrideProductionSource;

		public string ConfigKey => null;

		public string ItemType => null;

		public List<string> UnlockRequirementType { get; set; }

		public List<string> UnlockRequirementId { get; set; }

		public List<string> UnlockRequirementAmount { get; set; }

		public List<string> UnlockRequirementAux0 { get; set; }

		public List<string> RewardType { get; set; }

		public List<string> RewardId { get; set; }

		public List<int> RewardAmount { get; set; }

		public List<string> RewardAux0 { get; set; }

		public List<string> RewardAux1 { get; set; }

		public int ExperimentPriority { get; set; }

		public ItemDefinition ToConfigData(MergeFeatures mergeFeatures, ActivationFeatures activationFeatures, ActivationReEngagementSettings activationReEngagementSettings, SpawnFeatures spawnFeatures, DecayFeatures decayFeatures, ChestFeatures chestFeatures, CollectableFeatures collectableFeatures, BoosterFeatures boosterFeatures, BubbleFeatures bubbleFeatures, SinkFeatures sinkFeatures, ConsumableFeatures consumableFeatures, PortalFeatures portalFeatures, ChargesFeatures chargesFeatures, TimeContainerFeatures timeContainerFeatures, LeaderboardFeatures leaderboardFeatures, FishingRodFeatures fishingRodFeatures, WeightFeatures weightFeatures, CameraFeatures cameraFeatures, SinkableFeatures sinkableFeatures, FramesFeatures framesFeatures, PersistentFeatures persistentFeatures, OverrideSpawnChanceFeatures overrideSpawnChanceFeatures, AudioFeatures audioFeatures, OrderFeatures orderFeatures, MiniEventFeatures miniEventFeatures, ItemEffectFeatures itemEffectFeatures, OnFireFeatures onFireFeatures)
		{
			return null;
		}
	}
}
