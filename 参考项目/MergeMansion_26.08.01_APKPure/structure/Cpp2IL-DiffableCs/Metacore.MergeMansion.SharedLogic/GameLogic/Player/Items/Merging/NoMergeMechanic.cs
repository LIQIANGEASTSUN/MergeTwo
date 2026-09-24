namespace GameLogic.Player.Items.Merging;

[MetaSerializableDerived(1)]
public class NoMergeMechanic : IMergeMechanic
{

	public NoMergeMechanic() { }

	public override bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config) { }

	public override IMergeItem Merge(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp) { }

	public override IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config) { }

}

