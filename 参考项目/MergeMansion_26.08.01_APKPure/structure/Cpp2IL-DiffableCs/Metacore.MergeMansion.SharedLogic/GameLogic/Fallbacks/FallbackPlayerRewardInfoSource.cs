namespace GameLogic.Fallbacks;

public class FallbackPlayerRewardInfoSource : IConfigItemSource<FallbackPlayerRewardInfo, FallbackPlayerRewardId>, IGameConfigSourceItem<FallbackPlayerRewardId, FallbackPlayerRewardInfo>, IHasGameConfigKey<FallbackPlayerRewardId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private FallbackPlayerRewardId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <RewardType>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <RewardId>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <RewardAux0>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <RewardAux1>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private int <RewardAmount>k__BackingField; //Field offset: 0x40

	public private override FallbackPlayerRewardId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private int RewardAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RewardAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RewardAux1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RewardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RewardType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public FallbackPlayerRewardInfoSource() { }

	[CompilerGenerated]
	public override FallbackPlayerRewardId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private int get_RewardAmount() { }

	[CompilerGenerated]
	private string get_RewardAux0() { }

	[CompilerGenerated]
	private string get_RewardAux1() { }

	[CompilerGenerated]
	private string get_RewardId() { }

	[CompilerGenerated]
	private string get_RewardType() { }

	[CompilerGenerated]
	private void set_ConfigKey(FallbackPlayerRewardId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_RewardAmount(int value) { }

	[CompilerGenerated]
	private void set_RewardAux0(string value) { }

	[CompilerGenerated]
	private void set_RewardAux1(string value) { }

	[CompilerGenerated]
	private void set_RewardId(string value) { }

	[CompilerGenerated]
	private void set_RewardType(string value) { }

	public override FallbackPlayerRewardInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

