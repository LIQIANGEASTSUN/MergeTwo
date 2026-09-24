using Framework.Core.Services.Backend.Remote.Payloads;
using GameCore.States.Contexts;
using Zenject;

namespace MergeEngine.ECS.Systems.State
{
	public abstract class StateSystemBase<TStatePayload> : SystemBase where TStatePayload : BackendState
	{
		[Inject]
		public StateContext<TStatePayload> StateContext { get; set; }

		public abstract void LoadState(TStatePayload newState);

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public bool TryLoadComponent<TComponent, TPayload>(TComponent component, TPayload payload) where TComponent : IRemoteLoadedComponent<TPayload>
		{
			return false;
		}

		public void LoadStateInternal(TStatePayload state)
		{
		}

		public StateSystemBase()
		{
		}
	}
}
