using System;
using System.Collections.ObjectModel;
using Framework.Core.Services;

namespace MergeEngine.ECS.Components.Items
{
	public class ComponentBase : IComponentBase
	{
		public Entity Entity { get; set; }

		public IJsonService JsonSerializer { get; set; }

		public ComponentBase(Entity entity)
		{
		}

		public TComponent GetComponent<TComponent>() where TComponent : class, IComponentBase
		{
			return null;
		}

		public ReadOnlyCollection<TComponent> GetComponents<TComponent>() where TComponent : IComponentBase
		{
			return null;
		}
	}
	public class ComponentBase<TCapability> : ComponentBase
	{
		[NonSerialized]
		public TCapability _capability;

		public TCapability Capability => default(TCapability);

		public ComponentBase(TCapability capability, Entity entity)
			: base(null)
		{
		}
	}
}
