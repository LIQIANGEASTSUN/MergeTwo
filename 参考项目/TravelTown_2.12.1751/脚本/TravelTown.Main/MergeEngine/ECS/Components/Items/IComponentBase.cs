using System.Collections.ObjectModel;

namespace MergeEngine.ECS.Components.Items
{
	public interface IComponentBase
	{
		Entity Entity { get; }

		TComponent GetComponent<TComponent>() where TComponent : class, IComponentBase;

		ReadOnlyCollection<TComponent> GetComponents<TComponent>() where TComponent : IComponentBase;
	}
}
