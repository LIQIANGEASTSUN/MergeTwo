namespace GameLogic.Player.Items.Sink;

[MetaSerializableDerived(2)]
public class MultiTargetOrderStateFactory : IOrderStateFactory
{
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <Scores>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<Int32> <RewardItems>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<Int32> <RewardAmounts>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <ActivationType>k__BackingField; //Field offset: 0x28

	[MetaMember(4, MetaMemberFlags::None (0))]
	private string ActivationType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private List<Int32> RewardAmounts
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private List<Int32> RewardItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> Scores
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MultiTargetOrderStateFactory() { }

	public MultiTargetOrderStateFactory(MetaDictionary<Int32, Int32> scores, MetaDictionary<Int32, Int32> rewards, string activationType) { }

	public override IOrderState Create(IGenerationContext context) { }

	[CompilerGenerated]
	private string get_ActivationType() { }

	[CompilerGenerated]
	private List<Int32> get_RewardAmounts() { }

	[CompilerGenerated]
	private List<Int32> get_RewardItems() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> get_Scores() { }

	[CompilerGenerated]
	private void set_ActivationType(string value) { }

	[CompilerGenerated]
	private void set_RewardAmounts(List<Int32> value) { }

	[CompilerGenerated]
	private void set_RewardItems(List<Int32> value) { }

	[CompilerGenerated]
	private void set_Scores(MetaDictionary<Int32, Int32> value) { }

}

