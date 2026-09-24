namespace GameLogic.Player.Items;

[MetaDeserializationConvertFromConcreteDerivedType(typeof(ItemDefinition))]
[MetaSerializable]
public interface IItemDefinition
{

	public IActivationFeatures ActivationFeatures
	{
		 get { } //Length: 0
	}

	public List<String> AnalyticsMetaData
	{
		 get { } //Length: 0
	}

	public IAudioFeatures AudioFeatures
	{
		 get { } //Length: 0
	}

	public IBoosterFeatures BoosterFeatures
	{
		 get { } //Length: 0
	}

	public IBubbleFeatures BubbleFeatures
	{
		 get { } //Length: 0
	}

	public ICameraFeatures CameraFeatures
	{
		 get { } //Length: 0
	}

	public IChargesFeatures ChargesFeatures
	{
		 get { } //Length: 0
	}

	public IChestFeatures ChestFeatures
	{
		 get { } //Length: 0
	}

	public ICollectableFeatures CollectableFeatures
	{
		 get { } //Length: 0
	}

	public List<Int32> CombineInfoWithItem
	{
		 get { } //Length: 0
	}

	public int ConfigKey
	{
		 get { } //Length: 0
	}

	public List<String> ConfirmableMergeResults
	{
		 get { } //Length: 0
	}

	public IConsumableFeatures ConsumableFeatures
	{
		 get { } //Length: 0
	}

	public F64 CostInDiamonds
	{
		 get { } //Length: 0
	}

	public ConfigPrefabId CustomItemInfoPopupId
	{
		 get { } //Length: 0
	}

	public IDecayFeatures DecayFeatures
	{
		 get { } //Length: 0
	}

	public int ExperienceValue
	{
		 get { } //Length: 0
	}

	public IFishingRodFeatures FishingRodFeatures
	{
		 get { } //Length: 0
	}

	public IFramesFeatures FramesFeatures
	{
		 get { } //Length: 0
	}

	public string FullOverrideLocalizationItemKey
	{
		 get { } //Length: 0
	}

	public bool HasUnlockRequirements
	{
		 get { } //Length: 0
	}

	public IItemEffectFeatures ItemEffectFeatures
	{
		 get { } //Length: 0
	}

	public string ItemType
	{
		 get { } //Length: 0
	}

	public ILeaderboardFeatures LeaderboardFeatures
	{
		 get { } //Length: 0
	}

	public int LevelNumber
	{
		 get { } //Length: 0
	}

	public string LocalizationItemKey
	{
		 get { } //Length: 0
	}

	public MergeChainDef MergeChainDef
	{
		 get { } //Length: 0
	}

	public IMergeFeatures MergeFeatures
	{
		 get { } //Length: 0
	}

	public IMiniEventFeatures MiniEventFeatures
	{
		 get { } //Length: 0
	}

	public bool Movable
	{
		 get { } //Length: 0
	}

	public IEnumerable<IDirectorAction> OnDiscovered
	{
		 get { } //Length: 0
	}

	public IOnFireFeatures OnFireFeatures
	{
		 get { } //Length: 0
	}

	public IOrderFeatures OrderFeatures
	{
		 get { } //Length: 0
	}

	public string OverrideLocalizationItemCategory
	{
		 get { } //Length: 0
	}

	public List<Int32> OverrideProductionSource
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public IOverrideSpawnChanceFeatures OverrideSpawnChanceFeatures
	{
		 get { } //Length: 0
	}

	public IPersistentFeatures PersistentFeatures
	{
		 get { } //Length: 0
	}

	public string PoolTag
	{
		 get { } //Length: 0
	}

	public IPortalFeatures PortalFeatures
	{
		 get { } //Length: 0
	}

	public ItemRarity Rarity
	{
		 get { } //Length: 0
	}

	public List<PlayerReward> Rewards
	{
		 get { } //Length: 0
	}

	public bool ShowCustomItemInfoPopupOnDiscovery
	{
		 get { } //Length: 0
	}

	public bool ShowTutorialFingerOnDiscovery
	{
		 get { } //Length: 0
	}

	public ISinkableFeatures SinkableFeatures
	{
		 get { } //Length: 0
	}

	public ISinkFeatures SinkFeatures
	{
		 get { } //Length: 0
	}

	public int SinkPoints
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public string SinkTag
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public string SkinName
	{
		 get { } //Length: 0
	}

	public List<String> SpawnEffects
	{
		 get { } //Length: 0
	}

	public ISpawnFeatures SpawnFeatures
	{
		 get { } //Length: 0
	}

	public List<String> Tags
	{
		 get { } //Length: 0
	}

	public ITimeContainerFeatures TimeContainerFeatures
	{
		 get { } //Length: 0
	}

