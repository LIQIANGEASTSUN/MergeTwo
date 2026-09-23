using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Reflection;
using System.Runtime.CompilerServices;
using Framework.Core.Services;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS
{
	public class Entity
	{
		[NonSerialized]
		public List<IComponentBase> _components;

		[NonSerialized]
		public Dictionary<Type, IComponentBase> _componentByTypeLookup;

		[NonSerialized]
		public Dictionary<Type, IList> _componentsByTypeLookup;

		public ReadOnlyCollection<IComponentBase> Components => null;

		public IJsonService JsonSerializer { get; set; }

		public event Action<IComponentBase> ComponentAdded
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<IComponentBase> ComponentRemoved
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public TComponent AddComponent<TCapability, TComponent>(TCapability capability) where TComponent : ComponentBase<TCapability>
		{
			return null;
		}

		public TComponent TryAddComponent<TCapability, TComponent>(TCapability capability) where TComponent : ComponentBase<TCapability>
		{
			return null;
		}

		public TComponent AddComponent<TComponent>() where TComponent : ComponentBase
		{
			return null;
		}

		public ConstructorInfo GetConstructor<TComponent>(Type[] types)
		{
			return null;
		}

		public TComponent TryAddComponent<TComponent>() where TComponent : ComponentBase
		{
			return null;
		}

		public void InternalAddComponent(ComponentBase componentInstance)
		{
		}

		public bool RemoveComponent<TComponent>() where TComponent : IComponentBase
		{
			return false;
		}

		public TComponent GetComponent<TComponent>() where TComponent : class, IComponentBase
		{
			return null;
		}

		public ReadOnlyCollection<TComponent> GetComponents<TComponent>() where TComponent : IComponentBase
		{
			return null;
		}

		public void CacheComponent(Type type, IComponentBase component)
		{
		}

		public void RemoveComponentFromCache(Type type, IComponentBase component)
		{
		}
	}
}
