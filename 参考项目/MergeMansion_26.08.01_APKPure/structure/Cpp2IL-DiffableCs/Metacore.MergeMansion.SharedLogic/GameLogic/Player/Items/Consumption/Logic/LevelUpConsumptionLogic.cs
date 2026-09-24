namespace GameLogic.Player.Items.Consumption.Logic;

[MetaSerializableDerived(1)]
public class LevelUpConsumptionLogic : ILevelUpConsumptionLogic, IConsumptionLogic
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass15_0
	{
		public IItemDefinition itemDefinition; //Field offset: 0x10

		public <>c__DisplayClass15_0() { }

		internal bool <MatchesTags>b__0(string tag) { }

	}

	[CompilerGenerated]
	private List<String> <ApplicableTags>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IConsumptionCheckResult <MismatchedTags>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<String> ApplicableTags
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private IConsumptionCheckResult MismatchedTags
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public LevelUpConsumptionLogic() { }

	public LevelUpConsumptionLogic(List<String> applicableTags) { }

	public override void Apply(IPlayer player, IMergeItem sourceItem, MergeItem targetItem, MergeBoard mergeBoard, Coordinate coord, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	public override IMergeItem ApplyOverride(MergeItem referenceItem, MergeItem sourceItem, MergeItem targetItem, IPlayer player, MetacoreTime timestamp, out bool isMergeConsumingSourceItem) { }

	public override IConsumptionCheckResult CanBeUsedTo(IPlayer player, IMergeItem mergeItem, IBoard mergeBoard, MetacoreTime currentTime) { }

	public override bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player) { }

	[CompilerGenerated]
	private List<String> get_ApplicableTags() { }

	[CompilerGenerated]
	private IConsumptionCheckResult get_MismatchedTags() { }

	private bool MatchesTags(IItemDefinition itemDefinition) { }

	[MetaOnDeserialized]
	private void OnDeserialize() { }

	[CompilerGenerated]
	private void set_ApplicableTags(List<String> value) { }

	[CompilerGenerated]
	private void set_MismatchedTags(IConsumptionCheckResult value) { }

}

