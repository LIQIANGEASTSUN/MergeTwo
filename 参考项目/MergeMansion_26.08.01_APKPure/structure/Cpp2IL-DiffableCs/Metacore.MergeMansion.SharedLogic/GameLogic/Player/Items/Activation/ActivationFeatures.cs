namespace GameLogic.Player.Items.Activation;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {7})]
[MetaSerializable]
public class ActivationFeatures : IActivationFeatures
{
	public static readonly ActivationFeatures NoActivation; //Field offset: 0x0
	[CompilerGenerated]
	private IItemSpawner <ActivationSpawn>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IPlacement <Placement>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private IActivationCycle <ActivationCycle>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <StorageMax>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private IItemProducer <DecayAfterLastCycleProducer>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private ItemVisibility <SpawnVisibility>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private bool <StartsFull>k__BackingField; //Field offset: 0x3C
	[CompilerGenerated]
	private List<PlayerRequirement> <ActivationRequirements>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private Nullable<Int32> <ActivationCost>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private bool <ShowTapTextOnDiscovery>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private bool <AllowCooldownRemover>k__BackingField; //Field offset: 0x51
	[CompilerGenerated]
	private bool <AllowEnergyMode>k__BackingField; //Field offset: 0x52
	[CompilerGenerated]
	private Nullable<MetaDuration> <DecayDelay>k__BackingField; //Field offset: 0x58

	public override bool Activable
	{
		 get { } //Length: 132
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private override Nullable<Int32> ActivationCost
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override IActivationCycle ActivationCycle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	public override List<PlayerRequirement> ActivationRequirements
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override IItemSpawner ActivationSpawn
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override Nullable<MetaTime> ActivationStartTime
	{
		 get { } //Length: 140
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public private override bool AllowCooldownRemover
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	public private override bool AllowEnergyMode
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override bool DecayAfterLastCycleAndActivation
	{
		 get { } //Length: 16
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override IItemProducer DecayAfterLastCycleProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	public private override Nullable<MetaDuration> DecayDelay
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override bool HasDecayDelay
	{
		 get { } //Length: 152
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override IPlacement Placement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public private override bool ShowTapTextOnDiscovery
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public override ItemVisibility SpawnVisibility
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private override bool StartsFull
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override int StorageMax
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static ActivationFeatures() { }

	public ActivationFeatures(IItemSpawner activationSpawn, IPlacement placement, IActivationCycle cycle, int howManyCanStore, IItemProducer randomItemDecayProducer, bool startsFull, List<PlayerRequirement> activationRequirements, Nullable<Int32> activationCost, bool showTapTextOnDiscovery, bool allowCooldownRemover, bool allowEnergyMode, Nullable<MetaDuration> decayDelay, ItemVisibility itemVisibility = 2) { }

	private ActivationFeatures() { }

	private static IItemSpawner CreateProducer(int production) { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

	public override bool get_Activable() { }

	[CompilerGenerated]
	public override Nullable<Int32> get_ActivationCost() { }

	[CompilerGenerated]
	public override IActivationCycle get_ActivationCycle() { }

	[CompilerGenerated]
	public override List<PlayerRequirement> get_ActivationRequirements() { }

	[CompilerGenerated]
	public override IItemSpawner get_ActivationSpawn() { }

	public override Nullable<MetaTime> get_ActivationStartTime() { }

	[CompilerGenerated]
	public override bool get_AllowCooldownRemover() { }

	[CompilerGenerated]
	public override bool get_AllowEnergyMode() { }

	public override bool get_DecayAfterLastCycleAndActivation() { }

	[CompilerGenerated]
	public override IItemProducer get_DecayAfterLastCycleProducer() { }

	[CompilerGenerated]
	public override Nullable<MetaDuration> get_DecayDelay() { }

	public override bool get_HasDecayDelay() { }

	[CompilerGenerated]
	public override IPlacement get_Placement() { }

	[CompilerGenerated]
	public override bool get_ShowTapTextOnDiscovery() { }

	[CompilerGenerated]
	public override ItemVisibility get_SpawnVisibility() { }

	[CompilerGenerated]
	public override bool get_StartsFull() { }

	[CompilerGenerated]
	public override int get_StorageMax() { }

	public override IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, Option<ProducerContext> producerContextOption) { }

	public override int GetItemsPerActivation() { }

	public override bool IsInInitialSequence(IGenerationContext generationContext, ProducerContext producerContext) { }

	public override bool MatchesRequirements(IPlayer player) { }

	[CompilerGenerated]
	private void set_ActivationCost(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_ActivationCycle(IActivationCycle value) { }

	[CompilerGenerated]
	public void set_ActivationRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_ActivationSpawn(IItemSpawner value) { }

	[CompilerGenerated]
	private void set_AllowCooldownRemover(bool value) { }

	[CompilerGenerated]
	private void set_AllowEnergyMode(bool value) { }

	[CompilerGenerated]
	private void set_DecayAfterLastCycleProducer(IItemProducer value) { }

	[CompilerGenerated]
	private void set_DecayDelay(Nullable<MetaDuration> value) { }

	[CompilerGenerated]
	private void set_Placement(IPlacement value) { }

	[CompilerGenerated]
	private void set_ShowTapTextOnDiscovery(bool value) { }

	[CompilerGenerated]
	public void set_SpawnVisibility(ItemVisibility value) { }

	[CompilerGenerated]
	private void set_StartsFull(bool value) { }

	[CompilerGenerated]
	private void set_StorageMax(int value) { }

	public void SetReEngagementSettings(IActivationReEngagementSettings activationReEngagementSettings) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

