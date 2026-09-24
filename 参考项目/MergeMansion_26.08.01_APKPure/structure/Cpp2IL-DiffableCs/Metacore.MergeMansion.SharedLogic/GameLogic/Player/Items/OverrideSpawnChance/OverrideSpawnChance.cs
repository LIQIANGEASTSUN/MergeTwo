namespace GameLogic.Player.Items.OverrideSpawnChance;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {4})]
[MetaSerializable]
public class OverrideSpawnChance
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass21_0
	{
		public IPlayer player; //Field offset: 0x10
		public long localDaySinceEpoch; //Field offset: 0x18

		public <>c__DisplayClass21_0() { }

		internal bool <GetSpawnedItemsToday>b__0(MetaTime record) { }

	}

	[CompilerGenerated]
	private PlayerRequirement <TriggerRequirement>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private PlayerRequirement <EndRequirement>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MergeBoardId <TargetBoardId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<QuantityPercentagePair> <ChancesToSpawn>k__BackingField; //Field offset: 0x28

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private List<QuantityPercentagePair> ChancesToSpawn
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
	public private PlayerRequirement EndRequirement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private MergeBoardId TargetBoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
	public private PlayerRequirement TriggerRequirement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OverrideSpawnChance() { }

	public OverrideSpawnChance(PlayerRequirement triggerRequirement, PlayerRequirement endRequirement, MergeBoardId targetBoardId, List<QuantityPercentagePair> chancesToSpawn) { }

	public F32 CalculateChancePercentage(IPlayer player, int itemId) { }

	private static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public List<QuantityPercentagePair> get_ChancesToSpawn() { }

	[CompilerGenerated]
	public PlayerRequirement get_EndRequirement() { }

	[CompilerGenerated]
	public MergeBoardId get_TargetBoardId() { }

	[CompilerGenerated]
	public PlayerRequirement get_TriggerRequirement() { }

	private int GetSpawnedItemsToday(IPlayer player, int itemId) { }

	public bool Matches(IPlayer player) { }

	public bool Roll(IPlayer player, int itemId) { }

	[CompilerGenerated]
	private void set_ChancesToSpawn(List<QuantityPercentagePair> value) { }

	[CompilerGenerated]
	private void set_EndRequirement(PlayerRequirement value) { }

	[CompilerGenerated]
	private void set_TargetBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_TriggerRequirement(PlayerRequirement value) { }

}

