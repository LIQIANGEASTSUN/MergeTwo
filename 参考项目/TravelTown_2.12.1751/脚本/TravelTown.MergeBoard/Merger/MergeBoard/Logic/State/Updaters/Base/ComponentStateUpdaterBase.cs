using ContextualizedECS;

namespace Merger.MergeBoard.Logic.State.Updaters.Base
{
	public abstract class ComponentStateUpdaterBase<TComponent, TState> where TComponent : struct, IComponent
	{
		public void UpdateComponent(Entity entity, TState itemState)
		{
		}

		public abstract void UpdateFromState(ref TComponent component, TState itemState);

		public ComponentStateUpdaterBase()
		{
		}
	}
}
