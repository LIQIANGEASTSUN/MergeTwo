using System;
using System.Collections.ObjectModel;
using Framework.Core.Signal;
using MergeEngine.ECS.Components.Items;
using Zenject;

namespace MergeEngine.ECS.Systems
{
	public abstract class SystemBase : IInitializable, IDisposable
	{
		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		[NonSerialized]
		public bool _initialized;

		[NonSerialized]
		public bool _gameStarted;

		[NonSerialized]
		public PersistenceSystem _persistenceSystem;

		public bool Initialized => false;

		public bool GameStarted => false;

		public bool HasStoredSession => false;

		public IEntityManager EntityManager => null;

		public IEntityFactory EntityFactory => null;

		public ISystemManager SystemManager => null;

		public SignalBus SignalBus => null;

		public event Action AllSystemsInitialized
		{
			add
			{
			}
			remove
			{
			}
		}

		public void Initialize()
		{
		}

		public void Dispose()
		{
		}

		public virtual void InitializeSystem()
		{
		}

		public virtual void DisposeSystem()
		{
		}

		public virtual void OnGameStarted()
		{
		}

		public virtual void GamePaused()
		{
		}

		public virtual void GameResumed()
		{
		}

		public virtual void EntityCreated(Entity entity)
		{
		}

		public virtual void EntityRemoved(Entity entity)
		{
		}

		public TSystem GetSystem<TSystem>() where TSystem : SystemBase
		{
			return null;
		}

		public bool RemoveSystem<TSystem>() where TSystem : SystemBase
		{
			return false;
		}

		public TComponent GetComponent<TComponent>() where TComponent : IComponentBase
		{
			return default(TComponent);
		}

		public ReadOnlyCollection<TComponent> GetComponents<TComponent>() where TComponent : IComponentBase
		{
			return null;
		}

		public bool IsCooldownBlocked(Entity entity, out CooldownBlockComponent cooldownBlockComponent)
		{
			cooldownBlockComponent = null;
			return false;
		}

		public bool IsCooldownBlocked(Entity entity)
		{
			return false;
		}

		public bool IsCooldownBlocked(ComponentBase component)
		{
			return false;
		}

		public bool IsCooldownBlocked(ComponentBase component, out CooldownBlockComponent cooldownBlockComponent)
		{
			cooldownBlockComponent = null;
			return false;
		}

		public bool IsUnlockBlocked(ComponentBase component)
		{
			return false;
		}

		public void GamePausedSignalFired(GamePauseSignal signal)
		{
		}

		public void OnAllSystemsInitialized()
		{
		}

		public SystemBase()
		{
		}
	}
}
