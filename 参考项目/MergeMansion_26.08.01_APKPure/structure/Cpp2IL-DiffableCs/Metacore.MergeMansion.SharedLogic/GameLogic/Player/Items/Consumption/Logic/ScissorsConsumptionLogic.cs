namespace GameLogic.Player.Items.Consumption.Logic;

[MetaSerializableDerived(2)]
public class ScissorsConsumptionLogic : IConsumptionLogic
{
	[CompilerGenerated]
	private List<String> <AllowedTags>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<String> AllowedTags
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ScissorsConsumptionLogic() { }

	public ScissorsConsumptionLogic(IEnumerable<String> allowedTags) { }

	[CompilerGenerated]
	private bool <CanBeUsedTo>b__6_0(string tag) { }

	public override void Apply(IPlayer player, IMergeItem sourceItem, MergeItem targetItem, MergeBoard mergeBoard, Coordinate coord, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	public override IMergeItem ApplyOverride(MergeItem referenceItem, MergeItem sourceItem, MergeItem targetItem, IPlayer player, MetacoreTime timestamp, out bool isMergeConsumingSourceItem) { }

	public override IConsumptionCheckResult CanBeUsedTo(IPlayer player, IMergeItem mergeItem, IBoard mergeBoard, MetacoreTime currentTime) { }

	public override bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player) { }

	[CompilerGenerated]
	private List<String> get_AllowedTags() { }

	[CompilerGenerated]
	private void set_AllowedTags(List<String> value) { }

}

