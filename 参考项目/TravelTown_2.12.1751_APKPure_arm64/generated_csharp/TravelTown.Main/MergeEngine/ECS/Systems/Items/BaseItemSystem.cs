using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Systems.Items
{
	public abstract class BaseItemSystem<T> : TickableSystem<T> where T : IComponentBase
	{
		public override void ProcessComponents(ReadOnlyCollection<T> components)
		{
		}

		public virtual IEnumerable<T> OnWillProcessComponents(ReadOnlyCollection<T> components)
		{
			return null;
		}

		public abstract void ProcessComponent(T component);

		public BaseItemSystem()
		{
		}
	}
}