	public F64 TimeSkipPriceGems
	{
		 get { } //Length: 0
	}

	public F64 UnlockOnBoardPriceGems
	{
		 get { } //Length: 0
	}

	public List<PlayerRequirement> UnlockRequirements
	{
		 get { } //Length: 0
	}

	public bool Unsellable
	{
		 get { } //Length: 0
	}

	public IWeightFeatures WeightFeatures
	{
		 get { } //Length: 0
	}

	public F64 AnchorPrice(Currencies currency) { }

	public F64 BubbleDiscount(IPlayer player, Currencies openCurrency, int openCost) { }

	public IActivationFeatures get_ActivationFeatures() { }

	public List<String> get_AnalyticsMetaData() { }

	public IAudioFeatures get_AudioFeatures() { }

	public IBoosterFeatures get_BoosterFeatures() { }

	public IBubbleFeatures get_BubbleFeatures() { }

	public ICameraFeatures get_CameraFeatures() { }

	public IChargesFeatures get_ChargesFeatures() { }

	public IChestFeatures get_ChestFeatures() { }

	public ICollectableFeatures get_CollectableFeatures() { }

	public List<Int32> get_CombineInfoWithItem() { }

	public int get_ConfigKey() { }

	public List<String> get_ConfirmableMergeResults() { }

	public IConsumableFeatures get_ConsumableFeatures() { }

	public F64 get_CostInDiamonds() { }

	public ConfigPrefabId get_CustomItemInfoPopupId() { }

	public IDecayFeatures get_DecayFeatures() { }

	public int get_ExperienceValue() { }

	public IFishingRodFeatures get_FishingRodFeatures() { }

	public IFramesFeatures get_FramesFeatures() { }

	public string get_FullOverrideLocalizationItemKey() { }

	public bool get_HasUnlockRequirements() { }

	public IItemEffectFeatures get_ItemEffectFeatures() { }

	public string get_ItemType() { }

	public ILeaderboardFeatures get_LeaderboardFeatures() { }

	public int get_LevelNumber() { }

	public string get_LocalizationItemKey() { }

	public MergeChainDef get_MergeChainDef() { }

	public IMergeFeatures get_MergeFeatures() { }

	public IMiniEventFeatures get_MiniEventFeatures() { }

	public bool get_Movable() { }

	public IEnumerable<IDirectorAction> get_OnDiscovered() { }

	public IOnFireFeatures get_OnFireFeatures() { }

	public IOrderFeatures get_OrderFeatures() { }

	public string get_OverrideLocalizationItemCategory() { }

	public List<Int32> get_OverrideProductionSource() { }

	public IOverrideSpawnChanceFeatures get_OverrideSpawnChanceFeatures() { }

	public IPersistentFeatures get_PersistentFeatures() { }

	public string get_PoolTag() { }

	public IPortalFeatures get_PortalFeatures() { }

	public ItemRarity get_Rarity() { }

	public List<PlayerReward> get_Rewards() { }

	public bool get_ShowCustomItemInfoPopupOnDiscovery() { }

	public bool get_ShowTutorialFingerOnDiscovery() { }

	public ISinkableFeatures get_SinkableFeatures() { }

	public ISinkFeatures get_SinkFeatures() { }

	public int get_SinkPoints() { }

	public string get_SinkTag() { }

	public string get_SkinName() { }

	public List<String> get_SpawnEffects() { }

	public ISpawnFeatures get_SpawnFeatures() { }

	public List<String> get_Tags() { }

	public ITimeContainerFeatures get_TimeContainerFeatures() { }

	public F64 get_TimeSkipPriceGems() { }

	public F64 get_UnlockOnBoardPriceGems() { }

	public List<PlayerRequirement> get_UnlockRequirements() { }

	public bool get_Unsellable() { }

	public IWeightFeatures get_WeightFeatures() { }

	public int GetItemSellPrice(SharedGlobals sharedGlobals) { }

	public int GetItemValueRequirementForDailyTasksV2(IPlayer player) { }

	public int GetItemValueRewardForDailyTasksV2(IPlayer player) { }

	public IMergeChainDefinition GetMergeChain(IPlayer player) { }

	public IMergeChainDefinition GetMergeChain(IMergeMansionGameConfig config) { }

	public bool HasUnlockRequirement(Type requirementType, out PlayerRequirement requirement) { }

	public bool IsMaxLevel(IPlayer player) { }

	public bool IsUnlockedMaxLevel(IPlayer player) { }

	public Currencies SellCurrency() { }

	public ValueTuple<Currencies, Int64> SellPrice(SharedGlobals sharedGlobals) { }

	public void set_OverrideProductionSource(List<Int32> value) { }

	public void set_SinkPoints(int value) { }

	public void set_SinkTag(string value) { }

}

