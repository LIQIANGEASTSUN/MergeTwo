namespace GameLogic.Player.Items.Spawning;

public interface ISpawnFeatures
{

	public IItemProducer DecayProducer
	{
		 get { } //Length: 0
	}

	public bool DecaysWhenCyclesAreDone
	{
		 get { } //Length: 0
	}

	public IPlacement Placement
	{
		 get { } //Length: 0
	}

	public IItemSpawner Spawn
	{
		 get { } //Length: 0
	}

	public bool Spawnable
	{
		 get { } //Length: 0
	}

	public ISpawnCycle SpawnCycle
	{
		 get { } //Length: 0
	}

	public ItemVisibility SpawnVisibility
	{
		 get { } //Length: 0
	}

	public int StorageMax
	{
		 get { } //Length: 0
	}

	public IItemProducer get_DecayProducer() { }

	public bool get_DecaysWhenCyclesAreDone() { }

	public IPlacement get_Placement() { }

	public IItemSpawner get_Spawn() { }

	public bool get_Spawnable() { }

	public ISpawnCycle get_SpawnCycle() { }

	public ItemVisibility get_SpawnVisibility() { }

	public int get_StorageMax() { }

	public IItemDefinition GetSpawnItem(IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null) { }

	public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext generationContext, IMergeItem relatedMergeItem, IBoard mergeBoard, IPlayer player) { }

	public F64 TimeSkipPriceGems(IGenerationContext context) { }

}

