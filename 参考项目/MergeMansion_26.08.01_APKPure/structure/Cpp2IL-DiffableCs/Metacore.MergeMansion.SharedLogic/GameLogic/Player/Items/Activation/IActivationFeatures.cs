namespace GameLogic.Player.Items.Activation;

public interface IActivationFeatures
{

	public bool Activable
	{
		 get { } //Length: 0
	}

	public Nullable<Int32> ActivationCost
	{
		 get { } //Length: 0
	}

	public IActivationCycle ActivationCycle
	{
		 get { } //Length: 0
	}

	public List<PlayerRequirement> ActivationRequirements
	{
		 get { } //Length: 0
	}

	public IItemSpawner ActivationSpawn
	{
		 get { } //Length: 0
	}

	public Nullable<MetaTime> ActivationStartTime
	{
		 get { } //Length: 0
	}

	public bool AllowCooldownRemover
	{
		 get { } //Length: 0
	}

	public bool AllowEnergyMode
	{
		 get { } //Length: 0
	}

	public bool DecayAfterLastCycleAndActivation
	{
		 get { } //Length: 0
	}

	public IItemProducer DecayAfterLastCycleProducer
	{
		 get { } //Length: 0
	}

	public Nullable<MetaDuration> DecayDelay
	{
		 get { } //Length: 0
	}

	public bool HasDecayDelay
	{
		 get { } //Length: 0
	}

	public IPlacement Placement
	{
		 get { } //Length: 0
	}

	public bool ShowTapTextOnDiscovery
	{
		 get { } //Length: 0
	}

	public ItemVisibility SpawnVisibility
	{
		 get { } //Length: 0
	}

	public bool StartsFull
	{
		 get { } //Length: 0
	}

	public int StorageMax
	{
		 get { } //Length: 0
	}

	public bool get_Activable() { }

	public Nullable<Int32> get_ActivationCost() { }

	public IActivationCycle get_ActivationCycle() { }

	public List<PlayerRequirement> get_ActivationRequirements() { }

	public IItemSpawner get_ActivationSpawn() { }

	public Nullable<MetaTime> get_ActivationStartTime() { }

	public bool get_AllowCooldownRemover() { }

	public bool get_AllowEnergyMode() { }

	public bool get_DecayAfterLastCycleAndActivation() { }

	public IItemProducer get_DecayAfterLastCycleProducer() { }

	public Nullable<MetaDuration> get_DecayDelay() { }

	public bool get_HasDecayDelay() { }

	public IPlacement get_Placement() { }

	public bool get_ShowTapTextOnDiscovery() { }

	public ItemVisibility get_SpawnVisibility() { }

	public bool get_StartsFull() { }

	public int get_StorageMax() { }

	public IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, Option<ProducerContext> producerContextOption) { }

	public int GetItemsPerActivation() { }

	public bool IsInInitialSequence(IGenerationContext generationContext, ProducerContext producerContext) { }

	public bool MatchesRequirements(IPlayer player) { }

	public F64 TimeSkipPriceGems(IGenerationContext context) { }

}

