namespace GameLogic.Player.Items.Merging;

[MetaSerializable]
public interface IMergeMechanic
{

	public bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config) { }

	public IMergeItem Merge(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp) { }

	public IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config) { }

}

