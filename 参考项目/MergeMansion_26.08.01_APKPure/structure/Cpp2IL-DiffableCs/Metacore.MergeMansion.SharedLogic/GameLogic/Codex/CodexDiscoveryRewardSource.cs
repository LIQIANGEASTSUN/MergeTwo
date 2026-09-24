namespace GameLogic.Codex;

public class CodexDiscoveryRewardSource : IConfigItemSource<CodexDiscoveryRewardInfo, CodexDiscoveryRewardId>, IGameConfigSourceItem<CodexDiscoveryRewardId, CodexDiscoveryRewardInfo>, IHasGameConfigKey<CodexDiscoveryRewardId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private CodexDiscoveryRewardId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <CompletionRewardType>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <CompletionRewardId>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <CompletionRewardAux0>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <CompletionRewardAux1>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private int <CompletionRewardAmount>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<String> <RewardType>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<String> <RewardId>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<String> <RewardAux0>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<String> <RewardAux1>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private List<Int32> <RewardAmount>k__BackingField; //Field offset: 0x68

	private int CompletionRewardAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string CompletionRewardAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string CompletionRewardAux1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string CompletionRewardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string CompletionRewardType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override CodexDiscoveryRewardId ConfigKey
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

	private List<Int32> RewardAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RewardAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RewardAux1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RewardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RewardType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public CodexDiscoveryRewardSource() { }

	[CompilerGenerated]
	private int get_CompletionRewardAmount() { }

	[CompilerGenerated]
	private string get_CompletionRewardAux0() { }

	[CompilerGenerated]
	private string get_CompletionRewardAux1() { }

	[CompilerGenerated]
	private string get_CompletionRewardId() { }

	[CompilerGenerated]
	private string get_CompletionRewardType() { }

	[CompilerGenerated]
	public override CodexDiscoveryRewardId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<Int32> get_RewardAmount() { }

	[CompilerGenerated]
	private List<String> get_RewardAux0() { }

	[CompilerGenerated]
	private List<String> get_RewardAux1() { }

	[CompilerGenerated]
	private List<String> get_RewardId() { }

	[CompilerGenerated]
	private List<String> get_RewardType() { }

	[CompilerGenerated]
	private void set_CompletionRewardAmount(int value) { }

	[CompilerGenerated]
	private void set_CompletionRewardAux0(string value) { }

	[CompilerGenerated]
	private void set_CompletionRewardAux1(string value) { }

	[CompilerGenerated]
	private void set_CompletionRewardId(string value) { }

	[CompilerGenerated]
	private void set_CompletionRewardType(string value) { }

	[CompilerGenerated]
	public void set_ConfigKey(CodexDiscoveryRewardId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_RewardAmount(List<Int32> value) { }

	[CompilerGenerated]
	private void set_RewardAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_RewardAux1(List<String> value) { }

	[CompilerGenerated]
	private void set_RewardId(List<String> value) { }

	[CompilerGenerated]
	private void set_RewardType(List<String> value) { }

	public override CodexDiscoveryRewardInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

