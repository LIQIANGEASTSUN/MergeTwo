using System;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using MergeEngine.ECS.Systems;
using Zenject;

namespace GameCore.Model
{
	public class GameModelBase : ModelBase
	{
		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		public MutableBindableProperty<bool> _gameStarted { get; }

		public BindableProperty<bool> GameStarted => null;

		public TSystem GetSystem<TSystem>() where TSystem : SystemBase
		{
			return null;
		}

		public override void InitializeModel()
		{
		}

		public void GameStartedSignalReceived()
		{
		}
	}
}
