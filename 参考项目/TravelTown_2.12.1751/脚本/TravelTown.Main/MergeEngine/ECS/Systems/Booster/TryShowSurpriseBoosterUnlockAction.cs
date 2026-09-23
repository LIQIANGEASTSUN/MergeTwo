using System;
using Framework.Core.MVVM.Model.Actions.Concrete;
using Zenject;

namespace MergeEngine.ECS.Systems.Booster
{
	public class TryShowSurpriseBoosterUnlockAction : AbstractAction
	{
		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		public override int Priority => 0;

		public override void InternalExecute()
		{
		}
	}
}
