namespace GameLogic.Player.Items.Order;

public class OrderRequirementsSource : IConfigItemSource<OrderRequirements, OrderRequirementsId>, IGameConfigSourceItem<OrderRequirementsId, OrderRequirements>, IHasGameConfigKey<OrderRequirementsId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private OrderRequirementsId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <FactoryType>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <Scores>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <ActivationType>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <ActivationRewards>k__BackingField; //Field offset: 0x38

	private string ActivationRewards
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string ActivationType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override OrderRequirementsId ConfigKey
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

	private string FactoryType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string Scores
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OrderRequirementsSource() { }

	[CompilerGenerated]
	private string get_ActivationRewards() { }

	[CompilerGenerated]
	private string get_ActivationType() { }

	[CompilerGenerated]
	public override OrderRequirementsId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private string get_FactoryType() { }

	[CompilerGenerated]
	private string get_Scores() { }

	private static List<ValueTuple`2<Int32, Int32>> ParseList(string list) { }

	[CompilerGenerated]
	private void set_ActivationRewards(string value) { }

	[CompilerGenerated]
	private void set_ActivationType(string value) { }

	[CompilerGenerated]
	public void set_ConfigKey(OrderRequirementsId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_FactoryType(string value) { }

	[CompilerGenerated]
	private void set_Scores(string value) { }

	public override OrderRequirements ToConfigData(GameConfigBuildLog buildLog) { }

}

