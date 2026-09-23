using System;

namespace MergeEngine.ECS.Systems
{
	public interface ISystemManager
	{
		bool IsInitialized { get; }

		event Action Initialized;

		bool AddSystem<TSystem>() where TSystem : SystemBase;

		bool AddSystem<TSystem>(object[] constructorParameters) where TSystem : SystemBase;

		TSystem GetSystem<TSystem>() where TSystem : SystemBase;

		bool RemoveSystem<TSystem>() where TSystem : SystemBase;

		void InitializeAll(Action beforeInitialized = null);

		bool HasSystem<TSystem>() where TSystem : SystemBase;
	}
}
