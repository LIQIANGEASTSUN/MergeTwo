using System;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Controller;
using Zenject;

namespace Merger.MergeBoardSkipCooldownCapability.Decorators
{
	public class SkipCooldownSystemDecorator : IBoardControllerDecorator
	{
		[Inject]
		[NonSerialized]
		public DiContainer _container;

		public void DecorateSystems(SystemsBuilder systemsBuilder)
		{
		}
	}
}
