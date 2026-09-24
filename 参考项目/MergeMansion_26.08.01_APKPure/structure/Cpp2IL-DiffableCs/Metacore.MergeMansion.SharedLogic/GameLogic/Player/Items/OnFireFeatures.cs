namespace GameLogic.Player.Items;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {7})]
[MetaSerializable]
public class OnFireFeatures : IOnFireFeatures
{
	public static readonly OnFireFeatures NoOnFire; //Field offset: 0x0
	[CompilerGenerated]
	private IItemSpawner <OnFireSpawn>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <UseMaxLevel>k__BackingField; //Field offset: 0x18
	[IgnoreDataMember]
	private Option<IActivationFeatures> _maxLevelActivationFeatures; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	private IItemSpawner OnFireSpawn
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override bool SupportsOnFire
	{
		 get { } //Length: 140
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private bool UseMaxLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static OnFireFeatures() { }

	public OnFireFeatures() { }

	public OnFireFeatures(IItemSpawner onFireSpawn, bool useMaxLevel) { }

	[CompilerGenerated]
	private IItemSpawner get_OnFireSpawn() { }

	public override bool get_SupportsOnFire() { }

	[CompilerGenerated]
	private bool get_UseMaxLevel() { }

	public override IItemDefinition GetActivationItem(IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null) { }

	public override IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, ProducerContext producerContext) { }

	public override int GetItemsPerActivation(IMergeItem mergeItem, IPlayer player) { }

	public override bool IsInInitialSequence(IPlayer player, ProducerContext producerContext) { }

	[CompilerGenerated]
	private void set_OnFireSpawn(IItemSpawner value) { }

	[CompilerGenerated]
	private void set_UseMaxLevel(bool value) { }

	private Option<IActivationFeatures> TryGetMaxLevelActivationFeatures(IMergeItem item, IMergeMansionGameConfig config) { }

}

