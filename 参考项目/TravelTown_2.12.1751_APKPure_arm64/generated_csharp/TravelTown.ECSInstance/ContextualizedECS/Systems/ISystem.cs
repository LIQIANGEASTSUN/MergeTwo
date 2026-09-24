using ContextualizedECS.Context;

namespace ContextualizedECS.Systems
{
	public interface ISystem
	{
		void Tick(TickContext context);
	}
}
