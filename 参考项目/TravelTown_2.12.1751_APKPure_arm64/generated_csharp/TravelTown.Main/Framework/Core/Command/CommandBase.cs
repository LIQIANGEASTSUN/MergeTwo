using System;
using Framework.UIFSM.Model.Navigation;
using Zenject;

namespace Framework.Core.Command
{
	public abstract class CommandBase<TSignal> : Base
	{
		[InjectOptional]
		[NonSerialized]
		public INavigationModel NavigationModel;

		public abstract void Execute(TSignal signal);

		public bool RequestTransition(string transition, object payload = null)
		{
			return false;
		}

		public CommandBase()
		{
		}
	}
}
