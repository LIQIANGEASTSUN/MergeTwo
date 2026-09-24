using System;
using Framework.Core;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Definitions.Interfaces.Services;
using Merger.Boosters.Declarations.Enums;
using Zenject;

namespace Merger.Boosters.Strategies
{
	public abstract class BoosterStrategyBase : Base, IBoosterStrategy, IInitializable, IDisposable
	{
		[Inject]
		[NonSerialized]
		public IBoosterService _boosterService;

		public abstract BoosterType BoosterType { get; }

		public abstract void Execute(RemoteBoosterData boosterData, bool newBooster);

		public void TryActivate()
		{
		}

		public virtual void TryDeactivate(string uuid)
		{
		}

		void IInitializable.Initialize()
		{
		}

		void IDisposable.Dispose()
		{
		}

		public virtual void InitializeStrategy()
		{
		}

		public BoosterStrategyBase()
		{
		}
	}
}
