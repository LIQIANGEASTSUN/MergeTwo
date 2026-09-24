namespace GameLogic.Player.Items.Spawning;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {8})]
[MetaSerializable]
public sealed class SpawnFeatures : ISpawnFeatures
{
	public static readonly SpawnFeatures NoSpawn; //Field offset: 0x0
	[CompilerGenerated]
	private IItemSpawner <Spawn>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IPlacement <Placement>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private ISpawnCycle <SpawnCycle>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <StorageMax>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private IItemProducer <DecayProducer>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private ItemVisibility <SpawnVisibility>k__BackingField; //Field offset: 0x38

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override IItemProducer DecayProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override bool DecaysWhenCyclesAreDone
	{
		 get { } //Length: 16
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override IPlacement Placement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override IItemSpawner Spawn
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override bool Spawnable
	{
		 get { } //Length: 132
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override ISpawnCycle SpawnCycle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public override ItemVisibility SpawnVisibility
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override int StorageMax
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static SpawnFeatures() { }

	public SpawnFeatures(IItemSpawner spawn, IPlacement placement, ISpawnCycle cycle, int howManyCanStore, IItemProducer decayProducer, ItemVisibility itemVisibility = 2) { }

	private SpawnFeatures() { }

	private static IItemSpawner CreateProducer(int production) { }

	[CompilerGenerated]
	public override IItemProducer get_DecayProducer() { }

	public override bool get_DecaysWhenCyclesAreDone() { }

	[CompilerGenerated]
	public override IPlacement get_Placement() { }

	[CompilerGenerated]
	public override IItemSpawner get_Spawn() { }

	public override bool get_Spawnable() { }

	[CompilerGenerated]
	public override ISpawnCycle get_SpawnCycle() { }

	[CompilerGenerated]
	public override ItemVisibility get_SpawnVisibility() { }

	[CompilerGenerated]
	public override int get_StorageMax() { }

	public override IItemDefinition GetSpawnItem(IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null) { }

	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext generationContext, IMergeItem relatedMergeItem, IBoard mergeBoard, IPlayer player) { }

	[CompilerGenerated]
	private void set_DecayProducer(IItemProducer value) { }

	[CompilerGenerated]
	private void set_Placement(IPlacement value) { }

	[CompilerGenerated]
	private void set_Spawn(IItemSpawner value) { }

	[CompilerGenerated]
	private void set_SpawnCycle(ISpawnCycle value) { }

	[CompilerGenerated]
	public void set_SpawnVisibility(ItemVisibility value) { }

	[CompilerGenerated]
	private void set_StorageMax(int value) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

