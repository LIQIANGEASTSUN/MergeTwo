using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Merger.Models;
using Zenject;

namespace MergeEngine.ECS.Systems
{
	public class SystemManager : ITickable, ISystemManager
	{
		[Inject]
		[NonSerialized]
		public DiContainer _container;

		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public IActionsModel _actionsModel;

		[Inject]
		[NonSerialized]
		public DisposableManager _disposableManager;

		[NonSerialized]
		public List<ITickableSystem> _tickableSystems;

		[NonSerialized]
		public Dictionary<Type, SystemBase> _systemsByType;

		[NonSerialized]
		public bool _initialized;

		public bool IsInitialized => false;

		public event Action Initialized
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

		public bool AddSystem<TSystem>() where TSystem : SystemBase
		{
			return false;
		}

		public bool AddSystem<TSystem>(object[] constructorParameters) where TSystem : SystemBase
		{
			return false;
		}

		public bool InternalAddSystem<TSystem>(Func<TSystem> instantiateFunction) where TSystem : SystemBase
		{
			return false;
		}

		public TSystem GetSystem<TSystem>() where TSystem : SystemBase
		{
			return null;
		}

		public bool RemoveSystem<TSystem>() where TSystem : SystemBase
		{
			return false;
		}

		public void SortSystems()
		{
		}

		public void InitializeAll(Action beforeInitialized = null)
		{
		}

		public bool HasSystem<TSystem>() where TSystem : SystemBase
		{
			return false;
		}

		void ITickable.Tick()
		{
		}

		public void UpdateSystems()
		{
		}
	}
}
