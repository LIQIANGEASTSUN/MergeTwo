namespace GameLogic.Player.Items.Consumption.Logic;

[MetaSerializable]
public interface IConsumptionLogic
{

	public void Apply(IPlayer player, IMergeItem sourceItem, MergeItem targetItem, MergeBoard mergeBoard, Coordinate coord, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	public IMergeItem ApplyOverride(MergeItem referenceItem, MergeItem sourceItem, MergeItem targetItem, IPlayer player, MetacoreTime timestamp, out bool isMergeConsumingSourceItem) { }

	public IConsumptionCheckResult CanBeUsedTo(IPlayer player, IMergeItem mergeItem, IBoard mergeBoard, MetacoreTime currentTime) { }

	public bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player) { }

}

