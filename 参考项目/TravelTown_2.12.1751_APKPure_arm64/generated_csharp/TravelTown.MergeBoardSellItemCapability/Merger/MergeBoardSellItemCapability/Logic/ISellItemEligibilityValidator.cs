using ContextualizedECS;

namespace Merger.MergeBoardSellItemCapability.Logic
{
	public interface ISellItemEligibilityValidator
	{
		bool CanBeSold(Entity entity);
	}
}
