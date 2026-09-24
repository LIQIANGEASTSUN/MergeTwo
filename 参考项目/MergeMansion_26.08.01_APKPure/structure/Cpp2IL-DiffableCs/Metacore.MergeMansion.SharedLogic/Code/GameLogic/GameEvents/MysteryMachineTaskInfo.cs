namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class MysteryMachineTaskInfo : IGameConfigData<MysteryMachineTaskId>, IGameConfigData, IHasGameConfigKey<MysteryMachineTaskId>
{
	[CompilerGenerated]
	private MysteryMachineTaskId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IMysteryMachineTask <Task>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private PlayerReward <Reward>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <Recurring>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <RecurringIncrease>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x30

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MysteryMachineTaskId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
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

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private bool Recurring
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private int RecurringIncrease
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerReward")]
	public private PlayerReward Reward
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private IMysteryMachineTask Task
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineTaskInfo() { }

	public MysteryMachineTaskInfo(MysteryMachineTaskId configKey, IMysteryMachineTask task, PlayerReward reward, bool recurring, int recurringIncrease, int experimentPriority) { }

	private static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override MysteryMachineTaskId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public bool get_Recurring() { }

	[CompilerGenerated]
	public int get_RecurringIncrease() { }

	[CompilerGenerated]
	public PlayerReward get_Reward() { }

	[CompilerGenerated]
	public IMysteryMachineTask get_Task() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineTaskId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Recurring(bool value) { }

	[CompilerGenerated]
	private void set_RecurringIncrease(int value) { }

	[CompilerGenerated]
	private void set_Reward(PlayerReward value) { }

	[CompilerGenerated]
	private void set_Task(IMysteryMachineTask value) { }

}

