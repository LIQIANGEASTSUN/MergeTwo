using ContextualizedECS;

namespace Merger.MergeBoard.Logic.CombineValidators
{
	public interface IItemCombinerValidator
	{
		bool CanCombineItems(Entity entity1, Entity entity2);
	}
}
