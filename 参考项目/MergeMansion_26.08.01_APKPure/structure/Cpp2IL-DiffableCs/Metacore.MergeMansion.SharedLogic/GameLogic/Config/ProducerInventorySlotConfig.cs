namespace GameLogic.Config;

[MetaSerializable]
public class ProducerInventorySlotConfig : IGameConfigData<ProducerInventorySlotId>, IGameConfigData, IHasGameConfigKey<ProducerInventorySlotId>
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass26_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass26_0() { }

		internal bool <IsTeased>b__0(PlayerRequirement teaseRequirement) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass29_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass29_0() { }

		internal bool <IsUnlockable>b__0(PlayerRequirement unlockRequirement) { }

	}

	[CompilerGenerated]
	private ProducerInventorySlotId <SlotId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<PlayerRequirement> <TeaseRequirements>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<PlayerRequirement> <UnlockRequirements>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <SlotIndex>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x2C

	public override ProducerInventorySlotId ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private ProducerInventorySlotId SlotId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int SlotIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	private List<PlayerRequirement> TeaseRequirements
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public PlayerRequirement UnlockRequirement
	{
		 get { } //Length: 220
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	private List<PlayerRequirement> UnlockRequirements
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ProducerInventorySlotConfig(ProducerInventorySlotId slotId, IEnumerable<PlayerRequirement> teaseRequirements, IEnumerable<PlayerRequirement> unlockRequirements, int experimentPriority) { }

	public ProducerInventorySlotConfig() { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

	public override ProducerInventorySlotId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private ProducerInventorySlotId get_SlotId() { }

	[CompilerGenerated]
	public int get_SlotIndex() { }

	[CompilerGenerated]
	private List<PlayerRequirement> get_TeaseRequirements() { }

	public PlayerRequirement get_UnlockRequirement() { }

	[CompilerGenerated]
	private List<PlayerRequirement> get_UnlockRequirements() { }

	public bool IsAutomaticallyUnlocked() { }

	public bool IsInitiallyTeased() { }

	public bool IsSeen(IPlayer player) { }

	public bool IsTeased(IPlayer player) { }

	public bool IsUnlockable(IPlayer player) { }

	public bool IsUnlocked(IPlayer player) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_SlotId(ProducerInventorySlotId value) { }

	[CompilerGenerated]
	private void set_SlotIndex(int value) { }

	[CompilerGenerated]
	private void set_TeaseRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_UnlockRequirements(List<PlayerRequirement> value) { }

}

