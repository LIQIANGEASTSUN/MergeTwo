using ContextualizedECS.Systems;

namespace Merger.MergeBoard.Controller
{
	public interface IBoardControllerDecorator
	{
		void DecorateSystems(SystemsBuilder systemManager);
	}
}
