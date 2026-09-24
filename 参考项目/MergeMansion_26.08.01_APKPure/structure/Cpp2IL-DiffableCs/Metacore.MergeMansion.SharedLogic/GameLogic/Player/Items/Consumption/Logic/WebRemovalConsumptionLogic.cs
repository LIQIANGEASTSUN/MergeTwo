namespace GameLogic.Player.Items.Consumption.Logic;

[MetaSerializableDerived(5)]
public class WebRemovalConsumptionLogic : IConsumptionLogic
{

	public WebRemovalConsumptionLogic() { }

	public override void Apply(IPlayer player, IMergeItem sourceItem, MergeItem targetItem, MergeBoard mergeBoard, Coordinate coord, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	public override IMergeItem ApplyOverride(MergeItem referenceItem, MergeItem sourceItem, MergeItem targetItem, IPlayer player, MetacoreTime timestamp, out bool isMergeConsumingSourceItem) { }

	public override IConsumptionCheckResult CanBeUsedTo(IPlayer player, IMergeItem mergeItem, IBoard mergeBoard, MetacoreTime currentTime) { }

	public override bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player) { }

}

