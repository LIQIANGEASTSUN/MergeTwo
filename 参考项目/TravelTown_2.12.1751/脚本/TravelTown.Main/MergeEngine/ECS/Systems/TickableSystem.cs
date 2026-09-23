using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Systems
{
	public abstract class TickableSystem<TComponent> : SystemBase, ITickableSystem where TComponent : IComponentBase
	{
		public abstract SystemPriorities Priority { get; }

		void ITickableSystem.Tick()
		{
		}

		public abstract void ProcessComponents(ReadOnlyCollection<TComponent> components);

		public TickableSystem()
		{
		}
	}
}
