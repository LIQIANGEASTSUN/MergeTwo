namespace GameLogic.Player.Items.Merging;

public class MergeRewardSource : IConfigItemSource<MergeReward, MergeRewardId>, IGameConfigSourceItem<MergeRewardId, MergeReward>, IHasGameConfigKey<MergeRewardId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeRewardId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ExperienceRequired>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<String> <RewardType>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<String> <RewardId>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<Int32> <RewardAmount>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<String> <RewardAux0>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<String> <RewardAux1>k__BackingField; //Field offset: 0x48

	public override MergeRewardId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int ExperienceRequired
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<Int32> RewardAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> RewardAux0
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> RewardAux1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> RewardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> RewardType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public MergeRewardSource() { }

	[CompilerGenerated]
	public override MergeRewardId get_ConfigKey() { }

	[CompilerGenerated]
	public int get_ExperienceRequired() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public List<Int32> get_RewardAmount() { }

	[CompilerGenerated]
	public List<String> get_RewardAux0() { }

	[CompilerGenerated]
	public List<String> get_RewardAux1() { }

	[CompilerGenerated]
	public List<String> get_RewardId() { }

	[CompilerGenerated]
	public List<String> get_RewardType() { }

	[CompilerGenerated]
	public void set_ConfigKey(MergeRewardId value) { }

	[CompilerGenerated]
	public void set_ExperienceRequired(int value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_RewardAmount(List<Int32> value) { }

	[CompilerGenerated]
	public void set_RewardAux0(List<String> value) { }

	[CompilerGenerated]
	public void set_RewardAux1(List<String> value) { }

	[CompilerGenerated]
	public void set_RewardId(List<String> value) { }

	[CompilerGenerated]
	public void set_RewardType(List<String> value) { }

	public override MergeReward ToConfigData(GameConfigBuildLog buildLog) { }

}

